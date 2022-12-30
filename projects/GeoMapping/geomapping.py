import folium
import geopy
import pandas as pd
import numpy as np
from geopy.geocoders import Nominatim

def geomapping(input_file_name,output_file_name):

    data = pd.read_csv(input_file_name)

    college = data.iloc[ :22 , 0:1].to_numpy()
    lengthSam = len(college)
    Location = data.iloc[:22 , 1:2].to_numpy()
    college_info = np.concatenate((college , Location) , axis =1)
    
    geolocator = Nominatim(user_agent="google map")

    def lattitude(name):
        location = geolocator.geocode(name)
        return location.latitude

    def longitude(name):
        location = geolocator.geocode(name)
        return location.longitude

    latt = []
    i = 0
    while i<lengthSam:
        addr = geolocator.geocode(college[i]);
        if addr is None:
            latt.append("not found")
        else:
            latt.append(addr.latitude)
        i = i+1
        
        
    long = []
    i = 0
    while i<lengthSam:
        addr = geolocator.geocode(college[i]);
        if addr is None:
            long.append("not found")
        else:
            long.append(addr.longitude)
        i = i+1
            
    html = """
    <body style="background-color:skyblue;
    ">
    <i>College name : <br></i>
    <a href="https://www.google.com/search?q=%%22%s%%22" target="_blank">%s</a><br>
    <i>Location : %s </i>
    """

    map = folium.Map(location=[23.257334, 78.111405],
                    zoom_start=6, tiles="Stamen Terrain")  # tiles="Mapbox Bright")

    fg_colleges = folium.FeatureGroup(name="Indian Institute of Technology")
    i = 0
    for i in range(0, len(latt)):
        iframe = folium.IFrame(html=html % (
            college[i] + " ", college[i], Location[i]), width=200, height=100)
        fg_colleges.add_child(folium.Marker(
            location=[latt[i], long[i]], popup=folium.Popup(iframe), tooltip=college_info[i], icon=folium.Icon(color='blue')))

    map.add_child(fg_colleges)
    map.add_child(folium.LayerControl(position='topright',
                                            collapsed=True))
    return map.save(output_file_name)



geomapping('datasets/IITs.txt','IIT_2.html')    
print("No Error")
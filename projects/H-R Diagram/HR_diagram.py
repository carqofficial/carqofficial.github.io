import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

data = pd.read_csv("Datasets/HR_diagram.csv")
starColor = data["Star_color"].to_numpy()
x = data.drop(['Spectral_Class',"Star_type","Star_color"],axis="columns")
z = data.Star_type

def StarColor(color):
    if color == 'Blue' :
        return 'blue'
    elif color == 'Blue-white':
        return 'white'
    elif color == 'Whitish':
        return 'green'
    elif color == 'White':
        return 'pink'
    elif color == 'White-Yellow':
        return 'gray'
    elif color == 'Yellowish White':
        return 'black'
    elif color == 'yellow-white':
        return 'yellow'
    elif color == 'yellowish':
        return 'violet'
    elif color == 'Pale yellow orange':
        return 'cyan'
    elif color == 'Orange-Red':
        return 'orange'
    elif color == 'Red':
        return 'red'
    else:
        return '#ed5045'
   
# Creating figure
fig = plt.figure(figsize = (10, 7))
ax = plt.axes(projection ="3d")#,facecolor='black')

# Creating plot
i=0
for i in range (0,239) :
    ax.scatter3D(x["Luminosity(L/Lo)"],x["Temperature (K)"], z, c = StarColor(starColor[i]),marker='.',s=100) #StarColor(starColor[i]))
    
plt.title("simple 3D scatter plot")
ax.set_xlabel('Luminosity(L/Lo)', fontweight ='bold')
ax.set_ylabel('Temperature (K)', fontweight ='bold')
ax.set_zlabel('Z-axis', fontweight ='bold')
 
# show plot
plt.show()

from sklearn.model_selection import train_test_split
x_train,x_test,z_train,z_test = train_test_split(x,z,test_size=0.2,random_state=1)
from sklearn.linear_model import LogisticRegression
lr_model = LogisticRegression(solver="newton-cg")
lr_model.fit(x_train,z_train)
lr_model.score(x_test,z_test)

from sklearn.metrics import confusion_matrix
z_pred = lr_model.predict(x_test)
cm = confusion_matrix(z_test,z_pred)

def confusionMatrix():
    plt.figure(figsize=(7,5))
    sns.heatmap(cm, annot=True)
    plt.xlabel('predicted')
    plt.ylabel('Truth')

confusionMatrix()

from sklearn.metrics import classification_report

print(classification_report(z_test,z_pred)) 
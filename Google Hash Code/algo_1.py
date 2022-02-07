customer = int(input()) # taking input of how many customer came to my shop
l_no_list = []
d_no_list = []
total_likings = []
total_dlikings = []
final_top = []
for i in range(0,customer):
    #likings
    l_gen_input = input().split() #likings general list
    l_no = l_gen_input.pop(0) # likings toppings no
    l_no_list.append(int(l_no))
    for j in l_gen_input:
        total_likings.append(j)
    l_gen_input.clear()
    
    
    #dislikings
    d_gen_input = input().split() #dislikings general list
    d_no = d_gen_input.pop(0) #disliking toppings number
    d_no_list.append(int(d_no))
    for k in d_gen_input:
        total_dlikings.append(k)
    d_gen_input.clear()



# print(total_likings)
# print(total_dlikings)
# print(l_no_list)
# print(d_no_list)

r_total_likings = []
num_total_likings = []

for i in total_likings:
    if i in r_total_likings:
        continue
    r_total_likings.append(i)
    n = total_likings.count(i)
    num_total_likings.append(n)




for top in range(0, len(r_total_likings)):
    num_dlike = total_dlikings.count(r_total_likings[top])
    if num_total_likings[top] > num_dlike:
        final_top.append(r_total_likings[top])
    elif num_total_likings[top] <= num_dlike:
        pass

len_final = len(final_top)
final_top.insert(0,len_final)

for y in final_top:
    print(y, end =" ")


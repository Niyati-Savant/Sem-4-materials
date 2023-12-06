def summation(list):
    sum=0
    for ele in range(0,len(list)):
        sum=sum+int(list[ele])
    print(sum)

def multiplication(list):
    product=1
    for ele in range(0,len(list)):
        product=product*int(list[ele])
    print(product)

def sumofeven(list):
    sum=0
    for ele in range(0,len(list)):
        if(ele %2==0):
            sum=sum+int(list[ele])
    print(sum)
def addnewelem(old_list,x):
    old_list.append(x)
    return(old_list)




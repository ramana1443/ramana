name=input("enter your name:")
a=int(input("enter a a marks:"))
b=int(input("enter b marks:"))
c=int(input("enter c marks:"))
d=int(input("enter d marks:"))
e=a+b+c+d
average=e/4
print(name,"your total  marks is:",e )
print("your average score is:",average)
if(average>=90):
    print("your grade is A")
elif(average>=80):
    print("your grade is B")
elif(average>=70):
    print("your grade is C")
if(e>=300):
  print("pass")
elif(e<300):
  print("fail")
print(len(name))
a=int(input("Enter a year"));
if(a%4==0):
    if(a%100)==0:
        if(a%400)==0:
            print("This year is  a leap year")
        else:
            print("this is not a leap year!")
    else:
        print("This is not a leap year!")
else:
    print("This is not a leap year!")
        
        

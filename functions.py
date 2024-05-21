class allFunctions():
    def Subfields():
        print("Sub-fields in AI are:")
        list=["Machine Learning", "Neural Networks", "Vision", "Robotics", "Speech Processing", "Natural Language Processing"]
        for i in list:
            print(i)
        return list
    
    def OddEven():
        num = int(input("Enter a number: "))
        if(num%2==0):
            print(num, "is Even number")
            message = "Even number"
        else:
            print(num,"is Odd number")
            message = "Odd number"
        return message
    
    def Elegible():
        gender=input("Your Gender: ")
        age=int(input("Your Age: "))
        if(gender=="Male"):
            if(age<21):
                print("NOT ELIGIBLE")
            else:
                print("ELIGIBLE")
        elif(gender=="Female"):
            if(age<18):
                print("NOT ELIGIBLE")
            else:
                print("ELIGIBLE")
        else:
            print("Invalid Input!")
            
    def percentage():
        sub1=int(input("Subject1= "))
        sub2=int(input("Subject2= "))
        sub3=int(input("Subject3= "))
        sub4=int(input("Subject4= "))
        sub5=int(input("Subject5= "))
        total=sub1+sub2+sub3+sub4+sub5
        print("Total : ", total)
        percentage=(total/500)*100
        print("Percentage : ", percentage)
        return percentage
    
    def triangle():
        height=int(input("Height: "))
        breadth=int(input("Breadth: "))
        print("Area formula: (Height*Breadth)/2")
        area=(height*breadth)/2
        print("Area of Triangle: ", area)
        height1=int(input("Height1: "))
        height2=int(input("Height2: "))
        breadth=int(input("Breadth: "))
        print("Perimeter formula: Height1+Height2+Breadth")
        perimeter=height1+height2+breadth
        print("Perimeter of Triangle: ", perimeter)
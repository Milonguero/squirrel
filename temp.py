print ("            M E N U")
print ("1. Convert Celsius to Fahrenheit")
print ("2. Convert Fahrenheit to Celsius")
print ("3. Quit")
choice = int(input('Enter your choice [1-3] : '))
 
if choice == 1:
    celsius=int(input("Enter the current temperature in celsius? ")) 
    far= celsius * 9/5 +32
    print ("The temperature is %d degrees in Farenheit!"%(far))
elif choice == 2:
    farenheit=int(input("Enter the current temperature in Farenheit? ")) 
    cel= (farenheit-32) * 5/9
    print ("The temperature is %d degrees in Celsius!"%(cel))
elif choice == 3:
     print("goodbye")

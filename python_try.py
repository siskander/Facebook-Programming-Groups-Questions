import math

#========================        

def round_floor_ceil():
    print("The output of round_floor_ceil is: ")
    x = 4.579
    print(math.floor(x))
    print(math.ceil(x))
    print(round(x))
#========================        

def function1():
    print("The output of function1 is: ")
    i = 1
    while 1:
        if i%5 == 0:
            break
        print(i)
        i += 1
#========================        

def function2():
    print("The output of function2 is: ")
    print((2%4), (2%4), (2**3**2))

#========================        

def function3():
    print("The output of function3 is: ")
    print("123"[2])

#========================

def function4():
    print("The output of function4 is: ")
    print(print("Hello"))
    print(print("Hello ", end=""), print("World"))
    print(print("2*3 = ", end=""), print(2*3))
#========================

def function5():
    print("The output of function5 is: ")
    print(.0)
    print(int('09'))
    print(0*1*2)

#========================

def function6(): 
    print("The output of function6 is: ")
    
    x = 0b101
    print(x)

    x = 19023
    print(x)

    x = 0x4f5
    print(x)

#========================

def main():
    function1()
    function2()
    round_floor_ceil()
    function3()
    function4()
    function5()
    function6()
    
if __name__ == "__main__":
    main()


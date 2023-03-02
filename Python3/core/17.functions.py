# this is function defination

def sum(a, b):
    c = a + b;
    print(c);

def functionName():
    print("Hello World");

def sum1(a, b):
    c = a + b;
    return c;




# this is function call
functionName();

"""
we cannot access variables from one function to another directly so we need to pass them with some functionality
to pass values from main to function we need to pass parameters
like in sum function we asked for two values a and b with , now we can pass those 2 values while calling function
"""
sum(1, 2);
print("function with return value = " + str(sum1(1, 2)));

"""
    like c we dont need to provide return type like void or int,
    we can return any kind of value without giving it's return type 
    like in sum1 function we returned c variable
"""





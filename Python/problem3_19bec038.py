# Python Code to find approximation 
# of a ordinary differential equation 
# using euler method. 
  
# Consider a differential equation 
# dy / dx =(5*(x**4)*(y**2)
def func( x, y ): 
    return (5*(x**4)*(y**2)) 
      
# Function for euler formula 
def euler( x0, y, h, x ): 
    temp = -0
  
    # Iterating till the point at which we 
    # need approximation 
    while x0 < x: 
        temp = y 
        y = y + h * func(x0, y) 
        x0 = x0 + h 
  
    # Printing approximation 
    print("Approximate solution at x = ", x, " is ", "%.6f"% y) 
      
# Driver Code 
# Initial Values 
x0 = 0
y0 = 1
h = 0.2
  
# Value of x at which we need approximation 
x = 2
  
euler(x0, y0, h, x) 


# Python code for solving the differential equation   
# consider the differential equation 
# for a given x and y, return v 
def f(x, y): 
    v = (5*(x**4)*(y**2))  
    return v 
  
# predicts the next value for a given (x, y) 
# and step size h using Euler method 
def predict(x, y, h): 
      
    # value of next y(predicted) is returned 
    y1p = y + h * f(x, y)
    return y1p
  
# corrects the predicted value 
# using Modified Euler method 
def correct(x, y, x1, y1, h): 
      
    # (x, y) are of previous step 
    # and x1 is the increased x for next step 
    # and y1 is predicted y for next step 
    e = 0.00001
    y1c = y1 
  
    while (abs(y1c - y1) > e + 1): 
        y1 = y1c 
        y1c = y + 0.5 * h * (f(x, y) + f(x1, y1))
  
    # every iteration is correcting the value 
    # of y using average slope 
    return y1c
  
def printFinalValues(x, xn, y, h): 
    while (x < xn): 
        x1 = x + h 
        y1p = predict(x, y, h) 
        y1c = correct(x, y, x1, y1p, h)
        x = x1
        y = y1c 
  
    # at every iteration first the value 
    # of for next step is first predicted 
    # and then corrected. 
    print("The final value of y at x =", int(x), "is :", y) 
  
# Driver Code 
if __name__ == '__main__': 
    x = 0
    y = 1
  
    # final value of x for which y is needed 
    xn = 2 
  
    # step size 
    h = 0.2
  
    printFinalValues(x, xn, y, h)

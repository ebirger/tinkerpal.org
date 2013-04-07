Timer Functions 
====
### setTimeout(cb, ms) ###  
__Description:__ Schedule "cb" to run in ms milliseconds.  
__Parameters:__ cb - function, ms - time in milliseconds  
__Return Value:__ Timer ID that can be used in clearTimeout()  
  
### setInterval(cb, ms) ###  
__Description:__ Schedule "cb" to run periodically every ms milliseconds.  
__Parameters:__ cb - function, ms - time in milliseconds  
__Return Value:__ Timer ID that can be used in clearInterval()  
  
### clearTimeout(timer_id) ###  
__Description:__ Cancel timer if it didn't run yet  
__Parameters:__ Timer ID  
__Return Value:__ None  
  
### clearInterval(timer_id) ###  
__Description:__ Cancel periodic timer  
__Parameters:__ Timer ID  
__Return Value:__ None  
  
### getTime() ###  
__Description:__ Get number of seconds since system startup  
__Parameters:__ None  
__Return Value:__ Floating point time in seconds  
  
Global Functions 
====
### eval(string) ###  
__Description:__ Evaluate the given String  
__Parameters:__ String for evaluation  
__Return Value:__ Last valued statement return value  
  
### toInteger(object) ###  
__Description:__ Convert the given object to an integer value  
__Parameters:__ object - to be converted  
__Return Value:__ numeric value of converted object  
  
Debug Functions 
====
### debug.assert(object1, object2) ###  
__Description:__ Panic on mismatch between two objects  
__Parameters:__ object1, object2 - objects for comparison  
__Return Value:__ None  
  
### debug.assert_cond(object) ###  
__Description:__ Panic if object evaluates to a false  
__Parameters:__ object - Object to test  
__Return Value:__ None  
  
### debug.dump(object) ###  
__Description:__ Dump object to the console  
__Parameters:__ object - Object to display  
__Return Value:__ None  
  
Math Functions 
====
### Math.sin(angle) ###  
__Description:__ Calculate the Sine of an angle  
__Parameters:__ angle - given in Radians  
__Return Value:__ Sine of angle  
  
### Math.asin(n) ###  
__Description:__ Calculate the arc sine of a number  
__Parameters:__ number  
__Return Value:__ arc sine of n - given in Radians  
  
### Math.cos(angle) ###  
__Description:__ Calculate the cosine of an angle  
__Parameters:__ angle - given in Radians  
__Return Value:__ Cosine of angle  
  
### Math.acos(n) ###  
__Description:__ Calculate the arc cosine of a number  
__Parameters:__ number  
__Return Value:__ arc cosine of n - given in Radians  
  
### Math.tan(angle) ###  
__Description:__ Calculate the tangent of an angle  
__Parameters:__ angle - given in Radians  
__Return Value:__ Tangent of angle  
  
### Math.atan(n) ###  
__Description:__ Calculate the arc tangent of a number  
__Parameters:__ number  
__Return Value:__ arc tangent of n - given in Radians  
  
### Math.sqrt(n) ###  
__Description:__ Calculate the square root of a number  
__Parameters:__ number  
__Return Value:__ Square root of n  
  

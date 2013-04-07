==== Using Local GCC environment ====
Timer Functions 
====
### setTimeout(cb, ms)  ###  
__Description:__ Schedule "cb" to run in ms milliseconds.   
__Parameters:__ cb - function, ms - time in milliseconds   
__Return Value:__ Timer ID that can be used in clearTimeout()   
__Example:__  setTimeout(function() { debug.dump("Timer Expired"); }, 1000);
   
  
### setInterval(cb, ms)  ###  
__Description:__ Schedule "cb" to run periodically every ms milliseconds.   
__Parameters:__ cb - function, ms - time in milliseconds   
__Return Value:__ Timer ID that can be used in clearInterval()   
__Example:__  setInterval(function() { debug.dump("."); }, 1000);
   
  
### clearTimeout(timer_id)  ###  
__Description:__ Cancel timer if it didn't run yet   
__Parameters:__ Timer ID   
__Return Value:__ None   
__Example:__  var to = setTimeout(function() { debug.dump("timeout"); }, 1000); clearTimeout(to);
   
  
### clearInterval(timer_id)  ###  
__Description:__ Cancel periodic timer   
__Parameters:__ Timer ID   
__Return Value:__ None   
__Example:__  var to = setInterval(function() { debug.dump("."); }, 1000); clearTimeout(to);
   
  
### getTime()  ###  
__Description:__ Get number of seconds since system startup   
__Parameters:__ None   
__Return Value:__ Floating point time in seconds   
__Example:__  debug.dump("I've been up for " + getTime() + " seconds");
   
  
Global Functions 
====
### eval(string)  ###  
__Description:__ Evaluate the given String   
__Parameters:__ String for evaluation   
__Return Value:__ Last valued statement return value   
__Example:__  var two = eval("1+1");
   
  
### toInteger(object)  ###  
__Description:__ Convert the given object to an integer value   
__Parameters:__ object - to be converted   
__Return Value:__ numeric value of converted object   
__Example:__  var n = toInteger("5") + 1;
   
  
Debug Functions 
====
### debug.assert(object1, object2)  ###  
__Description:__ Panic on mismatch between two objects   
__Parameters:__ object1, object2 - objects for comparison   
__Return Value:__ None   
__Example:__  debug.assert(1, 1);
   
  
### debug.assert_cond(object)  ###  
__Description:__ Panic if object evaluates to a false   
__Parameters:__ object - Object to test   
__Return Value:__ None   
__Example:__  debug.assert_cond(1 == 1);
   
  
### debug.dump(object)  ###  
__Description:__ Dump object to the console   
__Parameters:__ object - Object to display   
__Return Value:__ None   
__Example:__  debug.dump("Hello World");
   
  
Math Functions 
====
### Math.sin(angle)  ###  
__Description:__ Calculate the Sine of an angle   
__Parameters:__ angle - given in Radians   
__Return Value:__ Sine of angle   
__Example:__  var zero = Math.sin(Pi);
   
  
### Math.asin(x)  ###  
__Description:__ Calculate the arc sine of a number   
__Parameters:__ number   
__Return Value:__ arc sine of x - given in Radians   
__Example:__  var pi = Math.asin(1) * 2;
   
  
### Math.cos(angle)  ###  
__Description:__ Calculate the cosine of an angle   
__Parameters:__ angle - given in Radians   
__Return Value:__ Cosine of angle   
__Example:__  var one = Math.cos(0);
   
  
### Math.acos(x)  ###  
__Description:__ Calculate the arc cosine of a number   
__Parameters:__ number   
__Return Value:__ arc cosine of x - given in Radians   
__Example:__  var zero = Math.asin(1);
   
  
### Math.tan(angle)  ###  
__Description:__ Calculate the tangent of an angle   
__Parameters:__ angle - given in Radians   
__Return Value:__ Tangent of angle   
__Example:__  var half =  Math.tan(0.463648);
   
  
### Math.atan(x)  ###  
__Description:__ Calculate the arc tangent of a number   
__Parameters:__ number   
__Return Value:__ arc tangent of x - given in Radians   
__Example:__  var pi = Math.atan(1) * 4;
   
  
### Math.sqrt(x)  ###  
__Description:__ Calculate the square root of a number   
__Parameters:__ number   
__Return Value:__ Square root of x   
__Example:__  var three = Math.sqrt(9);
   
  
### Math.log(x)  ###  
__Description:__ Calculate the natural logarithm of a number   
__Parameters:__ number   
__Return Value:__ Natural Logarithm of of x   
__Example:__  var zero = Math.log(1);
   
  
### Math.exp(x)  ###  
__Description:__ Calculate the base-e exponent of a number   
__Parameters:__ number   
__Return Value:__ base-e exponent of of x   
__Example:__  var e = Math.exp(1);
   
  
### Math.floor(x)  ###  
__Description:__ Calculate the largest integral value not greater than argument   
__Parameters:__ number   
__Return Value:__ Largest integral value not greater than x   
__Example:__  var three = Math.floor(3.5);
   
  
### Math.ceil(x)  ###  
__Description:__ Calculate the smallest integral value not less than argument   
__Parameters:__ number   
__Return Value:__ Smallest integral value not less than x   
__Example:__  var three = Math.floor(2.5);
   
  
### Math.round(x)  ###  
__Description:__ Round to nearest integer, away from zero   
__Parameters:__ number   
__Return Value:__ Nearest integer to x   
__Example:__  var three = Math.round(2.6); var two = Math.round(2.2);
   
  
### Math.abs(x)  ###  
__Description:__ Compute the absolute value of an integer   
__Parameters:__ number   
__Return Value:__ Absolute value of x   
__Example:__  var two = Math.abs(-2);
   
  
### Math.atan2(x, y)  ###  
__Description:__ Arc tangent function of two variables   
__Parameters:__ number   
__Return Value:__ Principal value of the arc tangent of y/x in radians   
__Example:__  var pi = Math.atan2(1, 1) * 4;
   
  
### Math.pow(x, y)  ###  
__Description:__ Power function   
__Parameters:__ number   
__Return Value:__ x to the power of y   
__Example:__  var hundred = Math.pow(10, 2);
   
  
File System Functions 
====
### fs.readFileSync(path)  ###  
__Description:__ Synchronously reads the entire contents of a file   
__Parameters:__ File path   
__Return Value:__ String containing the entire file contents   
__Example:__  var s = fs.readFileSync("FAT/file.txt");
   
  
### fs.readdirSync(path)  ###  
__Description:__ Synchronous readdir(3). Reads the contents of a directory   
__Parameters:__ Directory path   
__Return Value:__ An array of filenames excluding '.' and '..'   
__Example:__  var a = fs.readdirSync("FAT/");
   
  
GPIO Functions 
====
### digitalWrite(pin[s], value)  ###  
__Description:__ Set the digital value of a GPIO or a number of GPIOs   
__Parameters:__ pin - single GPIO ID or an array of GPIO IDs  
    value - boolean for a single GPIO, integer for a GPIO array   
__Return Value:__ None   
__Example:__    digitalWrite(GPIO_PF2, true);
   
  

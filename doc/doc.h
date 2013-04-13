FUNCTION(set_timeout, global_env, {
    .display_name = "setTimeout",
    .params = { 
        { .name = "cb", .description = "Callback to be run" },
        { .name = "ms", .description = "Timeout in milliseconds" },
    },
    .description = "Schedule 'cb' to run in ms milliseconds",
    .return_value = "Timer ID that can be used in clearTimeout()",
    .example = "setTimeout(function() { debug.dump('Timer Expired'); }, 1000);",
})

FUNCTION(set_interval, global_env, {
    .display_name = "setInterval",
    .params = { 
        { .name = "cb", .description = "Callback to be run" },
        { .name = "ms", .description = "Period in milliseconds" },
    },
    .description = "Schedule 'cb' to run periodically every ms milliseconds",
    .return_value = "Timer ID that can be used in clearTimeout()",
    .example = "setInterval(function() { debug.dump('.'); }, 1000);",
})

FUNCTION(clear_timeout, global_env, {
    .display_name = "clearTimeout",
    .params = { 
        { .name = "tid", .description = "Timer ID to cancel" },
    },
    .description = "Cancel timeout timer if timeout hadn't expired",
    .return_value = "None",
    .example = "var to = setTimeout(function() { "
        "debug.dump('timeout'); }, 1000);\n"
	"clearTimeout(to);",
})

FUNCTION(clear_interval, global_env, {
    .display_name = "clearInterval",
    .params = { 
        { .name = "tid", .description = "Timer ID to cancel" },
    },
    .description = "Cancel periodic timer",
    .return_value = "None",
    .example = "var to = setInterval(function() { "
        "debug.dump('.'); }, 1000);\n"
	"clearInterval(to);",
})

FUNCTION(get_time, global_env, {
    .display_name = "getTime",
    .params = { 
    },
    .description = "Get number of seconds since system startup",
    .return_value = "Floating point time in seconds",
    .example = "debug.dump('Up for ' + getTime() + ' seconds');",
})
OBJECT(global_env, {
    .display_name = "Global",
})

FUNCTION(eval, global_env, {
    .display_name = "eval",
    .params = { 
       { .name = "str", .description = "String to be evaluated" },
     },
    .description = "Evaluate the given String",
    .return_value = "Last valued statement return value",
    .example = "var two = eval('1+1');",
})

FUNCTION(to_integer, global_env, {
    .display_name = "toInteger",
    .params = { 
       { .name = "object", .description = "Object to be converted" },
     },
    .description = "Convert the given object to an integer value",
    .return_value = "Numeric value of converted object",
    .example = "var n = toInteger('5') + 1;",
})

OBJECT(debug, {
    .display_name = "Debug",
})

FUNCTION(assert, debug, {
    .display_name = "assert",
    .params = { 
       { .name = "object1", .description = "Object for comparison" },
       { .name = "object2", .description = "Object for comparison" },
     },
    .description = "Panic on mismatch between two objects",
    .return_value = "None",
    .example = "debug.assert(1, 1);",
})

FUNCTION(assert_cond, debug, {
    .display_name = "assert_cond",
    .params = { 
       { .name = "object", .description = "Object to test" },
     },
    .description = "Panic if object is false",
    .return_value = "None",
    .example = "debug.assert_cond(1 == 1);",
})

FUNCTION(dump, debug, {
    .display_name = "dump",
    .params = { 
       { .name = "object", .description = "Object to display" },
     },
    .description = "Dump object to the console",
    .return_value = "None",
    .example = "debug.dump('Hello World');",
})
OBJECT(math, {
    .display_name = "Math",
})

FUNCTION(sin, math, {
    .display_name = "sin",
    .params = { 
       { .name = "angle", .description = "angle in radians" },
     },
    .description = "Compute the sine of an angle",
    .return_value = "sine of angle",
    .example = "var zero = Math.sin(Pi);",
})

FUNCTION(asin, math, {
    .display_name = "asin",
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the arc sine of a number",
    .return_value = "arc sine of x in radians",
    .example = "var pi = Math.asin(1) * 2;",
})

FUNCTION(cos, math, {
    .display_name = "cos",
    .params = { 
       { .name = "angle", .description = "angle in radians" },
     },
    .description = "Compute the cosine of an angle",
    .return_value = "Cosine of angle",
    .example = "var one = Math.cos(0);",
})

FUNCTION(acos, math, {
    .display_name = "acos",
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the arc cosine of a number",
    .return_value = "arc cosine of x in radians",
    .example = "var zero = Math.acos(1);",
})

FUNCTION(tan, math, {
    .display_name = "tan",
    .params = { 
       { .name = "angle", .description = "angle in radians" },
     },
    .description = "Compute the tangent of an angle",
    .return_value = "Tangent of angle",
    .example = "var half =  Math.tan(0.463648);",
})

FUNCTION(atan, math, {
    .display_name = "atan",
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the arc tangent of a number",
    .return_value = "arc tangent of x in radians",
    .example = "var pi = Math.atan(1) * 4;",
})

FUNCTION(sqrt, math, {
    .display_name = "sqrt",
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the square root of a number",
    .return_value = "Square root of x",
    .example = "var three = Math.sqrt(9);",
})
OBJECT(fs, {
    .display_name = "File System",
})

FUNCTION(read_file_sync, fs, {
    .display_name = "readFileSync",
    .params = { 
       { .name = "path", .description = "File Path" },
     },
    .description = "Synchronously reads the entire contents of a file",
    .return_value = "String containing the entire file contents",
    .example = "var s = fs.readFileSync('FAT/file.txt');",
})
OBJECT(gpio, {
    .display_name = "GPIO",
})

FUNCTION(digital_write, gpio, {
    .display_name = "digitalWrite",
    .params = { 
       { .name = "pin[s]", .description = "Single GPIO ID or array of GPIO IDs" },
       { .name = "value", .description = "Boolean for a single GPIO\n"
         "In case of an array, value is considered an integer where the\n"
	 "first array element maps to the MSB" },
     },
    .description = "Set the digital value of a GPIO or a number of GPIOs",
    .return_value = "None",
    .example = "digitalWrite(GPIO_PF2, true); /* Turn on PF2 */\n"
        "digitalWrite([GPIO_PF1, GPIO_PF2, GPIO_PF3], 0x5); /* Turn on PF1 & "
	"PF3 */",
})

FUNCTION(digital_pulse, gpio, {
    .display_name = "digitalPulse",
    .params = { 
       { .name = "pin", .description = "GPIO pin ID" },
       { .name = "value", .description = "Boolean" },
       { .name = "ms", .description = "Pulse period in milliseconds" },
     },
    .description = "Create a digital pulse on a GPIO pin for a given period",
    "Set the digital value of a GPIO or a number of GPIOs",
    .return_value = "None",
    .example = "digitalPulse(GPIO_PF2, true, 0.1);",
})

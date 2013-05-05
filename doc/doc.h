CATEGORY(timers, global_env, {
    .display_name = "Timer",
})

FUNCTION("setTimeout", timers, do_set_timeout, {
    .params = { 
        { .name = "cb", .description = "Callback to be run" },
        { .name = "ms", .description = "Timeout in milliseconds" },
    },
    .description = "Schedule 'cb' to run in ms milliseconds",
    .return_value = "Timer ID that can be used in clearTimeout()",
    .example = "setTimeout(function() { debug.dump('Timer Expired'); }, 1000);",
})

FUNCTION("setInterval", timers, do_set_interval, {
    .params = { 
        { .name = "cb", .description = "Callback to be run" },
        { .name = "ms", .description = "Period in milliseconds" },
    },
    .description = "Schedule 'cb' to run periodically every ms milliseconds",
    .return_value = "Timer ID that can be used in clearTimeout()",
    .example = "setInterval(function() { debug.dump('.'); }, 1000);",
})

FUNCTION("clearTimeout", timers, do_clear_timeout, {
    .params = { 
        { .name = "tid", .description = "Timer ID to cancel" },
    },
    .description = "Cancel timeout timer if timeout hadn't expired",
    .return_value = "None",
    .example = "var to = setTimeout(function() { "
        "debug.dump('timeout'); }, 1000);\n"
	"clearTimeout(to);",
})

FUNCTION("clearInterval", timers, do_clear_interval, {
    .params = { 
        { .name = "tid", .description = "Timer ID to cancel" },
    },
    .description = "Cancel periodic timer",
    .return_value = "None",
    .example = "var to = setInterval(function() { "
        "debug.dump('.'); }, 1000);\n"
	"clearInterval(to);",
})

FUNCTION("getTime", timers, do_get_time, {
    .params = { 
    },
    .description = "Get number of seconds since system startup",
    .return_value = "Floating point time in seconds",
    .example = "debug.dump('Up for ' + getTime() + ' seconds');",
})
FUNCTION("eval", global_env, do_eval, {
    .params = { 
       { .name = "str", .description = "String to be evaluated" },
     },
    .description = "Evaluate the given String",
    .return_value = "Last valued statement return value",
    .example = "var two = eval('1+1');",
})

FUNCTION("toInteger", global_env, do_to_integer, {
    .params = { 
       { .name = "object", .description = "Object to be converted" },
     },
    .description = "Convert the given object to an integer value",
    .return_value = "Numeric value of converted object",
    .example = "var n = toInteger('5') + 1;",
})

OBJECT("debug", debug, {
})

FUNCTION("assert", debug, do_assert, {
    .params = { 
       { .name = "object1", .description = "Object for comparison" },
       { .name = "object2", .description = "Object for comparison" },
     },
    .description = "Panic on mismatch between two objects",
    .return_value = "None",
    .example = "debug.assert(1, 1);",
})

FUNCTION("assert_cond", debug, do_assert_cond, {
    .params = { 
       { .name = "object", .description = "Object to test" },
     },
    .description = "Panic if object is false",
    .return_value = "None",
    .example = "debug.assert_cond(1 == 1);",
})

FUNCTION("dump", debug, do_dump, {
    .params = { 
       { .name = "object", .description = "Object to display" },
     },
    .description = "Dump object to the console",
    .return_value = "None",
    .example = "debug.dump('Hello World');",
})

FUNCTION("dump_env", debug, do_dump_env, {
    .params = { 
     },
    .description = "Dump global environment information to the console",
    .return_value = "None",
    .example = "debug.dump_env();",
})
OBJECT("Math", math, {
})

CONST("E", math, e, STATIC_NUM_FP(2.71828182846))
CONST("Pi", math, pi, STATIC_NUM_FP(3.14159265359))

FUNCTION("sin", math, do_sin, {
    .params = { 
       { .name = "angle", .description = "angle in radians" },
     },
    .description = "Compute the sine of an angle",
    .return_value = "sine of angle",
    .example = "var zero = Math.sin(Pi);",
})

FUNCTION("asin", math, do_asin, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the arc sine of a number",
    .return_value = "arc sine of x in radians",
    .example = "var pi = Math.asin(1) * 2;",
})

FUNCTION("cos", math, do_cos, {
    .params = { 
       { .name = "angle", .description = "angle in radians" },
     },
    .description = "Compute the cosine of an angle",
    .return_value = "Cosine of angle",
    .example = "var one = Math.cos(0);",
})

FUNCTION("acos", math, do_acos, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the arc cosine of a number",
    .return_value = "arc cosine of x in radians",
    .example = "var zero = Math.acos(1);",
})

FUNCTION("tan", math, do_tan, {
    .params = { 
       { .name = "angle", .description = "angle in radians" },
     },
    .description = "Compute the tangent of an angle",
    .return_value = "Tangent of angle",
    .example = "var half =  Math.tan(0.463648);",
})

FUNCTION("atan", math, do_atan, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the arc tangent of a number",
    .return_value = "arc tangent of x in radians",
    .example = "var pi = Math.atan(1) * 4;",
})

FUNCTION("sqrt", math, do_sqrt, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the square root of a number",
    .return_value = "Square root of x",
    .example = "var three = Math.sqrt(9);",
})

FUNCTION("log", math, do_log, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the natural logarithm of a number",
    .return_value = "Natural logarithm of x",
    .example = "var zero = Math.log(1);",
})

FUNCTION("exp", math, do_exp, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the base-e exponent of a number",
    .return_value = "Base-e exponent of x",
    .example = "var e = Math.exp(1);",
})

FUNCTION("floor", math, do_floor, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the largest integral value not greater "
        "than the argument",
    .return_value = "Largest integer not greater than x",
    .example = "var three = Math.floor(3.5);",
})

FUNCTION("ceil", math, do_ceil, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the smallest integral value not less "
        "than the argument",
    .return_value = "Smallest integer not less than x",
    .example = "var three = Math.ceil(2.5);",
})

FUNCTION("round", math, do_round, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Round to nearest integer, away from zero",
    .return_value = "Nearest integer to x",
    .example = "var three = Math.round(2.7);\n"
        "var two = Math.round(2.2);",
})

FUNCTION("abs", math, do_abs, {
    .params = { 
       { .name = "x", .description = "number" },
     },
    .description = "Compute the absolute value of an integer",
    .return_value = "Absolute value of x",
    .example = "var two = Math.abs(-2);",
})

FUNCTION("atan2", math, do_atan2, {
    .params = { 
       { .name = "x", .description = "number" },
       { .name = "y", .description = "number" },
     },
    .description = "Compute the arc tangent of two variables",
    .return_value = "Principal value of the arc tangent of y/x in radians",
    .example = "var pi = Math.atan2(1, 1) * 4;",
})

FUNCTION("pow", math, do_pow, {
    .params = { 
       { .name = "x", .description = "number" },
       { .name = "y", .description = "number" },
     },
    .description = "Power function",
    .return_value = "x to the power of y",
    .example = "var hundred = Math.pow(10, 2);",
})
/* XXX: this needs a lot more details */
CATEGORY(module, global_env, {
    .display_name = "Module",
})

FUNCTION("require", module, do_require, {
    .params = { 
       { .name = "module_name", .description = "String containing module name to load" },
     },
    .description = "Searches for a module and evaluates its code",
    .return_value = "The module's 'exports' property",
    .example = "var as = require('assert');",
})
CLASS_PROTOTYPE("Function", function_prototype, object_prototype, function_class, {
})

CONSTRUCTOR("Function", function_prototype, do_function_constructor)

FUNCTION("call", function_prototype, do_function_prototype_call, { 
    .params = { 
       { .name = "this", .description = "The 'this' value on function invokation" },
       { .name = "arg1, arg2, ...", .description = "[optional] arguments to "
           "pass to function" },
     },
    .description = "Invoke function call",
    .return_value = "The function's return value",
    .example = "function fun() { this.prop = 'prop' }\n"
        "var obj = {};\n"
	"fun.call(obj);\n"
	"obj; // { prop : 'prop' }",
})
CLASS_PROTOTYPE("Array", array_prototype, object_prototype, array_class, {
})

CONSTRUCTOR("Array", array_prototype, do_array_constructor)

FUNCTION("push", array_prototype, do_array_prototype_push, { 
    .params = { 
       { .name = "item1 [, item2 [, ...] ]", .description = "object[s] to be added" },
     },
    .description = "The arguments are appended to the end of the array, "
        "in the order in which they appear",
    .return_value = "The new length of the array",
    .example = "var a = [];\n"
        "a.push(1);",
})

FUNCTION("pop", array_prototype, do_array_prototype_pop, {
    .params = { },
    .description = "The last element of the array is removed from the array and returned",
    .return_value = "Popped object",
    .example = "var a = [ 2, 1 ];\n"
        "var one = a.pop();",
})

FUNCTION("forEach", array_prototype, do_array_prototype_foreach, {
    .params = { 
        { 
            .name = "cb", 
            .description = "function that accepts three arguments:\n"
 	        "Value of the element, \n"
 	        "Index of the element, \n"
 	        "The object being traversed"
        },
        { 
            .name = "this", 
	    .description = "[optional] if provided, used as the "
                "'this' value for each invocation of 'cb'. If not provided, "
	        "'undefined' is used" 
        },
    },
    .description = "Calls cb once for each element present in the "
          "array, in ascending order",
    .return_value = "undefined",
    .example = "var a = [ 1, 2, 3];\n"
	"a.forEach(function(value, k, obj) { debug.dump(value + ' [' + k + '] ' + ' @ ' + obj); });",
})

FUNCTION("indexOf", array_prototype, do_array_prototype_indexof, {
    .params = { 
        { .name = "searchElement", .description = "Object to search for" },
        { .name = "fromIndex", .description = "[optional] start search index" },
    },
    .description = "Searches for searchElement in the elements of the array",
    .return_value = "if found at one or more positions, returns the index of "
         "the first such position (zero based); otherwise, -1 is returned",
    .example = "var a = [ 1, 2, 3];\n"
	"var one = a.indexOf(2);\n",
})

FUNCTION("join", array_prototype, do_array_prototype_join, {
    .params = { 
        { .name = "separator", .description = "[optional] string. If not "
	    "provided, a single comma is used" },
    },
    .description = "Joins the string coversions of the elements of the array "
        "separated by occurrences of the separator",
    .return_value = "The resulted string",
         "the first such position (zero based); otherwise, -1 is returned",
    .example = "var a = [ 1, 2, 3];\n"
	"debug.assert(a.join('-'), '1-2-3');\n",
})

FUNCTION("map", array_prototype, do_array_prototype_map, {
    .params = { 
        { 
            .name = "cb", 
            .description = "function that accepts three arguments:\n"
 	        "Value of the element, \n"
 	        "Index of the element, \n"
 	        "The object being traversed"
        },
        { 
            .name = "this", 
	    .description = "[optional] if provided, used as the "
                "'this' value for each invocation of 'cb'. If not provided, "
	        "'undefined' is used" 
        },
    },
    .description = "Calls cb once for each element present in the array, "
        "in ascending order, and constructs a new Array from the results",
    .return_value = "The constructed array",
    .example = "var a = [ 1, 2, 3];\n"
	"var b = a.map(function(value, k, obj) { return value + 1 });\n"
	"debug.assert(b, [ 2, 3, 4]);",
})
CLASS_PROTOTYPE("Number", num_prototype, object_prototype, num_class, {
})

CLASS_PROTOTYPE("Undefined", undefined_prototype, object_prototype, undefined_class, {
})

CLASS_PROTOTYPE("Null", null_prototype, object_prototype, null_class, {
})

CLASS_PROTOTYPE("Bool", bool_prototype, object_prototype, bool_class, {
})
CLASS_PROTOTYPE("Object", object_prototype, NULL, object_class, {
})

CONSTRUCTOR("Object", object_prototype, do_object_constructor)

FUNCTION("toString", object_prototype, do_object_prototype_to_string, { 
    .params = { },
    .description = "The object is converted to a string",
    .return_value = "String value",
    .example = "var a = 1;\n"
        "debug.assert(a.toString(), '1');",
})
CLASS_PROTOTYPE("String", string_prototype, object_prototype, string_class, {
})

CONSTRUCTOR("String", string_prototype, do_string_constructor)

FUNCTION("split", string_prototype, do_string_prototype_split, { 
    .params = { 
       { .name = "separator", .description = "Delimiter" },
     },
    .description = "Breaks a string into substrings based on occurences of "
        "'separator'",
    .return_value = "Array of strings, 'separator' is not part of the strings",
    .example = "var s = '1|2|3';\n"
        "var a = s.split('|');\n"
	"debug.assert(a, [ '1', '2', '3' ]);",
})

FUNCTION("indexOf", string_prototype, do_string_prototype_indexof, { 
    .params = { 
       { .name = "searchString", .description = "String to search for" },
     },
    .description = "Search for occurences of 'searchString' in a given string",
    .return_value = "If 'searchString' is found, the firt index is returned; "
         "-1 otherwise",
    .example = "var s = 'looking for me';\n"
        "var i = s.indexOf('for');\n"
	"debug.assert(i, 8);",
})

FUNCTION("substring", string_prototype, do_string_prototype_substring, { 
    .params = { 
       { .name = "start", .description = "Character position to start from" },
       { .name = "end", .description = "Character position to end with "
           "(not including" },
     },
    .description = "Creates a new string based on a subset of a given string",
    .return_value = "A string containing the characters in the original string "
        "in the range [start,end)",
    .example = "var s = 'a big string';\n"
        "var big = s.substring(2, 5);",
})

FUNCTION("charAt", string_prototype, do_string_prototype_char_at, { 
    .params = { 
       { .name = "pos", .description = "Position of character" },
     },
    .description = "Creates a new string containing the character at a position",
    .return_value = "A string containing the character at position 'pos'",
    .example = "var s = 'a string';\n"
        "var a = s.charAt(0);",
})

FUNCTION("charCodeAt", string_prototype, do_string_prototype_char_code_at, { 
    .params = { 
       { .name = "pos", .description = "Position of character" },
     },
    .description = "Get the ASCII value of the character at a position",
    .return_value = "A number containing the ASCII value of the character "
        "at position 'pos'",
    .example = "var s = 'a string';\n"
        "var ninty_seven = s.charCodeAt(0);",
})
OBJECT("fs", fs, {
    .display_name = "File System",
})

FUNCTION("readFileSync", fs, do_read_file_sync, {
    .params = { 
       { .name = "path", .description = "File Path" },
     },
    .description = "Synchronously reads the entire contents of a file",
    .return_value = "String containing the entire file contents",
    .example = "var s = fs.readFileSync('FAT/file.txt');",
})

FUNCTION("readdirSync", fs, do_readdir_sync, {
    .params = { 
       { .name = "path", .description = "Directory Path" },
     },
    .description = "Synchronously reads the directory listing of a path",
    .return_value = "Array containing the files / directories names",
    .example = "var s = fs.readdirSync('FAT/');",
})
CATEGORY(gpio, global_env, {
    .display_name = "GPIO",
})

FUNCTION("digitalWrite", gpio, do_digital_write, {
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

FUNCTION("digitalPulse", gpio, do_digital_pulse, {
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

FUNCTION("digitalRead", gpio, do_digital_read, {
    .params = { 
       { .name = "pin[s]", .description = "GPIO pin ID or array of GPIO pin IDs" },
     },
    .description = "Read the digital state of a GPIO pin or a number of pins",
    .return_value = "Single pin - boolean GPIO state\n"
      "Multiple pin array - number representing the pins state where the first "
      "pin is the MSB",
    .example = "var state = digitalRead(GPIO_PF2);\n"
      "var a = digitalRead([GPIO_PF0, GPIO_PF1, GPIO_PF2",
})

FUNCTION("analogWrite", gpio, do_analog_write, {
    .params = { 
       { .name = "pin", .description = "GPIO pin ID" },
       { .name = "value", .description = "Floating point number with range [0-1]" },
     },
    .description = "Set the analog value of a GPIO pin",
    .return_value = "None",
    .example = "analogWrite(GPIO_PF2, 0.5);",
})

FUNCTION("analogRead", gpio, do_analog_read, {
    .params = { 
       { .name = "pin", .description = "GPIO pin ID" },
     },
    .description = "Read the analog value of a GPIO pin",
    .return_value = "Floating point number with range [0-1]",
    .example = "var f = analogRead(GPIO_PF2);",
})

FUNCTION("setWatch", gpio, do_set_watch, {
    .params = { 
       { .name = "cb", .description = "callback function" },
       { .name = "pin", .description = "GPIO pin ID" },
     },
    .description = "Calls a callback function whenever the GPIO pin changes state",
    .return_value = "Event ID",
    .example = "setWatch(function() { debug.dump('button changed state'); }, GPIO_PF0);",
})
PROTOTYPE("Serial", serial, {
})

CONSTRUCTOR("Serial", serial, do_serial_constructor)

FUNCTION("enable", serial, do_serial_enable, {
    .params = { }, .description = "Enable a serial port",
    .return_value = "None",
    .example = "var s = new Serial(UART1);\n"
        "s.enable();",
})

FUNCTION("disable", serial, do_serial_disable, {
    .params = { },
    .description = "Disable a serial port",
    .return_value = "None",
    .example = "var s = new Serial(UART1);\n"
        "s.disable();",
})

FUNCTION("print", serial, do_serial_print, {
    .params = {
        { .name = "string" , .description = "String to be printed to serial port" }
    },
    .description = "Prints string",
    .return_value = "None",
    .example = "var s = new Serial(UART1);\n"
        "s.print('Hello World!');",
})

FUNCTION("onData", serial, do_serial_on_data, {
    .params = {
        { .name = "cb", .description = "callback function accepting a data object" },
    },
    .description = "Calls 'cb' when data is available on serial port",
    .return_value = "Event ID",
    .example = "var s = new Serial(UART1);\n"
        "s.onData(function(e) { s.print(e.data); });",
})

FUNCTION("setConsole", serial, do_serial_set_console, {
    .params = { },
    .description = "Sets tink.js console to the given serial port",
    .return_value = "None",
    .example = "var s = new Serial(UART1);\n"
        "s.setConsole",
})
PROTOTYPE("MMC", mmc, {
})

CONSTRUCTOR("MMC", mmc, do_mmc_constructor)
FUNCTION("meminfo", global_env, do_meminfo, {
    .params = { },
    .description = "Prints platform dependent memory information",
    .return_value = "None",
    .example = "meminfo()",
})

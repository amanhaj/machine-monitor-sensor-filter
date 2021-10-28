# machine-monitor-sensor-filter
this is a short exercise that emulates filtering extraneous noise from a sensor's environment to prevent false alarms.

the filter method takes a float as parameters to represent the value the sensor is reading from its environment.

it takes the current input and adds it as 9/10 of the current output.

the main method is just generating a random number between 1 and 100 and passing it to the filter method to then print to stdout.
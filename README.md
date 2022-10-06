# ch5studentGradesWithFiles

Write a program that asks the user to input multiple test scores for a number of students, calculates the average score for each student, and writes the student name and average to a file. Use a sentinel-controlled loop to ask the user if they have more student information to enter. For each student, ask for the student's name (a single name, not first and last names), then ask for 3 test scores which can contain decimal values between 0 and 100. Calculate the average of those 3 test scores. On the console, display the student's name and average, with 1 decimal place, and always show the decimal value. Also write that data to a file. When all input has been completed and the results written to the file, write a line on the console that says "Done writing to file".

In the same program, after writing the data to the output file, close it, then open it as an input file. Write a line on the console that says "Reading data from file". Read each line of data from the file and display it on the console. Using the values from the file, calculate the average of the grades for all of the students listed, and display that with 1 decimal place, and always show the decimal value.

Take a screenshot of the execution of the program. Using NotePad or NotePad++, or any text editor, look at the contents of the file after the program ends and take a screenshot of that screen.

Note: When the >> operator extracts data from a file, it expects to read pieces of data that are separated by whitespace characters -- spaces, tabs, or newlines. When you display the name and average on the console, you put a space between the name and the number and end the line with an "endl". There are white space characters between the pieces of data, exactly as needed for writing the data to a file. You can use the same line for both the console output and the file output, the only difference is the keyword "cout" or the file name variable. For example:

(assume the output file has been properly declared and is known as outputFile)
cout << name << " " << grade << endl;
outputFile << name << " " << grade << endl;

This will create a file with the data formatted properly for reading into a program in separate variables, like this:
(assume the input file has been properly declared and is known as inputFile)
inputFile >> name >> grade; 

Here is an example of the output from the program, and the file created, which was opened in NotePad++:

Ch 5 Student Grades          Ch 5 Student Grades file

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

![1](https://github.com/bell-kevin/ch5studentGradesWithFiles/blob/main/iAmAwesome.PNG)

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)

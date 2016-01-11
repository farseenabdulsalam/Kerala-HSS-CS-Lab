
## Kerala HSS CS Lab
Computer science lab assignments for Kerala higher secondary students

You can find the source code and output for sql, c++, html and php lab assignments here.

## Download
[Click here to download] (https://github.com/farseenabdulsalam/Kerala-HSS-CS-Lab/zipball/master/)

## Special files
* `makeit` is a bash script I have written to automate compiling and preparing output of the programs.
  Syntax:
  ```
    ./makeit [output-type] [project-folder]

    output-type is cpp, output or both
      cpp -- compile cpp files
      output -- create output from compile program and `input` file
      both -- both of the above
      if output-type is absent, both is assumed

    [project-folders] is a list of the names of the project folders,
    seperated by space. if absent, all projects is assumed

    example: ./makeit both array1
  ```
  Students need not worry about this file.

  If you have a linux system, you can modify input, open a terminal in the folder containing makeit and type ./makeit to create new output

* `new-project` is also another bash script to speed up coding. You can safely ignore this file. Don't execute the file unless you know what you are doing.
* `rename-project` renames a source-code-folder, and the .cpp, .html, etc file inside it. You can safely ignore this file.
* `input` is a file inside every source-code-folder that is automatically input to the compiled program by 'makeit' and the output is stored in the source-code-folder itself


## Work in progress
[x] C++ is completed.
[ ] SQL, PHP and HTML pending.


## Enquiries
If you need more programs, you can open an issue, open a pull request or mail me at farseenabdulsalam@gmail.com.

You can download, modify and freely distribute these as long as you adhere by the license.

## My Other Works
[Click here] (http://farseenabdulsalam.github.io) to view my other works

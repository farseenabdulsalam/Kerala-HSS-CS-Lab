
## Kerala HSS CS Lab
Computer science lab assignments for Kerala higher secondary students

You can find the source code and output for sql, c++, html and php lab assignments here.

## Download
 * [Click here to download] (https://github.com/farseenabdulsalam/Kerala-HSS-CS-Lab/zipball/master/) all files in a zip file
 * [Click here to download] (https://github.com/farseenabdulsalam/Kerala-HSS-CS-Lab/raw/master/cpp/PDF/CPP.pdf) CPP.pdf which contains all C++ program source code and output.

 I'll upload other files when I get free time

## Special files
* `makeit` is a bash script I have written to automate compiling and preparing output of the programs.
  Syntax:
  ```
    ./makeit [output-type] [project-folder]

    output-type is either cpp(for cpp folder only), output, pdf or all
      cpp     -- compile cpp files
      output  -- create output from the program (compiled program for cpp)
                 and `input.txt` file
      pdf     -- a pdf containing source code and output
      all     -- all of the above

      if output-type is absent, all is assumed

    [project-folders] is a list of the names of the project folders,
    seperated by space. if absent, all projects is assumed

    example: ./makeit all array1
  ```
  Students need not worry about this file.

  If you have a linux system, you can modify input, open a terminal in the folder containing makeit and type ./makeit to create new output

* `new-project` is also another bash script to speed up coding. You can safely ignore this file. Don't execute the file unless you know what you are doing.
* `rename-project` renames a source-code-folder, and the .cpp, .html, etc file inside it. You can safely ignore this file.
* `input.txt` is a file inside every source-code-folder that is automatically input to the compiled program by 'makeit' and the output is stored in the source-code-folder as output.txt.
* `make-complete-pdf` is used to create a single PDF by combining all pdfs from subfolders.
* `make-cover-pdf` used to create cover page of CPP.pdf.


## Work in progress
- [x] C++ is completed.
- [ ] SQL
- [ ] PHP
- [ ] HTML


## Enquiries
If you need more programs, you can open an issue, open a pull request or mail me at farseenabdulsalam@gmail.com.

You can download, modify and freely distribute these as long as you adhere by the license.
See [LICENSE.txt] (https://github.com/farseenabdulsalam/Kerala-HSS-CS-Lab/raw/master/LICENSE.txt) for more information.

## My Other Works
#####[Click here] (http://farseenabdulsalam.github.io) to view my other works

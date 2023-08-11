C - FILE I/O
Done by: Emmanuel Alpha Omollo

File I/O allows C programs to interact with files on a computer's file system. This includes reading data from files (input) and writing data to files (output). In C, file I/O is performed using the stdio.h library, which provides functions like fopen, fread, fwrite, and fclose.To open a file, use the fopen function. It requires two arguments: the file path and the mode. The mode specifies the type of access, such as "r" for reading, "w" for writing (creates a new file or truncates an existing file), "a" for appending, and more.To read from a file, use the fread or fgets function. fread reads a specified number of bytes, while fgets reads a line of text. 

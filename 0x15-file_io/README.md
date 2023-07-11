0x15. C - File I/O
Done by Alpha Omollo

File input and output in C involves reading data from files (input) and writing data to files (output). It allows you to interact with external files, such as text files, binary files, or even device files, using various operations.

To perform file input and output operations in C, you need to follow these general steps:

Open a File: Before you can read from or write to a file, you need to open it using the fopen() function. This function takes two arguments: the file path and the mode (such as "r" for reading or "w" for writing). It returns a file pointer that will be used in subsequent operations.

Read from a File: To read data from a file, you can use functions such as fscanf(), fgets(), or fread(). These functions allow you to read characters, strings, or binary data from the file. The specific function to use depends on the type of data you want to read.

Write to a File: To write data to a file, you can use functions such as fprintf(), fputs(), or fwrite(). These functions allow you to write characters, strings, or binary data to the file. Again, the choice of function depends on the type of data you want to write.

Close the File: After you have finished reading from or writing to a file, it is important to close it using the fclose() function. This ensures that any pending operations are completed and resources are freed up.

Throughout the process, it is crucial to handle errors appropriately. Functions like feof() (to check for the end of file), ferror() (to check for errors), and proper error handling mechanisms using conditional statements can help you deal with potential issues.

It is also important to note that C provides various file access modes, such as "r" (read), "w" (write), "a" (append), and more, which allow you to specify the intended file operations.

File I/O in C
1. Opening a File:
To perform file I/O in C, use the fopen function.
Example: FILE *filePointer = fopen("filename.txt", "mode");
2. File Modes:
"r": Read mode
"w": Write mode (creates a new file or truncates an existing file)
"a": Append mode (writes at the end of the file)
"r+": Read and write mode
"w+": Read and write mode (creates a new file or truncates an existing file)
"a+": Read and write mode (writes at the end)
3. Closing a File:
Use fclose to close a file.
Example: fclose(filePointer);
4. Reading from a File:
Use fgetc, fgets, or fread to read from a file.
Example: char buffer[50]; fgets(buffer, 50, filePointer);
5. Writing to a File:
Use fputc, fputs, or fwrite to write to a file.
Example: fputs("Hello, World!", filePointer);
6. Formatted Input/Output:
Use fprintf for formatted output and fscanf for formatted input.
Example: fprintf(filePointer, "Value: %d", value);

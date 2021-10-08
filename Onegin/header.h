// File header


/*!-----------------------------------------------------------
Find number of symbols in text from file 

\param[in] f file descriptor of file

\param[out] size number of symbols in text

\return code of error

\note if return value < 0 it is error and the value is its code
*/
int FileSize(FILE* f);

/*!-----------------------------------------------------------
Fills the buffer with symbols from file

\param[in] f file descriptor of file
\param[in] buffer array of char 

\return code of error

\note if return value < 0 it is error and the value is its code
*/
int ReadFile(FILE* f, char* buffer, int size);

/*!-----------------------------------------------------------
Counts number of strings in buffer 

\param[in] buffer array of symbols
\param[in] size number of symbols in buffer

\param[out] size number of symbols in text

\return code of error

\note if return value < 0 it is error and the value is its code
*/
int StrCount(char* buffer, int size);

/*!-----------------------------------------------------------
Finds pointers to the begin and end of each string

\param[in] begin array of pointers to begins of strings
\param[in] end array of pointers to ends of strings
\param[in] buffer array of symbols
\param[in] size number of symbols in buffer
\param[in] num_str number of strings in text


\return code of error

\note if return value < 0 it is error and the value is its code
*/


int FindStr(char** begin, char** end, char* buffer, int size, int num_str);

/*!-----------------------------------------------------------
Sorts strings

\param[in] arr array of strings
\param[in] num_str number of strings
\param[in] cmp comparator

\return code of error

\note if return value < 0 it is error and the value is its code
*/

int Sort(char** arr, int num_str, int (*cmp)(const void* str1, const void* str2));
/*!-----------------------------------------------------------
Prints strings to file

\param[in] f file descriptor
\param[in] str_begin array of strings
\param[in] num_str number of strings


\return code of error

\note if return value < 0 it is error and the value is its code
*/


int Print_Sort(FILE* f, char** str_begin, int num_str);

/*!-----------------------------------------------------------
Prints strings to file

\param[in] f file descriptor
\param[in] str_begin array of endings of strings
\param[in] num_str number of strings


\return code of error

\note if return value < 0 it is error and the value is its code
*/

int Print_Rev(FILE* f, char** str_end, int num_str);

/*!-----------------------------------------------------------
Prints original text to file

\param[in] f file descriptor
\param[in] buffer text
\param[in] size number of symbols


\return code of error

\note if return value < 0 it is error and the value is its code
*/

int Print_Orig(FILE*, char* buffer, int size);

/*!-----------------------------------------------------------
Compares strigs like strcmp

\param[in] str1
\param[in] str2


\return number < 0, equal 0, or > 0 if sr1 must be higher, the same, or lower than str
*/
int Comparator(const void* str1, const void* str2);
/*!-----------------------------------------------------------
Compares strigs

\param[in] str1
\param[in] str2


\return number < 0, equal 0, or > 0 if sr1 must be higher, the same, or lower than str2 

*/


int RevComparator(const void* str1, const void* str2);

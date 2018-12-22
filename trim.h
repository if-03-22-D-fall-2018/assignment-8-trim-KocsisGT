/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 8
 * Title:			trim.h
 * Author:			Kocsis Patrik
 * Due Date:		22.12.2018
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */

 #ifndef TRIM__H
 #define TRIM__H

 #define STRLEN 16

 void trim(const char *string, char *trimmed);

 static void get_start(const char* string, int *beginning);

 static void get_end(const char* string, int *ending, int *beginning);

 #endif

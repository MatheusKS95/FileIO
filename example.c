/*
 * Copyright (C) 2025 Matheus Klein Schaefer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <fileio.h>
#include <string.h>
#include <inttypes.h>

int main(int argc, char *argv[])
{
	bool is_fs_init = FileIOInit(argv, "test", NULL, "TesteOrg", "TesteApp");
	if(!is_fs_init)
	{
		return -1;
	}
	//read test
	size_t filesize;
	const char *readtest = FileIOReadText("readtest.txt", &filesize);
	printf("\n%s\n", readtest);

	//write test
	const char *filetosave = "OI MEU CHAPA";
	size_t strsize = strlen(filetosave);
	bool savedfile = FileIOWrite("savetest.txt", filetosave, strsize, false);

	//read picture and save it
	uint8_t *picture = FileIOReadBytes("example.png", &filesize);
	printf("\nImage size is %lu bytes\n", filesize);
	savedfile = FileIOWrite("testimage.png", picture, filesize, false);

	FileIODeinit();

	return 0;
}

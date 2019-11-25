#include "header.h"
int main(int argc, char const *argv[]) {
	if (argc == 2) {
		char dst[100];
		int openedFile = open(argv[1], O_RDONLY);
		if (openedFile == -1) {
			mx_printerr("error\n");
		} else {
			int readFile = read(openedFile, dst, 100);
			for (int i = 0; i  < readFile; i++) {
				write(1, &dst[i], 1);
			}
			close(openedFile);
		}
	} else {
		mx_printerr("usage: ./read_file [file_path]\n");
	}
	return 0;
}

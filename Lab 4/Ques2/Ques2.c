#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct warehouse {
	char ch[20];
	int c;
} w[30];

void main() {

	FILE *f, *f2;
	f = fopen ( "text1.txt", "r" );
	char ch[20], ch2[20], s1[20];
	int count, i, lim=0, x;
	for(i=0; i<30; i++) {
		w[i].c=0;
	}

	printf("The duplicate words are:\n");
	while ( fscanf ( f, "%s", ch2 ) == 1 ) {
		x = 0;
		for(i=0; i<=lim; i++) {
			if(strcmp(w[i].ch, ch2) == 0) {
				if(w[i].c > 0)
					w[i].c++;
				x = 1;
				break;
			}
		}
		if(x == 0) {
			// w[lim].ch = ch2;
			strcpy(w[lim].ch, ch2);
			w[lim].c = 1;
		}
		lim++;
	}
	for(i=0; i<=lim; i++) {
		if(w[i].c > 1)
			printf("%s count: %d\n", w[i].ch, w[i].c);
	}
}

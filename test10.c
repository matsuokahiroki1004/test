
#include <stdio.h>

int main (void) {

	char str[5][100] = {} ;　//文字列の配列の宣言。文字列配列は二次元。[要素の数][各要素の容量]

	str[0]="あ" ;
	str[1]="い" ;
	str[2]="う" ;
	str[3]="え" ;
	str[4]="お" ;
	
	for (int i = 0; i<5; i++) {
		printf("%s\n", str[i]) ;
	}
				
	return 0 ;
	
}
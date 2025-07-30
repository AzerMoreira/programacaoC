	#include <stdio.h>
	#include <stdlib.h>
	
	struct aluno {
		int v_nmat; //n�mero da matr�cula
		float v_nota[3]; //notas
		float v_media; //media
	};
	
	int main() {
		struct aluno Felipe; //declara uma vari�vel do tipo struct
		Felipe.v_nmat = 120;
		Felipe.v_nota[0]=8.5;
		Felipe.v_nota[1]=7.2;
		Felipe.v_nota[2]=5.4;
		Felipe.v_media=(Felipe.v_nota[0]+Felipe.v_nota[1]+Felipe.v_nota[2])/3.0;
		printf("Matricula:%d\n", Felipe.v_nmat);
		printf("Media: %.2f\n", Felipe.v_media);
		system("pause");
		return(0);
	}
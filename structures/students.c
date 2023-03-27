#include <stdio.h>

struct eleve {
	char *name;
	char *answers;
};

typedef struct eleve Eleve;

int lecture(void){

}

void showStudent(Eleve e){
	printf("name: %f, answers: %f\n", e.name, e.answers);
}

void showAllStudents(void){
  
}

int nbrRightAnswers(int questionNbr){

}

int main(int argc, char**argv){
	struct eleve Tab[7] = {
		{"Alain", "0011100110"},
		{"Beatrice", "1001101100"},
		{"Claude", "1010010100"},
		{"Daniel", "0100011101"},
		{"Emma", "0111101001"},
		{"Fanny", "1011101100"},
		{"Gregoire", "1101101101"}
	};
	return 0;
}


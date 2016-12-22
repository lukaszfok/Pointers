#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare_score(const void* score_a ,const void* score_b){
		
		int a = *(int*)score_a;
		int b = *(int*)score_b;
		
	return a - b;
} 
int compare_scores_desc(const void* score_a,const void* score_b){
		
		int a = *(int*)score_a;
		int b = *(int*)score_b;
	 
	return b - a;
}

typedef struct{
		int width;
		int hight;
}rectangle;

int compare_areas(const void* a,const void* b){
	
		rectangle* ra = (rectangle*)a;
		rectangle* rb = (rectangle*)b;
		int area_a = (ra->width*ra->hight);
		int area_b = (rb->width*rb->hight);
	
	return area_a- area_b; 	

}

int compare_names(const void* a,const void* b){
		
		char** sa = (char**)a;
		char** sb = (char**)b;
	
	return strcmp(*sa,*sb); 	
}

int compare_areas_desc(const void* a,const void* b){
		
	return compare_areas(b,a);
}

int compare_names_desc(const void* a,const void* b){
	
	return compare_names(b,a);
}

int main()
{  		
	int score[] = {100,102,104,105,200,300,500};
	int i;
	
	qsort(score,7,sizeof(int),compare_scores_desc);
	puts("This is sort numbers!");
	for(i=0;i<7;i++){
		printf("%d\n", score[i]);
	}
		
	char *names[] ={"Lukasz","Robert","Bartek","Janek","Halina","Daniel"};
	
	qsort(names,6,sizeof(char*),compare_names);
	puts("This is sort names!");
	for(i=0;i<6;i++){
		printf("%s\n", names[i]);
	}			
    return 0;
}

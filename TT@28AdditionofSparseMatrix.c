#include<stdio.h>
#include<stdlib.h>
struct element{
  int i;
  int j;
  int x;
}e;
struct sparse{
  int m;
  int n;
  int num;
  struct element *e;
}s,s1,s2;

int sum(struct sparse *s, struct sparse *s1) {
    int i = 0, j = 0, k = 0;
    if (s->m != s1->m || s->n != s1->n) {
        return 0;
    }
    s2.m = s->m;
    s2.n = s->n;
    s2.num = 0;
    s2.e = (struct element *)malloc((s->num + s1->num) * sizeof(struct element));
    while (i < s->num && j < s1->num) {
        if (s->e[i].i < s1->e[j].i) {
            s2.e[k++] = s->e[i++];
        } else if (s->e[i].i > s1->e[j].i) {
            s2.e[k++] = s1->e[j++];
        } else {
            if (s->e[i].j < s1->e[j].j) {
                s2.e[k++] = s->e[i++];
            } else if (s->e[i].j > s1->e[j].j) {
                s2.e[k++] = s1->e[j++];
            } else {
                s2.e[k].i = s->e[i].i;
                s2.e[k].j = s->e[i].j;
                s2.e[k].x = s->e[i].x + s1->e[j].x;
                k++;
                i++;
                j++;
            }
        }
    }
    while (i < s->num) {
        s2.e[k++] = s->e[i++];
    }
    while (j < s1->num) {
        s2.e[k++] = s1->e[j++];
    }
    s2.num = k;
    return 1;
}
void create(struct sparse *s,struct sparse *s1){
  printf("Enter number of rows of matrice 1 : ");
  scanf("%d",&s->m);
  printf("Enter the number of columns of matrice 1 : ");
  scanf("%d",&s->n);
  printf("Enter how many non-zero elemnt are present in a matrice 1 : ");
  scanf("%d",&s->num);


  printf("Enter number of rows of matrice 2 : ");
  scanf("%d",&s1->m);
  printf("Enter the number of columns of matrice 2 : ");
  scanf("%d",&s1->n);
  printf("Enter how many non-zero elemnt are present in a matrice 2 : ");
  scanf("%d",&s1->num);


  printf("Enter non zero element of first Matrix : ");
  s->e=(struct element*)malloc(s->num*sizeof(struct element));
  for(int i=0;i<s->num;i++){
    scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
  }

  printf("Enter non zero element of second Matrix : ");
  s1->e=(struct element*)malloc(s1->num*sizeof(struct element));
  for(int i=0;i<s1->num;i++){
    scanf("%d %d %d",&s1->e[i].i,&s1->e[i].j,&s1->e[i].x);
  }



}
void display(struct sparse *s) {
    int i, j, k = 0;

    for (i = 0; i < s->m; i++) {
        for (j = 0; j < s->n; j++) {
            if (k < s->num && s->e[k].i == i && s->e[k].j == j) {
                printf("%d ", s->e[k].x);
                k++;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main() {
    create(&s, &s1);
    display(&s);
    printf("\n");
    display(&s1);

    if (sum(&s, &s1)) {
        printf("\nSum of matrices:\n");
        display(&s2);
    } else {
        printf("Matrix addition is not possible due to incompatible dimensions.\n");
    }

    free(s.e);
    free(s1.e);
    free(s2.e);

    return 0;
}

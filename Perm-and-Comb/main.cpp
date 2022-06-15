#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>






using namespace std;


int main(int argc, char** argv) {
    
    
    
int i,fn=1,fp=1,fr=1;



int n,r;
long per,kom;
   printf("n degerini giriniz : ");
   scanf("%d",&n);
   printf("r degerini giriniz : ");
   scanf("%d",&r);
   
for(i=2 ;i<=n ; i++){
    fn = fn*i;
}
   for(i=2 ;i<=r ; i++){
    fr = fr*i;
}
   
for(i=2 ;i<=n-r ; i++){
    fp = fp*i;
}
per = fn/ fp;
kom = fn/(fp*fr);
printf("Permutasyon sonucu : %l\n ",per );
printf("Kombinasyon sonucu : %l ",kom);




system("pause");
return 0;

}
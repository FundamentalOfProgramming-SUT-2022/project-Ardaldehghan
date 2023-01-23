#include <stdio.h>
#include <stdio.h>
#include <dirent.h>
#include <io.h>
#include <malloc.h>
#define MAX 1000
char clipboard[MAX]={'\0'};
void create_file(){
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flag=2;
a=getchar();
FILE *myfile;
if(a=='"'){
        a=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flag=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
                printf("we have it");
            }
            else{
                myfile=fopen(b,"w");
            }
            break;
    }
    if(flag==2){
    i++;
    }
    else{
        flag=2;
    }
}
for(int x=1;x<=counter;x++){
    chdir("..");
}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flag=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
                printf("we have it");
            }
            else{
                myfile=fopen(b,"w");
            }
            break;
    }
    if(flag==2){
    i++;
    }
    else{
        flag=2;
    }
}
for(int x=1;x<=counter;x++){
    chdir("..");
}

}

fclose(myfile);

//a=getchar();


}

void copyfile(char *addres1,char *addres2){
    FILE *from=fopen(addres1,"r");
    FILE *to=fopen(addres2,"w");
    char c;
    while(1){
     c=fgetc(from);
     if(c==EOF){
            break;
    }
    fputc(c,to);
    }
    fclose(from);
    fclose(to);
return;
}



void cat() {
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flag=2;
a=getchar();
char f;
FILE *myfile;
if(a=='"'){
        f=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flag=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cat");
            }
            break;
    }
    if(flag==2){
    i++;
    }
    else{
        flag=2;
    }
}
for(int x=1;x<=counter;x++){
    chdir("..");
}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flag=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cat");
            }
            break;
    }
    if(flag==2){
    i++;
    }
    else{
        flag=2;
    }
}

}

char c;
while(c!=EOF){
    c=fgetc(myfile);
    printf("%c",c);
}
for(int x=1;x<=counter;x++){
    chdir("..");
}
fclose(myfile);

}
void inserstr(){
    char insert[1000]={'\0'};
    char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flag=2;
a=getchar();
char f;
FILE *myfile;
if(a=='"'){
        f=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flag=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for insert");
            }
            break;
    }
    if(flag==2){
    i++;
    }
    else{
        flag=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flag=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for insert");
            }
            break;
    }
    if(flag==2){
    i++;
    }
    else{
        flag=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}

}
int sizeofcharacters;
int founding;
int k;
int flag3=0;
for(k=0;k<1000;k++){
    scanf("%c",&insert[k]);
    //printf("%c",insert[k]);
    if(insert[k]=='\n'){
        insert[k]='\0';
        break;
    }
}
//printf("%d",k);
//printf("%s",insert);
int line,position;
scanf("%d %d",&line,&position);
sizeofcharacters=k;
    for(int k=0;k<1000;k++){
        if(insert[k]=='\\'&&insert[k+1]=='\\'){
                flag3=2;
                founding=k;
            break;
        }
    }
    if(flag!=2){
for(k=0;k<1000;k++){
    if(insert[k]=='\\'&&insert[k+1]=='n'){
    flag3=1;
    founding=k;
    printf("hi");
    break;
    }
}
    }
FILE *file2=fopen("ab.txt","w");
i=1;
int j=0;
char c;
int flag4=0;
int flag5=0;
int flag6=0;
while(i!=line){
    c=fgetc(myfile);
    fputc(c,file2);
    if(c=='\n'){
        i++;
    }
}
while(j!=position&&flag4!=1){
        flag5=1;
        //printf("hi");
    c=fgetc(myfile);
    if(c=='\n'){
            flag4=1;
            flag6=1;
      for(j;j<=position-1;j++){
        fputc(' ',file2);
      }
      if(flag3==0){
        for(int l=0;l<=sizeofcharacters;l++){
            fputc(insert[l],file2);
        }
        fputc('\n',file2);
        break;
      }
        if(flag3==1){
            for(int l=0;l<founding;l++){
                fputc(insert[l],file2);
            }
            fputc('\n',file2);
            int h=founding+2;
            for(h;h<sizeofcharacters;h++){
                fputc(insert[h],file2);
            }
            break;
        }
        if(flag3==2){
            for(int l=0;l<founding;l++){
                fputc(insert[l],file2);
            }
            fputc('\\',file2);
            fputc('n',file2);
            int h=founding+3;
            for(h;h<sizeofcharacters;h++){
                fputc(insert[h],file2);
            }
            break;
        }
        flag6=1;
      }
      if(flag6!=1){
    fputc(c,file2);
    j++;
      }
}
if(flag4==0&&flag5==1){
      if(flag3==0){
        for(int l=0;l<sizeofcharacters;l++){
            fputc(insert[l],file2);
            flag5=2;
        }
      }
        if(flag3==1){
            for(int l=0;l<founding;l++){
                fputc(insert[l],file2);
            }
            fputc('\n',file2);
            int h=founding+2;
            for(h;h<sizeofcharacters;h++){
                fputc(insert[h],file2);
            }
            flag5=2;
        }
        if(flag3==2){
            for(int l=0;l<founding;l++){
                fputc(insert[l],file2);
            }
            fputc('\\',file2);
            fputc('n',file2);
            int h=founding+3;
            for(h;h<sizeofcharacters;h++){
                fputc(insert[h],file2);
            }
        }
        flag5=2;
      }
      while(c!=EOF){
        c=fgetc(myfile);
        fputc(c,file2);
      }
fclose(myfile);
fclose(file2);
copyfile("ab.txt",b);
for(int x=1;x<=counter;x++){
    chdir("..");
}

}
void removestr(){
char inputting[2000];
int line;int removing;int position;
char back_or_forward;
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flagee=2;
char f;
a=getchar();
FILE *myfile;
if(a=='"'){
        f=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
         //   printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for remove");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
           // printf("%s",b);
         myfile=fopen(b,"r");
            if(myfile){
                   // printf("yes");
            }
            else{
                printf("we dont have it for remove");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}

}
    int flag=0;
    //FILE *myfile;
    scanf("%d %d",&line,&position);
    scanf("%d",&removing);
   // back_or_forward=getchar();
   // printf("%d %d %d %c",line,position,removing,back_or_forward);
if (back_or_forward=='b'){
            flag=1;
        }
        else{
            flag=2;
        }
    char c;
    i=1;
    int j=0;
    int tell;
   // FILE* myfile=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\d.txt","r");//should be change to myptr or d
    FILE* file2=fopen("ab.txt","w");
        c=fgetc(myfile);
        while(c!=EOF){
            c=getc(myfile);
            if(c=='\n'){
                i++;
            }
            if(i==line){
                while(j!=position+1){
                    c=fgetc(myfile);
                    j++;
                }
                break;
            }

        }
        tell=ftell(myfile);
        fclose(myfile);
        int definingchange;
      //  myfile=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\d.txt","r");//should be change to d or myptr
//            fopen(b,"r");

        file2=fopen("ab.txt","w");
        myfile=fopen(b,"r");
        if (flag==1){
                definingchange=tell-removing;
        while(c!=EOF){
            c=fgetc(myfile);
            c=fputc(c,file2);
            if(ftell(file2)==definingchange){
                while(definingchange!=tell){
                    definingchange++;
               c=fgetc(myfile);
                   }


            }
        }
fclose(myfile);
fclose(file2);
copyfile("ab.txt",b);
}
else{ definingchange=tell+removing;
                while(c!=EOF){
            c=fgetc(myfile);
            c=fputc(c,file2);
            if(ftell(file2)==tell-1){
                while(definingchange!=tell){
                    //printf("%c",c);
                    definingchange--;
               c=fgetc(myfile);
                   }


            }
        }
fclose(myfile);
fclose(file2);
copyfile("ab.txt",b);

}
for(int x=1;x<=counter;x++){
    chdir("..");
}





}
void copystr(){
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flagee=2;
char f;
a=getchar();
FILE *myfile;
if(a=='"'){
        f=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
         //   printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for copy");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
           // printf("%s",b);
         myfile=fopen(b,"r");
            if(myfile){
                   // printf("yes");
            }
            else{
                printf("we dont have it for copy");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}

}
         int flag=0;
         int num=0;
         int line,position,copying;
         scanf("%d %d %d",&line,&position,&copying);
         char back_or_forward=getchar();
        if (back_or_forward=='b'){
            flag=1;
        }
        else{
            flag=2;
        }
    char c;
    i=1;
    int j=0;
    int tell;
        c=fgetc(myfile);
        while(c!=EOF){
            c=getc(myfile);
            if(c=='\n'){
                i++;
            }
            if(i==line){
                while(j!=position+1){
                    c=fgetc(myfile);
                    j++;
                }
                break;
            }

        }
        tell=ftell(myfile);
        fclose(myfile);
        int definingchange;
        myfile=fopen(b,"r");
        //should be change to d or myptr
//        file2=fopen("ab.txt","w");
        if (flag==1){
                definingchange=tell-copying;
        while(c!=EOF){
            c=fgetc(myfile);
           // c=fputc(c,file2);
            if(ftell(myfile)==definingchange){
                while(definingchange!=tell){
                    definingchange++;
               c=fgetc(myfile);
               clipboard[num]=c;
               num++;
                   }


            }
        }
fclose(myfile);
}
else{ definingchange=tell+copying;
                while(c!=EOF){
            c=fgetc(myfile);
            if(ftell(myfile)==tell-1){
                while(definingchange!=tell){
                    definingchange--;
               c=fgetc(myfile);
               clipboard[num]=c;
               num++;
                   }


            }
        }
fclose(myfile);
for(int x=1;x<=counter;x++){
    chdir("..");
}

//printf("%s",clipboard);

}




}
void cutstr(){
    char inputting[2000];
char a;
int line,position,removing;
char back_or_forward;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flagee=2;
char f;
a=getchar();
FILE *myfile;
if(a=='"'){
        f=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
         //   printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cut");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
           // printf("%s",b);
         myfile=fopen(b,"r");
            if(myfile){
                   // printf("yes");
            }
            else{
                printf("we dont have it for cut");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}

}
     //FILE *myfile;
     int flag;
     int num=0;

    char c;
    i=1;
    int j=0;
    int tell;
    scanf("%d %d %d",&line,&position,&removing);
    back_or_forward=getchar();
    if(back_or_forward=='b'){
        flag=1;
    }
    else{
        flag=2;
    }
   // FILE* myfile=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\d.txt","r");//should be change to myptr or d
    FILE* file2;
        c=fgetc(myfile);
        while(c!=EOF){
            c=getc(myfile);
            if(c=='\n'){
                i++;
            }
            if(i==line){
                while(j!=position+1){
                    c=fgetc(myfile);
                    j++;
                }
                break;
            }

        }
        tell=ftell(myfile);
        fclose(myfile);
        int definingchange;
      //  myfile=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\d.txt","r");//should be change to d or myptr
      myfile=fopen(b,"r");
        file2=fopen("ab.txt","w");
        if (flag==1){
                definingchange=tell-removing;
        while(c!=EOF){
            c=fgetc(myfile);
            c=fputc(c,file2);
            if(ftell(file2)==definingchange){
                while(definingchange!=tell){
                    definingchange++;
               c=fgetc(myfile);
               clipboard[num]=c;
               num++;
                   }


            }
        }
fclose(myfile);
fclose(file2);
copyfile("ab.txt",b);
}
else{ definingchange=tell+removing;
                while(c!=EOF){
            c=fgetc(myfile);
            c=fputc(c,file2);
            if(ftell(file2)==tell-1){
                while(definingchange!=tell){
                    //printf("%c",c);
                    definingchange--;
               c=fgetc(myfile);
               clipboard[num]=c;
               num++;
                   }


            }
        }
fclose(myfile);
fclose(file2);
copyfile("ab.txt",b);

}


for(int x=1;x<=counter;x++){
    chdir("..");
}




}
void pastestr(){
char inputting[2000];
char a;
int line,position;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int counter=0;
a=getchar();
int flagee=2;
char f;
a=getchar();
FILE *myfile;
if(a=='"'){
        f=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
         //   printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for paste");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}
}
if(a=='/'){  while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            mkdir(ptr);
            chdir(ptr);
            i=0;
            flagee=1;

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
           // printf("%s",b);
         myfile=fopen(b,"r");
            if(myfile){
                   // printf("yes");
            }
            else{
                printf("we dont have it for paste");
            }
            break;
    }
    if(flagee==2){
    i++;
    }
    else{
        flagee=2;
    }
}
//for(int x=1;x<=counter;x++){
  //  chdir("..");
//}

}  scanf("%d %d",&line,&position);
     FILE* file2=fopen("ab.txt","w");
    i=1;
    int j=0;
    int k=0;
    int flag=0;
    char c;
   // int flag=0;
  // c=fgetc(myfile);
   //printf("%c",c);
    while(c!=EOF){
        c=fgetc(myfile);
        c=fputc(c,file2);
      //  printf("%c",c);
        if(c=='\n'){
            i++;
        }
        if(i==line){
            while(j!=position){
                c=fgetc(myfile);
                fputc(c,file2);
                j++;
                flag=1;
            }
        }
        if(flag==1){
            while(k!=MAX){
            fputc(clipboard[k],file2);
            k++;
            if(clipboard[k]=='\0')
                break;
            }
            flag=0;
        }
    }
    fclose(myfile);
    fclose(file2);
    copyfile("ab.txt",b);
    char clipboard[MAX]={'\0'};

for(int x=1;x<=counter;x++){
    chdir("..");
}


     }


int main(){
    char *myptr=malloc(sizeof(char)*100);//for finding cat function
    char a[1000];
    while(1){
    scanf("%s",a);
    if(strcmp(a,"cat-file")==0){
      cat();
    }
    else{}
    if(strcmp(a,"create-file")==0){ //for finding create_file function
        create_file();
    }
    if(strcmp(a,"insertstr-file")==0){
        inserstr();
    }
    if(strcmp(a,"removestr-file")==0){
        removestr();
    }
       if(strcmp(a,"copystr-file")==0){
        copystr();
    }
       if(strcmp(a,"cutstr-file")==0){
        cutstr();
       }
    if(strncmp(a,"exit",4)==0){
        return 0;
    }
    if(strcmp(a,"pastestr-file")==0){
        pastestr();
    }

}
}

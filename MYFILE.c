#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <io.h>
#include <malloc.h>
#define MAX 1000
void removebetweentwoindex(char a[1000],int l,int r){
if(l==r||l>r){
    return;
}
char b[1000]={'\0'};
int i=0;
int j=0;
for(i=0;i<=l;i++){
    b[i]=a[i];
}
j=i;
for(r;r<1000;r++){
    b[j]=a[r];
    j++;
}
for(i=0;i<1000;i++){
    a[i]=b[i];
}
}
void addinposition(char a[1000],char c,int pos){
int i=0;
char b[1000];
for(i=0;i<=pos;i++){
    b[i]=a[i];
}
int j=0;
i--;
j=i;
j++;
b[i+1]=c;
i++;
j++;
for(i;i<1000;i++){
    b[j]=a[i];
    j++;
}
for(i=0;i<1000;i++){
    a[i]=b[i];
}
}
int counterforgrep=0;
FILE *fileundo;
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
int R=0;
DIR* mydir;
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
           // mkdir(ptr);
           mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cat");
            for(int x=1;x<=counter;x++){
                chdir("..");
                return;
}
                //break;
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
            //mkdir(ptr);
            mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cat");
                for(int x=1;x<=counter;x++){
            chdir("..");
    }   return;
                //break;
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
c=fgetc(myfile);
while(c!=EOF){
    printf("%c",c);
    c=fgetc(myfile);
}
for(int x=1;x<=counter;x++){
    chdir("..");
}
fclose(myfile);

}
void inserstr(){
    //fileundo=fopen("C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt","w");
    char insert[1000]={'\0'};
    char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
DIR *mydir;
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
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for insert");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
          //  mkdir(ptr);
         mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for insert");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
fclose(myfile);
copyfile(b,"C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt");
fopen(b,"r");
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
             //   printf("hi1");
            break;
        }
    }
    if(flag3!=2){
for(k=0;k<1000;k++){
    if(insert[k]=='\\'){//&&insert[k+1]=='n'){
    flag3=1;
    founding=k;
   // printf("hi");
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
  //  fileundo=fopen("C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt","w");
char inputting[2000];
int line;int removing;int position;
char back_or_forward;
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
DIR* mydir;
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
            //mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for remove");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

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
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
fclose(myfile);
copyfile(b,"C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt");
fopen(b,"r");
    int flag=0;
    //FILE *myfile;
    scanf("%d %d",&line,&position);
    scanf("%d",&removing);
    back_or_forward=getchar();
   // printf("%d %d %d %c",line,position,removing,back_or_forward);
if (back_or_forward=='b'){
            flag=1;
        }
        else{
            flag=2;
        }
        //printf("%d",flag);
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
        int definingchange;
        if(i==1){
               // printf("hi");
            tell=position+1;
            fclose(myfile);
        }
        else{
        tell=ftell(myfile);
        fclose(myfile);
        }
      //  myfile=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\d.txt","r");//should be change to d or myptr
//            fopen(b,"r");

        file2=fopen("ab.txt","w");
        myfile=fopen(b,"r");
        if (flag==1){
                definingchange=tell-removing;
           //         printf("%d",definingchange);
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
int R=0;
DIR* mydir;
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
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for copy");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

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
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
        int definingchange;
        if(i==1){
            tell=position+1;
            fclose(myfile);
        }
        else{
        tell=ftell(myfile);
        fclose(myfile);
        }
       // int definingchange;
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
    //fileundo=fopen("C:\Users\AmirAli\Desktop\root2\\file10.txt","w");
    char inputting[2000];
char a;
int line,position,removing;
char back_or_forward;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
DIR *mydir;
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
         //   mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cut");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
          //  mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

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
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
     fclose(myfile);
     copyfile(b,"C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt");
     fopen(b,"r");
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
        if(i==1){
            tell=position+1;
        }
        else{
        tell=ftell(myfile);
        }
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
    //fileundo=fopen("C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt","w");
char inputting[2000];
char a;
int line,position;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
int counter=0;
a=getchar();
int flagee=2;
char f;
DIR *mydir;
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
          //  mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for paste");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flagee=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

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
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
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
fclose(myfile);
copyfile(b,"C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt");
fopen(b,"r");
  scanf("%d %d",&line,&position);
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
void findstr(int optienforfind){
    int number;
    //printf("%d",optienforfind);
if(optienforfind==4||optienforfind==5){
scanf("%d",&number);
}
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
DIR *mydir;
int counter2=0;
a=getchar();
int flage=2;
a=getchar();
char m;
FILE *myfile;
if(a=='"'){
        m=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter2++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
        //    mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flage=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter2;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for find");
                    for(int x=1;x<=counter2;x++){
                        chdir("..");
                    }
                    return;
            }
            break;
    }
    if(flage==2){
    i++;
    }
    else{
        flage=2;
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
                counter2++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            //mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flage=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter2;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for find");
                    for(int x=1;x<=counter2;x++){
                        chdir("..");
                    }
                    return;
            }
            break;
    }
    if(flage==2){
    i++;
    }
    else{
        flage=2;
    }
}

}
i=0;
    char matn[10000];
    int j=0;
    int flag=0;
    int counter=0;
    int k=0;
    int h=0;
    int l=0;
    int flagnew;     //count at all byword
//    int optienforfind;                //done   done done done   for except "aa *b sdf"
    int checking;
    int position;
//    int number;
    char f[1000];
    char f2[1000];
    char f3[1000];
    char f4[1000];
    int l2;
    int count[100];
    int countwords[100];
    int countercount=0;
    int countformix=0;
    int counterbyword=0;
fgets(matn,10000,myfile);
char d[100]={'\0'};
scanf("%c",&d[0]);
if(d[0]=='*'){
    flag=1;
}
else if(d[0]=='"'){
        flag=2;
    for(int i=0;i<1000;i++){
        scanf("%c",&d[i]);
        if(d[i]=='*'){
            flag=4;
        }
        if(d[i]=='"'){
            d[i]='\0';
            break;
        }
    }
}
    if(flag==0){
    for(i=1;i<1000;i++){
        scanf("%c",&d[i]);
        if(d[i]=='*'){
            flag=3;
            d[i]='\0';
        }
        if(d[i]=='\n'){
            d[i]='\0';
            break;
        }
    }
}
else if(flag==1){
    for(i=0;i<1000;i++){
    scanf("%c",&d[i]);
       if(d[i]=='\n'){
        d[i]='\0';
        break;
       }
    }
}
if(flag!=4){
for(i=0;i<strlen(matn);i++){
    if(matn[i]==d[j]){
            //printf("%c",d[j]);
    j++;
}
    else{
        j=0;
    }
    if(matn[i]==' '){
        k=i;
        counterbyword++;
    }
    if(j==strlen(d)){
            if(flag==1){
            if(optienforfind==0){
            printf("%d",k+1);
            break;
            }
          //  printf("%d",counterbyword);
            count[countercount]=i+1-strlen(d);
            countercount++;
            countwords[countformix]=counterbyword;
            //printf("%d %d",counterbyword,countformix);
            countformix++;
            }
            if(flag==0||flag==3||flag==2){
        if(optienforfind==0){
                printf("%d ",i+1-strlen(d));
                countercount++;
                break;
        }
                count[countercount]=i+1-strlen(d);
                countercount++;
                countwords[countformix]=counterbyword;
                countformix++;
            }
    }

}
if(countercount==0){
    printf("we cant find yor word");
}
else if(optienforfind==1){ //for all
    for(int u=0;u<countercount;u++){
        printf("%d ",count[u]);
    }
}
else if(optienforfind==2){//for count
    printf("%d ",countercount+1);
}
else if(optienforfind==3){ //for byword
    printf("%d",counterbyword);
}
else if(optienforfind==4){ //for at
    printf("%d ",count[number-1]);
}
else if(optienforfind==5){
    printf("%d ",countwords[number-1]);
}
else if(optienforfind==6){
    //    printf("hi");
    for(int H=0;H<countformix;H++){
        printf("%d ",countwords[H]);
    }
}
}

if(flag==4){
        j=0;
            //for founding *abc
    for(i=0;i<1000;i++){
            f[i]=d[i];
        if(d[i]=='*'&&d[i-1]==' '){
                h=i;
                i++;
            for(i;i<1000;i++){
                //printf("hi %c    ",d[i]);
                if(d[i]==' '){
                l=i;
                flag=5;
               break;
               }
               else if(d[i]=='\0'){
                flagnew=1;
                flag=5;
                break;
                //printf("1");
               }
               else{
                f2[j]=d[i];
                j++;
               }
            }
            i++;
            j=0;
            for(i;i<1000;i++){
                f3[j]=d[i];
                j++;
            }
        }
    }
    if(flag!=5){
        for(i=0;i<1000;i++){
            if(d[i]=='*'){
                h=i;
                for(i;i>0;i--){
                    if(d[i]==' '){
                        l=i;
                        flag=6;
                        break;
                    }
                }
                break;
            }
        }
        j=0;
        for(i=0;i<=l;i++){
            f4[j]=d[i];
            j++;
        }
        //printf("%s\n",f4);
        j=0;
        l=l+1;
        for(l;l<h;l++){
            f2[j]=d[l];
            j++;
        }
       //printf("%s\n",f2);
        j=0;
        h++;
        h++;
        if(d[h]=='\0')
            flagnew=1;
        for(h;h<1000;h++){
            f3[j]=d[h];
            j++;
        }
        //printf("%s\n",f3);
    }
    if(flag==5){
            j=0;
          // printf("us %s",f2);
      for(i=0;i<strlen(matn);i++){
         // printf("%c",a[i]);
        if(matn[i]==d[j]){
                //printf("%c ",d[j]);
            j++;
        }
        else{
            j=0;
        }
        if(j==strlen(f)-1){
            checking=1;
            position=i+2-strlen(f);
    i++;
    j=0;
      for(i;i<1000;i++){
        if(matn[i]==f2[j]){
            j++;
        }
        else{
    j=0;
        }
        if(j==strlen(f2)){
            checking=2;
            if(flagnew==1){
                printf("%d",position);
                return ;
            }
            break;

        }
      }
      for(i;i<1000;i++){
        if(matn[i]==' '){
            break;
        }
      }
      i++;
      j=0;
       if(checking==2){
        for(i;i<1000;i++){
            if(matn[i]==f3[j]){
                j++;
            }
            else{
                printf("we dont find it");
                 break;
}

            if(j==strlen(f3)){
                //printf("%d",position);
                count[countercount]=position;
                countercount++;
                break;
            }
        }
       }

    }
}
if(countercount==0){
    printf("we cant find your word!");
}
else if(optienforfind==0){
    printf("%d",count[0]);
}
else if(optienforfind==1){
    for(int u=0;u<countercount;u++){
        printf("%d",count[u]);
    }
}
else if(optienforfind==2){
    printf("%d",countercount+1);
}
else if(optienforfind==4){
    printf("%d",count[number]);
}
    }
    if(flag==6){
            j=0;
        for(i=0;i<strlen(matn);i++){
            if(matn[i]==f4[j]){
                j++;
            }
            else{
                j=0;
            }
            if(j==strlen(f4)){
                checking=1;
                position=i-strlen(f4)+1;
        j=0;
        i++;
            for(i;i<1000;i++){
            if(matn[i]==f2[j]){
                j++;
            }
            else{
                j=0;
            }
            if(j==strlen(f2)){
                checking=2;
                if(flagnew==1){
                    printf("%d",position);
                }
                break;

            }
        }
        for(i;i<1000;i++){
            if(matn[i]==' ')
                break;
        }

        j=0;
        //printf("is %c",a[i+1]);
        i++;
        if(checking==2){
   // printf("%s",f3);
            for(i;i<1000;i++){
                if(matn[i]==f3[j]){
                    j++;
            //        printf("1");
                }
                else{
                        printf("we dont find it");
                break;
                }
                if(j==strlen(f3)){
                   // printf("%d",position);
                   count[countercount]=position;
                   countercount++;
                    break;
                }
            }
        }

    }
}
if(countercount==0){
    printf("we cant find your word!");
}
else if(optienforfind==0){
    printf("%d",count[0]);
}
else if(optienforfind==1){
    for(int u=0;u<countercount;u++){
        printf("%d",count[u]);
    }
}
else if(optienforfind==2){
    printf("%d",countercount+1);
}
else if(optienforfind==4){
    printf("%d",count[number]);
}
    }
}
for(int x=1;x<=counter2;x++){
    chdir("..");
}

}
void replacestr(int optienforfind){
int number;
     if(optienforfind==2){
        scanf("%d",&number);
    }
 //   printf("%d",optienforfind);
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
DIR* mydir;
int counter2=0;
a=getchar();
int flage=2;
a=getchar();
char m;
FILE *myfile;
if(a=='"'){
        m=getchar();
    while(1){
        scanf("%c",&b[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b[i]=='/'){
                counter2++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
            //mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flage=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter2;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for replace");
                    for(int x=1;x<=counter2;x++){
                        chdir("..");
                    }
                    return;
            }
            break;
    }
    if(flage==2){
    i++;
    }
    else{
        flage=2;
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
                counter2++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
         //   mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flage=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter2;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for replace");
                    for(int x=1;x<=counter2;x++){
                        chdir("..");
                    }
                    return;
            }
            break;
    }
    if(flage==2){
    i++;
    }
    else{
        flage=2;
    }
}

}

    char matn[10000];
    int j=0;
    i=0;
    int i2=0;
    int flag=0;
    int counter=1;
    int k=0;
    int h=0;
    int l=0;
       //for at or all
                //
    int checking;
    int position;
    int p=0;
    int i2_k;
    int lasti;
    FILE* myfile2=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\copy.txt","w");
    char f[1000];
    char f2[1000];
    char f3[1000];
    char f4[1000];
    int l2;
    int count=1;
    int lastcheck=0;
    int countercount=0;
    int counterbyword=0;
    int forchecking=0;
fgets(matn,10000,myfile);
char big[10000];
char d[100]={'\0'};
char hi;
scanf("%c",&d[0]);
if(d[0]=='*'){
    flag=1;
}
else if(d[0]=='"'){
        flag=2;
    for(int i=0;i<1000;i++){
        scanf("%c",&d[i]);
        if(d[i]=='*'){
            flag=4;
        }
        if(d[i]=='"'){
            d[i]='\0';
            break;
        }
    }
}
    if(flag==0){
    for(i=1;i<1000;i++){
        scanf("%c",&d[i]);
        if(d[i]=='*'){
            flag=3;
            d[i]='\0';
        }
        if(d[i]=='\n'){
            d[i]='\0';
            break;
        }
    }
}
else if(flag==1){
    for(i=0;i<1000;i++){
    scanf("%c",&d[i]);
       if(d[i]=='\n'){
        d[i]='\0';
        break;
       }
    }
}
char newthing[1000];
if(flag==2||flag==4){
    hi=getchar();
}
scanf("%c",&newthing[0]);
if(newthing[0]=='"'){
    for(p=0;p<1000;p++){
        scanf("%c",&newthing[p]);
        if(newthing[p]=='"'){
            newthing[p]='\0';
            break;
        }
    }
}
    else{
        for(p=1;p<1000;p++){
            scanf("%c",&newthing[p]);
            if(newthing[p]=='\n'){
                newthing[p]='\0';
                break;
            }
        }
    }
if(flag!=4){
for(i=0,i2=0;i<strlen(matn);i++,i2++){
        big[i2]=matn[i];
    if(matn[i]==d[j]){
    j++;
}
    else{
        j=0;
    }
    if(matn[i]==' '){
        k=i;
    }
    if(j==strlen(d)){
            lastcheck=1;
            //printf("hi");
            if(flag==1){
            if(optienforfind==0){
                i2_k=i-k;
            for(p=0;p<10000;p++){
                    forchecking++;
                big[i2]='\0';
            if(forchecking==(i2_k)){
             forchecking=0;
                break;
            }
            i2--;
            }
            for(p=0;p<strlen(newthing);p++){
                big[i2]=newthing[p];
                i2++;
            }
            i2--;
            optienforfind=100;
            }
            if(optienforfind==1){
                 i2_k=i-k;
            for(p=0;p<10000;p++){
                    forchecking++;
                big[i2]='\0';
            if(forchecking==(i2_k)){
             forchecking=0;
                break;
            }
            i2--;
            }
            for(p=0;p<strlen(newthing);p++){
                big[i2]=newthing[p];
                i2++;
            }
            i2--;
            }
            if(optienforfind==2){
                if(count==number){
                i2_k=i-k;
            for(p=0;p<10000;p++){
                    forchecking++;
                big[i2]='\0';
            if(forchecking==(i2_k)){
             forchecking=0;
                break;
            }
            i2--;
            }
            for(p=0;p<strlen(newthing);p++){
                big[i2]=newthing[p];
                i2++;
            }
            i2--;
                }
                else{
                    number++;
                }
            }

            }
            if(flag==3){
                if(optienforfind==0){
            for(i;i<1000;i++){
                if(matn[i]==' ')
                    break;
            }
            i--;
            for(p=0;p<strlen(d);p++){
                big[i2]='\0';
                if(p==strlen(d)-1){

                    break;
                }
                i2--;

            }
            for(p=0;p<strlen(newthing);p++){
                big[i2]=newthing[p];
                i2++;
            }
            i2--;
            optienforfind=100;

            }
            if(optienforfind==1){
                    for(i;i<1000;i++){
                if(matn[i]==' ')
                    break;
            }
            i--;
            for(p=0;p<strlen(d);p++){
                big[i2]='\0';
                if(p==strlen(d)-1){

                    break;
                }
                i2--;

            }
            for(p=0;p<strlen(newthing);p++){
                big[i2]=newthing[p];
                i2++;
            }
            i2--;
    }
    if(optienforfind==2){
    if(count==number){
            for(i;i<1000;i++){
                if(matn[i]==' ')
                    break;
            }
            i--;
            for(p=0;p<strlen(d);p++){
                big[i2]='\0';
                if(p==strlen(d)-1){

                    break;
                }
                i2--;

            }
            for(p=0;p<strlen(newthing);p++){
                big[i2]=newthing[p];
                i2++;
            }
            i2--;
    }
    else{
        count++;
    }
    }
            }
            if(flag==0||flag==2){
                    if(optienforfind==0){
                for(p=0;p<strlen(d);p++){
                    big[i2]='\0';
                    if(p==strlen(d)-1)
                        break;
                    i2--;
                }
                for(p=0;p<strlen(newthing);p++){
                    big[i2]=newthing[p];
                    i2++;
                }
                i2--;
                optienforfind=100;
            }
            if(optienforfind==1){
                 for(p=0;p<strlen(d);p++){
                    big[i2]='\0';
                    if(p==strlen(d)-1)
                        break;
                    i2--;
                }
                for(p=0;p<strlen(newthing);p++){
                    big[i2]=newthing[p];
                    i2++;
                }
                i2--;
            }
            if(optienforfind==2){
                if(count==number){
                        for(p=0;p<strlen(d);p++){
                    big[i2]='\0';
                    if(p==strlen(d)-1)
                        break;
                    i2--;
                }
                for(p=0;p<strlen(newthing);p++){
                    big[i2]=newthing[p];
                    i2++;
                }
                i2--;
            }
            else{
                count++;
            }

            }
    }

    }

}
if(number>count){
    printf("number for at is bigger than attempt!");
}
if(lastcheck==1){
}
else{
    printf("we cant find this word for replace!");
}
fputs(big,myfile2);
//printf("IS %s",big);
fclose(myfile2);
fclose(myfile);
copyfile("copy.txt",b);
}
for(int x=1;x<=counter2;x++){
    chdir("..");
}
}
void grepstr(char *a,char *finding,int optien){
    DIR *mydir;
    int i=0;
    int j=0;int x=0;
    int counter=0;
    char b[100]={'\0'};
    int flag=0;
    char getting[1000];
    char c;
    int flag2=0;
    int flagforoptien=0;
    if(optien==1){
        flagforoptien=1;
    }
    else if(optien==2){
        flagforoptien=2;
    }
char *ptr=(char *)malloc(sizeof(char)*1000);
for(i=0;i<strlen(a);i++){
    if(a[i]=='/'){
            counter++;
            flag=1;
        for(j=0;j<i;j++){
          b[j]=a[j];
        }
   mydir=opendir(b);
   if(mydir){
        chdir(b);
   }
   else{
    printf("we dont have this directory");
  //  mkdir(b);
    for(x=1;x<counter;x++){
        chdir("..");
    }
    return;
    }
        a=strchr(a,'/');
        a++;
       for(int k=0;k<100;k++){
        b[k]='\0';
       }
        i=0;
    }
}
FILE *MYFILE=fopen(a,"r");
if(MYFILE){
        fclose(MYFILE);
        MYFILE=fopen(a,"r");
   for(int l=0;l<100;l++){
        j=0;
   fgets(getting,1000,MYFILE);
   for(int k=0;k<1000;k++){
    if(getting[k]==finding[j]){
        j++;
    }
    else{
        j=0;
    }
    if(j==strlen(finding)){
            if(flagforoptien==0){
      printf("%s:%s\n",a,getting);
      flag2=1;
            }
            else if(flagforoptien==1){
                counterforgrep++;
                flag2=1;
            }
            else if(flagforoptien==2){
                printf("%s",a);
                flagforoptien=1000;
                flag2=1;
            }
       }
   }
   for(int y=0;y<1000;y++){
    getting[y]='\0';
   }

}
  for(x=0;x<counter;x++){
        chdir("..");
    }
}
else{
    //    printf("%s",a);
    printf("we dont have this file!");
        for(x=0;x<counter;x++){
        chdir("..");
    }
    return;
}
if(flag2==0){
    printf("we cant find it");
}
}
void undostr(){
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
int counter=0;
a=getchar();
int flag=2;
a=getchar();
char f;
DIR* mydir;
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
        //    mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for undo");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
            //mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for cat");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
fclose(myfile);
copyfile("C:\\Users\\AmirAli\\Desktop\\root2\\file10.txt",b);
for(int x=1;x<=counter;x++){
    chdir("..");
}



}
void compare(){
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char *ptr2=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
char b2[1000]={'\0'};
int i=0;
int R=0;
int counter=0;
a=getchar();
int flag=2;
a=getchar();
char F;
DIR* mydir;
FILE *myfile;
FILE *myfile2;
if(a=='"'){
        F=getchar();
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
        //    mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for compare");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
                   //printf("%s",b);
            }
            else{
                printf("we dont have it for compare");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
a=getchar();
counter=0;
flag=2;
i=0;
if(a=='"'){
        F=getchar();
    while(1){
        scanf("%c",&b2[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b2[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr2=strtok(b2,"/");
            //printf("%s \n",ptr);
            mkdir(ptr2);
          //  printf("%s",ptr2);
            chdir(ptr2);
            i=0;
            flag=1;

        }
        else{}
        if(b2[i]=='"'){
            b2[i]='\0';
         myfile2=fopen(b2,"r");
            if(myfile2){
            }
            else{
                printf("we dont have it for compare");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
        scanf("%c",&b2[i]);
      // b[i]=getchar();
        //b[i]=getchar();
        //printf("%c  ",b[i]);
        //printf("%s",b);
        if(b2[i]=='/'){
                counter++;
          //      if(counter==1){printf("%s\n",b);}

            ptr2=strtok(b2,"/");
            //printf("%s \n",ptr);
            mkdir(ptr2);
              //printf("%s",ptr2);
            chdir(ptr2);
            i=0;
            flag=1;

        }
        else{}
        if(b2[i]=='\n'){
            b2[i]='\0';
         myfile2=fopen(b2,"r");
            if(myfile2){
                 //   printf("salam");
            }
            else{
                printf(" %s we dont have it for compare");
                    for(int x=1;x<=counter;x++){
                        chdir("..");
                    }
                    return;
                //break;
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




char A[1000]={'\0'};
char B[1000]={'\0'};
int d;
int f;
int d2;
int f2;
int flage=0;
i=0;
int counterline=0;
int nowflafe=0;
//FILE *myfile=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\file1.txt","r");
//FILE *myfile2=fopen("C:\\Users\\AmirAli\\Desktop\\root\\dot\\file2.txt","r");
for(i=0;i<1000;i++){
fgets(A,1000,myfile);
fgets(B,1000,myfile2);
   counterline++;
   f=ftell(myfile);
   f2=ftell(myfile2);
   if(f2==d2){
    flage=1;
    break;
   }
   if(f==d){
    flage=2;
    break;
   }
   if(strcmp(A,B)!=0){
   printf("========== #%d==========",counterline);
    printf("%s%s",A,B);
   }
   d2=ftell(myfile2);
   d=ftell(myfile);




}
for(int k=0;k<100;k++){
    if(flage!=1){
        f2=ftell(myfile2);
        if(nowflafe==0){
        printf("========== #start line%d==========",counterline);
        nowflafe=1;
        }

        printf("%s\n",B);
         fgets(B,1000,myfile2);
         if(f2==d2)
            break;
          d2=ftell(myfile2);
    }
    else if(flage!=2){
       f=ftell(myfile);
  if(nowflafe==0){
    printf("========== #start line%d==========\n",counterline);
    nowflafe=1;
    }
        printf("%s\n",A);
             fgets(A,1000,myfile);
             d=ftell(myfile);
             if(f==d)
                break;
    }
}

}

void tree(char *basePath, const int root,const int depth)      //idea of this recursive function was in codeforwin website
{
    int i;
    if(root==2*depth){
        return;
    }
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(basePath);

    if (!dir)
        return;

    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            for (i=0; i<root; i++)
            {
                if (i%2 == 0 || i == 0)
                    printf("%c", 179);
                else
                    printf(" ");

            }

            printf("%c%c%s\n", 195, 196, dp->d_name);

            strcpy(path, basePath);
            strcat(path, "/");
            strcat(path, dp->d_name);
            tree(path, root + 2,depth);
        }
    }

    closedir(dir);
}
void indent(){
char inputting[2000];
char a;
char *ptr=(char*)malloc(sizeof(char)*1000);
char b[1000]={'\0'};
int i=0;
int R=0;
int counter10=0;
a=getchar();
int flag=2;
a=getchar();
char f;
DIR* mydir;
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
                counter10++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
        //    mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter10;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='"'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for indent");
                    for(int x=1;x<=counter10;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
                counter10++;
          //      if(counter==1){printf("%s\n",b);}

            ptr=strtok(b,"/");
            //printf("%s \n",ptr);
           // mkdir(ptr);
             mydir=opendir(ptr);
           if(mydir){
            chdir(ptr);
            i=0;
            flag=1;
           }
           else{
            printf("we dont have this directory");
            for(R=1;R<counter10;R++){
                chdir("..");
            }
            return;
           }

        }
        else{}
        if(b[i]=='\n'){
            b[i]='\0';
         myfile=fopen(b,"r");
            if(myfile){
            }
            else{
                printf("we dont have it for indent");
                    for(int x=1;x<=counter10;x++){
                        chdir("..");
                    }
                    return;
                //break;
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
    i=0;

    int j=0;
    int i2=0;
    int i3=0;
    int i4=0;
    int counter=0;
    char text[1000];
    fgets(text,1000,myfile);
    FILE *myfile2=fopen("ab.txt","w");
   for(i=0;i<1000;i++){
    if(text[i]=='{'){
            counter++;
            i2=i;
            i2--;
    for(i2;i2>=0;i2--){
        if(text[i2]!=' '){
            break;
        }
    }
    removebetweentwoindex(text,i2,i);
    i=i2+2;
    addinposition(text,' ',i2);
    addinposition(text,'\n',i);
  //  printf("%d",i);
    i++;
    i2=i;
    i2++;
    for(i2;i2<1000;i2++){
        if(text[i2]!=' ')
            break;
        else{
            }
    }
    removebetweentwoindex(text,i,i2);
    for(int k=1;k<4*counter;k++){
        addinposition(text,' ',i);
        i++;
    }
    }
    if(text[i]=='}'){
       i2=i-1;
            addinposition(text,'\n',i2);
          //  printf("is %c",text[i2+3]);
                if(text[i2+3]!='}')
                   addinposition(text,'\n',i2+3);
            i++;
            i2=i-1;
            for(int u=1;u<4*(counter-1);u++){
                addinposition(text,' ',i2);
                i2++;
                i++;
            }
            counter--;

    }
   }
//printf("%s",text);
fputs(text,myfile2);
fclose(myfile2);
fclose(myfile);
copyfile("ab.txt",b);
for(int x=1;x<=counter10;x++){
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
    else if(strcmp(a,"create-file")==0){ //for finding create_file function
        create_file();
    }
    else if(strcmp(a,"insertstr-file")==0){
        inserstr();
    }
    else if(strcmp(a,"removestr-file")==0){
        removestr();
    }
       else if(strcmp(a,"copystr-file")==0){
        copystr();
    }
       else if(strcmp(a,"cutstr-file")==0){
        cutstr();
       }
    else if(strncmp(a,"exit",4)==0){
        return 0;
    }
    else if(strcmp(a,"pastestr-file")==0){
        pastestr();
    }
    else if(strcmp(a,"findstr")==0){
        char finding[1000];
        int optienforfind;
        scanf("%s",finding);
        if(strcmp(finding,"all")==0){
            optienforfind=1;
        }
        else if(strcmp(finding,"count")==0){
            optienforfind=2;
        }
        else if(strcmp(finding,"byword")==0){
            optienforfind=3;
        }
        else if(strcmp(finding,"at")==0){
            optienforfind=4;
        }
        else if(strcmp(finding,"atbyword")==0){
            optienforfind=5;
        }
        else if(strcmp(finding,"allbyword")==0){
            optienforfind=6;
        }

        else{
            optienforfind=0;
        }
        findstr(optienforfind);
    }
    else if(strcmp(a,"replacestr")==0){
    char replacing[1000];
    scanf("%s",replacing);
    int optienforfind;
    if(strcmp(replacing,"all")==0){
        optienforfind=1;
    }
    else if(strcmp(replacing,"at")==0){
        optienforfind=2;
    }
    else{
        optienforfind=0;
    }
    replacestr(optienforfind);
    }
     else if (strcmp(a,"grepstr")==0){
    char opn[100];
    int optien=0;
    scanf("%s",opn);
    if(strcmp(opn,"-C")==0){
        optien=1;
    }
    else if(strcmp(opn,"-L")==0){
        optien=2;
    }
    else{
        optien=0;
    }
    int p=0;
    int j=0;
    char f;
    int x=0;
    char *files[100];
    char *newstrings[100];
    files[0]=malloc(sizeof(char)*100);
    scanf("%s",files[0]);
    for(p=1;p<1000;p++){
            files[p]=malloc(sizeof(char)*100);
        scanf("%s",files[p]);
        if(strcmp(files[p],"]")==0){
            break;
        }
        else{
        }

}
f=getchar();
char finding[100];
scanf("%c",&finding[0]);
if(finding[0]=='"'){
for(int u=0;u<100;u++){
    scanf("%c",&finding[u]);
    if(finding[u]=='"'){
        finding[u]='\0';
        break;
    }
}
}
else{
    for(int u=1;u<100;u++){
    scanf("%c",&finding[u]);
    if(finding[u]=='\n'){
        finding[u]='\0';
        break;
    }
}
}
for(int x=1;x<p;x++){
        //printf("%s",files[x]);
  grepstr(files[x],finding,optien);

}
  if(optien==1){
    printf("%d",counterforgrep);
}
    else{}
}

else if(strcmp(a,"undo-file")==0){
    undostr();
}
else if(strcmp(a,"compare-files")==0){
compare();
}
else if(strcmp(a,"tree")==0){
    int depth;
    scanf("%d",&depth);
    if(depth<-1){
        printf("invalid depth!");
    }
    else{
    tree("root",0,depth);
    }
}
else if(strcmp(a,"indent")==0){
    indent();
}
else{
    printf("invalid command!");
}

    }
}





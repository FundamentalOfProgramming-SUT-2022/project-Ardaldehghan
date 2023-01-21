#include <stdio.h>
#include <stdio.h>
#include <dirent.h>
#include <io.h>
#include <malloc.h>
#define MAX 1000
char clipboard[MAX];
void create_file(char a[100]){
    char d[100];
    if(*(a)=='+'){
        char *ptr;
        ptr=strchr(a,'/');
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        ptr=strtok(a,"/");
        ptr++;
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=1){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        for(int l=0;l<100;l++){
            d[l]=*(ptr+l);
            if(d[l]=='+'){
                d[l]=NULL;
                break;

            }
            else{}
        }
        FILE* myfile=fopen(d,"r");
        if(myfile){
            printf("we have it yet!");
        }
        else{
            fopen(d,"w");
        }
        for(int i=counter;i>0;i--){
            chdir("..");
        }

    }
    else{
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        char *ptr;
        ptr=strtok(a,"/");
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=2){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        FILE* myfile=fopen(ptr,"r");
        if(myfile){
            printf("we have it yet!");
        }
        else{
            fopen(ptr,"w");
        }
        for(int i=counter;i>0;i--){
            chdir("..");
        }
    }
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



void cat(char a[100]) {
    char d[100];
    char c;
    if(*(a)=='+'){
        char *ptr;
        char c;
        ptr=strchr(a,'/');
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        ptr=strtok(a,"/");
        ptr++;
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=1){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        for(int l=0;l<100;l++){
            d[l]=*(ptr+l);
            if(d[l]=='+'){
                d[l]=NULL;
                break;

            }
            else{}
        }
        FILE *myfile=fopen(d,"r");
        if(myfile){
            c= getc(myfile);
            while(c!=EOF){
                printf("%c",c);
                c= getc(myfile);
            }
        }
            else{
                printf("we don't have it!");
            }
        }
    else{
        int mycounter = 0;
        for (int j = 0; j < 100; j++) {
            if (a[j] == '/') {
                mycounter++;
            }
        }
        mycounter--;
        int counter = mycounter;
        char *ptr;
        ptr = strtok(a, "/");
        //printf("%s", ptr);
        chdir(ptr);
        ptr = strtok(NULL, "/");
        mkdir(ptr);
        chdir(ptr);
        ptr = strtok(NULL, "/");
        while (mycounter != 2) {
            mkdir(ptr);
            chdir(ptr);
            ptr = strtok(NULL, "/");
            mycounter--;
        }
        FILE *myfile = fopen(ptr, "r");
        if(myfile){
        c = fgetc(myfile);
        while (c != EOF) {
            printf("%c", c);
            c = fgetc(myfile);
        }
        fclose(myfile);
    }
        else{
            printf("we don't have this file!");
        }
    }
}
void inserstr(int line,int position,char inserting[100],char a[100]){
     char d[100];
     int moode=0;
     char *ptr;
     FILE *myfile;
    if(*(a)=='+'){
        //char *ptr;
        ptr=strchr(a,'/');
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        ptr=strtok(a,"/");
        ptr++;
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=1){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        for(int l=0;l<100;l++){
            d[l]=*(ptr+l);
            if(d[l]=='+'){
                d[l]=NULL;
                break;

            }
            else{}
        }
        myfile=fopen(d,"r");
        moode=1;
        if(myfile){
        }
        else{
            printf("we dont have it");
            return 0;
        }
        // for(int i=counter;i>0;i--){
          //  chdir("..");
        //}
    }
     else{
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        //char *ptr;
        ptr=strtok(a,"/");
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=2){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        myfile=fopen(ptr,"r");
        //printf("%s",ptr);
        if(myfile){}
        else{
            printf("we dont have it");
            return 0;
        }
        fclose(myfile);
      //   for(int i=counter;i>0;i--){
        //   chdir("..");
        //}
           moode=2;
    fopen(ptr,"r");
     }
   // printf("%s",ptr);
    int i=1;
    int j=0;
    char c;
    int flag=0;
    int flag2=0;
    position--;
    FILE* file2=fopen("ab.txt","w");
    while(i<line&&c!=EOF){
    c=fgetc(myfile);
    //printf("%c",c);
    fputc(c,file2);
    if(c=='\n'){
        i++;
    }
    }
    if(c==EOF){
            flag2=1;
    for(i;i<line;i++){
        fputc('\n',file2);
    }
    }
    while(j<position){
        c=fgetc(myfile);
        if(c=='\n'){
            for(j;j<position;j++){
                fputc(' ',file2);
            }
            flag=1;
            break;
        }
        fputc(c,file2);
        j++;
    }
    if(flag==1){
        fputs(inserting,file2);
        fputc('\n',file2);
    }
    else{
    fputs(inserting,file2);
    }
    while(c!=EOF){
        c=fgetc(myfile);
        fputc(c,file2);
    }
    if(flag2==0){
    fseek(file2,-1,SEEK_END);
    fputc(' ',file2);
    }
    if(moode==1){
            fclose(myfile);
    copyfile("ab.txt",d);
}
if(moode==2){
        fclose(myfile);
        copyfile("ab.txt",ptr);
    }
}
void removestr(int line,int position,int removing,char back_or_forward,char a[100]){
  char d[100];
     int moode=0;
     char *ptr;
     FILE *myfile;
     int flag;
    if(*(a)=='+'){
        //char *ptr;
        ptr=strchr(a,'/');
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        ptr=strtok(a,"/");
        ptr++;
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=1){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        for(int l=0;l<100;l++){
            d[l]=*(ptr+l);
            if(d[l]=='+'){
                d[l]=NULL;
                break;

            }
            else{}
        }
        myfile=fopen(d,"r");
        moode=1;
        if(myfile){
        }
        else{
            printf("we dont have it");
            return 0;
        }
        // for(int i=counter;i>0;i--){
          //  chdir("..");
        //}
    }
     else{
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        //char *ptr;
        ptr=strtok(a,"/");
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=2){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        myfile=fopen(ptr,"r");
        //printf("%s",ptr);
        if(myfile){}
        else{
            printf("we dont have it");
            return 0;
        }
       // fclose(myfile);
      //   for(int i=counter;i>0;i--){
        //   chdir("..");
        //}
           moode=2;
     }        if (back_or_forward=='b'){
            flag=1;
        }
        else{
            flag=2;
        }
    char c;
    int i=1;
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
      if(moode==2){
            fopen(ptr,"r");
      }
      if(moode==1){
        fopen(d,"r");
      }
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
                   }


            }
        }
fclose(myfile);
fclose(file2);
if(moode==1){
    copyfile("ab.txt",d);
}
if(moode==2){
    copyfile("ab.txt",ptr);
}
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
if(moode==1){
    copyfile("ab.txt",d);
}
if(moode==2){
    copyfile("ab.txt",ptr);
}

}






}
void copystr(int line,int position,int copying,char back_or_forward,char a[100]){
  char d[100];
     int moode=0;
     int flag;
     char *ptr;
     FILE *myfile;
    if(*(a)=='+'){
        //char *ptr;
        ptr=strchr(a,'/');
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        ptr=strtok(a,"/");
        ptr++;
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=1){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        for(int l=0;l<100;l++){
            d[l]=*(ptr+l);
            if(d[l]=='+'){
                d[l]=NULL;
                break;

            }
            else{}
        }
        myfile=fopen(d,"r");
        moode=1;
        if(myfile){
        }
        else{
            printf("we dont have it");
            return 0;
        }
        // for(int i=counter;i>0;i--){
          //  chdir("..");
        //}
    }
     else{
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        //char *ptr;
        ptr=strtok(a,"/");
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=2){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        myfile=fopen(ptr,"r");
        //printf("%s",ptr);
        if(myfile){}
        else{
            printf("we dont have it");
            return 0;
        }
       // fclose(myfile);
      //   for(int i=counter;i>0;i--){
        //   chdir("..");
        //}
           moode=2;
    //fopen(ptr,"r");
     }
         int num=0;
        if (back_or_forward=='b'){
            flag=1;
        }
        else{
            flag=2;
        }
    char c;
    int i=1;
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
        if(moode==1){
                myfile=fopen(d,"r");
        }
        if(moode==2){
            myfile=fopen(ptr,"r");
        }
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

}




}
void cutstr(int line,int position,int removing,char back_or_forward,char a[100]){  char d[100];
     int moode=0;
     char *ptr;
     FILE *myfile;
     int flag;
     int num=0;
    if(*(a)=='+'){
        //char *ptr;
        ptr=strchr(a,'/');
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        ptr=strtok(a,"/");
        ptr++;
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=1){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        for(int l=0;l<100;l++){
            d[l]=*(ptr+l);
            if(d[l]=='+'){
                d[l]=NULL;
                break;

            }
            else{}
        }
        myfile=fopen(d,"r");
        moode=1;
        if(myfile){
        }
        else{
            printf("we dont have it");
            return 0;
        }
        // for(int i=counter;i>0;i--){
          //  chdir("..");
        //}
    }
     else{
        int mycounter=0;
        for(int j=0;j<100;j++){
            if(a[j]=='/'){
                mycounter++;
            }
        }
        mycounter--;
        int counter=mycounter;
        //char *ptr;
        ptr=strtok(a,"/");
        chdir(ptr);
        ptr=strtok(NULL,"/");
        mkdir(ptr);
        chdir(ptr);
        ptr=strtok(NULL,"/");
        while(mycounter!=2){
            mkdir(ptr);
            chdir(ptr);
            ptr=strtok(NULL,"/");
            mycounter--;
        }
        myfile=fopen(ptr,"r");
        //printf("%s",ptr);
        if(myfile){}
        else{
            printf("we dont have it");
            return 0;
        }
       // fclose(myfile);
      //   for(int i=counter;i>0;i--){
        //   chdir("..");
        //}
           moode=2;
     }        if (back_or_forward=='b'){
            flag=1;
        }
        else{
            flag=2;
        }
    char c;
    int i=1;
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
      if(moode==2){
            fopen(ptr,"r");
      }
      if(moode==1){
        fopen(d,"r");
      }
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
if(moode==1){
    copyfile("ab.txt",d);
}
if(moode==2){
    copyfile("ab.txt",ptr);
}
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
if(moode==1){
    copyfile("ab.txt",d);
}
if(moode==2){
    copyfile("ab.txt",ptr);
}

}







}


int main(){
    char *myptr=malloc(sizeof(char)*100);//for finding cat function
    char a[100];
    scanf("%[^\n]",a);
    if(strncmp(a,"cat-file",8)==0){
            if(a[8]=='+'){
                myptr=a;
                myptr=myptr+8;
            }
            else{
     myptr= strchr(a,'/');
            }
      cat(myptr);
    }
    else{}
    if(strncmp(a,"create",6)==0){ //for finding create_file function
        if(a[11]=='+'){
            myptr=a;
            myptr=myptr+11;
        }
        else{
            myptr=strchr(a,'/');
        }
        create_file(myptr);
    }
    if(strncmp(a,"insertstr",9)==0){
        if(a[14]=='+'){
            myptr=a;
            myptr=myptr+14;
        }
        else{
            myptr=strchr(a,'/');
        }
        //myptr=strtok(a,'-');
        char inserting[100];
        char f;
        int line;
        int positon;
        scanf("%s",inserting);
        scanf("%d",&line);
        f=getchar();
        scanf("%d",&positon);
        inserstr(line,positon,inserting,myptr);
    }
    if(strncmp(a,"removestr",9)==0){
        if(a[14]=='+'){
            myptr=a;
            myptr=myptr+14;
        }
        else{
            myptr=strchr(a,'/');
        }
        int removing;
        int line;
        int position;
        char back_or_forward;
        char h;
        scanf("%d %d",&line,&position);
        printf("pos:");
        scanf("%d",&removing);
        h=getchar();
        back_or_forward=getchar();
        removestr(line,position,removing,back_or_forward,myptr);
    }
       if(strncmp(a,"copystr",7)==0){
        if(a[12]=='+'){
            myptr=a;
            myptr=myptr+12;
        }
        else{
            myptr=strchr(a,'/');
        }
        int copying;
        int line;
        int position;
        char back_or_forward;
        char h;
        scanf("%d %d",&line,&position);
        printf("pos:");
        scanf("%d",&copying);
        h=getchar();
        back_or_forward=getchar();
        copystr(line,position,copying,back_or_forward,myptr);
    }
       if(strncmp(a,"cutstr",6)==0){
        if(a[11]=='+'){
            myptr=a;
            myptr=myptr+11;
        }
        else{
            myptr=strchr(a,'/');
        }
        int removing;
        int line;
        int position;
        char back_or_forward;
        char h;
        scanf("%d %d",&line,&position);
        printf("pos:");
        scanf("%d",&removing);
        h=getchar();
        back_or_forward=getchar();
        cutstr(line,position,removing,back_or_forward,myptr);
    }


}




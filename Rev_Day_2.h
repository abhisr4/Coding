// character arrays
char a[100];
char a[]={'a','b','c'}; // charcter array is of size 3

// null character for character array
// null character -> ASCHII value 0

// for character arrays
// cout<<a<<endl;-> we will get the whole character array
(opertor overloading)

char s[10];
cin>>s; // null character will automatically added

// ------> read a sentence
cin.get() // reads a single character


void readLine(char a[],int maxLen, char delim='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!=delim){ //read untill i get a delimiter
        a[i]=ch;
        i++;
        if(i==maxLen-1){
            break;
        }
        ch=cin.get();
    }
    a[i]='\0';
    return;
}

cin.getline(a,1000,'\n'/*->delimiter*/);
character array, maxLen and delimiter

//check a string is palindrome or not

// remove consecutive duplicates in a string
// without an extra array. -> O(n) time and O(1) space
void function(char a[],int n){
    int l=strlen(a);
    if(l==1 or l==0){
        return;
    }
    int prev=0;
    for(int current=1;current<l;current++){
        if(a[current]!=a[prev]){
            prev++;
            a[prev]=a[current];
        }
    }
    a[prev+1]='\0';
    return;
}

//find the largest string-> for efficient store only 
// current and longest string-> dont consider the spaces
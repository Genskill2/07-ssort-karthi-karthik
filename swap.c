void swap_max(int b[],int l,int n){
int w=0;
int i=n;
for(;i<l;i++){
int k=0;
for(int j=n;j<l;j++){
if(b[i]<b[j]){
k++;
}
}
if(k==0){
break;
}
}
w=b[n];
b[n]=b[i];
b[i]=w;
}

void ssort(int b [], int l){
  for(int i=0;i<l;i++){
    swap_max(b,l,i);
  }
}
  

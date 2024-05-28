#include <iostream>

using namespace std;
//To trace the number of elements in list
int index=-1;
// Variable MAX_LIST is initialized
const int MAX_LIST = 6;

// Global array is declared
int myList[MAX_LIST];
//Function to create a List

void create()
{
    int n,i;
	cout<<"\nEnter the no.of elements to be added in the list";
	cin>>n;
	if(n<=MAX_LIST)
        for(i=0;i<n;i++){
            cin>>myList[i];
            index++;
    }
    else
        cout<<"\nThe size is limited. You cannot add data into the list";
}

//Function to insert element to the List
void insertElement()
{
    int i,data,pos;
    cout<<"\nEnter the data to be inserted";
    cin>>data;
    cout<<"\nEnter the position at which element to be inserted";
    cin>>pos;
    if (index+1>=MAX_LIST)
        cout<<"The list is full";
    else
    {


    if(index<MAX_LIST){
            for(i=index;i>=pos-1;i--){
                    myList[i+1]=myList[i];
            }
            index++;
            myList[pos-1]=data;

}
else
    cout<<"\nThe list is full";
}
 }
//Function to check empty
bool isEmpty(){
    if(index==-1)
        return true;

}
bool isFull(){
    if(index+1>=MAX_LIST)
        return true;

}

//Function to delete list element
void del(){
    int i,pos;
    cout<<"\nEnter the position of the data to be deleted";
    cin>>pos;
    cout<<"\nThe data deleted is "<<myList[pos-1];
    for(i=pos;i<=index;i++){
        myList[i-1]=myList[i];
    }
        index--;

}
void display(){
    int i;/*
    if(index==-1){
        cout<<"\nThe list is empty\n";
    }*/

    for(i=0;i<=index;i++)
        cout<<"\t"<<myList[i];
}
int searchElement(int elem){
    for(int i=0;i<MAX_LIST;i++)
    {
        if(myList[i]==elem){
            cout<<elem<<" found in the list at position="<<i<<endl;
            return i;
        }



    }
    cout<<elem<<" not in the list."<<endl;
    return -1;
}
int main()
{
    int elem;

    create();
    display();
    insertElement();
    cout<<isFull();
    display();
    del();
    cout<<endl;
    display();
    del();
     cout<<endl;
    display();
    del();
     cout<<endl;
    display();

    del();
     cout<<endl;
    display();
    /*cout<<"\nEnter element to be searched:"<<endl;
    cin>>elem;
    searchElement(elem);
    insertElement();
    cout<<endl<<endl;
    display();
    del();
    cout<<endl<<endl;
    display();*/
    return 0;
}

/*








void addAt(int[],int,int);
void removeAt(int[],int,int);
int getSize(int[],int);
bool isEmpty(int[], int);
bool isFull(int[],int);
void acceptElement(int[],int);
void printElement(int[],int);

int main()
{
    int myArray[]={10,20,30,40,50,60};
    //cout << "Hello world!" << endl;
    return 0;
}
int getSize(int myArray[], int array_size){
    int count=0;
      for(int i=0;i<array_size;i++)
        if(myArray[i]==0)
            count++;
    return count;

}
void acceptElement(int myArray[],int array_size){
    for(int i=0;i<array_size;i++){
        cin>>myArray[i];
    }
}
void printElement(int myArray[],int array_size){
    for(int i=0; i<array_size;i++){
        cout<<myArray[i]<<" ";
    }

}
void addAt(int myArray[],int array_size, int element, int position){
    if(getSize()==0)
        myArray[0]==element;
    else if(position==getSize()-1)
        myArray[position]=element;
    else{
        if(!isEmpty()){

        for(int j=position+1;j<getSize()-position-1){
            //temp=myArray[postion];
            myArray[j+1]=myArray[position];
        myArray[position]=element;
       }
        }

    }


}*/

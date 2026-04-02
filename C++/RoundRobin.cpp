//"Round Robin CPU Scheduling Design an OS task manager that gives 10ms of CPU time to each running app in a continuous, infinite loop."
#include<iostream>
#include<cstring>
#define QUANTUM 10

using namespace std;

typedef struct Process{
    string processName;
    int processTime;
    Process* next;
    Process(string name,int time):processName(name),processTime(time){
        this->next=nullptr;
    }
}Process;

class RoundRobin{
    private:
        Process* head;
    public:   
        RoundRobin(){
            this->head=nullptr;
        }
        void addProcess(string,int);
        void deleteProcess(string);
        void roundrobin();
};

int main(){
    RoundRobin obj;
    obj.addProcess("A",13);
    obj.addProcess("B",21);
    obj.addProcess("C",7);
    obj.roundrobin();
    return 0;
}
void RoundRobin::addProcess(string name,int time){
    Process* newProcess=new Process(name,time);
    if(head==nullptr){
        head=newProcess;
        newProcess->next=head;
        return;
    }
    Process* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newProcess;
    newProcess->next=head;
    return;
}

void RoundRobin::deleteProcess(string name){
    if(head==nullptr){
        return;
    }
    
    Process* temp=head;
    while(temp->next->processName!=name){
        temp=temp->next;
    }
    
    Process* toDelete=temp->next;
    if(toDelete->next==toDelete){
        head=nullptr;
    }else{
        if(toDelete==head){
            Process* last=head;
            while(last->next!=head) last=last->next;
            head=head->next;
            last->next=head;
        }else{
            temp->next=toDelete->next;
        }
    }
    delete toDelete;
}
void RoundRobin::roundrobin(){
    if(head==nullptr){
        cout<<"No Process to run.";
        return;
    }
    Process* temp=head;
    while(head!=nullptr){

        if(temp->processTime>=QUANTUM) 
            temp->processTime-=QUANTUM;
        else
            temp->processTime=0;

        cout<<"Process Name : "<<temp->processName<<endl;
        cout<<"Process Time : "<<temp->processTime<<endl<<endl;
        Process* curr=temp->next;
        if(temp->processTime==0){
            deleteProcess(temp->processName);
            if(head==nullptr) break;
        }
        temp=curr;
    }
}
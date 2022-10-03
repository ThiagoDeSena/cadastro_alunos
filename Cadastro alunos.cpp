/******************************************************************************

Usando struct, crie um programa que receba o cadastro de um aluno com matrícula,
nome e curso e imprima os dados cadastrados em seguida.


*******************************************************************************/
#include <iostream>

using namespace std;

struct Aluno{
    long int matricula;
    string nome;
    string curso;
    
    void cadastro(long int mat,string nom,string curs ){
        matricula=mat;
        nome=nom;
        curso=curs;
    }
    
    void mostra()
    {
        cout<<"\n\nMatricula: "<<matricula<<endl;
        cout<<"Nome: "<<nome<<endl;
        cout<<"Curso: "<<curso<<endl;
    }
};

int main()
{
    Aluno aluno[4];
    long int m;
    string n,c;
    for(int i=0;i<4;i++){
    cout<<"Digite a matricula do aluno "<<i+1<<": ";cin>>m;
    cout<<"Digite o nome do aluno "<<i+1<<": ";getline(cin>>ws,n);
    cout<<"Digite o curso do aluno: "<<i+1<<": ";getline(cin>>ws,c);
    cout << "Aluno cadastrado com sucesso!"<<endl;
    cout<<endl<<endl;
    aluno[i].cadastro(m,n,c);
    }
    for(int i=0;i<4;i++){
        aluno[i].mostra(); 
    }
 
    

    return 0;
}



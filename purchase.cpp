#include<iostream>

using namespace std;

int main(){
	int i,j=3,n,d,a,b,k=0,m[50]={0};
	int c[50]={100};
	cin>>i>>d;
	int p[i][j];
	/*for(a=0;a<50;a++)
	{
		c[a]=100;
	}*/
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
			cin>>p[a][b];
		}
	}
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
		    if(p[a][b]>m[a]){
		    	m[a]=p[a][b];
			}
		}
	}
	/*for(a=0;a<50;a++)
	{
		cout << c[a] << endl;
	}*/
	for(a=0;a<i;a++){
		for(b=0;b<j;b++){
		    if(p[a][b]<c[a]){
		    	c[a]=p[a][b];
			}
		}
	}
	for(a=0;a<i;a++){
		if(m[a]-c[a]>=d){
			for(b=0;b<j;b++){
			
	             n+=p[a][b];
	         }
			k++;
		}
		   
	}
	/*for(a=0;a<i;a++)
	{
		cout << m[a] <<" " << c[a] << endl; 
	}*/
//	e=n/3;
	cout<<k<<" "<<n/3<<endl;

	//�@�}�l��X�o�Ͱ��D->�����ӫ~������ �����٬O�[�i�h�F(�`�M���F)? -> �N��̤j�̤p�ȥX�� ->�̤j�̤p�L�X���ˬd->�o�{�̤p�ȥX��->�̤p�ȥ����L�X���ˬd->�o�{�u���Ĥ@�ӬO�ڭ̭n����100->�o�{�y�k�z�Ѧ��~->��ܧ��for�ɤO���� 
} 

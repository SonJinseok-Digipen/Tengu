#include<Tengu.h>

//���⿡ Tengu Core.h + Tengu Application�� ���� �ٿ��ֱⰡ �ǰ�
//���⿡ Application*CreateApplication() �Լ��� ������ ����ٿ��ֱⰡ �Ǿ����� 
// entry point �ڵ尡 ����ٿ��ֱ� �Ǿ����� 



class SandBox : public Tengu::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}

};
Tengu::Application* Tengu::CreateApplication()
{
	return new SandBox();
}


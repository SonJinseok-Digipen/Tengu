#include<Tengu.h>

//여기에 Tengu Core.h + Tengu Application이 복사 붙여넣기가 되고
//여기에 Application*CreateApplication() 함수의 선언이 복사붙여넣기가 되어지고 
// entry point 코드가 복사붙여넣기 되어지고 



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


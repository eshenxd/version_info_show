#include "version_info_show.h"

#define DLLAPI  extern "C" __declspec(dllexport)


DLLAPI void  version_info_show(std::string name ,std::string function ,std::string author ,std::string time )
{
	std::cout<<"\n";
	std::cout<<"\n";

	std::cout<<"***************************************************************************\n";
	std::cout<<"\n";
	std::cout<<"                               ��ӭʹ��          \n";
	std::cout<<"                         "+name;
	std::cout<<"\n";
	std::cout<<"��Ϣ��\n";
	std::cout<<"     ��    �ܣ�"+function<<std::endl;
	std::cout<<"     ������λ��"+author<<std::endl;
	std::cout<<"     ����ʱ�䣺"+time<<std::endl;
	std::cout<<"\n";
	std::cout<<"***************************************************************************\n";
}
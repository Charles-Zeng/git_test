#ifndef _INTERFACE_H_
#define _INTERFACE_H_

#include <stdint.h>
#include <string>

namespace interface
{
	struct Address
	{
		std::string address;
	};
	struct Person
	{
		std::string name;
		std::string email;
	};
};

#endif // _INTERFACE_H_

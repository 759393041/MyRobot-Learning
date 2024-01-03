#pragma once
class hungry
{
private:
	hungry()
	{

	}
public:
	static hungry* hy;
public:
	hungry* getInstance()
	{
		if (hy==nullptr)
		{
			hy = new hungry();
		}

			return hy;

	}
};


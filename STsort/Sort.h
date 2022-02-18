#pragma once

namespace SortNS
{
	class Sort
	{
	public:
		Sort();
		virtual ~Sort();

		virtual void PrintfSort() = 0;
		virtual void MySort() = 0;

	private:

	};
}
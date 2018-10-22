#include <iostream>
//bubble sorting with an array
struct Player
{
	int mHp = 0;

	Player()
	{
		mHp = 0;
	}

	Player(int hp)
	{
		mHp = hp;
	}

	//bool operator > (const Player rhs)
	//{
	//	return (this->mHp > rhs.mHp) ? true : false;
	//}

	//bool operator < (const Player rhs)
	//{
	//	return (this->mHp < rhs.mHp) ? true : false;
	//}
};

Player BubbleSort(Player arr[])
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i].mHp < arr[j].mHp)
			{
				Player temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	
		}
	}

	return arr[0];
}

Player BubbleSort(Player arr[], bool asc)
{
	bool ascend = asc;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (ascend == 1)
			{
				if (arr[i].mHp < arr[j].mHp)
				{
					Player temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			else
			{
				if (arr[i].mHp > arr[j].mHp)
				{
					Player temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	return arr[0];
}

int main()
{
	Player Zero(10);
	Player One(25);
	Player Two(15);
	Player Three(5);
	Player Four(20);

	Player arr[5];

	arr[0] = Zero;
	arr[1] = One;
	arr[2] = Two;
	arr[3] = Three;
	arr[4] = Four;

	Player testAsc = BubbleSort(arr, 1);
	//expected result is Player Three{mHp == 5}
	Player testDes = BubbleSort(arr, 0);
	//expected result is Player One{mHp == 25}
}
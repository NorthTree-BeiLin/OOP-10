//-----------------------程序代码框架------------------------------


#include <iostream>
using namespace  std;


//------------------【child类】-----------------------------------
class Child             //1.定义小朋友节点类
{
public:
	int childNo;         //当前小孩的编号
	Child* leftchild;    //记录小孩对象的左邻居
	Child* rightchild;   //记录小孩对象的右邻居

public:

	Child(int id = 0) 	  //构造函数
	{
		childNo = id;
		leftchild = NULL;
		rightchild = NULL;
	}
};
//-------------------【Circle类】----------------------------------

class Circle               // 定义圆圈游戏类
{
public:
	int scale;             //当前-正在参与游戏的人数
	Child children[1000];  //最初-参与游戏的小孩对象

public:
	Circle(int num = 1000) // 带默认值构造函数：初始化小孩节点
	{
		scale = num;


		for (int i = 1; i <= num; i++)
		{
			children[i] = Child(i);
		}
	};

	//构建节点的循环链表函数：确立每个小孩的左右邻居
	void Build()
	{
		for (int i = 1; i <= scale; i++)
		{
			if (i == 1)
			{
				children[i].leftchild = &children[scale];
				children[i].rightchild = &children[2];

			}
			if (i == scale )
			{

				children[i].leftchild = &children[i - 1];
				children[i].rightchild = &children[1];
			}
			else
			{
				children[i].leftchild = &children[i - 1];
				children[i].rightchild = &children[i + 1];

			}                                              //分配左右邻居




			/*----请同学们自行补全代码----*/


		}

	}
	//游戏运行函数：从当前节点顺时针循环开始数num个数
	void Run(int T)
	{
		//int num = scale;
		int k;
		cout << "小孩的编号:";
		for (int i = 1; i <= scale; i++)
		{
			cout << children[i].childNo << '\t';
		}
		cout << endl << "开始！从第几个小孩开始游戏，请输入编号(k<109)：" << endl;
		cin >> k;
		//do {
			int count = 1;
			Child* current = &children[k];
			cout << "出列小孩的编号：\t";
			while (scale > 1)
			{

				//Quit the circle：小孩退出当前圆圈
				if (count == T)
				{
					current->leftchild->rightchild = current->rightchild;
					current->rightchild->leftchild = current->leftchild;
					count = 1;
					scale--;
					cout << current->childNo << '\t';
					current = current->rightchild;

					/*----请同学们自行补全程序代码----*/
				}


				else  //Count the next：继续数数游戏	            		
				{

					count++;
					current = current->rightchild;

					/*----请同学们自行补全程序代码----*/

				}
				
			}
			cout << endl << "The last child id is " << current->childNo << endl;
			//cout << "从第几个小孩开始游戏，请输入编号(k<109，以-1终止)：" << endl;
			//cin >> k;
			//scale = num;
			
		//} while (k != -1);
	}
};


//----------------------------主函数----------------------------------

int main()
{
	Circle nodes(21); // 圆圈类内有21个节点对象（小孩）

	nodes.Build();


	nodes.Run(7);      // 开始循环运行数“7”的游戏，输出最后的幸运者编号

	system("pause");

	return 0;
}




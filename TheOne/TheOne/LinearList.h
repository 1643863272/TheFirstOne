#pragma once

enum myBool{
	myFalse,
	myTrue
};

template <class T>
class Linearest {

public:
	virtual Linearest() = 0;
	virtual ~Linearest() = 0;

	virtual int Size()const = 0;     //最大容量长度
	virtual int Length()const = 0;   //当前长度
	virtual T Append(int pos,bool) = 0;        //在pos位置 添加元素
	virtual myBool Delete(int pos) = 0;   //在pos位置 删除元素
	virtual int Find(T toFind) = 0;       //查找给定值的第一次出现的位置（没有则为-1)
	virtual myBool getValue(int index, T& toAccept) = 0;   //获取index索引的元素
	virtual void setValue(int index, T& toSet) = 0;        //设置index索引的元素

	virtual myBool IsEmpty() = 0;   //判断是否为空
	virtual myBool isFull() = 0;    //判断是否是满的

	virtual Linearest<T> operator = (Linearest<T>& L) = 0;   //等号赋值(即复制)
};
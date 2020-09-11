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

	virtual int Size()const = 0;     //�����������
	virtual int Length()const = 0;   //��ǰ����
	virtual T Append(int pos,bool) = 0;        //��posλ�� ���Ԫ��
	virtual myBool Delete(int pos) = 0;   //��posλ�� ɾ��Ԫ��
	virtual int Find(T toFind) = 0;       //���Ҹ���ֵ�ĵ�һ�γ��ֵ�λ�ã�û����Ϊ-1)
	virtual myBool getValue(int index, T& toAccept) = 0;   //��ȡindex������Ԫ��
	virtual void setValue(int index, T& toSet) = 0;        //����index������Ԫ��

	virtual myBool IsEmpty() = 0;   //�ж��Ƿ�Ϊ��
	virtual myBool isFull() = 0;    //�ж��Ƿ�������

	virtual Linearest<T> operator = (Linearest<T>& L) = 0;   //�ȺŸ�ֵ(������)
};
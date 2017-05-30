#ifndef RecordBlock_hpp
#define RecordBlock_hpp

#include<string>
using std::string;

#define RECORD_LENGTH 512	//ÿ����¼����
#define EACH_BLOCK_RECORDS 16	//ÿ���������¼��

class Record {
public:
	bool empty;
	char data[RECORD_LENGTH];
};

class RecordBlock {
public:
	std::string tablename;	//������
	Record records[EACH_BLOCK_RECORDS];	//��¼
	int recordnum;	//���еļ�¼��Ŀ

	RecordBlock *pre, *next;	//ָ��ǰһ��ͺ�һ���ָ��

	bool dirty;		//�Ƿ��޸Ĺ�
	bool locked;	//�Ƿ�����

	RecordBlock();
	~RecordBlock();
};

#endif//RecordBlock_hpp
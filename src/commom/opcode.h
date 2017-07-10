#pragma once

//S  game server
//G  gate server
//C	 client
enum opcode
{
	//commom def
	OP_INVALID = 0,
	OP_HEART_BEAT_PING_PONG,			//����
	
	OP_SG_GS_BEGIN	= 0x40000000,
	OP_SG_GS_END	= 0x4000FFFF,
	OP_CS_SC_BEGIN	= 0x40010000,		//�ͻ��� ������
	OP_CS_SC_END	= 0x4001FFFF,		//�ͻ��� ������
	OP_SS_BEGIN		= 0x40020000,		//������ ������
	OP_SS_END		= 0x4002FFFF,		//������ ������
	
	OP_SG_AUTH = OP_SG_GS_BEGIN + 1,	//ע���������Ϣ
	OP_SG_REG_LISTEN_OP,				//�����������ӣ�У��
	OP_SG_CLIENT_AUTH,					//�ͻ��˵�¼��֪ͨgate
	OP_SG_KICK_CLIENT,					//�ߵ��ͻ�������
	OP_GS_CLIENT_SOCKET_CLOSE,			//�ͻ��˵���

	//commom def

	//game def
	//Ԥ��200��Э�飬��¼ǰʹ�ã���ȥһЩ���棬���õ���Ϣ
	OP_CS_LOGIN = OP_CS_SC_BEGIN + 1,
	OP_SC_LOGIN,

	OP_CS_SC_NEED_AUTH,

	OP_CS_GET_BASE_INFO,
	OP_SC_GET_BASE_INFO,


	OP_SS_HELLO = OP_SS_BEGIN+1,
	//game def

	OP_COUNT,
};
#pragma once
#include "RawDevice.h"

//#define NO_DEVICE
//#define NO_DB
typedef int ( *ProgressFunc)( int nPack,void *pData);

//#define _DEVICE_VER_1021 0x1021
#define _DEVICE_VER_1020 0x1020


#define COMM_DCB "9600,n,8,1"		//ͨ�ű�׼

#define SEND_RECIEVE_CHECKOUT//cxl 2006-9-25 ʹ���ͽ���ʱ��У��

#define ERR_DEVICE_NOERROR 0
#define ERR_DEVICE_FUNCERR (0x01000001)
//#define ERR_DEVICE_MACHERR (0x01000002)
//#define ERR_DEVICE_SYSERR  (0x01000004)
#define ERR_DEVICE_CAMERA  (0x01000008)
#define ERR_DEVICE_CHECKOUT  (0x01000010)//cxl 2006-9-25 У������յ���λ������������
#define ERR_DEVICE_NO_DATA   (0x01000011)//û���յ���λ��������(���ڿ��ܲ�ͨ)
#define ERR_DEVICE_RECV_NULL		(0xFFFF00FF)		//�յ�������Ϊ��
#define ERR_DEVICE_RECV_ILLEGAL		(0xFFFF00FE)		//���յ������ݲ��Ϸ�(��ʼ����������,�������)
#define ERR_DEVICE_COM_OPEN			(0xFFFF00FD)		//�˿���صĳ���
#define ERR_DEVICE_COM_SEND			(0xFFFF00FC)		//�˿ڷ��͵ĳ���
#define ERR_DEVICE_COMM_LEN			(0xFFFF0001)	//����ȴ�

#define ERR_DEVICE_PORT_FUNCERR (0x01000005) //�򿪴���
#define ERR_DEVICE_SEND_FUNCERR (0x01000006) //��������
#define ERR_DEVICE_RECV_FUNCERR (0x01000007) //��������
#define ERR_DEVICE_COMM_FUNCERR (0xfcfcfcfc) //����������ֽڲ�Ϊ01,02
#define ERR_DEVICE_TIME_FUNCERR (0xfdfdfdfd) //ʱ���
#define ERR_DEVICE_EKEY_FUNCERR (0xfefefefe) //��Կ��

#define ERR_DEVICE_EFROM_FUNCERR (0xe2e2e2e2) //��Ƭ��дEFROM����
#define ERR_DEVICE_COMMU_FUNCERR (0xeeeeeeee) //����λ��ͨ��������λ��У����������
#define ERR_DEVICE_SEAL_FUNCERR (0xf8f8f8f8) //��Ƭ����ӡ�����г���,(0xF4-0xF8)
#define ERR_DEVICE_SEAL_ORIGIN_FUNCERR (0xffffffff) //��Ƭ��մӡ������г���,(0xF9 0xFA 0x FF)

#define ERR_DEVICE_SEAL_MOVE_FUNCERR (0xe1e1e1e1)//��Ƭ����ӡǰ��⵽��ֽ�ſ�
#define ERR_DEVICE_SEAL_DOWN_FUNCERR (0xe3e3e3e3)//��Ƭ����ӡ���⵽��ֽ�ſ�
#define ERR_DEVICE_AUTH_ERR          (0x000000E5)//��֤�����
#define ERR_DEVICE_CAM_ID_ERR          (0x000000E6)//���ID����

#define ERR_REG_FILE_ERR          (0x000000E7)//��ȡע���ļ�����
#define ERR_REG_FILE_ID_ERR       (0x000000E7)//ע���ļ�ID����

#define AppName "������ӥͨ��ӡ�¹���ϵͳ"
#define IDWF_TACKPHOTO                  WM_USER + 101

//���շ�Χ��ʼֵ
#define INIT_MULX 9345 //
#define INIT_MULY 9305 //
#define INIT_ADDX 6547 
#define INIT_ADDY 3063

//������ò���
#define RZ300MAXWIDTH		2048 //1280
#define RZ300MAXHEIGHT		1536 //1024
#define RZ500MAXWIDTH		2592//2560
#define RZ500MAXHEIGHT		1944

#define OFFSETX			0
#define OFFSETY			0


#define M30NEW
//#define ASYSAVE

#define M30DEBUG

#define COUNT_TIME		//���¼�ʱ
#define PRESSURE_TIME	1000
#define OUTPUTDPI 200
#define OUTFILEFORMAT 3	//ͼ���ļ���ʽ 1: bmp 2:gif 3:jpg 4:png 6:tif 

#ifdef M30NEW
//M30_new
//#define M30_X_OFFSET						3700
#define M30_X_OFFSET						5200
#else
//M30_old
#define M30_X_OFFSET						1600
#endif


#define KSTEPS_PER_MM    17.7
#define XSTEPS_PER_PIXEL	 4.3
#define YSTEPS_PER_PIXEL	 4.3

#define MAX_SEAL	 6//���ӡ����Ŀ
#define REM_INF_LEN  11//�ָ���Ϣ����
//�豸�¼�����
#define DE_HARDWAREFAILURE						0
#define DE_BEFORE_CONNECT						1
#define DE_POST_CONNECT							2
#define DE_BEFORE_DISCONNECT					3
#define DE_POST_DISCONNECT						4
#define DE_BEFORE_SAVELASTFILESTATE				5
#define DE_POST_SAVELASTFILESTATE				6
#define DE_BEFORE_SAVECOORDCONVERTOR			7
#define DE_POST_SAVECOORDCONVERTOR				8
#define DE_BEFORE_SAVESEALPRESSURE				9
#define DE_POST_SAVESEALPRESSURE				10
#define DE_BEFORE_SAVECAMERAVIEWPORTREVISE		11
#define DE_POST_SAVECAMERAVIEWPORTREVISE		12
#define DE_BEFORE_LIGHTOFF						13
#define DE_POST_LIGHTOFF						14
#define DE_BEFORE_LIGHTON						15
#define DE_POST_LIGHTON							16
#define DE_BEFORE_LOCKDOOR						17
#define DE_POST_LOCKDOOR						18
#define DE_BEFORE_UNLOCKDOOR					19
#define DE_POST_UNLOCKDOOR						20
#define DE_BEFORE_USBOFF						21
#define DE_POST_USBOFF							22
#define DE_BEFORE_USBON							23
#define DE_POST_USBON							24
#define DE_BEFORE_TACKUPSEAL					25
#define DE_POST_TACKUPSEAL						26
#define DE_BEFORE_PUTDOWNSEAL					27
#define DE_POST_PUTDOWNSEAL						28
#define DE_BEFORE_SELECTSEAL					29
#define DE_POST_SELECTSEAL						30
#define DE_BEFORE_LOCKEXIT						31
#define DE_POST_LOCKEXIT						32
#define DE_BEFORE_UNLOCKEXIT					33
#define DE_POST_UNLOCKEXIT						34
#define DE_BEFORE_RESET							35
#define DE_POST_RESET							36
#define DE_BEFORE_SAVEDATA						37
#define DE_POST_SAVEDATA						38
#define DE_BEFORE_LOADDATA						39
#define DE_POST_LOADDATA						40
#define DE_BEFORE_GETGENERALSTATE				41
#define DE_POST_GETGENERALSTATE					42
#define DE_BEFORE_GETSEALSTATE					43
#define DE_POST_GETSEALSTATE					44
#define DE_BEFORE_GETSWITCHSTATE				45
#define DE_POST_GETSWITCHSTATE					46
#define DE_BEFORE_TACKUPPAGEHANDLE				47
#define DE_POST_TACKUPPAGEHANDLE				48
#define DE_BEFORE_PUTDOWNPAGEHANDLE				49
#define DE_POST_PUTDOWNPAGEHANDLE				50
#define DE_BEFORE_MOVE							51
#define DE_POST_MOVE							52
#define DE_BEFORE_SINGLESEAL					53
#define DE_POST_SINGLESEAL						54
#define DE_POST_RESETSEAL						55
#define DE_BEFORE_RESETSEAL						56
#define DE_POST_ROTATESEAL						57
#define DE_BEFORE_ROTATESEAL					58
#define DE_MAX_EVENT                            59


//������״̬λ
#define Y_AT_NEAR		0x01//	0λ��1��Y��ԭ�㵽λ��0��Y��ԭ��δ��λ
#define Y_AT_FAR		0x02//	1λ��1��Y��Զ�㵽λ��0��Y��Զ��δ��λ
#define X_AT_NEAR		0x04//	2λ��1��X��ԭ�㵽λ��0��X��ԭ��δ��λ
#define X_AT_FAR		0x08//	3λ��1��X��Զ�㵽λ��0��X��Զ��δ��λ
#define EXIT_CLOSE		0x10//	4λ��1����ȫ�Źرգ�0����ȫ��û�йر�
#define DOOR_CLOSE		0x20//	5λ��1����ֽ�Źرգ�0����ֽ��û�йر�
#define USB_ON			0x40//	6λ��1��usb��״̬��0��usb�ر�״̬
#define EXIT_MACH		0x80//	7λ��1����ȫ�Ż�е��״̬��0����ȫ�Ż�е�ر�״̬


#pragma pack(1)

extern void addBCDLog(void* Head,void*bcd,size_t nSize,bool bUseLog);


enum DEVICE_TYPE
{
	DEVICE_TYPE_VIRTUAL=0,//��
	DEVICE_TYPE_ONE=1,
	DEVICE_TYPE_S_24=1,//������תƽ̨ ��ӡ��
	DEVICE_TYPE_A02=1,//����
	DEVICE_TYPE_STORER=3,//�¿�ץ�£�6�£�
	DEVICE_TYPE_BARREL=4,//�¿�ת�£�Ͱ״����6�£�
	DEVICE_TYPE_BARREL_BORD=5,//�¿�ת�£�Ͱ״���������ҳ�壨4�£�
	DEVICE_TYPE_M_10=6,//M10,��0�ȣ�180��ת�£�
	DEVICE_TYPE_S_11=7,
	DEVICE_TYPE_M_11= 8,
	DEVICE_TYPE_M_30=9,	//M30
	DEVICE_TYPE_M_40=10,	//M40
	DEVICE_TYPE_M_20=11,	//M20
	DEVICE_TYPE_S_31=12,	//S31
	DEVICE_TYPE_S_30R=13,//M11,S11 ����תƽ̨(����0�ȣ�90�ȣ�180��ת��)
	DEVICE_TYPE_S_30//������תƽ̨ ��ӡ��
};
enum CAMA_TYPE
{
	VirtualCamera  =0,
	HQCameraType = 1,
	FCCameraType = 2,
	RZ300CameraType = 3,
	RZ500CameraType = 4,
	WJ500CameraType = 5
};
//λ��
union COORDINATE_CONVERTOR
{
	struct
	{
		float dFactorX1;
		float dFactorX2;
		float dFactorY1;
		float dFactorY2;
		float dOffsetX;
		float dOffsetY;
	};
	char Convertor[32];
};

struct MACH_PARAMETER
{
	COORDINATE_CONVERTOR coordConvertor[MAX_SEAL];//����λ�ò���
	char szCameraID[32];	//������
	char szTimeStamp[32];	//ʱ���
	char szSealInfo[32];	//ӡ�°�װ״̬
};

#pragma pack()


extern void BCD2ASCII(char *ascii_buf, const char *bcd_buf, long  bcd_len);


class CDevice4xEx 
{
	//char m_szMainKey[8];
	//char m_szBackKey[8];
protected:
	void SetErrorCode(long error);
	CRawDevice & GetDevice();
private:
	CRawDevice m_RawDevice;
	long m_ErrorCode;
	long m_lDeviceID;				//load from machine, read only
	short m_MachineVer;
	char m_szKeyR0[8];				//load from database
	char m_szKeyR1[8];				//load from machine, read only
	char m_szKeyR3[8];				//���ļ��ж�ȡ
	
	CString m_strCommPort;
	CString m_strMachineModel;
	long m_SealCount;   
	CString m_SealName[MAX_SEAL];
	CString m_SealSubName[MAX_SEAL];
	CString m_strCameraID;
	CString m_strTimeStamp;
	CString m_strSealInfo;

	//saved parameters, loaded at initial, read from cache and can be saved
	COORDINATE_CONVERTOR m_CoordConverter[MAX_SEAL];//λ��
	BYTE m_SealPressure[MAX_SEAL];
	long m_SealUsedCount[MAX_SEAL];
	byte m_SealType[MAX_SEAL];
	__int64 m_CamerID;
	int m_iSerialOverTime;
	long	m_nDataReg;
	MACH_PARAMETER m_MachParameter;

	bool m_bIsBK;
	bool m_bLogUsed;
	int m_nDeviceMode;
	long m_PacketNo;
	ProgressFunc m_ProgFun;
	void * m_pCallData;
public:
	//////////////////////////////////////////////////////////////////////////
	//properties's get/set operator

	//////////////////////////////////////////////////////////////////////////
	//ֻ������
	//////////////////////////////////////////////////////////////////////////

	//������
	long GetErrorCode() const;

	long DipInkpad();
	//////////////////////////////////////////////////////////////////////////
	//���Բ���
	//////////////////////////////////////////////////////////////////////////
	//���ݿ���Կ
	virtual void SetKeyR0(const char * key);
	virtual void SetKeyBKR0(const char * key);

	virtual const char *GetKeyR0() const;
	//����ID
	virtual void SetTimeStamp(CString id);
	virtual CString GetTimeStamp()const;

	//���ID
	virtual void SetCameraID(CString id);
	virtual CString GetCameraID()const;

	//ӡ�°�װ��Ϣ
	virtual void SetSealInfo(CString sealinfo);
	virtual CString GetSealInfo()const;

	//����ID
	virtual void SetMachineID(long id);
	virtual long GetMachineID()const;

	virtual void SetMachineVer(short ver);
	virtual short GetMachineVer()const;

	//������Կ
	virtual void SetKeyR1(const char *key);
	virtual const char *GetKeyR1() const;

	virtual void SetKeyR3(const char *key);
	virtual const char *GetKeyR3() const;
	//�˿� COM1, COM2, USB0 ....
	virtual void SetMachinePort(const char *port);
	virtual const char *GetMachinePort()const;
	//ӡ�¸���
	virtual void SetSealCount(long count);
	virtual long GetSealCount() const;
	//�����ͺ� A, B1,B2......
	virtual void SetMachineModel(const char *model);
	virtual const char *GetMachineModel() const;

	//ȡ��������ֵ
	//@param nSeal ӡ�±�ţ� 0 ��ʼ
	//@param convertor ������������ֵ
	virtual void GetCoordConvertor(int nSeal,  COORDINATE_CONVERTOR & convertor);
	//ȡ��ӡ����
	//@param nSeal ӡ�±�ţ� 0��ʼ
	//@return >=0 �ƶ����ӡ����ӡ����
	virtual long GetUsedCount(int nSeal);

	//���ID
	virtual long GetSynSealUsedCount(unsigned long * pSynData,unsigned long *pSealData2,unsigned char ucSealIndex);
	virtual long SetSynSealUsedCount(unsigned char ucSealIndex);
	virtual void SetSerialOverTime(int iTime);
	virtual int GetDataReg();
	virtual void SetDataReg(int nData);
	virtual long LoadSealUsedCount();
	virtual void SetSealName(int nSeal,CString &sealName);
	virtual CString GetSealName(int nSeal);


private:
	long LoadSealPressure();
	long LoadCameraID();
protected:

	//////////////////////////////////////////////////////////////////////////
	virtual long CommWithDevice(int cmd, const char *pIutput, long inLen, char *pOutput, long *outLen,bool bDouble=false);
	virtual long CommWithDeviceBK(const char *CmdCode,const long lCmdLen,const char *RetCmdCode,const long lRetCmdLen,
		const char *pIutput, long inLen, char *pOutput, long *outLen);
	
	virtual long HandShake(char*);
	virtual long HandShakeM10(char* strKeyR1);
	//������
	virtual long GetGeneralDetect(unsigned char &state);
	//ӡ�¼��
	virtual long GetSealState(unsigned char &state);
	//���뿪�ؼ��
	virtual long GetSwitchState(unsigned char &state);

	virtual void ReSetMachType(char*pBuf);
	//////////////////////////////////////////////////////////////////////////
public:

	CDevice4xEx();
	virtual ~CDevice4xEx();

	//////////////////////////////////////////////////////////////////////////
	//����
	//////////////////////////////////////////////////////////////////////////

	//��������
	//@param pParam ���Ӳ����������ͺŲ�ͬ�����в�ͬ����
	virtual long Connect(void *pParam=NULL);
	///��ӡ����λ����
	virtual long ResetMachine();
	//���ݴ洢
	virtual long SaveData(unsigned long address, void *data, unsigned char len);
	//���ݶ�ȡ
	virtual long LoadData(unsigned long address, void *data, unsigned char *len);

	virtual long SaveCoordConvertor(int nSeal, COORDINATE_CONVERTOR & convertor,BOOL bCopy=FALSE);
	 
	
	//////////////////////////////////////////////////////////////////////////
	//״̬���
	//////////////////////////////////////////////////////////////////////////
	virtual long IsSealReset();
	virtual long IsDoorOpened();
	virtual long IsExitOpened();
	virtual long IsExitMach();
	virtual long IsUSBOn();
	virtual long IsSealDownOK();
	virtual long IsSealUpOK();

	//////////////////////////////////////////////////////////////////////////
	//����
	//////////////////////////////////////////////////////////////////////////
	//�Լ�
	virtual long SelfExamine();
	//�Ͽ�����
	virtual void Disconnect();
	//�򿪵�
	virtual long LightOff();
	//�رյ�
	virtual long LightOn();
	//�رս�ֽ��
	virtual long LockDoor(void);
	//�򿪽�ֽ��
	virtual long UnlockDoor(void);
	//�򿪽�ֽ�ţ���ֹͣ��ʱ
	virtual long UnlockDoorEx(void);
	//USB�ӿڶϵ�
	virtual long UsbOff(void);
	//USB�ӿڼӵ�
	virtual long UsbOn(void);
	//̧��ӡ��ͷ
	virtual long TakeUpSeal(void);
	//ѹ��ӡ��ͷ
	virtual long PutDownSeal(void);
	//ѡ��ӡ��ͷ
	//@param nSeal ӡ�±��
	virtual long SelectSeal(int nSeal);
	//�رհ�ȫ��
	virtual long LockExit();
	//�򿪰�ȫ��
	virtual long UnlockExit();
	/**ӡ��ƽ̨�ƶ�
	 * @param X��X�Ჽ��
	 * @param Y��Y�Ჽ����
	 * @param DIR��λ�Ʒ���
	 *	-	0λ��0��x����λ��
	 *	-	0λ��1��x����λ��
	 *	-	4λ��0��y����λ��
	 *	-	4λ��1��y����λ��
     */
	virtual long Move(unsigned short X,unsigned short Y, unsigned char direction=0);

	/** �����������
	 * @param X��X�Ჽ��
	 * @param Y��Y�Ჽ��
	 * @param SHAKE��ҡ��ӡ�£�����Ϊ0������Ҫҡ��ӡ�£�
     */
	 virtual long SingleSeal(unsigned short X, unsigned short Y, BYTE bShake=0);
	 virtual long SafeSeal(unsigned short X, unsigned short Y, BYTE bShake, BOOL bInkpad);
	 virtual long SingleSealNoInkpad(unsigned short X, unsigned short Y, BYTE bShake=0);
	//ӡ�¹�λ
	virtual long ResetSeal();
	//��ҳ��̧��δʵ�֣�
	virtual long TackUpPageHandle();
	//���·�ҳ��
	virtual long PutDownPageHandle();
	//ת��ӡ��ͷ
	virtual long RotateSeal(unsigned short angle);
	 long LoadPara();
	virtual long LoadParaEx();
	virtual long SaveParaEx();
	virtual long ExportParam();
	virtual long ImportParam();
	virtual long SavePosition(int i,COORDINATE_CONVERTOR &coordConverter);
	virtual long SaveMacAddress(char *strAuthCode,BYTE btType);
	virtual long CheckMacAddress(char* sAuthCode,long nType);
	virtual long LoadMacAddress(char* sAuthCode,long nType);
	virtual long SaveCameraID(unsigned __int64 nllCamID);
	virtual long SelectSealM10(int nSeal,int nAngle);
	virtual long HandleBK();
	//�رձ��尲ȫ��
	virtual long LockBKExit();
	//�򿪱��尲ȫ��
	virtual long UnlockBKExit();
	virtual long WriteDataBK(char *strData);
	virtual long ReadDataBK(char *strData);
	virtual long CheckAuthCodeBK(char *strData);
	long CreateKeyInitValue_B(void* value,DWORD dwSize);
	long LoadDataFromReg_B(void *value,DWORD *dwSize);
	long SaveDataFromReg_B(void* value,DWORD dwSize);
	virtual void SetMachParameter(MACH_PARAMETER param);
	virtual MACH_PARAMETER GetMachParameter();
	virtual void SetbIsBK(bool bBK);
	virtual bool GetbIsBK();
	virtual long SaveParaReg();
	virtual long LoadParaReg();
	virtual void SetLogUsed(bool bUsed);
	virtual bool GetLogUsed();

	virtual int GetDeviceMode();
	virtual void SetDeviceMode(int mode);
	virtual long LoadLastTimeMach(unsigned __int64 & llTime);
	virtual long SaveLastTimeMach(__time64_t ltime);
	virtual long LoadLastTimeReg(unsigned __int64 & llTime);
	virtual long SaveLastTimeReg(__time64_t ltime);
	virtual long SavePara(void * value,DWORD dwSize);
	virtual long LoadDataFromMach();
	virtual long SaveAllParaToMach(void *value,DWORD dwSize);
	virtual long SetProgressFunc(void *fun,void*pData);
	virtual byte GetSealType(int index);
	virtual byte SetSealType(int index,byte type);
	virtual long GetCurrentSeal(BYTE &btSeal,BYTE &btAngle);
	virtual long SetCurrentSeal(BYTE btSeal,BYTE btAngle);
	virtual long SetSealParam(BYTE len,char *param);
	virtual long ErrorState(bool isSetGet,int len,char* strParam);
	virtual long GetSealInstallState(char *param);
};




//////////////////////////////////////////////////////////////////////////
//���Բ���
//////////////////////////////////////////////////////////////////////////
inline long CDevice4xEx::GetErrorCode() const
{
	return m_ErrorCode;
}

//���ݿ���Կ
inline void CDevice4xEx::SetKeyR0(const char * key) 
{
	memcpy(m_szKeyR0,&key[0],8);

	char ch;
	for(int i = 0;i < 2;i ++)
	{
		ch = m_szKeyR0[i];
		m_szKeyR0[i] = m_szKeyR0[3-i];
		m_szKeyR0[3-i] = ch;

		ch = m_szKeyR0[i + 4];
		m_szKeyR0[i + 4] = m_szKeyR0[7 - i];
		m_szKeyR0[7 - i] = ch;
	}
}
//���ݿ���Կ
inline void CDevice4xEx::SetKeyBKR0(const char * key) 
{
	memcpy(m_szKeyR0,&key[0],8);

	char ch;
	for(int i = 0;i < 4;i ++)
	{
		ch = m_szKeyR0[i];
		m_szKeyR0[i] = m_szKeyR0[7 - i];
		m_szKeyR0[7 - i] = ch;
	}
}
inline const char *CDevice4xEx::GetKeyR0() const 
{
	return m_szKeyR0;
}

//����ID
inline void CDevice4xEx::SetTimeStamp(CString id)
{
	m_strTimeStamp=id;
}
inline CString CDevice4xEx::GetTimeStamp()const
{
	return m_strTimeStamp;
}

//���ID
inline void CDevice4xEx::SetCameraID(CString id)
{
	m_strCameraID=id;
}
inline CString CDevice4xEx::GetCameraID()const
{
	return m_strCameraID;
}

//ӡ��״̬
inline void CDevice4xEx::SetSealInfo(CString sealinfo)
{
	m_strSealInfo=sealinfo;
}
inline CString CDevice4xEx::GetSealInfo()const
{
	return m_strSealInfo;
}

//����ID
inline void CDevice4xEx::SetMachineID(long id)
{
	m_lDeviceID=id;
}
inline long CDevice4xEx::GetMachineID()const
{
	return m_lDeviceID;
}

inline void CDevice4xEx::SetMachineVer(short ver)
{
	m_MachineVer = ver;
}
inline short CDevice4xEx::GetMachineVer()const
{
	return m_MachineVer;
}

//������Կ
inline void CDevice4xEx::SetKeyR1(const char *key)
{
	memcpy(m_szKeyR1, key, 4);
}
inline const char *CDevice4xEx::GetKeyR1() const
{
	return m_szKeyR1;
}

//��֤�������Կ
inline void CDevice4xEx::SetKeyR3(const char *key)
{
	memcpy(m_szKeyR3, key, 8);
}
inline const char *CDevice4xEx::GetKeyR3() const
{
	return m_szKeyR3;
}
//�˿� COM1, COM2, USB0 ....
inline void CDevice4xEx::SetMachinePort(const char *port)
{
	m_strCommPort=port;
}
inline const char *CDevice4xEx::GetMachinePort()const
{
	return m_strCommPort;
}

//ӡ�¸���
inline void CDevice4xEx::SetSealCount(long count)
{
	m_SealCount=count;
}
inline long CDevice4xEx::GetSealCount() const
{
	return m_SealCount;
}
//�����ͺ� A, B1,B2......
inline void CDevice4xEx::SetMachineModel(const char *model)
{
	m_strMachineModel=model;
}
inline const char *CDevice4xEx::GetMachineModel() const
{
	return m_strMachineModel;
}


//ȡ��������ֵ
//@param nSeal ӡ�±�ţ� 0 ��ʼ
//@param convertor ������������ֵ
inline void CDevice4xEx::GetCoordConvertor(int nSeal,  COORDINATE_CONVERTOR & convertor)
{
	ASSERT(nSeal >= 0 && nSeal < MAX_SEAL);
	convertor=m_CoordConverter[nSeal];
}


//ȡ��ӡ����
//@param nSeal ӡ�±�ţ� 0��ʼ
//@return >=0 �ƶ����ӡ����ӡ����
inline long CDevice4xEx::GetUsedCount(int nSeal)
{
	return m_SealUsedCount[nSeal];
}

inline void CDevice4xEx::SetSerialOverTime(int iTime)
{
	m_iSerialOverTime = iTime;
}

inline int CDevice4xEx::GetDataReg()
{
	return m_nDataReg;
}


inline void CDevice4xEx::SetDataReg(int nData)
{
	m_nDataReg = nData;
}

inline void CDevice4xEx::SetMachParameter(MACH_PARAMETER param)
{
	m_MachParameter = param;
}
inline MACH_PARAMETER CDevice4xEx::GetMachParameter()
{
	return m_MachParameter;
}
inline void CDevice4xEx::SetbIsBK(bool bBk)
{
	m_bIsBK = bBk;
}
inline bool CDevice4xEx::GetbIsBK()
{
	return m_bIsBK;
}
inline int CDevice4xEx::GetDeviceMode()
{		   
	return m_nDeviceMode;
}
inline void CDevice4xEx::SetDeviceMode(int mode)
{
	m_nDeviceMode = mode;
}
inline void CDevice4xEx::SetLogUsed(bool bUsed)
{
	m_bLogUsed = bUsed;
}
inline bool CDevice4xEx::GetLogUsed()
{
	return m_bLogUsed;
}
inline long CDevice4xEx::SetProgressFunc(void *fun,void*pData)
{
	m_ProgFun = (ProgressFunc)fun;
	m_pCallData = pData;
	return 0;
}
inline void CDevice4xEx::SetSealName(int nSeal,CString &sealName)
{
	ASSERT(nSeal >= 0 && nSeal < MAX_SEAL);
	m_SealName[nSeal] = sealName;
}
inline CString CDevice4xEx::GetSealName(int nSeal)
{
	ASSERT(nSeal >= 0 && nSeal < MAX_SEAL);
	return m_SealName[nSeal];
}

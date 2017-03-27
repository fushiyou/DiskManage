#pragma once
#include <stdio.h>
#include <string.h>
#include <tchar.h>
#include <windows.h>
#include <setupapi.h>
#include <time.h>
#include "helper.h"

#pragma comment(lib,"Setupapi.lib")  


class CDiskMng
{
public:
    CDiskMng(void);
    ~CDiskMng(void);

    //��ȡ�ܴ�������

    //��ʼ������������
    DWORD CreateDisk(DWORD disk, WORD partNum = 1);

    //��ѯ���̷�����Ϣ
    DWORD GetDiskDriveLayout(YCHAR *disk, DRIVE_LAYOUT_INFORMATION_EX *driveLayout);

    //ɾ�����̷�����
    DWORD DestroyDisk(DWORD disk);

    //�����߼������Ų�ѯ������̺�
    DWORD GetPhysicalDriveFromPartitionLetter(YCHAR letter);

    //��ѯĳ����������ϵ����з���
    DWORD GetPartitionLetterFromPhysicalDrive(DWORD phyDriveNumber, YCHAR *letters);

    //��ȡ����ϵͳ���ڵ�������̺�
    DWORD GetSystemDiskPhysicalNumber();

    //��ʽ������ C,D,E
    DWORD FormatVolume(YCHAR letter);

    //��ѯ����������Ϣ
    DWORD GetDriveGeometry(YCHAR* strname, DISK_GEOMETRY *pdg);

    //��ȡ����������̱��
    DWORD GetAllPresentDisks(DWORD *pDisks);

    //��ȡ�����������
    //DWORD GetDiskCount();

protected:
    DWORD GetDevicePath(LPGUID lpGuid, YCHAR **pszDevicePath);
};


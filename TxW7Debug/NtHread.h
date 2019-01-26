#include<Ntifs.h>
#include<ntddk.h>
#include <wsk.h>
#include<intrin.h>
#include <ntstrsafe.h>
#include <WinDef.h>
#define MY_GET_NTBASEADDR_ERROR ((NTSTATUS)0xC000000001L)
#define MY_GET_KDENTRREDDEBUGGER_ERROR ((NTSTATUS)0xC000000002L)
#define MY_GET_KDDEBUGGERNOTPRESENT_ERROR ((NTSTATUS)0xC000000003L)
#define MY_GET_KDPITCHDEBUGGER_ERROR ((NTSTATUS)0xC000000004L)
#define MY_GET_KIDEBUGROUTINE_ERROR ((NTSTATUS)0xC000000005L)
#define MY_GET_KDPTRAP_ERROR ((NTSTATUS)0xC000000006L)
#define MY_GET_KDPSTUB_ERROR ((NTSTATUS)0xC000000007L)
#define MY_GET_KDDEBUGGERENABLED_ERROR ((NTSTATUS)0xC000000008L)
#define MY_GET_MOV_ERROR ((NTSTATUS)0xC000000009L)
#define kmalloc(_s) ExAllocatePoolWithTag(NonPagedPool, _s, 'SYSQ')
#define kfree(_p) ExFreePool(_p)
typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef float               FLOAT;
typedef FLOAT               *PFLOAT;
typedef DWORD *LPDWORD;
typedef int                 INT;
typedef unsigned int        UINT;
typedef unsigned int        *PUINT;

KIRQL WPOFFx64();
void WPONx64(KIRQL irql);
VOID OutPut(const char* fmt, ...);
VOID OutError(NTSTATUS Code);
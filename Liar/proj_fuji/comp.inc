      include \masm32\include\windows.inc
      include \masm32\include\masm32.inc
      include \masm32\include\gdi32.inc
      include \masm32\include\user32.inc
      include \masm32\include\kernel32.inc
      include \masm32\include\Comctl32.inc
      include \masm32\include\comdlg32.inc
      include \masm32\include\shell32.inc
      include \masm32\include\oleaut32.inc
      include \masm32\include\msvcrt.inc
      include \masm32\macros\macros.asm

      includelib \masm32\lib\masm32.lib
      includelib \masm32\lib\gdi32.lib
      includelib \masm32\lib\user32.lib
      includelib \masm32\lib\kernel32.lib
      includelib \masm32\lib\Comctl32.lib
      includelib \masm32\lib\comdlg32.lib
      includelib \masm32\lib\shell32.lib
      includelib \masm32\lib\oleaut32.lib
      includelib \masm32\lib\msvcrt.lib

include rsrc.inc


_DlgMainProc proto :dword,:dword,:dword,:dword
_WriteGsc proto :dword,:dword
_AddToList proto :dword,:dword
_GetText proto :dword
_RpcText proto :dword,:dword,:dword,:dword,:dword

_memcpy proto

.data?
	hInstance dd ?
	hWinMain dd ?
	hIcon dd ?
	
	szPathOri db 512 dup (?)
	szPathNew db 512 dup (?)
	
	nIndex dd ?
	
	lpIndex dd ?
	lpTemp dd ?
	lpFileBuff dd ?
	lpLineRecords dd ?
	lpText dd ?
	lpFileBuffTxt dd ?
	
	nFileSizeNew dd ?
	
	dwTemp dd ?
	
	szStringO db 256 dup (?)
	
.data
	szDisplayName db '������װ��',0
	szCantOpenLwgFile db '�޷���ԭ��Ŀ¼',0
	szCantSetPath db '�޷�������Ŀ¼��',0
	szPackingErr db '��װ�����г��ִ���',0
	szOver db '��װ�ɹ���',0
	szTxt db '*.txt',0
	
	
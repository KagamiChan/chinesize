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

_MyRLEData struct
	pSrc dd ?
	nSrcLen dd ?
	union
		pCodeTable dd ?
		pDestAlpha dd ?
	ends
	union
		nTableSize dd ?
		nAlphaSize dd ?
	ends
	pDest dd ?
	nDestSize dd ?
	nErrCode dd ?
_MyRLEData ends

_Bits struct
	curbits dd ?
	curbyte dd ?
	cache dd ?
	stream dd ?
	stream_length dd ?
_Bits ends


_LwgHeader struct
	magic dw ?
	version dw ?
	height dd ?
	width1 dd ?
	entries dd ?
	reserverd dd ?
_LwgHeader ends

_IndexAtom struct
	xpos dd ?
	ypos dd ?
	unk db ?
	offset1 dd ?
	length1 dd ?
	namelen db ?
	name1 db ?
_IndexAtom ends

_DlgMainProc proto :dword,:dword,:dword,:dword

_FoldLwg proto :dword,:dword

_FoldPic proto :dword,:dword
_RLECompress proto :ptr _MyRLEData,:dword,:dword
_BitsPutHigh proto :ptr _Bits,:dword,:dword
_PrepareFreqTable proto :dword,:dword,:dword,:dword
_ConvertDIB proto :ptr _MyRLEData,:dword,:dword
_memcpy proto

.data?
	hInstance dd ?
	hWinMain dd ?
	hIcon dd ?
	
	szFileOri db 512 dup (?)
	szPathDst db 512 dup (?)
	
	dwTemp dd ?
	
.data
	szDisplayName db 'BMPS2LWG',0
	szFormat2 db 'lwg�ļ�(*.lwg)',0,'*.lwg',0,'�����ļ�(*.*)',0,'*.*',0,0
	szCantOpenLwgFile db '�޷���lwg�ļ���',0
	szCantSetPath db '�޷��򿪷�װĿ¼��',0
	szPackingErr db '��װ�����г��ִ���',0
	szOver db '��װ�ɹ���',0
	szOverErr db '��װ��ɣ�����������һ��bmpû�гɹ���װ�����������ڸ�bmp��ʽ����ȷ��',0
	
	
#ifndef DIRECTX
#define DIRECTX

#include <d3dx9.h>

class CREATEDIRECTX {
public:
	LPDIRECT3D9 pDirectX;
	LPDIRECT3DDEVICE9 pDevice;
	// Direct3Dの初期化関数
	HRESULT InitD3d(HWND hWnd);
};


#endif // !1


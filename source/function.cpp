#include <windows.h>

const char g_szClassName[] = "myWindowClass";

// Step 4: the Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
        case WM_CLOSE:
            DestroyWindow(hwnd);
        break;
        case WM_DESTROY:
            PostQuitMessage(0);
        break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    //Step 1: Registering the Window Class
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = 0;
    wc.lpfnWndProc   = WndProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);

    if(!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window Registration Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    // Step 2: Creating the Window
    hwnd = CreateWindowEx(
        WS_EX_CLIENTEDGE,
        g_szClassName,
        "CALCOLATRICE",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
        NULL, NULL, hInstance, NULL);
	       
	CreateWindow(TEXT("button"), TEXT("CE"), 
    WS_VISIBLE | WS_CHILD,
    10, 10, 80, 25,
    hwnd, (HMENU) 1, NULL, NULL);

	CreateWindow(TEXT("button"), TEXT("%"), 
   WS_VISIBLE | WS_CHILD,
   100, 10, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("+"), 
   WS_VISIBLE | WS_CHILD,
   190, 10, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("-"), 
   WS_VISIBLE | WS_CHILD,
   280, 10, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("7"), 
   WS_VISIBLE | WS_CHILD,
   10, 40, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);  
   
   	CreateWindow(TEXT("button"), TEXT("8"), 
    WS_VISIBLE | WS_CHILD,
    100, 40, 80, 25,
    hwnd, (HMENU) 1, NULL, NULL);

	CreateWindow(TEXT("button"), TEXT("9"), 
   WS_VISIBLE | WS_CHILD,
   190, 40, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("/"), 
   WS_VISIBLE | WS_CHILD,
   280, 40, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("4"), 
   WS_VISIBLE | WS_CHILD,
   10, 70, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("5"), 
   WS_VISIBLE | WS_CHILD,
   100, 70, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL); 
   	CreateWindow(TEXT("button"), TEXT("6"), 
    WS_VISIBLE | WS_CHILD,
    190, 70, 80, 25,
    hwnd, (HMENU) 1, NULL, NULL);

	CreateWindow(TEXT("button"), TEXT("*"), 
   WS_VISIBLE | WS_CHILD,
   280, 70, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("1"), 
   WS_VISIBLE | WS_CHILD,
   10, 100, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("2"), 
   WS_VISIBLE | WS_CHILD,
   100, 100, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("3"), 
   WS_VISIBLE | WS_CHILD,
   190, 100, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL); 
   
      CreateWindow(TEXT("button"), TEXT("0"), 
   WS_VISIBLE | WS_CHILD,
   280, 100, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("."), 
   WS_VISIBLE | WS_CHILD,
   10, 130, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL);
   
   CreateWindow(TEXT("button"), TEXT("="), 
   WS_VISIBLE | WS_CHILD,
   100, 130, 80, 25,
   hwnd, (HMENU) 1, NULL, NULL); 
     
    if(hwnd == NULL)
    {
        MessageBox(NULL, "Window Creation Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Step 3: The Message Loop
    while(GetMessage(&Msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return Msg.wParam;
}

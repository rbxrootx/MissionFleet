// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B4F2 .. +0x5D bytes.
extern "C" __declspec(naked) void _OnUpdateFrameMenu_CFrameWnd__UAEXPAUHMENU_____Z_0052B4F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 37: jne 0x52b538
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x52b529
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 AC 00 00 00: call dword ptr [edx + 0xac]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 09: jne 0x52b538
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 27 5E 00: call dword ptr [0x5e27b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

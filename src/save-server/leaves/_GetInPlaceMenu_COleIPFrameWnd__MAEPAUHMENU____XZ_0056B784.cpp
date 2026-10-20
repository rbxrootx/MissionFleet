// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B784 .. +0x55 bytes.
extern "C" __declspec(naked) void _GetInPlaceMenu_COleIPFrameWnd__MAEPAUHMENU____XZ_0056B784() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 22ah
        push 67d38ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AF EA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 49 5D FC FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 22eh
        push 67d38ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 91 EA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}

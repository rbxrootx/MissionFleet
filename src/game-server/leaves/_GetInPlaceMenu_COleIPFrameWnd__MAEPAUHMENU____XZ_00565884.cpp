// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565884 .. +0x55 bytes.
extern "C" __declspec(naked) void _GetInPlaceMenu_COleIPFrameWnd__MAEPAUHMENU____XZ_00565884() {
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
        push 5d0bb4h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AF 58 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F8 C1 FD FF: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 22eh
        push 5d0bb4h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 91 58 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}

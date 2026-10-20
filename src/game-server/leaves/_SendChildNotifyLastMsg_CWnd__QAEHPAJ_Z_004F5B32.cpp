// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5B32 .. +0x43 bytes.
extern "C" __declspec(naked) void _SendChildNotifyLastMsg_CWnd__QAEHPAJ_Z_004F5B32() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 FB C8 04 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 B0 00 00 00: call dword ptr [edx + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

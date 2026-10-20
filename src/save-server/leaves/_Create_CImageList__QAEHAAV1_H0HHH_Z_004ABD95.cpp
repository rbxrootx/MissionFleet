// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABD95 .. +0x3A bytes.
extern "C" __declspec(naked) void _Create_CImageList__QAEHAAV1_H0HHH_Z_004ABD95() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 10 B3 68 00: call dword ptr [0x68b310]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 00 00 00: call 0x4abdcf
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

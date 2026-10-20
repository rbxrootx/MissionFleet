// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051C976 .. +0x42 bytes.
extern "C" __declspec(naked) void _OnKey_CDockContext__QAEXHH_Z_0051C976() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 75 16: jne 0x51c999
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 0E 00 00: call 0x51d7d6
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 10h
        ; Exact mapped bytes 75 13: jne 0x51c9b2
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 7ch
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 0E 00 00: call 0x51d7d6
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

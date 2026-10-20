// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024650 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_10024650_10024650() {
    __asm {
        mov edx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov edi, dword ptr [ecx + 8]
        mov esi, eax
        cmp edx, edi
        ; Exact mapped bytes 74 10: je 0x10024673
        __asm _emit 0x74
        __asm _emit 0x10
        push ebx
        mov ebx, dword ptr [edx]
        add edx, 4
        mov dword ptr [esi], ebx
        add esi, 4
        cmp edx, edi
        ; Exact mapped bytes 75 F2: jne 0x10024664
        __asm _emit 0x75
        __asm _emit 0xf2
        pop ebx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ecx + 8], esi
        pop edi
        mov dword ptr [esp + 8], edx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

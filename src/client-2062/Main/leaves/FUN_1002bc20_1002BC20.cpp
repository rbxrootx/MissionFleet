// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BC20 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_1002bc20_1002BC20() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 8]
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x1002bc44
        __asm _emit 0x74
        __asm _emit 0x1c
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push edi
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 8]
        push edi
        push ebx
        ; Exact mapped bytes E8 C4 4C FE FF: call 0x10010900
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [esi]
        test esi, esi
        ; Exact mapped bytes 75 F0: jne 0x1002bc32
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop ebx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

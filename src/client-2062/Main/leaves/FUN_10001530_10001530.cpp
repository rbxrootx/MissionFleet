// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001530 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_10001530_10001530() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 10h]
        mov eax, dword ptr [edi + 14h]
        cmp esi, eax
        ; Exact mapped bytes 74 11: je 0x1000154f
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 AB BA 00 00: call 0x1000cff0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 14h]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 EF: jne 0x1000153e
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        ret
    }
}

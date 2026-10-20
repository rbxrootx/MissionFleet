// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C7C4 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5884c7c4_5884C7C4() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 10h]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 04: jne 0x5884c7d4
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x5884c7e8
        __asm _emit 0xeb
        __asm _emit 0x14
        push dword ptr [esi]
        mov ecx, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3C 00 00 00: call 0x5884c81d
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x5884c7e8
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [esi], 0
        pop esi
        pop ebp
        ret
    }
}

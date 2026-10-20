// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58899659 .. +0x25 bytes.
extern "C" __declspec(naked) void Catch_All_58899659() {
    __asm {
        mov esi, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 10h]
        cmp esi, edi
        ; Exact mapped bytes 74 12: je 0x58899675
        __asm _emit 0x74
        __asm _emit 0x12
        mov ebx, dword ptr [ebp + 14h]
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 B2 87 EF FF: call 0x58791e20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x87
        __asm _emit 0xef
        __asm _emit 0xff
        add esi, 1ch
        cmp esi, edi
        ; Exact mapped bytes 75 F1: jne 0x58899666
        __asm _emit 0x75
        __asm _emit 0xf1
        xor ebx, ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 FA 35 0E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x35
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

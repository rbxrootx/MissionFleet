// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58899D49 .. +0x21 bytes.
extern "C" __declspec(naked) void Catch_All_58899d49() {
    __asm {
        mov esi, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 8]
        cmp esi, edi
        ; Exact mapped bytes 74 0E: je 0x58899d61
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, esi
        ; Exact mapped bytes E8 06 86 06 00: call 0x58902360
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 18h
        cmp esi, edi
        ; Exact mapped bytes 75 F2: jne 0x58899d53
        __asm _emit 0x75
        __asm _emit 0xf2
        xor ebx, ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 0E 2F 0E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2f
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}

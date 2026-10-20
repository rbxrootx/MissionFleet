// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734D00 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58734d00() {
    __asm {
        cmp byte ptr [esp + 4], 0
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        ; Exact mapped bytes 74 27: je 0x58734d36
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [esi + 18h], 10h
        ; Exact mapped bytes 72 21: jb 0x58734d36
        __asm _emit 0x72
        __asm _emit 0x21
        lea eax, [esi + 4]
        push ebx
        mov ebx, dword ptr [eax]
        test edi, edi
        ; Exact mapped bytes 76 0D: jbe 0x58734d2c
        __asm _emit 0x76
        __asm _emit 0x0d
        push edi
        push ebx
        push 10h
        push eax
        ; Exact mapped bytes E8 31 7F 24 00: call 0x5897cc5a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7f
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 10h
        push ebx
        ; Exact mapped bytes E8 10 7F 24 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7f
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        pop ebx
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], 0fh
        mov byte ptr [esi + edi + 4], 0
        pop edi
    }
}

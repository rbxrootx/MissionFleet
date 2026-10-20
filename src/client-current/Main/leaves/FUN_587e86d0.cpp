// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E86D0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_587e86d0() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [ecx + 10558h]
        test esi, esi
        ; Exact mapped bytes 74 62: je 0x587e873e
        __asm _emit 0x74
        __asm _emit 0x62
        cmp dword ptr [ecx + 10568h], 40000000h
        ; Exact mapped bytes 75 56: jne 0x587e873e
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ecx + 10490h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 43: jne 0x587e873e
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esi + 8]
        sub eax, edi
        sub ecx, edx
        add eax, eax
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 8], edx
        ; Exact mapped bytes DB 44 24 08: fild dword ptr [esp + 8]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 60 45 19 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x45
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E8 6B 45 19 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x45
        __asm _emit 0x19
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 63 1D 0F 00: call 0x588da4a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1d
        __asm _emit 0x0f
        __asm _emit 0x00
        pop edi
        pop esi
        pop ecx
        ret
    }
}

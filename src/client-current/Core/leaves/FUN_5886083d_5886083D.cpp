// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886083D .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_5886083d_5886083D() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ebx, [esi + 8]
        mov ecx, ebx
        ; Exact mapped bytes E8 06 0C 00 00: call 0x58861454
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 0E: je 0x58860860
        __asm _emit 0x74
        __asm _emit 0x0e
        lea edi, [esi + 18h]
        mov ecx, edi
        ; Exact mapped bytes E8 9A 0B 00 00: call 0x588613f6
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 12: jne 0x58860872
        __asm _emit 0x75
        __asm _emit 0x12
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 E5 03 00 00: call 0x58860c53
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 0B: je 0x5886087d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 EA D3 FF FF: call 0x5885dc63
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 EA: jne 0x58860867
        __asm _emit 0x75
        __asm _emit 0xea
        mov edi, dword ptr [esi + 70h]
        test edi, edi
        ; Exact mapped bytes 75 1D: jne 0x588608a1
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [esi + 28h], 1
        ; Exact mapped bytes 74 17: je 0x588608a1
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, ebx
        ; Exact mapped bytes E8 06 FE FF FF: call 0x58860697
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or ecx, 0ffffffffh
        cmp eax, ecx
        push eax
        cmove edi, ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 36 0B 00 00: call 0x588613d7
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        and eax, 1
        or eax, 0
        ; Exact mapped bytes 74 13: je 0x588608be
        __asm _emit 0x74
        __asm _emit 0x13
        mov esi, dword ptr [esi + 24h]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x588608be
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 B8 1B 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 ED 06 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        ; Exact mapped bytes EB A1: jmp 0x58860863
        __asm _emit 0xeb
        __asm _emit 0xa1
    }
}

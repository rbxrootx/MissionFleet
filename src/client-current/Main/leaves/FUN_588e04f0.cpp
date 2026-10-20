// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E04F0 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_588e04f0() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 6070h], 0
        ; Exact mapped bytes 74 1C: je 0x588e051b
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 14h]
        cmp eax, -1
        ; Exact mapped bytes 7E 13: jle 0x588e051b
        __asm _emit 0x7e
        __asm _emit 0x13
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push ecx
        mov ecx, dword ptr [esi + 7ch]
        push eax
        push edx
        ; Exact mapped bytes E8 25 6A E5 FF: call 0x58736f40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6a
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x588e05b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea ebx, [esi + 144ch]
        push edi
        mov edi, dword ptr [ebx + 0ch]
        cmp edi, dword ptr [ebx + 10h]
        ; Exact mapped bytes 76 05: jbe 0x588e053e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 34 C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, dword ptr [ebx]
        push ebp
        mov ebp, dword ptr [ebx + 10h]
        cmp dword ptr [ebx + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x588e054e
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 24 C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x588e0558
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x588e055d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 15 C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        cmp edi, ebp
        ; Exact mapped bytes 74 4D: je 0x588e05ae
        __asm _emit 0x74
        __asm _emit 0x4d
        test esi, esi
        ; Exact mapped bytes 75 33: jne 0x588e0598
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 08 C7 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588e0576
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 FC C6 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        cmp dword ptr [edi], ecx
        ; Exact mapped bytes 74 22: je 0x588e05a0
        __asm _emit 0x74
        __asm _emit 0x22
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x588e059c
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 EB C6 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x588e0593
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF C6 09 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        add edi, 4
        ; Exact mapped bytes EB A9: jmp 0x588e0541
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB D0: jmp 0x588e056c
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E9: jmp 0x588e0589
        __asm _emit 0xeb
        __asm _emit 0xe9
        push edi
        push esi
        lea edx, [esp + 18h]
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 D2 93 F6 FF: call 0x58849980
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xff
        pop ebp
        pop edi
        pop ebx
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

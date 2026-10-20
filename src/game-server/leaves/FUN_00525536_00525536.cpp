// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525536 .. +0x2D7 bytes.
extern "C" __declspec(naked) void FUN_00525536_00525536() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 2D: jne 0x52557b
        __asm _emit 0x75
        __asm _emit 0x2d
        push 3020h
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x52557b
        __asm _emit 0x74
        __asm _emit 0x12
        push 0
        push 0
        push 200h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 CE BE FC FF: call 0x4f1449
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1A EA 00 00: call 0x533f9d
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x5256e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3020h
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5255ba
        __asm _emit 0x75
        __asm _emit 0x14
        push 468h
        push 5c8174h
        ; Exact mapped bytes E8 4B F4 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5255ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5255a0
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 89 07 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8C 09 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 86 D3 FD FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        push 20h
        push 0
        push 0
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 68 07 01 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 80 26 5E 00: call dword ptr [0x5e2680]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x5256e4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 34 08 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        push 16h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 0A 08 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x525653
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 4
        ; Exact mapped bytes 73 5A: jae 0x5256b3
        __asm _emit 0x73
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx*4 + 5c8420h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 37: je 0x5256b1
        __asm _emit 0x74
        __asm _emit 0x37
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D9 D2 FD FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        push 15h
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 97: jmp 0x52564a
        __asm _emit 0xeb
        __asm _emit 0x97
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 F0 69 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        push 16h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 87 07 01 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 65 07 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 AC 9B FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 86 C1 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x5257e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 96 E8 00 00: call 0x533f9d
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x5257e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 3A 06 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 4B 08 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 87 69 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 21 06 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 14: jne 0x52575c
        __asm _emit 0x75
        __asm _emit 0x14
        push 493h
        push 5c8174h
        ; Exact mapped bytes E8 A9 F2 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52575c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x525742
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 00 08 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 88 27 5E 00: call dword ptr [0x5e2788]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push 16h
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ebp - 54h]
        push edx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 B4 06 01 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 FB 9A FC FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5257a7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 4
        ; Exact mapped bytes 73 3B: jae 0x5257e8
        __asm _emit 0x73
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx*4 + 5c8420h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 18: je 0x5257e6
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes FF 15 10 26 5E 00: call dword ptr [0x5e2610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x52579e
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 0E 96 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x525803
        __asm _emit 0x75
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E5 0E FD FF: call 0x4f66e8
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

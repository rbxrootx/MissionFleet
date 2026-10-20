// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873DC0 .. +0x21C bytes.
extern "C" __declspec(naked) void FUN_58873dc0() {
    __asm {
        push -1
        push 589863a8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 20h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov eax, dword ptr [esp + 34h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 6A 01 00 00: jne 0x58873f5e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        cmp eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 0F 84 C2 01 00 00: je 0x58873fc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 75 0C: jne 0x58873e18
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 1D F2 FF FF: call 0x58873030
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 75 0C: jne 0x58873e2c
        __asm _emit 0x75
        __asm _emit 0x0c
        push -1
        ; Exact mapped bytes E8 09 F2 FF FF: call 0x58873030
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9A 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 75 3B: jne 0x58873e6f
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edx, edx
        cmp dword ptr [eax + 1ch], 64h
        push edx
        push edx
        push edx
        ; Exact mapped bytes 7D 18: jge 0x58873e5c
        __asm _emit 0x7d
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        push 2
        push 80011034h
        ; Exact mapped bytes E8 19 CE 0F 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 12h
        ; Exact mapped bytes E8 8D 7C EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 0E EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0e
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 75 0C: jne 0x58873e83
        __asm _emit 0x75
        __asm _emit 0x0c
        push 2
        ; Exact mapped bytes E8 02 FE FF FF: call 0x58873c80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 75 0C: jne 0x58873e97
        __asm _emit 0x75
        __asm _emit 0x0c
        push 1
        ; Exact mapped bytes E8 EE FD FF FF: call 0x58873c80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 75 0C: jne 0x58873eab
        __asm _emit 0x75
        __asm _emit 0x0c
        push 3
        ; Exact mapped bytes E8 DA FD FF FF: call 0x58873c80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 75 78: jne 0x58873f2b
        __asm _emit 0x75
        __asm _emit 0x78
        xor edx, edx
        mov dword ptr [esp + 0ch], 5899688ch
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [esp + 28h], edx
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x58873fc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 2ch]
        cmp eax, edx
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x58873fc6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 4
        push eax
        push ecx
        mov ecx, esi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 74 17: je 0x58873f14
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 2E FA FF FF: call 0x58873930
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 E1 F1 FF FF: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 67 FB FF FF: call 0x58873a80
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esi + 84h], edi
        ; Exact mapped bytes E8 CA F1 FF FF: call 0x588730f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58873fc6
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 98h]
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x58873fc6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edx, edx
        push edx
        push edx
        push edx
        push 79h
        cmp dword ptr [ecx + 0d78h], edx
        ; Exact mapped bytes 0F 84 0E FF FF FF: je 0x58873e5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9B 7B EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7b
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 14 66 EF FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x58873fc6
        __asm _emit 0xeb
        __asm _emit 0x68
        cmp eax, 3
        ; Exact mapped bytes 75 4E: jne 0x58873fb1
        __asm _emit 0x75
        __asm _emit 0x4e
        mov edi, dword ptr [esp + 30h]
        cmp edi, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 75 07: jne 0x58873f76
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899ee80h
        ; Exact mapped bytes EB 1C: jmp 0x58873f92
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp edi, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 75 07: jne 0x58873f85
        __asm _emit 0x75
        __asm _emit 0x07
        push 5899ee54h
        ; Exact mapped bytes EB 0D: jmp 0x58873f92
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp edi, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 75 39: jne 0x58873fc6
        __asm _emit 0x75
        __asm _emit 0x39
        push 5899ee34h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 32h
        push 0c8h
        push edi
        ; Exact mapped bytes E8 11 E7 EE FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe7
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x58873fc6
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x58873fc6
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [esp + 30h]
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 4A E6 EE FF: call 0x58762610
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe6
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [esp + 20h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        add esp, 20h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004198EA .. +0x299 bytes.
extern "C" __declspec(naked) void FUN_004198ea_004198EA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579ccdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 50h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5ch]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 44h], ecx
        push 0a5h
        push 5a1360h
        push 24h
        ; Exact mapped bytes E8 07 37 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0F: je 0x41994e
        __asm _emit 0x74
        __asm _emit 0x0f
        push 18h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 47 75 FF FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x419955
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x419975
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x419b67
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        add edx, 64h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 EE 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x4199c6
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 44h]
        add eax, 64h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3B EE 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 76 FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 5a13e4h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 02 76 FF FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 47: jmp 0x419a0d
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x419a06
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1A: je 0x4199f8
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 ED ED 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4199ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x419b67
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x419ae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 0A FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x419a98
        __asm _emit 0x74
        __asm _emit 0x75
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 0A FF FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A 0A FF FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 1
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA D7 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x419a96
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x419a8c
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x419a7e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 67 ED 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x419a85
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, 1
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x419b67
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x419adf
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x419ad8
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1A: je 0x419aca
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 1B ED 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x419ad1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x419b67
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x419b25
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x419b21
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1A: je 0x419b13
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 D2 EC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x419b1a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x419b67
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x419b65
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 1A: je 0x419b57
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 8E EC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x419b5e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 5ch
        cmp ebp, esp
        ; Exact mapped bytes E8 63 EC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

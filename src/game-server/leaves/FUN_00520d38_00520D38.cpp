// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00520D38 .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_00520d38_00520D38() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        push 28fh
        push 5cc9cch
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 09 A4 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x520d71
        __asm _emit 0x75
        __asm _emit 0x14
        push 290h
        push 5cc9cch
        ; Exact mapped bytes E8 94 3C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x520d71
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x520d57
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x520db3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 23 18 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F 8D 74 01 00 00: jge 0x520f3b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 27 FF FF FF: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x520ec0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x520ec0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 53 4F 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A5 B2 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 57 1B FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x520e30
        __asm _emit 0x74
        __asm _emit 0x14
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3F 50 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 14: jmp 0x520e44
        __asm _emit 0xeb
        __asm _emit 0x14
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 2B 50 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        sub edx, 1
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7E 08: jle 0x520e54
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 34: jmp 0x520e88
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x520e6e
        __asm _emit 0x74
        __asm _emit 0x14
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 01 50 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 14: jmp 0x520e82
        __asm _emit 0xeb
        __asm _emit 0x14
        lea ecx, [ebp - 48h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 ED 4F 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        sub edx, 1
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x520ea4
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 28h]
        setg al
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 0E: jmp 0x520eb2
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 24h]
        setg dl
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 06: je 0x520ebe
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 76: jmp 0x520f36
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 2B 0D AC E8 5D 00: sub ecx, dword ptr [0x5de8ac]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x520ee6
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 06: jmp 0x520eec
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 3C: jge 0x520f30
        __asm _emit 0x7d
        __asm _emit 0x3c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 16: jne 0x520f10
        __asm _emit 0x75
        __asm _emit 0x16
        push 1
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 83 40 FC FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 6B 40 FC FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        ; Exact mapped bytes EB 3F: jmp 0x520f6f
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 6F FE FF FF: jmp 0x520daa
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 42 40 FC FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 2A 40 FC FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

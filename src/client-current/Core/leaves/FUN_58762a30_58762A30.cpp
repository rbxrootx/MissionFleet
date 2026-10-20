// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762A30 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_58762a30_58762A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 7E: jne 0x58762abe
        __asm _emit 0x75
        __asm _emit 0x7e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 3F D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E A5 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa5
        __asm _emit 0xd2
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 A5 D2 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa5
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 5C: je 0x58762abc
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 E8 FF FF: call 0x58761360
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 3F D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x58762a82
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 31 96 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 34: je 0x58762abc
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 94 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 21: je 0x58762aba
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 8A D6 FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8a
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58762aba
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 62: jmp 0x58762b1c
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes EB BB: jmp 0x58762a77
        __asm _emit 0xeb
        __asm _emit 0xbb
        ; Exact mapped bytes EB 5C: jmp 0x58762b1a
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 E8 FF FF: call 0x58761360
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 3E D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x3e
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58762ae0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 95 D2 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 34: je 0x58762b1a
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 93 D2 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x93
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 21: je 0x58762b18
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 89 D6 FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x89
        __asm _emit 0xd6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58762b18
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58762b1c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB BB: jmp 0x58762ad5
        __asm _emit 0xeb
        __asm _emit 0xbb
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

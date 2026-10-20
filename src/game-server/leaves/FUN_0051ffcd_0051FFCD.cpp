// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051FFCD .. +0x215 bytes.
extern "C" __declspec(naked) void FUN_0051ffcd_0051FFCD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 20: je 0x51ffff
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x51ffff
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 14: je 0x51ffff
        __asm _emit 0x74
        __asm _emit 0x14
        push 138h
        push 5cc9cch
        ; Exact mapped bytes E8 06 4A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ffff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x51ffd9
        __asm _emit 0x75
        __asm _emit 0xd4
        push 139h
        push 5cc9cch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 48 B1 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x520032
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ah
        push 5cc9cch
        ; Exact mapped bytes E8 D3 49 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x520032
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x520018
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 0B 00 00: call 0x520c3c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7F 14: jg 0x520065
        __asm _emit 0x7f
        __asm _emit 0x14
        push 13ch
        push 5cc9cch
        ; Exact mapped bytes E8 A0 49 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x520065
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52004b
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x520111
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        and esi, 0ffffh
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 CB 26 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 B6 26 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 0B 00 00: call 0x520c3c
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 4D: jle 0x52010f
        __asm _emit 0x7e
        __asm _emit 0x4d
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 02 50 FC FF: call 0x4e50d5
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 7F 26 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x52010f
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 6B 26 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x52010f
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 C6 4F FC FF: call 0x4e50d5
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 5F: jmp 0x520170
        __asm _emit 0xeb
        __asm _emit 0x5f
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 B3 4F FC FF: call 0x4e50d5
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 30 26 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x52015e
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 1C 26 01 00: call 0x532764
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x52015e
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 77 4F FC FF: call 0x4e50d5
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 0C: je 0x520170
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 FD FF FF: call 0x51ff31
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 04: jne 0x52017d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5C: jmp 0x5201d9
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B DF 00 00: call 0x52e0e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 3C: je 0x5201cd
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x5201cd
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 F5 FF FF: call 0x51f6b2
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5201c1
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov eax, 1
        ; Exact mapped bytes EB 18: jmp 0x5201d9
        __asm _emit 0xeb
        __asm _emit 0x18
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 F1 FC FF: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x5201d7
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 DD 01 00: call 0x53df09
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

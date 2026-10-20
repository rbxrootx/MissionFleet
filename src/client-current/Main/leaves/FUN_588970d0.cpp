// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588970D0 .. +0x244 bytes.
extern "C" __declspec(naked) void FUN_588970d0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 2C 02 00 00: je 0x5889730c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5889710f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x58897108
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5889710f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588970f2
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        add eax, 0fffffe00h
        cmp eax, 5
        ; Exact mapped bytes 0F 87 EC 01 00 00: ja 0x5889730c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 24 85 14 73 89 58: jmp dword ptr [eax*4 + 0x58897314]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x73
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [edi + 4]
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 4]
        lea eax, [edx + 2]
        cmp esi, eax
        ; Exact mapped bytes 0F 8C CC 01 00 00: jl 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [ecx + 8]
        lea ebx, [eax - 4]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8C BB 01 00 00: jl 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 0cah
        cmp esi, edx
        ; Exact mapped bytes 0F 8D AD 01 00 00: jge 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 60h
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D A2 01 00 00: jge 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        pop ebx
        mov dword ptr [edi + 590h], 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        pop ebx
        mov dword ptr [edi + 590h], 0
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 590h], 0
        ; Exact mapped bytes 0F 84 6F 01 00 00: je 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 AD FA FF FF: call 0x58896c50
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [edi + 4]
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 4]
        lea eax, [edx + 2]
        cmp esi, eax
        ; Exact mapped bytes 0F 8C 48 01 00 00: jl 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        mov ecx, dword ptr [ecx + 8]
        lea ebx, [eax - 4]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 8C 37 01 00 00: jl 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add edx, 0cah
        cmp esi, edx
        ; Exact mapped bytes 0F 8D 29 01 00 00: jge 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 60h
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D 1E 01 00 00: jge 0x5889730b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 594h], 1
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        xor esi, esi
        lea eax, [ecx + 98h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0E: jne 0x58897218
        __asm _emit 0x75
        __asm _emit 0x0e
        inc esi
        add eax, 4
        cmp esi, 8
        ; Exact mapped bytes 7C F2: jl 0x58897205
        __asm _emit 0x7c
        __asm _emit 0xf2
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x588972fb
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 EC 27 F5 FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 2D 2C C4 98 58: mov ebp, dword ptr [0x5898c42c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 2B 05 88 83 A2 58: sub eax, dword ptr [0x58a28388]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, 1388h
        ; Exact mapped bytes 0F 86 B0 00 00 00: jbe 0x588972ed
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1dh
        push 18h
        push 4
        ; Exact mapped bytes E8 62 4C 05 00: call 0x588ebeb0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x588972ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, 28h
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 17: jle 0x5889727f
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5889727f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x58897281
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 61: jne 0x588972ed
        __asm _emit 0x75
        __asm _emit 0x61
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588972b0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588972b0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x588972b2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 FC 48 A2 58: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 D2 06 07 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 48 A2 58: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588972e2
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588972e2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x588972e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 88 83 A2 58: mov dword ptr [0x58a28388], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        pop ebp
        cmp esi, 8
        ; Exact mapped bytes 75 0B: jne 0x5889730b
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0
        push 0ah
        push 0
        ; Exact mapped bytes E8 05 27 F5 FF: call 0x587e9a10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x27
        __asm _emit 0xf5
        __asm _emit 0xff
        pop ebx
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

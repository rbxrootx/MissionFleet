// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568717 .. +0x29C bytes.
extern "C" __declspec(naked) void FUN_00568717_00568717() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f749h
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F2 76 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x568758
        __asm _emit 0x75
        __asm _emit 0x14
        push 155h
        push 5cf588h
        ; Exact mapped bytes E8 AD C2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568758
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x568735
        __asm _emit 0x75
        __asm _emit 0xd7
        push -1
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 C9 76 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x568781
        __asm _emit 0x75
        __asm _emit 0x14
        push 156h
        push 5cf588h
        ; Exact mapped bytes E8 84 C2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568781
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x56875e
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x5687a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 157h
        push 5cf588h
        ; Exact mapped bytes E8 60 C2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5687a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x568787
        __asm _emit 0x75
        __asm _emit 0xdc
        push -1
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 7C 76 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5687ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 158h
        push 5cf588h
        ; Exact mapped bytes E8 37 C2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5687ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x5687ab
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x5687f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 159h
        push 5cf588h
        ; Exact mapped bytes E8 13 C2 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5687f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DC: jne 0x5687d4
        __asm _emit 0x75
        __asm _emit 0xdc
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 2C: je 0x56882a
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp + 18h], 1
        ; Exact mapped bytes 74 26: je 0x56882a
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 18h], 2
        ; Exact mapped bytes 74 20: je 0x56882a
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 18h], 3
        ; Exact mapped bytes 74 1A: je 0x56882a
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 18h], 4
        ; Exact mapped bytes 74 14: je 0x56882a
        __asm _emit 0x74
        __asm _emit 0x14
        push 15ch
        push 5cf588h
        ; Exact mapped bytes E8 DB C1 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56882a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C8: jne 0x5687f8
        __asm _emit 0x75
        __asm _emit 0xc8
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 7C 06: jl 0x56883c
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 72 14: jb 0x568850
        __asm _emit 0x72
        __asm _emit 0x14
        push 15dh
        push 5cf588h
        ; Exact mapped bytes E8 B5 C1 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568850
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x568830
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x568869
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx*8 + 58a010h]
        mov dword ptr [ebp + 1ch], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x568899
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes E8 CF CB FD FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x56888c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx*8 + 58a014h]
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB 0D: jmp 0x568899
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx*8 + 58a03ch]
        mov dword ptr [ebp + 20h], edx
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AD F9 FF FF: call 0x568250
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 FE FA FF FF: call 0x5683cd
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x5688f1
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BA F9 FF FF: call 0x5682a3
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5689a0
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 4
        ; Exact mapped bytes 75 43: jne 0x56893a
        __asm _emit 0x75
        __asm _emit 0x43
        push 8
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 73 FA FF FF: call 0x568374
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x568926
        __asm _emit 0x74
        __asm _emit 0x1a
        push 5cf60ch
        push 8
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 59 FA FF FF: call 0x568374
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56893a
        __asm _emit 0x75
        __asm _emit 0x14
        push 176h
        push 5cf588h
        ; Exact mapped bytes E8 CB C0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56893a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 B1: jne 0x5688f1
        __asm _emit 0x75
        __asm _emit 0xb1
        push 80000000h
        push 0
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5F 05 00 00: call 0x568eb0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes E8 DD 02 00 00: call 0x568c38
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 24: je 0x568988
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 1E: je 0x568988
        __asm _emit 0x74
        __asm _emit 0x1e
        push 80000000h
        push 1
        push 0ah
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 35 05 00 00: call 0x568eb0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 B3 02 00 00: call 0x568c38
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 06 F9 FF FF: call 0x5682a3
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}

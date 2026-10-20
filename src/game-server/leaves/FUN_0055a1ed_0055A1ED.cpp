// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055A1ED .. +0x546 bytes.
extern "C" __declspec(naked) void FUN_0055a1ed_0055A1ED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 158h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 144h], 0
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 138h], eax
        push 0d4h
        push 5cebe0h
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        ; Exact mapped bytes E8 20 0F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58a190h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 40 0E FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55a268
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d5h
        push 5cebe0h
        ; Exact mapped bytes E8 9D A7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a268
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x55a240
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 6B DB FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55a292
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d6h
        push 5cebe0h
        ; Exact mapped bytes E8 73 A7 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a292
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x55a26e
        __asm _emit 0x75
        __asm _emit 0xd6
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 0
        lea ecx, [ebp - 108h]
        mov dword ptr [ebp - 140h], ecx
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 75 0C: jne 0x55a2e5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 154h], 0
        ; Exact mapped bytes EB 4E: jmp 0x55a333
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 140h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 144h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B3 F4 F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], esp
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov edx, dword ptr [ebp - 158h]
        push edx
        ; Exact mapped bytes E8 93 6C F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x6c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        lea eax, [ebp - 124h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        ; Exact mapped bytes FF 15 38 2A 5E 00: call dword ptr [0x5e2a38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 75 0B: jne 0x55a361
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x55a724
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 3B: je 0x55a3ac
        __asm _emit 0x74
        __asm _emit 0x3b
        lea edx, [ebp - 114h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 60 2A 5E 00: call dword ptr [0x5e2a60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 1D: je 0x55a3ac
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 78 03 00 00: jmp 0x55a724
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        sub eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 86 5F 01 00 00: jbe 0x55a53c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], 0
        mov dword ptr [ebp - 148h], 0
        lea ecx, [ebp - 148h]
        push ecx
        lea edx, [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes E8 45 F7 FF FF: call 0x559b5b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 74 2F: je 0x55a457
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 CD 02 00 00: jmp 0x55a724
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10ch]
        sub eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp - 14ch]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x55a537
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], 0
        lea edx, [ebp - 150h]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 15 3C 2A 5E 00: call dword ptr [0x5e2a3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 7D 41: jge 0x55a507
        __asm _emit 0x7d
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 148h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x55a724
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 148h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 150h]
        mov dword ptr [ebp - 124h], edx
        ; Exact mapped bytes E9 94 FE FF FF: jmp 0x55a3d0
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x55a626
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 13ch]
        push eax
        push 58e4e0h
        push 0
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], 0
        ; Exact mapped bytes 7D 64: jge 0x55a5e0
        __asm _emit 0x7d
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 138h]
        mov byte ptr [edx + 40h], 1
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 114h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 1C: je 0x55a5cf
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 13ch], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55a5aa
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x55a724
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 75 14: jne 0x55a5fd
        __asm _emit 0x75
        __asm _emit 0x14
        push 128h
        push 5cebe0h
        ; Exact mapped bytes E8 08 A4 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a5fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x55a5e0
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 134h]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 3C: call dword ptr [ecx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 138h]
        mov byte ptr [eax + 40h], 0
        push 58ea88h
        mov ecx, dword ptr [ebp - 138h]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 4C 18 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 75 14: jne 0x55a65d
        __asm _emit 0x75
        __asm _emit 0x14
        push 131h
        push 5cebe0h
        ; Exact mapped bytes E8 A8 A3 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a65d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x55a640
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 134h]
        push ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes 74 24: je 0x55a6b6
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 34: call dword ptr [ecx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 124h], 0
        ; Exact mapped bytes 74 1C: je 0x55a6ed
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 124h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 124h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 124h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55a6c8
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 1C: je 0x55a718
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 114h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 114h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55a6f3
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 11ch]
        lea esp, [ebp - 164h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

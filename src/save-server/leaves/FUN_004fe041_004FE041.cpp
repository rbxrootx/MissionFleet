// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE041 .. +0x2BB bytes.
extern "C" __declspec(naked) void FUN_004fe041_004FE041() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 52 B9 FF FF: call 0x4f99b3
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4fe06c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 87 02 00 00: jmp 0x4fe2f3
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 10h], 0
        push 1
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x4fe09b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 46 2C 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0B: je 0x4fe0c3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1E 2C 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fe0e8
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4fe1ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E4 2B 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fe10f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x4fe1ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x4fe128
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x4fe106
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F3 2B 03 00: call 0x530d29
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 06 B8 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3A C0 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fe16e
        __asm _emit 0x75
        __asm _emit 0x14
        push 880h
        push 674fe8h
        ; Exact mapped bytes E8 D7 AB 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe16e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4fe149
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4fe190
        __asm _emit 0x75
        __asm _emit 0x14
        push 881h
        push 674fe8h
        ; Exact mapped bytes E8 B5 AB 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe190
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4fe174
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 08 3A 03 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fe1c8
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0E 2B 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 74 12: je 0x4fe1e7
        __asm _emit 0x74
        __asm _emit 0x12
        push 675444h
        push 675480h
        ; Exact mapped bytes E8 31 24 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x4fe106
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4fe2f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E0 2A 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4fe213
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x4fe2f0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 02: jne 0x4fe22c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x4fe20a
        __asm _emit 0xeb
        __asm _emit 0xde
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EF 2A 03 00: call 0x530d29
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 02 B7 FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 636f20h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 36 BF FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fe272
        __asm _emit 0x75
        __asm _emit 0x14
        push 89fh
        push 674fe8h
        ; Exact mapped bytes E8 D3 AA 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe272
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4fe24d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x4fe294
        __asm _emit 0x75
        __asm _emit 0x14
        push 8a0h
        push 674fe8h
        ; Exact mapped bytes E8 B1 AA 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe294
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4fe278
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 04 39 03 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fe2cc
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0A 2A 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 74 12: je 0x4fe2eb
        __asm _emit 0x74
        __asm _emit 0x12
        push 675484h
        push 6754c0h
        ; Exact mapped bytes E8 2D 23 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x4fe20a
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

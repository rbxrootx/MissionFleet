// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB8A1 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_004fb8a1_004FB8A1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov dword ptr [ebp - 7ch], ecx
        push 434h
        push 674fe8h
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 A3 E9 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 02 69 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 8A 02 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx + 64h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 60h]
        neg edx
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 03 6C 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D4 68 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 92 08 01 00 00: call dword ptr [edx + 0x108]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 5B: je 0x4fb969
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [edx + 40h]
        ; Exact mapped bytes 7D 4D: jge 0x4fb969
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 34h]
        add eax, dword ptr [edx + 4ch]
        ; Exact mapped bytes 2B 05 0C 6E 68 00: sub eax, dword ptr [0x686e0c]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 81 68 03 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DB 6A 03 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4fb969
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x4fbb2d
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 5B: je 0x4fb9cd
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [edx + 6ch]
        cmp ecx, dword ptr [eax + 44h]
        ; Exact mapped bytes 7D 4D: jge 0x4fb9cd
        __asm _emit 0x7d
        __asm _emit 0x4d
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ecx + 48h]
        ; Exact mapped bytes 2B 15 0C 6E 68 00: sub edx, dword ptr [0x686e0c]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 1D 68 03 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 77 6A 03 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4fb9cd
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x4fbb2d
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F2 67 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4fb9ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 4C: jge 0x4fba59
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + eax + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EB 69 03 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4fba51
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x4fba59
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 9D: jmp 0x4fb9f6
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fba83
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx + 68h]
        sub eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 7D 4C: jge 0x4fbadd
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [eax + ecx + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 67 69 03 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4fbad5
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x4fbadd
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 9D: jmp 0x4fba7a
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 2A: je 0x4fbb15
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 74 12: je 0x4fbb0b
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0fh
        mov eax, dword ptr [ebp - 4]
        lea eax, [edx + eax + 12dh]
        ; Exact mapped bytes EB 22: jmp 0x4fbb2d
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        add eax, 0c9h
        ; Exact mapped bytes EB 18: jmp 0x4fbb2d
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 68h]
        sub edx, 1
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 74 08: je 0x4fbb2b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        add eax, 65h
        ; Exact mapped bytes EB 02: jmp 0x4fbb2d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

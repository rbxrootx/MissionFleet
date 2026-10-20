// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512671 .. +0x292 bytes.
extern "C" __declspec(naked) void FUN_00512671_00512671() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov dword ptr [ebp - 7ch], ecx
        push 434h
        push 5c84b0h
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 D3 8A FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 BC 36 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 5A 9A 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9a
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 DB 39 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 8E 36 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x02
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
        ; Exact mapped bytes 74 5B: je 0x512739
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [edx + 40h]
        ; Exact mapped bytes 7D 4D: jge 0x512739
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
        ; Exact mapped bytes 2B 05 F4 E8 5D 00: sub eax, dword ptr [0x5de8f4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 3B 36 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B3 38 02 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x512739
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 C4 01 00 00: jmp 0x5128fd
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 5B: je 0x51279d
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [edx + 6ch]
        cmp ecx, dword ptr [eax + 44h]
        ; Exact mapped bytes 7D 4D: jge 0x51279d
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
        ; Exact mapped bytes 2B 15 F4 E8 5D 00: sub edx, dword ptr [0x5de8f4]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 D7 35 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4F 38 02 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x51279d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x5128fd
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AC 35 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x35
        __asm _emit 0x02
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
        ; Exact mapped bytes EB 09: jmp 0x5127cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 4C: jge 0x512829
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
        ; Exact mapped bytes E8 C3 37 02 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x512821
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x512829
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 9D: jmp 0x5127c6
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
        ; Exact mapped bytes EB 09: jmp 0x512853
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx + 68h]
        sub eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 7D 4C: jge 0x5128ad
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
        ; Exact mapped bytes E8 3F 37 02 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5128a5
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x5128ad
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 9D: jmp 0x51284a
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 2A: je 0x5128e5
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 74 12: je 0x5128db
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0fh
        mov eax, dword ptr [ebp - 4]
        lea eax, [edx + eax + 12dh]
        ; Exact mapped bytes EB 22: jmp 0x5128fd
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        add eax, 0c9h
        ; Exact mapped bytes EB 18: jmp 0x5128fd
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 68h]
        sub edx, 1
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 74 08: je 0x5128fb
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        add eax, 65h
        ; Exact mapped bytes EB 02: jmp 0x5128fd
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

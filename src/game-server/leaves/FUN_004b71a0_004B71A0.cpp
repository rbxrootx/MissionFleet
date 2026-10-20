// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B71A0 .. +0x61D bytes.
extern "C" __declspec(naked) void FUN_004b71a0_004B71A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 168h
        ; Exact mapped bytes A1 54 02 5E 00: mov eax, dword ptr [0x5e0254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        imul eax, eax, 14h
        push eax
        ; Exact mapped bytes 8B 0D 58 02 5E 00: mov ecx, dword ptr [0x5e0258]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 34 24 5E 00: call dword ptr [0x5e2434]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4b71cb
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 EE 05 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 58 02 5E 00: mov edx, dword ptr [0x5e0258]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], edx
        mov dword ptr [ebp - 120h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4b71f2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 120h]
        add eax, 1
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes 3B 0D 54 02 5E 00: cmp ecx, dword ptr [0x5e0254]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D B3 05 00 00: jge 0x4b77b7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 160h], eax
        push 41c4h
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        ; Exact mapped bytes FF 15 34 24 5E 00: call dword ptr [0x5e2434]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4b7233
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffffeh
        ; Exact mapped bytes E9 86 05 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 128h], eax
        mov ecx, dword ptr [ebp - 160h]
        add ecx, 144h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 144h], 0
        mov dword ptr [ebp - 158h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4b7283
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D EE 04 00 00: jge 0x4b777b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], 0
        mov dword ptr [ebp - 150h], 0
        mov dword ptr [ebp - 12ch], 0
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x4b72c6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14ch]
        add edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 40h
        ; Exact mapped bytes 7D 13: jge 0x4b72e2
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp + eax*4 - 118h], 0
        ; Exact mapped bytes EB D5: jmp 0x4b72b7
        __asm _emit 0xeb
        __asm _emit 0xd5
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8C 31 04 00 00: jl 0x4b771d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 8000h
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        ; Exact mapped bytes FF 15 34 24 5E 00: call dword ptr [0x5e2434]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4b730c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffffch
        ; Exact mapped bytes E9 AD 04 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 140h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4b7330
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 140h]
        add eax, 1
        mov dword ptr [ebp - 140h], eax
        cmp dword ptr [ebp - 140h], 8
        ; Exact mapped bytes 0F 8D 77 01 00 00: jge 0x4b74b4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        mov dword ptr [ebp - 130h], ecx
        mov edx, dword ptr [ebp - 130h]
        add edx, 0ff0h
        mov dword ptr [ebp - 138h], edx
        mov eax, dword ptr [ebp - 130h]
        cmp dword ptr [eax - 4], -1
        ; Exact mapped bytes 75 0B: jne 0x4b7372
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 138h]
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 74 0A: je 0x4b737c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffffbh
        ; Exact mapped bytes E9 3D 04 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 130h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 154h], ecx
        mov edx, dword ptr [ebp - 154h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x4b73d9
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 148h]
        sub eax, 1
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 400h
        ; Exact mapped bytes 7E 0A: jle 0x4b73c8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 0fffffffah
        ; Exact mapped bytes E9 F1 03 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 12ch]
        add ecx, 1
        mov dword ptr [ebp - 12ch], ecx
        ; Exact mapped bytes EB 42: jmp 0x4b741b
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 148h]
        sar edx, 4
        sub edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 3fh
        ; Exact mapped bytes 7E 0A: jle 0x4b73fe
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 3fh
        mov eax, dword ptr [ebp - 14ch]
        mov ecx, dword ptr [ebp + eax*4 - 118h]
        add ecx, 1
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp + edx*4 - 118h], ecx
        cmp dword ptr [ebp - 148h], 10h
        ; Exact mapped bytes 7C 19: jl 0x4b743d
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 148h]
        and eax, 0fh
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4b743d
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [ebp - 148h], 0ff0h
        ; Exact mapped bytes 7E 0A: jle 0x4b7447
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 0fffffff9h
        ; Exact mapped bytes E9 72 03 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 130h]
        add ecx, dword ptr [ebp - 148h]
        mov edx, dword ptr [ecx - 4]
        cmp edx, dword ptr [ebp - 154h]
        ; Exact mapped bytes 74 0A: je 0x4b7468
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff8h
        ; Exact mapped bytes E9 51 03 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
        add eax, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 130h]
        cmp ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes 0F 82 F0 FE FF FF: jb 0x4b737c
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 130h]
        cmp edx, dword ptr [ebp - 138h]
        ; Exact mapped bytes 74 0A: je 0x4b74a4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff8h
        ; Exact mapped bytes E9 15 03 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 1000h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 6D FE FF FF: jmp 0x4b7321
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes 74 0A: je 0x4b74cb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff7h
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 134h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4b74e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 40h
        ; Exact mapped bytes 0F 8D 2D 02 00 00: jge 0x4b771d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 130h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 15ch], ecx
        mov edx, dword ptr [ebp - 15ch]
        cmp edx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x4b764a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 168h]
        cmp ecx, dword ptr [ebp + eax*4 - 118h]
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x4b764a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 15ch]
        cmp edx, dword ptr [ebp - 128h]
        ; Exact mapped bytes 72 13: jb 0x4b755e
        __asm _emit 0x72
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 128h]
        add eax, 8000h
        cmp dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes 72 0A: jb 0x4b7568
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, 0fffffff6h
        ; Exact mapped bytes E9 51 02 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 15ch]
        and ecx, 0fffff000h
        mov dword ptr [ebp - 164h], ecx
        mov edx, dword ptr [ebp - 164h]
        add edx, 0ch
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 0ff0h
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes 74 1F: je 0x4b75be
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes 75 02: jne 0x4b75ac
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x4b75be
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        and ecx, 0fffffffeh
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB D6: jmp 0x4b7594
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 124h]
        ; Exact mapped bytes 75 0A: jne 0x4b75d3
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0fffffff5h
        ; Exact mapped bytes E9 E6 01 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 15ch]
        mov edx, dword ptr [ecx]
        sar edx, 4
        sub edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 3fh
        ; Exact mapped bytes 7E 0A: jle 0x4b75fa
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 3fh
        mov eax, dword ptr [ebp - 14ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 0A: je 0x4b760f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff4h
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 15ch]
        mov edx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ebp - 130h]
        ; Exact mapped bytes 74 0A: je 0x4b762a
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff3h
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 168h]
        add ecx, 1
        mov dword ptr [ebp - 168h], ecx
        ; Exact mapped bytes E9 BC FE FF FF: jmp 0x4b7506
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 6E: je 0x4b76c1
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 32: jge 0x4b768b
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 14h]
        shr edx, cl
        mov eax, dword ptr [ebp - 11ch]
        or eax, edx
        mov dword ptr [ebp - 11ch], eax
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 14h]
        shr edx, cl
        mov eax, dword ptr [ebp - 144h]
        or eax, edx
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 36: jmp 0x4b76c1
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 20h
        mov edx, 80000000h
        shr edx, cl
        mov eax, dword ptr [ebp - 150h]
        or eax, edx
        mov dword ptr [ebp - 150h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 20h
        mov edx, 80000000h
        shr edx, cl
        mov eax, dword ptr [ebp - 158h]
        or eax, edx
        mov dword ptr [ebp - 158h], eax
        mov ecx, dword ptr [ebp - 130h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 134h]
        ; Exact mapped bytes 75 12: jne 0x4b76e4
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 168h]
        cmp ecx, dword ptr [ebp + eax*4 - 118h]
        ; Exact mapped bytes 74 0A: je 0x4b76ee
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff2h
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [ebp - 130h]
        ; Exact mapped bytes 74 0A: je 0x4b7709
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 0fffffff1h
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x4b77b9
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        add ecx, 8
        mov dword ptr [ebp - 134h], ecx
        ; Exact mapped bytes E9 C0 FD FF FF: jmp 0x4b74dd
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 160h]
        mov ecx, dword ptr [ebp - 11ch]
        cmp ecx, dword ptr [eax + edx*4 + 44h]
        ; Exact mapped bytes 75 18: jne 0x4b774a
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 160h]
        mov ecx, dword ptr [ebp - 150h]
        cmp ecx, dword ptr [eax + edx*4 + 0c4h]
        ; Exact mapped bytes 74 07: je 0x4b7751
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 0fffffff0h
        ; Exact mapped bytes EB 68: jmp 0x4b77b9
        __asm _emit 0xeb
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 128h]
        add edx, 8000h
        mov dword ptr [ebp - 128h], edx
        mov eax, dword ptr [ebp - 18h]
        add eax, 204h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 FF FA FF FF: jmp 0x4b727a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 13ch]
        mov eax, dword ptr [ebp - 144h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 11: jne 0x4b779c
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 158h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 07: je 0x4b77a3
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 0ffffffefh
        ; Exact mapped bytes EB 16: jmp 0x4b77b9
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 13ch]
        add eax, 14h
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes E9 2C FA FF FF: jmp 0x4b71e3
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

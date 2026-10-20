// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D380 .. +0x4C7 bytes.
extern "C" __declspec(naked) void FUN_5848d380_5848D380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d39c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 62: jge 0x5848d40d
        __asm _emit 0x7d
        __asm _emit 0x62
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10ch], 0
        ; Exact mapped bytes 7E 4F: jle 0x5848d40b
        __asm _emit 0x7e
        __asm _emit 0x4f
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10ch]
        sub ecx, 1
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 10ch], ecx
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 10ch], 0
        ; Exact mapped bytes 75 1F: jne 0x5848d40b
        __asm _emit 0x75
        __asm _emit 0x1f
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10ch]
        sub edx, 1
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 10ch], edx
        ; Exact mapped bytes EB 86: jmp 0x5848d393
        __asm _emit 0xeb
        __asm _emit 0x86
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d41f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 14: jge 0x5848d439
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0cch], 0
        ; Exact mapped bytes 74 02: je 0x5848d437
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5848d439
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DD: jmp 0x5848d416
        __asm _emit 0xeb
        __asm _emit 0xdd
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 75 05: jne 0x5848d444
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 00 04 00 00: jmp 0x5848d844
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 244h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 55 01 00 00: jle 0x5848d5ab
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 DF EF FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 1
        push 1dh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A0 FB FF FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        ; Exact mapped bytes 0F 8E 2F 01 00 00: jle 0x5848d5ab
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 2
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d495
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 51: jge 0x5848d4f5
        __asm _emit 0x7d
        __asm _emit 0x51
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 2
        ; Exact mapped bytes 75 3B: jne 0x5848d4f3
        __asm _emit 0x75
        __asm _emit 0x3b
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 109h]
        test edx, edx
        ; Exact mapped bytes 7E 28: jle 0x5848d4f3
        __asm _emit 0x7e
        __asm _emit 0x28
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10ch], 0
        ; Exact mapped bytes 74 17: je 0x5848d4f3
        __asm _emit 0x74
        __asm _emit 0x17
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 109h]
        mov edx, dword ptr [ebp - 18h]
        sub edx, ecx
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 97: jmp 0x5848d48c
        __asm _emit 0xeb
        __asm _emit 0x97
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8E AC 00 00 00: jle 0x5848d5ab
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d511
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x5848d5ab
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 2
        ; Exact mapped bytes 75 6E: jne 0x5848d5a6
        __asm _emit 0x75
        __asm _emit 0x6e
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 109h]
        test edx, edx
        ; Exact mapped bytes 75 5B: jne 0x5848d5a6
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 244h]
        cmp ecx, 2
        ; Exact mapped bytes 7C 25: jl 0x5848d57f
        __asm _emit 0x7c
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 DB EE FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 1
        push 1dh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9C FA FF FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        cmp eax, 2
        ; Exact mapped bytes 7D 07: jge 0x5848d586
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 2E 00 00: call 0x58490440
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 104h], eax
        ; Exact mapped bytes EB 05: jmp 0x5848d5ab
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x5848d508
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d5cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7D 46: jge 0x5848d620
        __asm _emit 0x7d
        __asm _emit 0x46
        imul eax, dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 4
        ; Exact mapped bytes 74 14: je 0x5848d602
        __asm _emit 0x74
        __asm _emit 0x14
        imul eax, dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 3
        ; Exact mapped bytes 75 1C: jne 0x5848d61e
        __asm _emit 0x75
        __asm _emit 0x1c
        imul eax, dword ptr [ebp - 14h], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 109h]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x5848d61e
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB A2: jmp 0x5848d5c2
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 244h]
        test edx, edx
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x5848d77d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x5848d77d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 4
        ; Exact mapped bytes 74 18: je 0x5848d668
        __asm _emit 0x74
        __asm _emit 0x18
        imul eax, dword ptr [ebp - 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 3
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x5848d759
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 0ch], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 109h]
        test edx, edx
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x5848d759
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 EC FF FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 24ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 12 E6 FF FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 0ah
        div ecx
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 4
        ; Exact mapped bytes 7D 09: jge 0x5848d6b9
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 25: jmp 0x5848d6de
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp - 20h], 7
        ; Exact mapped bytes 7D 09: jge 0x5848d6c8
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 16: jmp 0x5848d6de
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp - 20h], 9
        ; Exact mapped bytes 7D 09: jge 0x5848d6d7
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes EB 07: jmp 0x5848d6de
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 3
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 72: je 0x5848d759
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0cch], 0
        ; Exact mapped bytes 74 44: je 0x5848d73b
        __asm _emit 0x74
        __asm _emit 0x44
        imul edx, dword ptr [ebp - 0ch], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx*4 + 0cch]
        mov dword ptr [eax + edx + 110h], ecx
        push 3
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 2D 00 00: call 0x58490440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 0ch], 14h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 104h], eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 20: jmp 0x5848d759
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes EB 1C: jmp 0x5848d757
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5848d754
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 85: jmp 0x5848d6de
        __asm _emit 0xeb
        __asm _emit 0x85
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 75 07: jne 0x5848d778
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes E9 A3 FE FF FF: jmp 0x5848d620
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d78f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 48: jge 0x5848d7e6
        __asm _emit 0x7d
        __asm _emit 0x48
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10ch], -1
        ; Exact mapped bytes 75 35: jne 0x5848d7e4
        __asm _emit 0x75
        __asm _emit 0x35
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 108h]
        cmp ecx, 4
        ; Exact mapped bytes 74 14: je 0x5848d7d7
        __asm _emit 0x74
        __asm _emit 0x14
        imul edx, dword ptr [ebp - 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 108h]
        cmp ecx, 3
        ; Exact mapped bytes 75 0D: jne 0x5848d7e4
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D FA FF FF: call 0x5848d270
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x5848d786
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848d7f8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 100h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 34: jge 0x5848d83b
        __asm _emit 0x7d
        __asm _emit 0x34
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + eax + 108h]
        cmp edx, 2
        ; Exact mapped bytes 75 1E: jne 0x5848d839
        __asm _emit 0x75
        __asm _emit 0x1e
        imul eax, dword ptr [ebp - 8], 14h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 10ch], -1
        ; Exact mapped bytes 75 0D: jne 0x5848d839
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 FA FF FF: call 0x5848d270
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B4: jmp 0x5848d7ef
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D C7 FF FF: call 0x58489f70
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
    }
}

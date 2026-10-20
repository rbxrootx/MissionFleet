// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873BEA0 .. +0x4E0 bytes.
extern "C" __declspec(naked) void FUN_5873bea0_5873BEA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 9D 04 00 00: jne 0x5873c350
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 250h]
        ; Exact mapped bytes E8 8F D7 DA FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd7
        __asm _emit 0xda
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 0fh
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x5873c000
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 258h]
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x5873bf69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 258h]
        ; Exact mapped bytes E8 27 0D EF FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 98 A1 D4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 72 A0 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa0
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5873bf31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0fh
        ; Exact mapped bytes 7D 2D: jge 0x5873bf64
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 26ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873bf62
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 26ch]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7F 9E D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9e
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x5873bf28
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x5873bffb
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 25ch]
        ; Exact mapped bytes 75 0D: jne 0x5873bf84
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 0A 00 00: call 0x5873ca20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 77: jmp 0x5873bffb
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 260h]
        ; Exact mapped bytes 75 0D: jne 0x5873bf9f
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 0A 00 00: call 0x5873ca20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5C: jmp 0x5873bffb
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DB 9F D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5873bfc8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0fh
        ; Exact mapped bytes 7D 2D: jge 0x5873bffb
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 26ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873bff9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 26ch]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E8 9D D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x5873bfbf
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes E9 4E 03 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 2ach]
        ; Exact mapped bytes 75 1A: jne 0x5873c028
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 0B 00 00: call 0x5873cb40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5873c023
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 0A 00 00: call 0x5873cb00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 26 03 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 2b0h]
        ; Exact mapped bytes 75 0E: jne 0x5873c044
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 0A 00 00: call 0x5873cb00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0A 03 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 240h]
        ; Exact mapped bytes 75 61: jne 0x5873c0b3
        __asm _emit 0x75
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 250h]
        mov dword ptr [ebp - 34h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 28 9F D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5873c07b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0fh
        ; Exact mapped bytes 7D 2D: jge 0x5873c0ae
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 26ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873c0ac
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 26ch]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 35 9D D4 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x5873c072
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes E9 9B 02 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 220h]
        ; Exact mapped bytes 75 22: jne 0x5873c0e3
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 10h]
        and edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        and ecx, 0fffffffeh
        or ecx, edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], ecx
        ; Exact mapped bytes E9 6B 02 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 224h]
        ; Exact mapped bytes 75 24: jne 0x5873c115
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 10h]
        and edx, 1
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        and ecx, 0fffffffdh
        or ecx, edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], ecx
        ; Exact mapped bytes E9 39 02 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 238h]
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x5873c1ed
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 3
        and eax, 1
        ; Exact mapped bytes 74 59: je 0x5873c191
        __asm _emit 0x74
        __asm _emit 0x59
        push 1
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC 1A 00 00: call 0x5873dbf0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 17ch]
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx + 17ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1f4h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C2 33 D6 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x33
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x5873c1e8
        __asm _emit 0xeb
        __asm _emit 0x57
        push 0
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 1A 00 00: call 0x5873dbf0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 17ch]
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [ecx + eax + 17ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1f4h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 69 33 D6 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x33
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 17ch]
        ; Exact mapped bytes 75 0E: jne 0x5873c212
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 0C 00 00: call 0x5873cec0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x5873c34e
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5873c224
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 50: jge 0x5873c27a
        __asm _emit 0x7d
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 1d4h]
        ; Exact mapped bytes 75 16: jne 0x5873c252
        __asm _emit 0x75
        __asm _emit 0x16
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, word ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 0B 00 00: call 0x5873cde0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 26: jmp 0x5873c278
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 1e4h]
        ; Exact mapped bytes 75 14: jne 0x5873c278
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 0B 00 00: call 0x5873cde0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A1: jmp 0x5873c21b
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5873c28c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0fh
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x5873c32b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 26ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 53: jne 0x5873c2fb
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 26ch]
        mov dword ptr [edx + 2a8h], eax
        push 1
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 19 00 00: call 0x5873dbf0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 26ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873c2f9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 26ch]
        mov dword ptr [ebp - 44h], eax
        push 5
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 48 35 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2B: jmp 0x5873c326
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 26ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873c326
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 26ch]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1B 35 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x35
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 58 FF FF FF: jmp 0x5873c283
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2a8h], 0
        ; Exact mapped bytes 74 17: je 0x5873c34e
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a8h]
        mov dword ptr [ebp - 4ch], edx
        push 5
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F3 34 D6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x34
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 28: jmp 0x5873c378
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp + 0ch], 0f233h
        ; Exact mapped bytes 75 1F: jne 0x5873c378
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 60h]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        movzx eax, word ptr [edx + 2]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5873c378
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 07 00 00: call 0x5873cb00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

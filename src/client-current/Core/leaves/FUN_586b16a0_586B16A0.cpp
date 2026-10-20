// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B16A0 .. +0x5AB bytes.
extern "C" __declspec(naked) void FUN_586b16a0_586B16A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 CC 00 00 00: mov word ptr [eax + 0xcc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 CE 00 00 00: mov word ptr [eax + 0xce], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586b16d8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D AB 00 00 00: jge 0x586b178d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E4 47 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x47
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA 47 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x47
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 47 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x47
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 18h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F3 3D 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 1ch], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 3D 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 20h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B9 3D 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x586b16cf
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        cmp edx, 1
        ; Exact mapped bytes 75 7F: jne 0x586b1815
        __asm _emit 0x75
        __asm _emit 0x7f
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586b17a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586b17cb
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 18 47 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x47
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586b179f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 28h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C3 3D 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 2ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A1 3D 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 30 04 00 00: jmp 0x586b1c45
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 55 08: movsx edx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x08
        cmp edx, 2
        ; Exact mapped bytes 0F 85 69 01 00 00: jne 0x586b198b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x586b190c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 93 46 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 77 46 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 50h]
        mov dword ptr [ebp - 38h], eax
        push 101h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 28 3D 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 1
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2F 46 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 13 46 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 44h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 C4 3C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 48h], eax
        push 101h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A5 3C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586b191e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586b1941
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A2 45 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x45
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586b1915
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 50h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4D 3C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b4h]
        mov dword ptr [ebp - 54h], edx
        push 101h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 2B 3C 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA 02 00 00: jmp 0x586b1c45
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        cmp eax, 3
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x586b1b10
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 58h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 89 3B 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 5ch], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 6A 3B 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 EE 44 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 64h], edx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D2 44 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B3 44 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 94 44 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 70h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 42 3B 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 84h]
        mov dword ptr [ebp - 74h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 20 3B 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586b1aa3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1D: jge 0x586b1ac6
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0bch]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1D 44 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x586b1a9a
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 7ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C8 3A 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3a
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0bch]
        mov dword ptr [ebp - 80h], eax
        push 101h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A6 3A 10 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x3a
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x586b1c45
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 4D 08: movsx ecx, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x586b1c45
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 84h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 FC 39 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 84h]
        mov dword ptr [ebp - 88h], edx
        push 0ffh
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 D4 39 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 4F 43 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x43
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 2A 43 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x43
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 94h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 65 39 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 6ch]
        mov dword ptr [ebp - 98h], ecx
        push 0ffh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 40 39 10 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 BE 42 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 6ch]
        mov dword ptr [ebp - 0a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 9C 42 DD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

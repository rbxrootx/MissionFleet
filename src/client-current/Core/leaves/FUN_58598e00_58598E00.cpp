// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58598E00 .. +0x21A0 bytes.
extern "C" __declspec(naked) void FUN_58598e00_58598E00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888489fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 384h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a00h]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 1388h
        push eax
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 EC CF EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 C6 FF FF: call 0x58595570
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 504h]
        mov dword ptr [ebp - 108h], edx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 85 69 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 504h]
        mov dword ptr [ebp - 10ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 09 59 00 00: call 0x5859e7e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 110h], eax
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 AD CE EE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xce
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50ch]
        mov dword ptr [ebp - 114h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 9E C6 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc6
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 118h], ecx
        push 0
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 12 CF EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcf
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 11ch], eax
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 F6 68 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 120h], edx
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 7A 58 00 00: call 0x5859e7e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 124h], ecx
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 BE C5 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc5
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 128h], eax
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 C2 90 F9 FF: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 26 CF EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcf
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58598fcd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D C6 00 00 00: jge 0x5859909d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 26 80 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x80
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 5C: je 0x5859904d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 5dch
        ; Exact mapped bytes 66 89 55 CA: mov word ptr [ebp - 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 14h]
        add eax, 0ah
        push eax
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C BB EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xbb
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 134h], edx
        movzx eax, word ptr [ebp - 36h]
        push eax
        push 66h
        push 4
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 134h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D8 92 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58599054
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 138h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 138h]
        mov dword ptr [edx + ecx*4 + 574h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 574h]
        mov dword ptr [ebp - 13ch], eax
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 A9 CD EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xcd
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x58598fc4
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 574h]
        mov dword ptr [ebp - 140h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 EB C4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 574h]
        mov dword ptr [ebp - 144h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 C3 C4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 15ch], 0
        ; Exact mapped bytes 0F 85 88 08 00 00: jne 0x58599986
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 15ch], 1
        push 54h
        ; Exact mapped bytes E8 F2 7E 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 19: je 0x5859913e
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 E7 91 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58599145
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 148h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 148h]
        mov dword ptr [eax + 160h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 76ch
        push edx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 F4 CC EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859919f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D D5 00 00 00: jge 0x5859927e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 54 7E 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7e
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 4B: je 0x5859920e
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1a9h
        push ecx
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 B9 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 154h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 150h]
        push ecx
        mov edx, dword ptr [ebp - 154h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 17 91 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58599215
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 158h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [edx + ecx*4 + 420h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 420h]
        mov dword ptr [ebp - 15ch], eax
        push 0
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 E8 CB EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 420h]
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 68 CC EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x58599196
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 420h]
        mov dword ptr [ebp - 164h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 0A C3 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc3
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 420h]
        mov dword ptr [ebp - 168h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 E2 C2 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc2
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585992e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 19h
        ; Exact mapped bytes 0F 8D 9B 06 00 00: jge 0x58599986
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 12 7D 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7d
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 43: je 0x58599348
        __asm _emit 0x74
        __asm _emit 0x43
        push 4ah
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE B7 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 170h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 16ch]
        push edx
        mov eax, dword ptr [ebp - 170h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CD D4 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x5859934f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 174h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ecx + eax], edx
        push 58h
        ; Exact mapped bytes E8 80 7C 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 43: je 0x585993da
        __asm _emit 0x74
        __asm _emit 0x43
        push 47h
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C B7 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 17ch], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 178h]
        push edx
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 3B D4 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x585993e1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 180h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 180h]
        mov dword ptr [ecx + edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 184h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 73 C1 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc1
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 188h], edx
        push 101h
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 45 C1 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc1
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859947e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 78: jge 0x585994fc
        __asm _emit 0x7d
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 18ch], edx
        push 0
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 A6 60 F0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 164h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 190h], ecx
        push 0
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 D0 C8 EE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 164h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 194h], eax
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 EA C9 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x58599475
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859950e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 0F 8D 0A 01 00 00: jge 0x58599622
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 E5 7A 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x7a
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 48: je 0x5859957a
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 1ch]
        add edx, 4bh
        push edx
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C B5 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 19ch], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 198h]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 9B D2 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58599581
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 1a0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 22ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 22ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 10 C9 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 22ch]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 AA C7 EE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xc7
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 22ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1ach], eax
        push 0
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 24 C8 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E3 FE FF FF: jmp 0x58599505
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 22ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1b0h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 60 BF 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 22ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1b4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 32 BF 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x58599691
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x5859977f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 62 79 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x79
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov dword ptr [ebp - 4], 6
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 48: je 0x585996fd
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 48h
        push ecx
        ; Exact mapped bytes 8B 0D E4 07 96 58: mov ecx, dword ptr [0x589607e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 B4 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 160h]
        mov dword ptr [ebp - 1bch], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        mov edx, dword ptr [ebp - 1bch]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 18 D1 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58599704
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1c0h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 1c0h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 2f4h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1c4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 FD 5D F0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 2f4h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1c8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 67 C7 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc7
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x58599688
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 1cch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 03 BE 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 2f4h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 1d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 D5 BD 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbd
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 21 78 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 4], 7
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 1F: je 0x58599815
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 10 8B EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5859981c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 1d4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1d4h]
        mov dword ptr [ecx + eax*4 + 3bch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 3bch]
        mov dword ptr [ebp - 1d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 81 C6 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58599872
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 67: jge 0x585998df
        __asm _emit 0x7d
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 164h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 1dch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 428h]
        push edx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 86 5B F0 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 22ch]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1e0h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 428h]
        push ecx
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 54 5B F0 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5b
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8A: jmp 0x58599869
        __asm _emit 0xeb
        __asm _emit 0x8a
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585998f1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 7D 49: jge 0x58599940
        __asm _emit 0x7d
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 2f4h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 1e4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*8 + 42ch]
        sub ecx, 0bh
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*8 + 428h]
        add ecx, 38h
        push ecx
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 E3 BC 21 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbc
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A8: jmp 0x585998e8
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 3bch]
        mov dword ptr [ebp - 1e8h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*8 + 42ch]
        add ecx, 14h
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*8 + 428h]
        add ecx, 11h
        push ecx
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 A0 BC 21 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xbc
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 52 F9 FF FF: jmp 0x585992d8
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 57ch], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585999a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D CB 06 00 00: jge 0x5859a07a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 4E 76 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x76
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 4], 8
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 4E: je 0x58599a17
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 6
        push ecx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 B1 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 1f0h], eax
        push 40h
        push 160h
        push 138h
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 0E 89 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x89
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58599a1e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 1f4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 588h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 588h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1f8h], eax
        push 0
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 C9 C3 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 85 75 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 54: je 0x58599aec
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 6
        push ecx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 B0 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb0
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 200h], eax
        push 40h
        push 17ch
        push 18ah
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3C 88 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x88
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58599af6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 204h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 588h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 588h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 208h], ecx
        push 0
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 EE C2 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 AA 74 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x74
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 54: je 0x58599bc7
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 18h]
        add edx, 8
        push edx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B AF EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xaf
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 210h], ecx
        push 40h
        push 159h
        push 1d0h
        mov edx, dword ptr [ebp - 20ch]
        push edx
        mov eax, dword ptr [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 61 87 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x87
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58599bd1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 214h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 598h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 214h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 598h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 218h], ecx
        push 0
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 13 C2 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc2
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 CF 73 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x73
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 94h], eax
        mov dword ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 54: je 0x58599ca2
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 18h]
        add edx, 8
        push edx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 AE EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xae
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 220h], ecx
        push 40h
        push 177h
        push 224h
        mov edx, dword ptr [ebp - 21ch]
        push edx
        mov eax, dword ptr [ebp - 220h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 86 86 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58599cac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 224h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 598h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 224h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 598h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 228h], edx
        push 0
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 38 C1 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F4 72 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x72
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 9ch], eax
        mov dword ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 54: je 0x58599d7d
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 18h]
        add eax, 0ah
        push eax
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 AD EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 230h], edx
        push 40h
        push 137h
        push 21ah
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 AB 85 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58599d87
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 234h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 5a8h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 234h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 5a8h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 238h], edx
        push 0
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 5D C0 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 19 72 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x72
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a4h], eax
        mov dword ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 54: je 0x58599e58
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 18h]
        add eax, 0ah
        push eax
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A AD EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 240h], edx
        push 40h
        push 152h
        push 270h
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 240h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 D0 84 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58599e62
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 244h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 5a8h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 244h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 5a8h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 248h], eax
        push 0
        mov ecx, dword ptr [ebp - 248h]
        ; Exact mapped bytes E8 82 BF EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3E 71 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x71
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ach], eax
        mov dword ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 54: je 0x58599f33
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F AC EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xac
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 250h], eax
        push 40h
        push 145h
        push 311h
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 F5 83 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58599f3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 0b0h]
        mov dword ptr [ebp - 254h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 5b8h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 254h]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 5b8h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 258h], eax
        push 0
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 A7 BE EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 63 70 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x70
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b4h], eax
        mov dword ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 54: je 0x5859a00e
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes 8B 0D B0 06 96 58: mov ecx, dword ptr [0x589606b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 AB EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xab
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 260h], eax
        push 40h
        push 168h
        push 2cbh
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 260h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 1A 83 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a018
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b8h], 0
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 264h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 5b8h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 264h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 5b8h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 268h], ecx
        push 0
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 CC BD EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 22 F9 FF FF: jmp 0x5859999c
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859a08c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 0F 8D 76 01 00 00: jge 0x5859a20c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 588h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 26ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 EC B4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 588h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 270h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 BE B4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 598h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 274h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 90 B4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 598h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 278h], eax
        push 101h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 62 B4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 5a8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 27ch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 34 B4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 5a8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 280h], edx
        push 101h
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 06 B4 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb4
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 5b8h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 284h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 D8 B3 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb3
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*8 + 5b8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 288h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 AA B3 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb3
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 77 FE FF FF: jmp 0x5859a083
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 F1 6D 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6d
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0bch], eax
        mov dword ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 7F: je 0x5859a2ab
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 7cfh
        ; Exact mapped bytes 66 89 45 D6: mov word ptr [ebp - 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 504h]
        ; Exact mapped bytes E8 66 1E EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1e
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 504h]
        ; Exact mapped bytes E8 62 C7 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 0a0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C A8 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa8
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        movzx eax, word ptr [ebp - 2ah]
        push eax
        mov ecx, dword ptr [ebp - 28ch]
        push ecx
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov eax, dword ptr [ebp - 294h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 6D C5 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc5
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a2b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c0h], 0
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [ebp - 298h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 298h]
        mov dword ptr [eax + 4f4h], ecx
        push 58h
        ; Exact mapped bytes E8 26 6D 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6d
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c4h], eax
        mov dword ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 7F: je 0x5859a376
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 7cfh
        ; Exact mapped bytes 66 89 45 D4: mov word ptr [ebp - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 504h]
        ; Exact mapped bytes E8 9B 1D EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 504h]
        ; Exact mapped bytes E8 97 C6 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc6
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        push 0a0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 A7 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        movzx eax, word ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 29ch]
        push ecx
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov eax, dword ptr [ebp - 2a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 A2 C4 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a380
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c8h], 0
        mov edx, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 2a8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a8h]
        mov dword ptr [eax + 4f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4f4h]
        mov dword ptr [ebp - 2ach], eax
        push 101h
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 EF B1 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb1
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f4h]
        mov dword ptr [ebp - 2b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 63 BA EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 2b4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 B4 B1 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb1
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 2b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 28 BA EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f4h]
        mov dword ptr [ebp - 2bch], edx
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 AC BA EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4f8h]
        mov dword ptr [ebp - 2c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 90 BA EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 184h
        ; Exact mapped bytes E8 A9 6B 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6b
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0cch], eax
        mov dword ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x5859a53b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 4f8h]
        ; Exact mapped bytes E8 2A 1C EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1c
        __asm _emit 0xef
        __asm _emit 0xff
        sub eax, 1eh
        mov dword ptr [ebp - 2c4h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4f8h]
        ; Exact mapped bytes E8 23 C5 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc5
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 0c8h
        mov dword ptr [ebp - 2c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 4f8h]
        ; Exact mapped bytes E8 FA 1B EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1b
        __asm _emit 0xef
        __asm _emit 0xff
        sub eax, 37h
        mov dword ptr [ebp - 2cch], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 4f8h]
        ; Exact mapped bytes E8 F3 C4 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc4
        __asm _emit 0xee
        __asm _emit 0xff
        add eax, 21h
        mov dword ptr [ebp - 2d0h], eax
        ; Exact mapped bytes A1 34 20 96 58: mov eax, dword ptr [0x58962034]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 2d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4f8h]
        mov dword ptr [ebp - 2d8h], edx
        push 10101h
        push 0
        push 16dc16h
        mov eax, dword ptr [ebp - 2c4h]
        push eax
        mov ecx, dword ptr [ebp - 2c8h]
        push ecx
        mov edx, dword ptr [ebp - 2cch]
        push edx
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        mov ecx, dword ptr [ebp - 2d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 CD 3A F3 FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a545
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 0
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 2dch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2dch]
        mov dword ptr [ecx + 500h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 2e0h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 83eh
        push eax
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 F2 B8 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 500h]
        mov dword ptr [ebp - 2e4h], edx
        push 28h
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 D6 3E F3 FF: call 0x584ce480
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 52 6A 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6a
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov dword ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 51: je 0x5859a61c
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 7d0h
        ; Exact mapped bytes 66 89 4D D2: mov word ptr [ebp - 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd2
        push 0d2h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 A4 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        movzx edx, word ptr [ebp - 2eh]
        push edx
        push 14h
        push 25dh
        mov eax, dword ptr [ebp - 2e8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 FC C1 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a626
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 2ech], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx + ecx + 7a4h], eax
        push 58h
        ; Exact mapped bytes E8 AC 69 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x69
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0dch], eax
        mov dword ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 51: je 0x5859a6c2
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 7cfh
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        push 0d3h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E A4 EE FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa4
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 2f0h], eax
        movzx eax, word ptr [ebp - 30h]
        push eax
        push -28h
        push 25dh
        mov ecx, dword ptr [ebp - 2f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 56 C1 EE FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a6cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov eax, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 2f4h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2f4h]
        mov dword ptr [edx + ecx + 7a4h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 7a4h]
        mov dword ptr [ebp - 2f8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 91 AE 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 7a4h]
        mov dword ptr [ebp - 2fch], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 69 AE 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xae
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 7a4h]
        mov dword ptr [ebp - 300h], edx
        push 0
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 E4 4D F0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 7a4h]
        mov dword ptr [ebp - 304h], edx
        push 0
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 BF 4D F0 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859a7a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 19h
        ; Exact mapped bytes 0F 8D 0E 01 00 00: jge 0x5859a8bc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 4F 68 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x68
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e4h], eax
        mov dword ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 55: je 0x5859a823
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 7d0h
        ; Exact mapped bytes 66 89 55 CE: mov word ptr [ebp - 0x32], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 14h]
        add eax, 92ch
        push eax
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D A3 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        movzx ecx, word ptr [ebp - 32h]
        push ecx
        push 14h
        push 25dh
        mov edx, dword ptr [ebp - 308h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 05 7B EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7b
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a82d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 30ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 30ch]
        mov dword ptr [eax + edx*4 + 510h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 510h]
        mov dword ptr [ebp - 310h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 3A AD 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xad
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 510h]
        mov dword ptr [ebp - 314h], ecx
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 AA AC 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 510h]
        mov dword ptr [ebp - 318h], ecx
        push 0
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 EA B4 EE FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x5859a79b
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859a8ce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 5D 02 00 00: jge 0x5859ab35
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 25 67 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x67
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov dword ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5859a97c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 7d1h
        ; Exact mapped bytes 66 89 4D CC: mov word ptr [ebp - 0x34], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xcc
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 504h]
        ; Exact mapped bytes E8 95 17 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 504h]
        ; Exact mapped bytes E8 91 C0 EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc0
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], eax
        push 16bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB A1 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 324h], eax
        movzx ecx, word ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 AC 79 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859a986
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 328h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 328h]
        mov dword ptr [edx + ecx*4 + 134h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 32ch], eax
        push 0
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 E4 AB 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xab
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 330h], eax
        push 0
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 54 B4 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 334h], eax
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 D4 B4 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F0 65 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x65
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        mov dword ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0f4h], 0
        ; Exact mapped bytes 74 6F: je 0x5859aa9c
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 504h]
        ; Exact mapped bytes E8 75 16 EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x16
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 504h]
        ; Exact mapped bytes E8 71 BF EE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        push 165h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB A0 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        push 7cfh
        mov eax, dword ptr [ebp - 338h]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        push ecx
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 8C 78 EE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x78
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859aaa6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 344h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 344h]
        mov dword ptr [eax + edx*4 + 148h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 348h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 C1 AA 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xaa
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 34ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 34ch]
        ; Exact mapped bytes E8 31 B3 EE FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb3
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 350h], ecx
        push 0
        mov ecx, dword ptr [ebp - 350h]
        ; Exact mapped bytes E8 B1 B3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb3
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 90 FD FF FF: jmp 0x5859a8c5
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859ab47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 5
        ; Exact mapped bytes 0F 8D CD 00 00 00: jge 0x5859ac1e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 134h]
        mov dword ptr [ebp - 354h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, dword ptr [eax + 0d0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c4h]
        mov ecx, dword ptr [eax + ecx*8 + 24h]
        add ecx, 300h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 28h]
        imul eax, dword ptr [edx + 0d0h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov eax, dword ptr [edx + eax*8 + 20h]
        push eax
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 75 AA 21 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xaa
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        mov dword ptr [ebp - 358h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 28h]
        lea ecx, [edx + eax + 7d5h]
        push ecx
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 A5 B2 EE FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 360h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 134h]
        ; Exact mapped bytes E8 00 9E EE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 35ch], eax
        mov ecx, dword ptr [ebp - 35ch]
        push ecx
        mov ecx, dword ptr [ebp - 360h]
        ; Exact mapped bytes E8 18 48 F0 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x5859ab3e
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 74: je 0x5859ac9b
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 6B: jne 0x5859ac9b
        __asm _emit 0x75
        __asm _emit 0x6b
        push 30h
        ; Exact mapped bytes E8 CD 63 29 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x63
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0fch], eax
        mov dword ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 74 22: je 0x5859ac72
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 58903568h]
        push edx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 96 85 22 00: call 0x587c3200
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5859ac7c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 364h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 364h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 89 0D F8 1F 96 58: mov dword ptr [0x58961ff8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 74 65: je 0x5859ad1d
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 5C: je 0x5859ad1d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 368h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 36ch], ecx
        ; Exact mapped bytes 8B 15 64 20 96 58: mov edx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes FF 95 94 FC FF FF: call dword ptr [ebp - 0x36c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 370h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 374h], edx
        push 1
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes FF 95 8C FC FF FF: call dword ptr [ebp - 0x374]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 2E 00 00: call 0x5859dc00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes A3 64 05 96 58: mov dword ptr [0x58960564], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 0D EC 90 94 58: mov dword ptr [0x589490ec], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 504h]
        mov dword ptr [ebp - 378h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 0a06h]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*8 + 5c0h]
        push ecx
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 C9 46 F0 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x46
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 504h]
        ; Exact mapped bytes E8 8B 17 FD FF: call 0x5856c500
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 A7 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xa7
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F9 D7 F3 FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 37ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 3D B1 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb1
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 380h], eax
        push 0
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 81 A7 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa7
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 384h], edx
        push 0
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 85 72 F9 FF: call 0x58532060
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D DD FF FF: call 0x58598b50
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push 12ch
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 1A 19 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1a
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0fffffffeh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 0fffffffeh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], 0ffffffffh
        push 40000000h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 4B FE FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e4h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ecx + 0dch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ecx + 0e0h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 DC FF FF: call 0x58598b50
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x5859aea5
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0fffffffeh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0fffffffeh
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859aeb7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 9e8h]
        ; Exact mapped bytes 7D 64: jge 0x5859af29
        __asm _emit 0x7d
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 810h]
        mov dword ptr [ebp - 388h], edx
        push 0
        mov ecx, dword ptr [ebp - 388h]
        ; Exact mapped bytes E8 5B A6 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa6
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 810h]
        mov dword ptr [ebp - 390h], edx
        ; Exact mapped bytes E8 6F 5D 2B 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5d
        __asm _emit 0x2b
        __asm _emit 0x00
        and eax, 8000007fh
        ; Exact mapped bytes 79 05: jns 0x5859af09
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0ffffff80h
        inc eax
        add eax, 80h
        mov dword ptr [ebp - 38ch], eax
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 390h]
        ; Exact mapped bytes E8 4A 2F 00 00: call 0x5859de70
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 85: jmp 0x5859aeae
        __asm _emit 0xeb
        __asm _emit 0x85
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0adch]
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0adch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ab8h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ae0h], 0
        ; Exact mapped bytes 74 17: je 0x5859af76
        __asm _emit 0x74
        __asm _emit 0x17
        push 64h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 00 00 00: call 0x5859b010
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ae0h], 0
        push 0c4h
        push 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 C2 F3 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0xf3
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 82 1E 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1e
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}

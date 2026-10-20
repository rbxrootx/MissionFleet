// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EEA60 .. +0xBA6 bytes.
extern "C" __declspec(naked) void FUN_585eea60_585EEA60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885ee7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 134h
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
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 37 E9 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588add80h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24ch
        mov dword ptr [ebp - 7ch], ecx
        push 100h
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 1B FF FF FF: call 0x585ee9f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 100h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        add edx, 7d0h
        ; Exact mapped bytes 66 89 55 DC: mov word ptr [ebp - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        add ecx, 9c4h
        ; Exact mapped bytes 66 89 4D 88: mov word ptr [ebp - 0x78], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x88
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        add eax, 5dch
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        push 20h
        ; Exact mapped bytes E8 1C 25 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x25
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ecx + 108h], edx
        push 20h
        ; Exact mapped bytes E8 03 25 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x25
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 104h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x585eeb69
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D 28 02 00 00: jge 0x585eed9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 50h
        ; Exact mapped bytes E8 8A 24 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 19: je 0x585eeba3
        __asm _emit 0x74
        __asm _emit 0x19
        push 40h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F2 5D 1C 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x1c
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x585eebaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 104h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B2 71 E9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x71
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 104h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 90h], eax
        push 0
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 30 72 E9 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 94h], ecx
        push 190h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 4B 72 E9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x72
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        push 1000h
        ; Exact mapped bytes E8 02 24 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 98h]
        mov dword ptr [eax + ecx*4], edx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x585eec70
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 400h
        ; Exact mapped bytes 0F 8D EB 00 00 00: jge 0x585eed68
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 80 23 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 4C: je 0x585eece0
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0d5h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 5E E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x5e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0a0h], ecx
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 35 7B E9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x585eece7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0a8h], ecx
        push 64h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 09 68 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ach], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 4E 68 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FF FE FF FF: jmp 0x585eec67
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax + ecx*4]
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 FB 71 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x71
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 FD FF FF: jmp 0x585eeb60
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 210h
        ; Exact mapped bytes E8 5F 22 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x22
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 1B: je 0x585eedd0
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push -64h
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A5 DE 10 00: call 0x586fcc70
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xde
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x585eedd7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ecx + 174h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 0F BF 4D E4: movsx ecx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe4
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 65 70 E9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 0bch], eax
        push 5
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 29 6F E9 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6f
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 0c0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 8D 70 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x585eee66
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 0F 8D 7C 01 00 00: jge 0x585eefec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 8D 21 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x21
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 5D: je 0x585eeee4
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 0c4h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 0c8h], ecx
        push 9fh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 5C E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 190h
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 31 79 E9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x79
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x585eeeeb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0d0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + eax*4 + 150h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 150h]
        mov dword ptr [ebp - 0d4h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 82 66 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x66
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 CE 20 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 7A: je 0x585eefc0
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 0d8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8fh
        push ecx
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 5B E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 150h]
        mov dword ptr [ebp - 0e4h], ecx
        push 190h
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        push eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 55 78 E9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x78
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x585eefc7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [edx + ecx*4 + 130h], eax
        ; Exact mapped bytes E9 71 FE FF FF: jmp 0x585eee5d
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0dch], 0
        push 40h
        ; Exact mapped bytes E8 42 20 24 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ech], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 0dch], eax
        push 40h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0dch]
        push edx
        ; Exact mapped bytes E8 E5 DD 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdd
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        push 184h
        ; Exact mapped bytes E8 CC 1F 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x1f
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 30: je 0x585ef078
        __asm _emit 0x74
        __asm _emit 0x30
        push 505050h
        push 0
        push 0dcdcdch
        push 78h
        push 320h
        push 50h
        push 14h
        ; Exact mapped bytes A1 34 20 96 58: mov eax, dword ptr [0x58962034]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 8D EF ED FF: call 0x584ce000
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ef07f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 0f0h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [eax + 170h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 170h]
        mov dword ptr [ebp - 0f4h], eax
        movzx ecx, word ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 C6 6D E9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6d
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 42 1F 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1f
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 40: je 0x585ef112
        __asm _emit 0x74
        __asm _emit 0x40
        push 0cah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 59 E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x59
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes 0F BF 55 E4: movsx edx, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe4
        sub edx, 0ah
        push edx
        push 3e8h
        push 3e8h
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 03 77 E9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ef119
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 0fch], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [eax + 128h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 100h], eax
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 3F 6E E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 104h], edx
        push 101h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 40 64 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 8C 1E 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1e
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 25: je 0x585ef1ad
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 0F BF 45 E4: movsx eax, word ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe4
        sub eax, 0ah
        push eax
        push 3e8h
        push 3e8h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 78 31 E9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x31
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ef1b4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 108h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [eax + 124h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 10ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A4 6D E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 110h], edx
        push 101h
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 A5 63 1C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 F1 1D 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1d
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 3D: je 0x585ef260
        __asm _emit 0x74
        __asm _emit 0x3d
        push 1bh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 58 E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x58
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 0F BF 45 DC: movsx eax, word ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xdc
        add eax, 64h
        push eax
        push 12ch
        push 190h
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B5 75 E9 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x75
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ef267
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 118h]
        mov dword ptr [ecx + 120h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 11ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 F1 6C E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 120h], eax
        push 0
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 85 05 EB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 41 1D 24 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1d
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 31: je 0x585ef304
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        ; Exact mapped bytes 8B 0D B4 06 96 58: mov ecx, dword ptr [0x589606b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 58 E9 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 21 30 E9 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x30
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ef30b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ecx + 248h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 12ch], ecx
        push 40h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 FD 61 1C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x61
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 130h], eax
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 41 6A E9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 134h], edx
        push 2af8h
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 02 6B E9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 138h], ecx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 06 6A E9 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 13ch], eax
        push 2af8h
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 C7 6A E9 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6a
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 140h], edx
        push 0
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 0B 6B E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0xff
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
        mov eax, 500h
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
        mov dword ptr [eax + 10ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 274h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 118h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 10 01 00 00: mov word ptr [ecx + 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
        push 18h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 278h
        push eax
        ; Exact mapped bytes E8 A4 D9 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd9
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2b0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2b4h], 0fah
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2b8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2bch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2c0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2c4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2cch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2d0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2d4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2d8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2dch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2e0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2e4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2e8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ech], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 1C 01 00 00: mov word ptr [edx + 0x11c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes C6 05 9C 75 94 58 00: mov byte ptr [0x5894759c], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 60 35 90 58 FF FF FF FF: mov dword ptr [0x58903560], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 3
        push 0
        push 5894777ch
        ; Exact mapped bytes E8 A6 D8 25 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x585ef582
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        ; Exact mapped bytes EB 28: jmp 0x585ef5aa
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 83 3D 58 20 96 58 00: cmp dword ptr [0x58962058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x585ef5a0
        __asm _emit 0x74
        __asm _emit 0x15
        push 1
        ; Exact mapped bytes 8B 0D 58 20 96 58: mov ecx, dword ptr [0x58962058]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 54 E9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585ef5aa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 300h], 96h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 308h], 0c8h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2f0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2f4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2fch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

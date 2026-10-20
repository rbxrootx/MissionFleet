// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58601D80 .. +0x2599 bytes.
extern "C" __declspec(naked) void FUN_58601d80_58601D80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886673h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 474h
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
        ; Exact mapped bytes E8 A4 04 E8 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588adeach
        push 54h
        ; Exact mapped bytes E8 21 F2 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf2
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3E: je 0x58601e31
        __asm _emit 0x74
        __asm _emit 0x3e
        push 8fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 2D E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x2d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 32h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 04 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58601e38
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 174h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 174h]
        mov dword ptr [ecx + 60h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 178h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 13 40 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x40
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 17ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 27 37 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x37
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 180h], eax
        push 96h
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 9B 36 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x36
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 480h], 0
        push 0fch
        ; Exact mapped bytes E8 44 F1 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf1
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 3B: je 0x58601f0b
        __asm _emit 0x74
        __asm _emit 0x3b
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 2B E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 3fh
        push edx
        push 8
        mov eax, dword ptr [ebp - 184h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6A 8A 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x58601f12
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 188h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 188h]
        mov dword ptr [eax + 64h], ecx
        push 0fch
        ; Exact mapped bytes E8 CF F0 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf0
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 3B: je 0x58601f80
        __asm _emit 0x74
        __asm _emit 0x3b
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E 2B E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 3fh
        push eax
        push 8
        mov ecx, dword ptr [ebp - 18ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F5 89 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58601f87
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 190h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 190h]
        mov dword ptr [ecx + 68h], edx
        push 0fch
        ; Exact mapped bytes E8 5A F0 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 3B: je 0x58601ff5
        __asm _emit 0x74
        __asm _emit 0x3b
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 2B E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 6eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 3fh
        push ecx
        push 8
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 80 89 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58601ffc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 198h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 198h]
        mov dword ptr [edx + 6ch], eax
        push 0fch
        ; Exact mapped bytes E8 E5 EF 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xef
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 3B: je 0x5860206a
        __asm _emit 0x74
        __asm _emit 0x3b
        push 9
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 2A E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 78h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 46h
        push edx
        push 8
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0B 89 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58602071
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1a0h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 1a4h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 DA 3D E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 1a8h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 BE 3D E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 1ach], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 A2 3D E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 1b0h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 86 3D E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 1b4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 9A 34 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 1b8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 7E 34 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 1bch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 62 34 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 1c0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 46 34 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 1c4h], edx
        push 96h
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 BA 33 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 1c8h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 9E 33 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 1cch], eax
        push 96h
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 82 33 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 1d0h], edx
        push 96h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 66 33 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 22 EE 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xee
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 41: je 0x58602233
        __asm _emit 0x74
        __asm _emit 0x41
        push 90h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 29 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x29
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 33h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 1d4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F2 00 E8 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860223a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1d8h]
        mov dword ptr [eax + 80h], ecx
        push 58h
        ; Exact mapped bytes E8 A7 ED 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 3E: je 0x586022ab
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0ah
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 28 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 33h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 1dch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 6A 45 E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586022b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1e0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e0h]
        mov dword ptr [edx + 84h], eax
        push 0fch
        ; Exact mapped bytes E8 2C ED 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 3E: je 0x58602326
        __asm _emit 0x74
        __asm _emit 0x3e
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 27 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 82h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 44h
        push edx
        push 7
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 4F 86 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x86
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860232d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1e8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1e8h]
        mov dword ptr [eax + 78h], ecx
        push 0fch
        ; Exact mapped bytes E8 B4 EC 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 3E: je 0x5860239e
        __asm _emit 0x74
        __asm _emit 0x3e
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 27 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 12h
        push eax
        push 7
        mov ecx, dword ptr [ebp - 1ech]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D7 85 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586023a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1f0h]
        mov dword ptr [ecx + 74h], edx
        push 54h
        ; Exact mapped bytes E8 3F EC 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 44: je 0x58602419
        __asm _emit 0x74
        __asm _emit 0x44
        push 12ch
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 27 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 82h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 46h
        push edx
        mov eax, dword ptr [ebp - 1f4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0C FF E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58602420
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1f8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1f8h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 1fch], eax
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 FB D0 E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 200h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 0C 3A E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 204h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 F0 39 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 208h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 D4 39 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 20ch], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes E8 B8 39 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 210h], edx
        push 101h
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 CC 30 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 214h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 214h]
        ; Exact mapped bytes E8 AD 30 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 218h], eax
        push 101h
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 8E 30 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 21ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 6F 30 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 220h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 220h]
        ; Exact mapped bytes E8 53 30 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 224h], eax
        push 101h
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 37 30 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 228h], edx
        push 96h
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 A8 2F 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 22ch], ecx
        push 96h
        mov ecx, dword ptr [ebp - 22ch]
        ; Exact mapped bytes E8 89 2F 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 230h], eax
        push 96h
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 6D 2F 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 234h], edx
        push 96h
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 51 2F 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 238h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 35 2F 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2f
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 F1 E9 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 43: je 0x58602666
        __asm _emit 0x74
        __asm _emit 0x43
        push 93h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 ED 24 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 8ch
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 70h
        push ecx
        mov edx, dword ptr [ebp - 23ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 BF FC E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860266d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 240h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 240h]
        mov dword ptr [edx + 88h], eax
        push 54h
        ; Exact mapped bytes E8 74 E9 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 44: je 0x586026e4
        __asm _emit 0x74
        __asm _emit 0x44
        push 92h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 24 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 9dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 70h
        push eax
        mov ecx, dword ptr [ebp - 244h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 41 FC E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586026eb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 248h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 248h]
        mov dword ptr [ecx + 8ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 24ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 8A 2E 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x2e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 250h], eax
        push 101h
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 6B 2E 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2e
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 254h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 CD 2D 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 258h], eax
        push 96h
        mov ecx, dword ptr [ebp - 258h]
        ; Exact mapped bytes E8 AE 2D 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 6A E8 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 41: je 0x586027eb
        __asm _emit 0x74
        __asm _emit 0x41
        push 1a4h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 23 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 3dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2
        push eax
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 3A FB E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586027f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 260h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + 90h], edx
        push 58h
        ; Exact mapped bytes E8 EF E7 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe7
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 41: je 0x58602866
        __asm _emit 0x74
        __asm _emit 0x41
        push 0bh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 22 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x22
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 3dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2
        push edx
        mov eax, dword ptr [ebp - 264h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 B2 3F E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x3f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602870
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 268h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 268h]
        mov dword ptr [eax + 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 26ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 02 2D 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x2d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 270h], edx
        push 101h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 E3 2C 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 274h], ecx
        push 0
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 67 CC E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xcc
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 278h], eax
        push 96h
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 38 2C 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 27ch], edx
        push 96h
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 19 2C 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 D2 E6 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe6
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 44: je 0x5860298c
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 21 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x21
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 61h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a6h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 280h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 EC 7F 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x7f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602996
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 284h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 284h]
        mov dword ptr [edx + 0a4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 288h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 AC 34 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x34
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 28ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 BD 2B 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 290h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 2E 2B 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2b
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 EA E5 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 47: je 0x58602a77
        __asm _emit 0x74
        __asm _emit 0x47
        push 50h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 20 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0b1h
        push ecx
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 B1 F8 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602a81
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 298h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 298h]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 29ch], edx
        push 101h
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 F1 2A 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 2a0h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 62 2A 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 1E E5 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 44: je 0x58602b40
        __asm _emit 0x74
        __asm _emit 0x44
        push 52h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 20 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp - 2a4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E8 F7 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602b4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov ecx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 2a8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2a8h]
        mov dword ptr [edx + 0b0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 2ach], edx
        push 101h
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 28 2A 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 2b0h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 99 29 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 55 E4 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe4
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 44: je 0x58602c09
        __asm _emit 0x74
        __asm _emit 0x44
        push 2
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 1E E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1eh
        push ecx
        mov edx, dword ptr [ebp - 2b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 0F 3C E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602c13
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 2b8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2b8h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 2bch], edx
        push 0
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 02 C9 E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc9
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 2c0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 43 29 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x29
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 2c4h], eax
        push 96h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 B4 28 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0b4h], 0
        push 54h
        ; Exact mapped bytes E8 67 E3 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe3
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 47: je 0x58602cfa
        __asm _emit 0x74
        __asm _emit 0x47
        push 5ch
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 1E E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x1e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 39h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0bdh
        push ecx
        mov edx, dword ptr [ebp - 2c8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 2E F6 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602d04
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov ecx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 2cch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2cch]
        mov dword ptr [edx + 0b8h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 2d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 6E 28 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 2d4h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 DF 27 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 9B E2 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe2
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 47: je 0x58602dc6
        __asm _emit 0x74
        __asm _emit 0x47
        push 5ah
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 1D E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 3bh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0cbh
        push ecx
        mov edx, dword ptr [ebp - 2d8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 62 F5 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602dd0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 2dch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2dch]
        mov dword ptr [edx + 0bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 2e0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 A2 27 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 2e4h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 13 27 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x27
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 CF E1 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe1
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 47: je 0x58602e92
        __asm _emit 0x74
        __asm _emit 0x47
        push 5eh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 1C E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2e8h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 56h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0dfh
        push ecx
        mov edx, dword ptr [ebp - 2e8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 96 F4 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602e9c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 2ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ech]
        mov dword ptr [edx + 0c0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 2f0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 D6 26 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 2f4h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 47 26 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58602f0c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 6E 07 00 00: jge 0x58603684
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 E7 E0 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 4C: je 0x58602f7f
        __asm _emit 0x74
        __asm _emit 0x4c
        push 63h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 1B E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1b
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 2f8h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 18h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 50h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0e3h
        push ecx
        mov edx, dword ptr [ebp - 2f8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 A9 F3 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58602f89
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 2fch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2fch]
        mov dword ptr [eax + edx*4 + 0c4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 300h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 E1 25 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 304h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 4E 25 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 07 E0 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 49: je 0x5860305c
        __asm _emit 0x74
        __asm _emit 0x49
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 1A E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        imul edx, dword ptr [ebp - 14h], 18h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 50h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0e9h
        push edx
        push 2
        mov eax, dword ptr [ebp - 308h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 1C 79 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603066
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 30ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30ch]
        mov dword ptr [ecx + eax*4 + 0cch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0cch]
        mov dword ptr [ebp - 310h], edx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 D4 2D E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0cch]
        mov dword ptr [ebp - 314h], eax
        push 101h
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 E1 24 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0cch]
        mov dword ptr [ebp - 318h], eax
        push 96h
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 4E 24 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 0A DF 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xdf
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 4C: je 0x5860315c
        __asm _emit 0x74
        __asm _emit 0x4c
        push 61h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 1A E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 31ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        imul edx, dword ptr [ebp - 14h], 18h
        mov eax, dword ptr [ebp + 10h]
        lea ecx, [eax + edx + 50h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0feh
        push edx
        mov eax, dword ptr [ebp - 31ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 CC F1 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603166
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov edx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 320h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 320h]
        mov dword ptr [ecx + eax*4 + 0d4h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0d4h]
        mov dword ptr [ebp - 324h], edx
        push 101h
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 04 24 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0d4h]
        mov dword ptr [ebp - 328h], edx
        push 96h
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 71 23 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x23
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 2D DE 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 4C: je 0x58603239
        __asm _emit 0x74
        __asm _emit 0x4c
        push 0ch
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 18 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 32ch], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 18h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 50h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0feh
        push ecx
        mov edx, dword ptr [ebp - 32ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 DF 35 E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603243
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 330h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 330h]
        mov dword ptr [eax + edx*4 + 0fch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 334h], ecx
        push 0
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 CA C2 E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0fch]
        mov dword ptr [ebp - 338h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 97 22 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 53 DD 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xdd
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 4B: je 0x58603312
        __asm _emit 0x74
        __asm _emit 0x4b
        push 5fh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 18 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 14h], 18h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 56h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fch
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 16 F0 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860331c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 340h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 340h]
        mov dword ptr [edx + ecx*4 + 0dch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 344h], eax
        push 101h
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 4E 22 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0dch]
        mov dword ptr [ebp - 348h], eax
        push 96h
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 BB 21 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x21
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 74 DC 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 49: je 0x586033ef
        __asm _emit 0x74
        __asm _emit 0x49
        push 9
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 17 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x17
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        imul ecx, dword ptr [ebp - 14h], 18h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 55h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 100h
        push ecx
        push 4
        mov edx, dword ptr [ebp - 34ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 89 75 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x586033f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 350h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 350h]
        mov dword ptr [eax + edx*4 + 0e4h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 354h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 41 2A E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 358h], edx
        push 101h
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 4E 21 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 35ch], edx
        push 96h
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 BB 20 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 77 DB 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xdb
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 4C: je 0x586034ef
        __asm _emit 0x74
        __asm _emit 0x4c
        push 64h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 16 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        imul ecx, dword ptr [ebp - 14h], 18h
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + ecx + 4eh]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0e8h
        push ecx
        mov edx, dword ptr [ebp - 360h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 39 EE E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586034f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov ecx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 364h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 364h]
        mov dword ptr [eax + edx*4 + 0ech], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ech]
        mov dword ptr [ebp - 368h], ecx
        push 0
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 A4 29 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x29
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ech]
        mov dword ptr [ebp - 36ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 51 20 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0ech]
        mov dword ptr [ebp - 370h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 370h]
        ; Exact mapped bytes E8 BE 1F 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1f
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 7A DA 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xda
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 4B: je 0x586035eb
        __asm _emit 0x74
        __asm _emit 0x4b
        push 66h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 15 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 374h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 14h], 18h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 5bh]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0e8h
        push eax
        mov ecx, dword ptr [ebp - 374h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 3D ED E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586035f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov eax, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 378h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 378h]
        mov dword ptr [edx + ecx*4 + 0f4h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0f4h]
        mov dword ptr [ebp - 37ch], eax
        push 0
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 A8 28 E8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0f4h]
        mov dword ptr [ebp - 380h], eax
        push 101h
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 55 1F 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1f
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 0f4h]
        mov dword ptr [ebp - 384h], eax
        push 96h
        mov ecx, dword ptr [ebp - 384h]
        ; Exact mapped bytes E8 C2 1E 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x1e
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7F F8 FF FF: jmp 0x58602f03
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 79 D9 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xd9
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 44: je 0x586036e5
        __asm _emit 0x74
        __asm _emit 0x44
        push 3
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 14 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 388h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 1dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1ah
        push eax
        mov ecx, dword ptr [ebp - 388h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 33 31 E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x31
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586036ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 38ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38ch]
        mov dword ptr [ecx + 104h], edx
        push 54h
        ; Exact mapped bytes E8 EF D8 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 47: je 0x58603772
        __asm _emit 0x74
        __asm _emit 0x47
        push 8ah
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 13 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x13
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 390h], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1ah
        push edx
        mov eax, dword ptr [ebp - 390h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B6 EB E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860377c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 394h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 394h]
        mov dword ptr [eax + 108h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 398h], eax
        push 101h
        mov ecx, dword ptr [ebp - 398h]
        ; Exact mapped bytes E8 F6 1D 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 39ch], edx
        push 0
        mov ecx, dword ptr [ebp - 39ch]
        ; Exact mapped bytes E8 7A BD E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xbd
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 3a0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3a0h]
        ; Exact mapped bytes E8 BB 1D 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 3a4h], eax
        push 96h
        mov ecx, dword ptr [ebp - 3a4h]
        ; Exact mapped bytes E8 2C 1D 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 3a8h], edx
        push 96h
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 0D 1D 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1d
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 C9 D7 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd7
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 47: je 0x58603898
        __asm _emit 0x74
        __asm _emit 0x47
        push 8bh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 12 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x12
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ach], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 32h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 76h
        push edx
        mov eax, dword ptr [ebp - 3ach]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 90 EA E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xea
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586038a2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 3b0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3b0h]
        mov dword ptr [eax + 10ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 10ch]
        mov dword ptr [ebp - 3b4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 D0 1C 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 10ch]
        mov dword ptr [ebp - 3b8h], edx
        push 96h
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 41 1C 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1c
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 FD D6 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd6
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 47: je 0x58603964
        __asm _emit 0x74
        __asm _emit 0x47
        push 8ch
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 11 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3bch], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 32h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 70h
        push edx
        mov eax, dword ptr [ebp - 3bch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 C4 E9 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860396e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 3c0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3c0h]
        mov dword ptr [eax + 110h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 3c4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 04 1C 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 3c8h], edx
        push 96h
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 75 1B 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 114h], 0
        push 54h
        ; Exact mapped bytes E8 28 D6 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd6
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 47: je 0x58603a39
        __asm _emit 0x74
        __asm _emit 0x47
        push 96h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 11 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3cch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 23h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 3cch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 EF E8 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603a43
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 3d0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3d0h]
        mov dword ptr [ecx + 120h], edx
        push 54h
        ; Exact mapped bytes E8 9B D5 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd5
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 32: je 0x58603ab1
        __asm _emit 0x74
        __asm _emit 0x32
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 97h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0ffh
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 77 E8 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603abb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 3d4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3d4h]
        mov dword ptr [edx + 124h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 3d8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 B7 1A 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 3dch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 98 1A 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 3e0h], eax
        push 96h
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 09 1A 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 3e4h], edx
        push 96h
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 EA 19 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x19
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 20h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 118h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 23h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 11ch], edx
        push 0fch
        ; Exact mapped bytes E8 86 D4 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 47: je 0x58603bdb
        __asm _emit 0x74
        __asm _emit 0x47
        push 9
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 0F E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 95h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 163h
        push edx
        push 3
        mov eax, dword ptr [ebp - 3e8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 9D 6D 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603be5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 3ech], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3ech]
        mov dword ptr [eax + 128h], ecx
        push 0fch
        ; Exact mapped bytes E8 F6 D3 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd3
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 46: je 0x58603c6a
        __asm _emit 0x74
        __asm _emit 0x46
        push 9
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 0E E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 3f0h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 95h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18ah
        push eax
        push 3
        mov ecx, dword ptr [ebp - 3f0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 0E 6D 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603c74
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 3f4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 3f4h]
        mov dword ptr [ecx + 12ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 3f8h], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 CE 21 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x21
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 3fch], ecx
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 AF 21 E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x21
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 400h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 50 18 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12ch]
        mov dword ptr [ebp - 404h], eax
        push 96h
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 31 18 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 128h]
        mov dword ptr [ebp - 408h], edx
        push 101h
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 82 18 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 40ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 63 18 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x18
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 AC D2 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 46: je 0x58603db4
        __asm _emit 0x74
        __asm _emit 0x46
        push 9
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 0D E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 410h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a9h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 106h
        push eax
        push 2
        mov ecx, dword ptr [ebp - 410h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 C4 6B 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603dbe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov eax, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 414h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 414h]
        mov dword ptr [ecx + 130h], edx
        push 0fch
        ; Exact mapped bytes E8 1D D2 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd2
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 46: je 0x58603e43
        __asm _emit 0x74
        __asm _emit 0x46
        push 9
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 0C E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 418h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a9h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 139h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 418h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 35 6B 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603e4d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 41ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 41ch]
        mov dword ptr [edx + 134h], eax
        push 0fch
        ; Exact mapped bytes E8 8E D1 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 47: je 0x58603ed3
        __asm _emit 0x74
        __asm _emit 0x47
        push 8
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 0C E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a9h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 15ah
        push edx
        push 2
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 A5 6A 1B 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6a
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58603edd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 424h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 424h]
        mov dword ptr [eax + 138h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 428h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 428h]
        ; Exact mapped bytes E8 65 1F E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 42ch], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 46 1F E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 138h]
        mov dword ptr [ebp - 430h], eax
        movzx ecx, word ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 27 1F E8 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 434h], eax
        push 96h
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes E8 C8 15 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 438h], edx
        push 96h
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 A9 15 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 43ch], ecx
        push 96h
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 8A 15 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 440h], eax
        push 101h
        mov ecx, dword ptr [ebp - 440h]
        ; Exact mapped bytes E8 DB 15 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 444h], edx
        push 101h
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 BC 15 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 448h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 9D 15 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x15
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58604026
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 0F 8D CE 02 00 00: jge 0x586042fe
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 CD CF 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 52: je 0x5860409f
        __asm _emit 0x74
        __asm _emit 0x52
        push 117h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 0A E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 44ch], eax
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 81h
        push ecx
        imul edx, dword ptr [ebp - 14h], 16h
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx + 0dah]
        push ecx
        mov edx, dword ptr [ebp - 44ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 89 E2 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586040a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 450h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 450h]
        mov dword ptr [eax + edx*4 + 13ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 13ch]
        mov dword ptr [ebp - 454h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 C1 14 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0x1b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 13ch]
        mov dword ptr [ebp - 458h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 2E 14 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x14
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 58h
        ; Exact mapped bytes E8 EA CE 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xce
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 2ah
        cmp dword ptr [ebp - 160h], 0
        ; Exact mapped bytes 74 4E: je 0x5860417e
        __asm _emit 0x74
        __asm _emit 0x4e
        push 4
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 09 E8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 45ch], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 81h
        push eax
        imul ecx, dword ptr [ebp - 14h], 16h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0dah]
        push eax
        mov ecx, dword ptr [ebp - 45ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 9A 26 E8 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58604188
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 460h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 460h]
        mov dword ptr [edx + ecx*4 + 15ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 464h], eax
        push 0
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 85 B3 E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 468h], eax
        push 101h
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 C2 13 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x13
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 15ch]
        mov dword ptr [ebp - 46ch], eax
        push 96h
        mov ecx, dword ptr [ebp - 46ch]
        ; Exact mapped bytes E8 2F 13 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x13
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 EB CD 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcd
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 168h], eax
        mov byte ptr [ebp - 4], 2bh
        cmp dword ptr [ebp - 168h], 0
        ; Exact mapped bytes 74 56: je 0x58604285
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 10fh
        push ecx
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 08 E8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0xe8
        __asm _emit 0xff
        mov dword ptr [ebp - 470h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 83h
        push eax
        imul ecx, dword ptr [ebp - 14h], 16h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0dah]
        push eax
        mov ecx, dword ptr [ebp - 470h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 A3 E0 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860428f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 474h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 474h]
        mov dword ptr [edx + ecx*4 + 17ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 478h], eax
        push 101h
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 DB 12 1B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x12
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 47ch], eax
        push 96h
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 48 12 1B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1F FD FF FF: jmp 0x5860401d
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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

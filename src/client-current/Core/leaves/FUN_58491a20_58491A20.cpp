// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58491A20 .. +0xD63 bytes.
extern "C" __declspec(naked) void FUN_58491a20_58491A20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d8cah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 160h
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
        movzx eax, word ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 1F 0F 00: call 0x58583a40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 58895084h
        imul edx, dword ptr [ebp + 14h], 5dch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4b0h], edx
        imul ecx, dword ptr [ebp + 18h], 0bb8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4b4h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4b0h]
        mov edx, dword ptr [eax + 4b4h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4a8h], ecx
        mov dword ptr [eax + 4ach], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 5
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 454h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 458h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 460h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 46ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 478h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 47ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 480h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 48ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 490h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 49ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 4a0h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 338h], 55730h
        push 58h
        ; Exact mapped bytes E8 82 F4 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf4
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1D: je 0x58491baf
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 4C FF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58491bb6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [edx + 4fch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4fch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 FC 30 32 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4fch]
        mov dword ptr [ebp - 90h], ecx
        push 2706h
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 7D 42 FF FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 F9 F3 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf3
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x58491c38
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DD 4B FF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58491c3f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 94h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + 4f8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 D9 D8 00 00: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4fch]
        mov dword ptr [ebp - 9ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 1A 39 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x39
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4fch]
        mov dword ptr [ebp - 0a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 8E 41 FF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 4A F3 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf3
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1D: je 0x58491ce7
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2E 4B FF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58491cee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0a4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [eax + 500h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 500h]
        mov dword ptr [ebp - 0a8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 BA 41 FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 500h]
        mov dword ptr [ebp - 0ach], edx
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 0E D8 00 00: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 0b0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 4F 38 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x38
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 500h]
        mov dword ptr [ebp - 0b4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 C3 40 FF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 7F F2 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 38: je 0x58491dcd
        __asm _emit 0x74
        __asm _emit 0x38
        push 2b6h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 2D FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 58 05 FF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58491dd4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0bch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + 50ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50ch]
        mov dword ptr [ebp - 0c0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 D4 40 FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50ch]
        mov dword ptr [ebp - 0c4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 85 37 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50ch]
        mov dword ptr [ebp - 0c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 F9 3F FF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 B5 F1 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1D: je 0x58491e7c
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 99 49 FF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58491e83
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [eax + 504h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 504h]
        mov dword ptr [ebp - 0d0h], eax
        push 102h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 F2 36 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x36
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 504h]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 66 3F FF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 504h]
        mov dword ptr [ebp - 0d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 9A 40 FF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 06 F1 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf1
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 35: je 0x58491f43
        __asm _emit 0x74
        __asm _emit 0x35
        push 0ch
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 2B FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        push 40h
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 D2 48 FF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x58491f4a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ecx + 508h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 508h]
        mov dword ptr [ebp - 0e4h], ecx
        push 102h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 2B 36 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x36
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 508h]
        mov dword ptr [ebp - 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 9F 3E FF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 508h]
        mov dword ptr [ebp - 0ech], edx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 D3 3F FF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 3C F0 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf0
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 59: je 0x58492031
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0ah
        mov dword ptr [ebp - 0f0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        sub eax, 2
        mov dword ptr [ebp - 0f4h], eax
        push 26h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 2A FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 0f0h]
        push ecx
        mov edx, dword ptr [ebp - 0f4h]
        push edx
        push 2
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 44 89 32 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58492038
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0fch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [eax + 510h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 510h]
        mov dword ptr [ebp - 100h], eax
        push 101h
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 3D 35 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x35
        __asm _emit 0x32
        __asm _emit 0x00
        nop
        push 0fch
        ; Exact mapped bytes E8 86 EF 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 59: je 0x584920e7
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        sub edx, 9
        mov dword ptr [ebp - 104h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2eh
        mov dword ptr [ebp - 108h], ecx
        push 26h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 2A FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp - 104h]
        push edx
        mov eax, dword ptr [ebp - 108h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8E 88 32 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x584920ee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 514h], edx
        push 0fch
        ; Exact mapped bytes E8 F0 EE 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xee
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 54h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 59: je 0x5849217d
        __asm _emit 0x74
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 9
        mov dword ptr [ebp - 114h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 55h
        mov dword ptr [ebp - 118h], eax
        push 26h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 29 FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        push 5
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 F8 87 32 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x87
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58492184
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 120h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 120h]
        mov dword ptr [eax + 518h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 514h]
        mov dword ptr [ebp - 124h], eax
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 24 3D FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 518h]
        mov dword ptr [ebp - 128h], edx
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 08 3D FF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 514h]
        mov dword ptr [ebp - 12ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 B9 33 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x33
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 518h]
        mov dword ptr [ebp - 130h], eax
        push 101h
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 9A 33 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x33
        __asm _emit 0x32
        __asm _emit 0x00
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 350h
        push ecx
        ; Exact mapped bytes E8 E4 AB 3B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xab
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 21ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 220h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4cch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4b8h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 464h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b8h], 0
        ; Exact mapped bytes 83 3D C8 35 90 58 00: cmp dword ptr [0x589035c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x584923f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes E8 32 ED 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xed
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 27: je 0x58492309
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        ; Exact mapped bytes 8B 0D 14 07 96 58: mov ecx, dword ptr [0x58960714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 27 FF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1C B7 0D 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb7
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58492310
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 138h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 138h]
        mov dword ptr [eax + 51ch], ecx
        push 20h
        ; Exact mapped bytes E8 D1 EC 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xec
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 27: je 0x5849236a
        __asm _emit 0x74
        __asm _emit 0x27
        push 0fh
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 27 FF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 BB B6 0D 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58492371
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 140h]
        mov dword ptr [ecx + 520h], edx
        push 20h
        ; Exact mapped bytes E8 70 EC 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xec
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 27: je 0x584923cb
        __asm _emit 0x74
        __asm _emit 0x27
        push 12h
        ; Exact mapped bytes 8B 0D 0C 07 96 58: mov ecx, dword ptr [0x5896070c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 26 FF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov eax, dword ptr [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 5A B6 0D 00: call 0x5856da20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x584923d2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 148h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [edx + 524h], eax
        ; Exact mapped bytes EB 27: jmp 0x58492417
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 51ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 520h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 524h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 28 05 00 00: mov word ptr [edx + 0x528], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 DA EB 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xeb
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 3B: je 0x58492475
        __asm _emit 0x74
        __asm _emit 0x3b
        push 4bh
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 26 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        push 40h
        mov eax, dword ptr [ebp + 18h]
        sub eax, 1dh
        push eax
        mov ecx, dword ptr [ebp + 14h]
        sub ecx, 16h
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 B0 FE FE FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x5849247c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 150h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 150h]
        mov dword ptr [edx + 52ch], eax
        push 74h
        ; Exact mapped bytes E8 65 EB 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xeb
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 44: je 0x584924f3
        __asm _emit 0x74
        __asm _emit 0x44
        push 49h
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 26 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        push 40h
        mov ecx, dword ptr [ebp + 18h]
        add ecx, 5
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 1bh
        push edx
        mov eax, dword ptr [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 0ffh
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 62 15 07 00: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x584924fa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 158h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 158h]
        mov dword ptr [eax + 530h], ecx
        push 74h
        ; Exact mapped bytes E8 E7 EA 39 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xea
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 4A: je 0x5849257d
        __asm _emit 0x74
        __asm _emit 0x4a
        push 4ah
        ; Exact mapped bytes 8B 0D 78 07 96 58: mov ecx, dword ptr [0x58960778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 25 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        push 40h
        mov edx, dword ptr [ebp + 18h]
        add edx, 5
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 1bh
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 0
        push 0ffh
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 DB 14 07 00: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58492587
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 160h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 160h]
        mov dword ptr [ecx + 534h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 52ch]
        mov dword ptr [ebp - 164h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 EB 2F 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2f
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 330h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4c0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 224h], 10h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 450h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ech], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4d0h], 0ah
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 74h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F A9 FF FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 334h], 0ah
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4f4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 64h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0c8h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 538h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 53ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 540h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 544h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54ch], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 33 00 00: call 0x58495a50
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x584926ea
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 33 00 00: call 0x58495a30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x584926ea
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 32 00 00: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0fh
        ; Exact mapped bytes 75 34: jne 0x5849271e
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 98 FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 168h], edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 03 0C 00 00: call 0x58493320
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 550h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 81 28 02 00 00: mov word ptr [ecx + 0x228], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 474h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4dch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4e0h], 0
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

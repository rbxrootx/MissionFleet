// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58725060 .. +0x9C0 bytes.
extern "C" __declspec(naked) void FUN_58725060_58725060() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888e6c7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 158h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 D1 D5 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b40fch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 60h], edx
        push 54h
        ; Exact mapped bytes E8 38 BF 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbf
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 41: je 0x5872511d
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 88h], ecx
        push 31h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 2B FA D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 08 D2 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58725124
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 70h], edx
        push 54h
        ; Exact mapped bytes E8 C0 BE 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 41: je 0x58725195
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 94h], ecx
        push 30h
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 B3 F9 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 90 D1 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5872519c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + 6ch], edx
        push 54h
        ; Exact mapped bytes E8 48 BE 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 41: je 0x5872520d
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0a0h], ecx
        push 33h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 3B F9 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 18 D1 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58725214
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a8h]
        mov dword ptr [ecx + 68h], edx
        push 54h
        ; Exact mapped bytes E8 D0 BD 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 41: je 0x58725285
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0ach], ecx
        push 32h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 C3 F8 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 D0 D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5872528c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0b4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0b4h]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0b8h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 EF 02 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0bch], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 D3 02 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 0c0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 B7 02 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 03 BD 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 47: je 0x58725358
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0c4h], ecx
        push 35h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 F6 F7 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0c8h], eax
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 37h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 17h
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CD CF D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5872535f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0cch]
        mov dword ptr [ecx + 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0b4h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 AC 01 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 65 BC 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbc
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 72: je 0x58725421
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0d4h], eax
        push 0ah
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 08 F7 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0dch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0e0h], edx
        push 40h
        mov eax, dword ptr [ebp + 14h]
        add eax, 9fh
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 111h
        push ecx
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C4 68 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x58725428
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0e4h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0e4h]
        mov dword ptr [ecx + 94h], edx
        push 0ach
        ; Exact mapped bytes E8 B6 BB 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xbb
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 72: je 0x587254d0
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0bh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 59 F6 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f0h], edx
        ; Exact mapped bytes A1 04 20 96 58: mov eax, dword ptr [0x58962004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0f4h], eax
        push 40h
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 9fh
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 141h
        push edx
        mov eax, dword ptr [ebp - 0ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 15 68 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587254d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0f8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0f8h]
        mov dword ptr [edx + 98h], eax
        push 0ach
        ; Exact mapped bytes E8 07 BB 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbb
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 6E: je 0x5872557b
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0fch], edx
        push 7
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 AA F5 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 108h], ecx
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 33h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 173h
        push eax
        mov ecx, dword ptr [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 6A 67 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x67
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x58725582
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 10ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 9ch], ecx
        push 0ach
        ; Exact mapped bytes E8 5C BA 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 72: je 0x5872562a
        __asm _emit 0x74
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 110h], eax
        push 8
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 FF F4 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf4
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 118h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 11ch], edx
        push 40h
        mov eax, dword ptr [ebp + 14h]
        add eax, 93h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 173h
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 BB 66 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x66
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58725631
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 120h]
        mov dword ptr [ecx + 0a0h], edx
        push 94h
        ; Exact mapped bytes E8 AD B9 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 42: je 0x587256a9
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 14h]
        add eax, 94h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0d1h
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 39h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 44h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 2C AC 09 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x587256b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 124h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [eax + edx + 3d4h], ecx
        push 94h
        ; Exact mapped bytes E8 25 B9 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 44: je 0x58725733
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 14h]
        add edx, 94h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 15eh
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0d7h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 A2 AB 09 00: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5872573a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 128h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 128h]
        mov dword ptr [ecx + eax + 3d4h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58725771
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x58725845
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 82 B8 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb8
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 4C: je 0x587257de
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 12ch], edx
        push 3eh
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 75 F3 D5 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf3
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        push 40h
        imul eax, dword ptr [ebp - 14h], 0dh
        mov ecx, dword ptr [ebp + 14h]
        lea edx, [ecx + eax + 38h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1fh
        push eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 47 CB D5 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcb
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x587257e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 134h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 134h]
        mov dword ptr [edx + ecx*4 + 78h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 138h], eax
        push 101h
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 8E FD 08 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 78h]
        mov dword ptr [ebp - 13ch], eax
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 A1 06 D6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x58725768
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ach
        ; Exact mapped bytes E8 B5 B7 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 64: je 0x587258c3
        __asm _emit 0x74
        __asm _emit 0x64
        push 6
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 F2 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf2
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 144h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 148h], edx
        push 40h
        mov eax, dword ptr [ebp + 14h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 107h
        push ecx
        mov edx, dword ptr [ebp - 140h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 22 64 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587258ca
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 14ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14ch]
        mov dword ptr [ecx + 0a4h], edx
        push 0ach
        ; Exact mapped bytes E8 14 B7 10 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb7
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 65: je 0x58725965
        __asm _emit 0x74
        __asm _emit 0x65
        push 7
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 F1 D5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 158h], ecx
        push 40h
        mov edx, dword ptr [ebp + 14h]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 141h
        push eax
        mov ecx, dword ptr [ebp - 150h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 154h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 83 63 DA FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x63
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5872596f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 15ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 160h], eax
        push 0
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 E6 05 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 164h], edx
        push 0
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 CA 05 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0xd6
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C0 05 D6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0xd6
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
        mov byte ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3d0h], 0
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

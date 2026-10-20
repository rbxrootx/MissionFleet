// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860B090 .. +0x27C7 bytes.
extern "C" __declspec(naked) void FUN_5860b090_5860B090() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886a99h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 44ch
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
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 98 71 E7 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x71
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588ae074h
        push 198h
        ; Exact mapped bytes E8 12 5F 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5f
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 16: je 0x5860b118
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588adff0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9D 52 17 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b11f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 160h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 160h]
        mov dword ptr [eax + 60h], ecx
        push 54h
        ; Exact mapped bytes E8 C5 5E 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5e
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 41: je 0x5860b190
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 164h], eax
        push 2
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 B8 99 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 95 71 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x71
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b197
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 16ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 16ch]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 170h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 E4 A3 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa3
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 174h], edx
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 5B AC E7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xac
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 17 5E 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5e
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 41: je 0x5860b23e
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 178h], ecx
        push 1
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 0A 99 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E7 70 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b245
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 180h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 180h]
        mov dword ptr [ecx + 64h], edx
        push 54h
        ; Exact mapped bytes E8 9F 5D 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x5d
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 41: je 0x5860b2b6
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 184h], ecx
        push 4
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 92 98 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6F 70 E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x70
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b2bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 18ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18ch]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 190h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 BE A2 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 194h], eax
        push 0
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 35 AB E7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xab
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 F1 5C 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 41: je 0x5860b364
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 198h], edx
        push 3
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 E4 97 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x97
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        push 40h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C1 6F E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b36b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1a0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1a0h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 1a4h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 10 A2 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 1a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 87 AA E7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5860b3cc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D CB 01 00 00: jge 0x5860b5a1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 27 5C 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 47: je 0x5860b434
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1ach], ecx
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + edx + 0ah]
        push eax
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 14 97 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x97
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F1 6E E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b43b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 1b4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1b4h]
        mov dword ptr [ecx + eax*4 + 84h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 1b8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 32 A1 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 1bch], edx
        push 0
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 A2 A9 E7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 84h]
        mov dword ptr [ebp - 1c0h], edx
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 22 AA E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xaa
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 54h
        ; Exact mapped bytes E8 3E 5B 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5b
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 47: je 0x5860b51d
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1c4h], ecx
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + edx + 9]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 2B 96 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x96
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        push 40h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 08 6E E7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b524
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1cch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1cch]
        mov dword ptr [ecx + eax*4 + 74h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 1d0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 4F A0 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa0
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 1d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 C2 A8 E7 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 1d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 45 A9 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa9
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 22 FE FF FF: jmp 0x5860b3c3
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        ; Exact mapped bytes E8 5C 5A 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5a
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 5B: je 0x5860b613
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 1dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 4F 95 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 32h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 182h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0fah
        push ecx
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        push 0
        push 0f4240h
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 42 84 EF FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b61a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 1e4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1e4h]
        mov dword ptr [edx + 0ach], eax
        push 74h
        ; Exact mapped bytes E8 C7 59 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x59
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 5C: je 0x5860b6a9
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 1e8h], edx
        push 0
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 BA 94 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 16dh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0fah
        push edx
        mov eax, dword ptr [ebp - 1ech]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        push 0f4240h
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 AC 83 EF FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b6b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 1f0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1f0h]
        mov dword ptr [eax + 0b0h], ecx
        push 70h
        ; Exact mapped bytes E8 31 59 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x59
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 43: je 0x5860b726
        __asm _emit 0x74
        __asm _emit 0x43
        push 1
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 6eh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e4h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 162h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 8F 6C E7 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b72d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 1f4h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [edx + ecx + 0d8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0d8h]
        mov dword ptr [ebp - 1f8h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 1f8h]
        ; Exact mapped bytes E8 03 A7 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa7
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 7F 58 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x58
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 49: je 0x5860b7de
        __asm _emit 0x74
        __asm _emit 0x49
        push 1
        push 0
        push 0ffffffh
        mov eax, dword ptr [ebp + 10h]
        add eax, 0b4h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1e4h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 162h
        push eax
        ; Exact mapped bytes 8B 0D 28 20 96 58: mov ecx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 D7 6B E7 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b7e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1fch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1fch]
        mov dword ptr [edx + ecx + 0d8h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 5ah
        push ecx
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 4B A6 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa6
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 C7 57 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x57
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 49: je 0x5860b896
        __asm _emit 0x74
        __asm _emit 0x49
        push 1
        push 0
        push 0ffffffh
        mov edx, dword ptr [ebp + 10h]
        add edx, 0fch
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1e4h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 162h
        push edx
        ; Exact mapped bytes A1 28 20 96 58: mov eax, dword ptr [0x58962028]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1F 6B E7 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b89d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 204h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [ecx + eax + 0d8h], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0d8h]
        mov dword ptr [ebp - 208h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 95 A5 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 70h
        ; Exact mapped bytes E8 11 57 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x57
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 4A: je 0x5860b94d
        __asm _emit 0x74
        __asm _emit 0x4a
        push 1
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 134h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e4h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 120h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 162h
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 68 6A E7 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5860b954
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 20ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20ch]
        mov dword ptr [ecx + eax + 0d8h], edx
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 0d8h]
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 5ah
        push ecx
        mov ecx, dword ptr [ebp - 210h]
        ; Exact mapped bytes E8 DC A4 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 55 56 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x56
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0eh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 43: je 0x5860ba02
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 91 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x91
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 17dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 20dh
        push eax
        push 6
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 76 EF 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xef
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860ba0c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 218h]
        mov dword ptr [eax + edx + 9ch], ecx
        push 0fch
        ; Exact mapped bytes E8 C6 55 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x55
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0fh
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 46: je 0x5860ba9a
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 90 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x90
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 17dh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 23fh
        push eax
        push 6
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 DE EE 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860baa4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 220h]
        mov dword ptr [edx + ecx + 9ch], eax
        push 0fch
        ; Exact mapped bytes E8 2E 55 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x55
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov byte ptr [ebp - 4], 10h
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 47: je 0x5860bb33
        __asm _emit 0x74
        __asm _emit 0x47
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 8F E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 169h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 20dh
        push edx
        push 6
        mov eax, dword ptr [ebp - 224h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 45 EE 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bb3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 228h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 228h]
        mov dword ptr [edx + ecx + 0a4h], eax
        push 0fch
        ; Exact mapped bytes E8 95 54 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov byte ptr [ebp - 4], 11h
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 47: je 0x5860bbcc
        __asm _emit 0x74
        __asm _emit 0x47
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 8F E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 169h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 23fh
        push edx
        push 6
        mov eax, dword ptr [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 AC ED 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xed
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bbd6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 230h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 230h]
        mov dword ptr [ecx + eax + 0a4h], edx
        push 0fch
        ; Exact mapped bytes E8 FC 53 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x53
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 12h
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 46: je 0x5860bc64
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 8E E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 221h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 234h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 14 ED 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bc6e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 238h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 238h]
        mov dword ptr [edx + 0b8h], eax
        push 0fch
        ; Exact mapped bytes E8 6D 53 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x53
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0a8h], eax
        mov byte ptr [ebp - 4], 13h
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 47: je 0x5860bcf4
        __asm _emit 0x74
        __asm _emit 0x47
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 8E E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0feh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 244h
        push edx
        push 2
        mov eax, dword ptr [ebp - 23ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 84 EC 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bcfe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ach], 0
        mov edx, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 240h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 240h]
        mov dword ptr [eax + 0b4h], ecx
        push 0fch
        ; Exact mapped bytes E8 DD 52 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x52
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 14h
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 46: je 0x5860bd83
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 8D E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 136h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 107h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 244h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 F5 EB 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bd8d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b4h], 0
        mov eax, dword ptr [ebp - 0b4h]
        mov dword ptr [ebp - 248h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 248h]
        mov dword ptr [ecx + 0bch], edx
        push 0fch
        ; Exact mapped bytes E8 4E 52 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x52
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 46: je 0x5860be12
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 8C E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0feh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 107h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 24ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 66 EB 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860be1c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 0
        mov ecx, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 250h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 250h]
        mov dword ptr [edx + 0c0h], eax
        push 0fch
        ; Exact mapped bytes E8 BF 51 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c0h], eax
        mov byte ptr [ebp - 4], 16h
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 47: je 0x5860bea2
        __asm _emit 0x74
        __asm _emit 0x47
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 8C E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0feh
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 13bh
        push edx
        push 6
        mov eax, dword ptr [ebp - 254h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 D6 EA 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860beac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0c4h], 0
        mov edx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 258h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 258h]
        mov dword ptr [eax + 0c4h], ecx
        push 0fch
        ; Exact mapped bytes E8 2F 51 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x51
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0c8h], eax
        mov byte ptr [ebp - 4], 17h
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 43: je 0x5860bf2e
        __asm _emit 0x74
        __asm _emit 0x43
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 8B E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 70h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 107h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 25ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 4A EA 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xea
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bf38
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0cch], 0
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [ebp - 260h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 260h]
        mov dword ptr [ecx + eax], edx
        push 0fch
        ; Exact mapped bytes E8 8F 50 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x50
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov byte ptr [ebp - 4], 18h
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 44: je 0x5860bfcf
        __asm _emit 0x74
        __asm _emit 0x44
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 8B E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 7eh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 107h
        push ecx
        push 6
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 A9 E9 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860bfd9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d4h], 0
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 268h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 0c8h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 268h]
        mov dword ptr [edx + eax], ecx
        push 0fch
        ; Exact mapped bytes E8 EE 4F 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4f
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov byte ptr [ebp - 4], 19h
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 46: je 0x5860c072
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 8A E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0b6h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 107h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 26ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 06 E9 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c07c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 270h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 270h]
        mov dword ptr [eax + edx], ecx
        push 0fch
        ; Exact mapped bytes E8 4B 4F 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4f
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov byte ptr [ebp - 4], 1ah
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 46: je 0x5860c115
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 89 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x89
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 0c4h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 107h
        push eax
        push 6
        mov ecx, dword ptr [ebp - 274h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 63 E8 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c11f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov eax, dword ptr [ebp - 0e4h]
        mov dword ptr [ebp - 278h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 278h]
        mov dword ptr [eax + ecx], edx
        push 0fch
        ; Exact mapped bytes E8 A8 4E 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4e
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov byte ptr [ebp - 4], 1bh
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 44: je 0x5860c1b6
        __asm _emit 0x74
        __asm _emit 0x44
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 89 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 27ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 118h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 27ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 C2 E7 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c1c0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov ecx, dword ptr [ebp - 0ech]
        mov dword ptr [ebp - 280h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 280h]
        mov dword ptr [edx + ecx], eax
        push 0fch
        ; Exact mapped bytes E8 07 4E 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4e
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 1ch
        cmp dword ptr [ebp - 0f0h], 0
        ; Exact mapped bytes 74 44: je 0x5860c257
        __asm _emit 0x74
        __asm _emit 0x44
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 88 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 12eh
        push edx
        push 1
        mov eax, dword ptr [ebp - 284h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 21 E7 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c261
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov edx, dword ptr [ebp - 0f4h]
        mov dword ptr [ebp - 288h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 288h]
        mov dword ptr [eax + ecx], edx
        push 0fch
        ; Exact mapped bytes E8 66 4D 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f8h], eax
        mov byte ptr [ebp - 4], 1dh
        cmp dword ptr [ebp - 0f8h], 0
        ; Exact mapped bytes 74 46: je 0x5860c2fa
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 88 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 118h
        push ecx
        push 2
        mov edx, dword ptr [ebp - 28ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 7E E6 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c304
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 290h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 100h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ecx + eax], edx
        push 0fch
        ; Exact mapped bytes E8 C3 4C 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 100h], eax
        mov byte ptr [ebp - 4], 1eh
        cmp dword ptr [ebp - 100h], 0
        ; Exact mapped bytes 74 46: je 0x5860c39d
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 87 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 294h], eax
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12eh
        push ecx
        push 1
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 DB E5 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c3a7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 298h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 100h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 298h]
        mov dword ptr [ecx + edx], eax
        push 0fch
        ; Exact mapped bytes E8 20 4C 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 1fh
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 74 47: je 0x5860c441
        __asm _emit 0x74
        __asm _emit 0x47
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 86 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0e7h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 115h
        push edx
        push 4
        mov eax, dword ptr [ebp - 29ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 37 E5 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe5
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c44b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov edx, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 2a0h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2a0h]
        mov dword ptr [eax + 0f8h], ecx
        push 0fch
        ; Exact mapped bytes E8 90 4B 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4b
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 110h], eax
        mov byte ptr [ebp - 4], 20h
        cmp dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 74 46: je 0x5860c4d0
        __asm _emit 0x74
        __asm _emit 0x46
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 86 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        mov edx, dword ptr [ebp + 10h]
        add edx, 120h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 115h
        push eax
        push 4
        mov ecx, dword ptr [ebp - 2a4h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 A8 E4 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe4
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860c4da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 2a8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2a8h]
        mov dword ptr [ecx + 0fch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 2ach], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 98 90 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 2b0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 79 90 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 2b4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b4h]
        ; Exact mapped bytes E8 51 90 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 2b8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 29 90 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 2bch], edx
        push 101h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 01 90 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 2c0h], edx
        push 101h
        mov ecx, dword ptr [ebp - 2c0h]
        ; Exact mapped bytes E8 D9 8F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 2c4h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2c4h]
        ; Exact mapped bytes E8 BA 8F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 2c8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 9B 8F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 2cch], edx
        push 101h
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 7C 8F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 2d0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2d0h]
        ; Exact mapped bytes E8 49 8F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 2d4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 16 8F 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8f
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 2d8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 E3 8E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 2dch], edx
        push 101h
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 B0 8E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 2e0h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2e0h]
        ; Exact mapped bytes E8 7D 8E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 100h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 2e4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 4A 8E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 2e8h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 17 8E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 100h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 2ech], edx
        push 101h
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 E4 8D 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 2f0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 C5 8D 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 2f4h], eax
        push 101h
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 A6 8D 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 2f8h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 4B 96 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x96
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0a4h]
        mov dword ptr [ebp - 2fch], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 20 96 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 9ch]
        mov dword ptr [ebp - 300h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 300h]
        ; Exact mapped bytes E8 F5 95 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 304h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 304h]
        ; Exact mapped bytes E8 CA 95 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 308h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 308h]
        ; Exact mapped bytes E8 A8 95 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 30ch], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 30ch]
        ; Exact mapped bytes E8 86 95 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 310h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 310h]
        ; Exact mapped bytes E8 64 95 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 314h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 2E 95 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x95
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 318h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 318h]
        ; Exact mapped bytes E8 F8 94 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0c8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 31ch], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 5ah
        push ecx
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes E8 C2 94 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 0c8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 320h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 5ah
        push ecx
        mov ecx, dword ptr [ebp - 320h]
        ; Exact mapped bytes E8 8C 94 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 324h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 56 94 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 100h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 5ah
        push ecx
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 20 94 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 100h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 32ch], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 32ch]
        ; Exact mapped bytes E8 EA 93 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax + 100h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 330h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 B4 93 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 334h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes E8 92 93 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 338h], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 70 93 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x93
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5860cb23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 0F 8D 96 02 00 00: jge 0x5860cdc3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 CD 44 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 118h], eax
        mov byte ptr [ebp - 4], 21h
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 41: je 0x5860cb8e
        __asm _emit 0x74
        __asm _emit 0x41
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 7F E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 212h
        push edx
        push 6
        mov eax, dword ptr [ebp - 33ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 EA DD 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860cb98
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 340h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 340h]
        mov dword ptr [ecx + eax*4 + 110h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 344h], edx
        push 101h
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 D2 89 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x89
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 110h]
        mov dword ptr [ebp - 348h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes E8 7C 92 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x92
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0fch
        ; Exact mapped bytes E8 F5 43 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 120h], eax
        mov byte ptr [ebp - 4], 22h
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 74 41: je 0x5860cc66
        __asm _emit 0x74
        __asm _emit 0x41
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 7E E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 34ch], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 23ah
        push edx
        push 8
        mov eax, dword ptr [ebp - 34ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 12 DD 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xdd
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860cc70
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 350h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 350h]
        mov dword ptr [ecx + eax*4 + 124h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 124h]
        mov dword ptr [ebp - 354h], edx
        push 101h
        mov ecx, dword ptr [ebp - 354h]
        ; Exact mapped bytes E8 FA 88 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 124h]
        mov dword ptr [ebp - 358h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 358h]
        ; Exact mapped bytes E8 A4 91 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x91
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 20 43 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 128h], eax
        mov byte ptr [ebp - 4], 23h
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 53: je 0x5860cd4d
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 35ch], edx
        push 9
        mov ecx, dword ptr [ebp - 35ch]
        ; Exact mapped bytes E8 BD 7D E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x7d
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 360h], eax
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 27bh
        push edx
        mov eax, dword ptr [ebp - 360h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 CB 9A E7 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860cd57
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 364h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 364h]
        mov dword ptr [ecx + eax*4 + 138h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 138h]
        mov dword ptr [ebp - 368h], edx
        push 101h
        mov ecx, dword ptr [ebp - 368h]
        ; Exact mapped bytes E8 13 88 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 138h]
        mov dword ptr [ebp - 36ch], edx
        push 0
        mov ecx, dword ptr [ebp - 36ch]
        ; Exact mapped bytes E8 93 27 E9 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x27
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 FD FF FF: jmp 0x5860cb1a
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5860cdd5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D DD 00 00 00: jge 0x5860cebc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 1B 42 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 130h], eax
        mov byte ptr [ebp - 4], 24h
        cmp dword ptr [ebp - 130h], 0
        ; Exact mapped bytes 74 41: je 0x5860ce40
        __asm _emit 0x74
        __asm _emit 0x41
        push 2ch
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 7C E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7c
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 370h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1e0h
        push edx
        push 6
        mov eax, dword ptr [ebp - 370h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 38 DB 1A 00: call 0x587ba970
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdb
        __asm _emit 0x1a
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860ce4a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov edx, dword ptr [ebp - 134h]
        mov dword ptr [ebp - 374h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 374h]
        mov dword ptr [ecx + eax*4 + 0e8h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e8h]
        mov dword ptr [ebp - 378h], edx
        push 101h
        mov ecx, dword ptr [ebp - 378h]
        ; Exact mapped bytes E8 20 87 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 0e8h]
        mov dword ptr [ebp - 37ch], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 5ah
        push eax
        mov ecx, dword ptr [ebp - 37ch]
        ; Exact mapped bytes E8 CA 8F E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 FF FF FF: jmp 0x5860cdcc
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5860cece
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 0F 8D DE 01 00 00: jge 0x5860d0b6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 22 41 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x41
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov byte ptr [ebp - 4], 25h
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 74 7C: je 0x5860cf74
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 380h], eax
        push 4
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 BF 7B E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 388h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38ch], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5ah
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 138h
        push edx
        mov eax, dword ptr [ebp - 384h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        push edx
        mov eax, dword ptr [ebp - 38ch]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 74 ED EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860cf7e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 390h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 390h]
        mov dword ptr [eax + edx*4 + 14ch], ecx
        push 0ach
        ; Exact mapped bytes E8 59 40 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov byte ptr [ebp - 4], 26h
        cmp dword ptr [ebp - 140h], 0
        ; Exact mapped bytes 74 7C: je 0x5860d03d
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 394h], eax
        push 3
        mov ecx, dword ptr [ebp - 394h]
        ; Exact mapped bytes E8 F6 7A E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7a
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 398h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 39ch], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 3a0h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 32h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 64h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 138h
        push edx
        mov eax, dword ptr [ebp - 398h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 39ch]
        push edx
        mov eax, dword ptr [ebp - 3a0h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 AB EC EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xec
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860d047
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov ecx, dword ptr [ebp - 144h]
        mov dword ptr [ebp - 3a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [eax + edx*4 + 15ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 14ch]
        mov dword ptr [ebp - 3a8h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3a8h]
        ; Exact mapped bytes E8 23 85 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 15ch]
        mov dword ptr [ebp - 3ach], ecx
        push 101h
        mov ecx, dword ptr [ebp - 3ach]
        ; Exact mapped bytes E8 00 85 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0F FE FF FF: jmp 0x5860cec5
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 110h]
        mov dword ptr [ebp - 3b0h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 5dh
        push eax
        mov ecx, dword ptr [ebp - 3b0h]
        ; Exact mapped bytes E8 50 86 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x86
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 3b4h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 5dh
        push edx
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 26 86 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x86
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 3b8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 5dh
        push ecx
        mov ecx, dword ptr [ebp - 3b8h]
        ; Exact mapped bytes E8 FC 85 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 3bch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 5bh
        push eax
        mov ecx, dword ptr [ebp - 3bch]
        ; Exact mapped bytes E8 D2 85 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 14ch]
        mov dword ptr [ebp - 3c0h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 57h
        push edx
        mov ecx, dword ptr [ebp - 3c0h]
        ; Exact mapped bytes E8 A8 85 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 15ch]
        mov dword ptr [ebp - 3c4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 61h
        push ecx
        mov ecx, dword ptr [ebp - 3c4h]
        ; Exact mapped bytes E8 7E 85 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 3c8h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a3h
        push edx
        mov ecx, dword ptr [ebp - 3c8h]
        ; Exact mapped bytes E8 51 85 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0e8h]
        mov dword ptr [ebp - 3cch], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0a3h
        push eax
        mov ecx, dword ptr [ebp - 3cch]
        ; Exact mapped bytes E8 25 85 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 3d0h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a3h
        push ecx
        mov ecx, dword ptr [ebp - 3d0h]
        ; Exact mapped bytes E8 F8 84 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 3d4h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0a1h
        push edx
        mov ecx, dword ptr [ebp - 3d4h]
        ; Exact mapped bytes E8 CB 84 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 14ch]
        mov dword ptr [ebp - 3d8h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 9dh
        push eax
        mov ecx, dword ptr [ebp - 3d8h]
        ; Exact mapped bytes E8 9F 84 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 15ch]
        mov dword ptr [ebp - 3dch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0a7h
        push ecx
        mov ecx, dword ptr [ebp - 3dch]
        ; Exact mapped bytes E8 72 84 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 3e0h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0eah
        push edx
        mov ecx, dword ptr [ebp - 3e0h]
        ; Exact mapped bytes E8 46 84 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 0e8h]
        mov dword ptr [ebp - 3e4h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0eah
        push eax
        mov ecx, dword ptr [ebp - 3e4h]
        ; Exact mapped bytes E8 1B 84 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 3e8h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0eah
        push ecx
        mov ecx, dword ptr [ebp - 3e8h]
        ; Exact mapped bytes E8 EF 83 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 138h]
        mov dword ptr [ebp - 3ech], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 0e8h
        push edx
        mov ecx, dword ptr [ebp - 3ech]
        ; Exact mapped bytes E8 C3 83 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 14ch]
        mov dword ptr [ebp - 3f0h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0e5h
        push eax
        mov ecx, dword ptr [ebp - 3f0h]
        ; Exact mapped bytes E8 98 83 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 15ch]
        mov dword ptr [ebp - 3f4h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0efh
        push ecx
        mov ecx, dword ptr [ebp - 3f4h]
        ; Exact mapped bytes E8 6C 83 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 110h]
        mov dword ptr [ebp - 3f8h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 123h
        push eax
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes E8 40 83 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 3fch], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 123h
        push edx
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes E8 13 83 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 400h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 123h
        push ecx
        mov ecx, dword ptr [ebp - 400h]
        ; Exact mapped bytes E8 E6 82 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 404h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 121h
        push eax
        mov ecx, dword ptr [ebp - 404h]
        ; Exact mapped bytes E8 BA 82 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 14ch]
        mov dword ptr [ebp - 408h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 11dh
        push edx
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 8D 82 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 15ch]
        mov dword ptr [ebp - 40ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 127h
        push ecx
        mov ecx, dword ptr [ebp - 40ch]
        ; Exact mapped bytes E8 60 82 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x82
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 110h]
        mov dword ptr [ebp - 410h], ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 198h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 107h
        push eax
        mov ecx, dword ptr [ebp - 410h]
        ; Exact mapped bytes E8 1A 81 1A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x81
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 414h], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 198h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 230h
        push edx
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 E3 80 1A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 418h], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 196h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 270h
        push ecx
        mov ecx, dword ptr [ebp - 418h]
        ; Exact mapped bytes E8 AD 80 1A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 86 3A 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x3a
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov byte ptr [ebp - 4], 27h
        cmp dword ptr [ebp - 148h], 0
        ; Exact mapped bytes 74 7F: je 0x5860d613
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 41ch], eax
        push 5
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 23 75 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x75
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 420h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 424h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 428h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 64h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1b3h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1cch
        push edx
        mov eax, dword ptr [ebp - 420h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 424h]
        push edx
        mov eax, dword ptr [ebp - 428h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 D5 E6 EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860d61d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 42ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 42ch]
        mov dword ptr [edx + 16ch], eax
        push 0ach
        ; Exact mapped bytes E8 BE 39 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x39
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 150h], eax
        mov byte ptr [ebp - 4], 28h
        cmp dword ptr [ebp - 150h], 0
        ; Exact mapped bytes 74 7D: je 0x5860d6d9
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 430h], edx
        push 6
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 5B 74 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x74
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 434h], eax
        ; Exact mapped bytes A1 10 20 96 58: mov eax, dword ptr [0x58962010]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 438h], eax
        ; Exact mapped bytes 8B 0D 04 20 96 58: mov ecx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 43ch], ecx
        ; Exact mapped bytes 0F BF 55 14: movsx edx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x14
        add edx, 64h
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 1b3h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 21dh
        push ecx
        mov edx, dword ptr [ebp - 434h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 438h]
        push ecx
        mov edx, dword ptr [ebp - 43ch]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 0F E6 EB FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860d6e3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov eax, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 440h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 440h]
        mov dword ptr [ecx + 170h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 444h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 8F 7E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 170h]
        mov dword ptr [ebp - 448h], eax
        push 101h
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 70 7E 1A 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7e
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        push 0ach
        ; Exact mapped bytes E8 B9 38 22 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov byte ptr [ebp - 4], 29h
        cmp dword ptr [ebp - 158h], 0
        ; Exact mapped bytes 74 2E: je 0x5860d78f
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        add ecx, 63h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 89 5C 00 00: call 0x58613410
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5860d799
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov ecx, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 44ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 44ch]
        mov dword ptr [edx + 174h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 450h], edx
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        add eax, 2710h
        push eax
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 A4 86 E7 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 454h], edx
        push 0
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 98 87 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        push 0d74h
        ; Exact mapped bytes E8 3F 38 22 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x38
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 458h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 458h]
        mov dword ptr [eax + 198h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6B 87 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0xff
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 31 85 E7 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 178h], 0
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

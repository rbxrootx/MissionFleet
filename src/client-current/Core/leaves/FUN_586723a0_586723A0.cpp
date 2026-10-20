// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586723A0 .. +0xB76 bytes.
extern "C" __declspec(naked) void FUN_586723a0_586723A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58889a3dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 130h
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
        mov dword ptr [ebp - 14h], ecx
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
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 FE E0 FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588afe80h
        mov dword ptr [ebp - 28h], 258h
        mov dword ptr [ebp - 2ch], 0fh
        push 198h
        ; Exact mapped bytes E8 F0 EB 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xeb
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 16: je 0x5867243a
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588afe64h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7B DF 10 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xdf
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x58672441
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 90h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [edx + 60h], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5867246c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0fh
        ; Exact mapped bytes 0F 8D 42 03 00 00: jge 0x586727b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 18: je 0x58672494
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 74 12: je 0x58672494
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 74 0C: je 0x58672494
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 74 06: je 0x58672494
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 75 13: jne 0x586724a7
        __asm _emit 0x75
        __asm _emit 0x13
        mov dword ptr [ebp - 24h], 4
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x58672531
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 1E: je 0x586724cb
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 74 18: je 0x586724cb
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 74 12: je 0x586724cb
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 74 0C: je 0x586724cb
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 10h], 0bh
        ; Exact mapped bytes 74 06: je 0x586724cb
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0dh
        ; Exact mapped bytes 75 10: jne 0x586724db
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 24h], 7
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 56: jmp 0x58672531
        __asm _emit 0xeb
        __asm _emit 0x56
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 10: jne 0x586724f1
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 24h], 0ah
        mov dword ptr [ebp - 20h], 2
        ; Exact mapped bytes EB 40: jmp 0x58672531
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 75 10: jne 0x58672507
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 24h], 0dh
        mov dword ptr [ebp - 20h], 3
        ; Exact mapped bytes EB 2A: jmp 0x58672531
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 75 10: jne 0x5867251d
        __asm _emit 0x75
        __asm _emit 0x10
        mov dword ptr [ebp - 24h], 10h
        mov dword ptr [ebp - 20h], 4
        ; Exact mapped bytes EB 14: jmp 0x58672531
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [ebp - 10h], 0eh
        ; Exact mapped bytes 75 0E: jne 0x58672531
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [ebp - 24h], 13h
        mov dword ptr [ebp - 20h], 5
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 7D 08: jge 0x58672545
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 68: jmp 0x586725ad
        __asm _emit 0xeb
        __asm _emit 0x68
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 7D 0B: jge 0x58672556
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 30h
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 57: jmp 0x586725ad
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 0B: jge 0x58672567
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        add edx, 60h
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 46: jmp 0x586725ad
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 7D 0D: jge 0x5867257a
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 1ch]
        add eax, 90h
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 33: jmp 0x586725ad
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp - 10h], 0ch
        ; Exact mapped bytes 7D 0E: jge 0x5867258e
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0c0h
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 1F: jmp 0x586725ad
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp dword ptr [ebp - 10h], 0eh
        ; Exact mapped bytes 7D 0E: jge 0x586725a2
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 1ch]
        add edx, 0f0h
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 0B: jmp 0x586725ad
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        add eax, 111h
        mov dword ptr [ebp - 1ch], eax
        push 58h
        ; Exact mapped bytes E8 50 EA 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xea
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 46: je 0x5867260a
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 22h
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 EE 24 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x24
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        push 40h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 98h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0B 42 E1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x42
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58672611
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 9ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [ecx + eax*4 + 118h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 118h]
        mov dword ptr [ebp - 0a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 FF CE E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xce
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 118h]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 CF D1 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 118h]
        mov dword ptr [ebp - 0a8h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 1C 2F 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2f
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586726a7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 0F 8D 02 01 00 00: jge 0x586727b3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 49 E9 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 6C: je 0x58672737
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0ach], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 E7 23 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x23
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], ecx
        ; Exact mapped bytes 8B 15 04 20 96 58: mov edx, dword ptr [0x58962004]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], edx
        push 40h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 AE 95 E5 FF: call 0x584cbce0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x95
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5867273e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 0
        imul ecx, dword ptr [ebp - 10h], 0ch
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx + 64h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 0bch]
        mov dword ptr [eax + ecx*4], edx
        imul eax, dword ptr [ebp - 10h], 0ch
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax + 64h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0c0h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 27 2E 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2e
        __asm _emit 0x14
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 10h], 0ch
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx + 64h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 33 37 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x37
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EB FE FF FF: jmp 0x5867269e
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 AB FC FF FF: jmp 0x58672463
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586727ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 0F 8D C9 01 00 00: jge 0x5867299d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 29 E8 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 47: je 0x58672832
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + ecx + 17h]
        push edx
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 C6 22 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x22
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0cch], eax
        push 40h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E3 3F E1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x3f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58672839
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0d0h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx*8 + 154h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 0d0h]
        mov dword ptr [ecx + eax], edx
        push 58h
        ; Exact mapped bytes E8 99 E7 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xe7
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 47: je 0x586728c2
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 0d4h], ecx
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + edx + 16h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 36 22 E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x22
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0d8h], eax
        push 40h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 53 3F E1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586728c9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0dch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax*8 + 154h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + eax], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672906
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x58672998
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax*8 + 154h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 1A CC E2 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcc
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 2C: jne 0x58672969
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx*8 + 154h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0e4h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 4A 2C 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58672993
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx*8 + 154h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0e8h], edx
        push 101h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 1E 2C 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x586728fd
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 24 FE FF FF: jmp 0x586727c1
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        ; Exact mapped bytes E8 5D E6 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe6
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 1C: je 0x586729d3
        __asm _emit 0x74
        __asm _emit 0x1c
        push 40h
        push 26h
        push 173h
        push 0
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 62 94 EF FF: call 0x5856be30
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x94
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586729da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 0ech], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0ech]
        mov dword ptr [edx + 184h], eax
        push 54h
        ; Exact mapped bytes E8 07 E6 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe6
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 60h], eax
        mov byte ptr [ebp - 4], 7
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 22: je 0x58672a2f
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 26h
        push 173h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 184h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F6 F8 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x58672a36
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 0f0h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ecx + 188h], edx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672a64
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x58672b2b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 8F E5 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 8
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 59: je 0x58672ade
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, 1
        sub eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 7B 20 E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 184h]
        mov dword ptr [ebp - 0fch], edx
        push 40h
        push 26h
        push 173h
        mov eax, dword ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 47 F8 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58672ae5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 100h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 100h]
        mov dword ptr [ecx + eax*4 + 18ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 18ch]
        mov dword ptr [ebp - 104h], edx
        push 64h
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 5B 33 E1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x33
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x58672a5b
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672b3d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0fh
        ; Exact mapped bytes 0F 8D 9C 01 00 00: jge 0x58672ce3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 B6 E4 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe4
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 9
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 22: je 0x58672b80
        __asm _emit 0x74
        __asm _emit 0x22
        push 40h
        push 26h
        push 173h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 184h]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 A5 F7 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x58672b87
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 108h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [eax + edx], ecx
        push 54h
        ; Exact mapped bytes E8 4B E4 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe4
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 5B: je 0x58672c24
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + ecx + 4]
        sub edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 35 1F E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 114h], ecx
        push 40h
        push 26h
        push 173h
        mov edx, dword ptr [ebp - 110h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 01 F7 E0 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58672c2b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 118h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx*8 + 19ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 118h]
        mov dword ptr [ecx + edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx*8 + 19ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 11ch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 2C 29 14 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x29
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax*8 + 19ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 120h], ecx
        push 0c8h
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 CE 31 E1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x31
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx*8 + 19ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 124h], eax
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 03 32 E1 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x58672b34
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672cf5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x58672db6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672d11
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x58672db1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 E2 E2 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 47: je 0x58672d79
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 128h], ecx
        mov edx, 3
        sub edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 7E 1D E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 9F 3A E1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x3a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58672d83
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 130h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax*8 + 214h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 130h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x58672d08
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x58672cec
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672dc8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 6
        ; Exact mapped bytes 0F 8D C0 00 00 00: jge 0x58672e92
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x58672de4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x58672e8d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 0F E2 1B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xe2
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 4A: je 0x58672e55
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 134h], edx
        mov eax, 1
        sub eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 A5 1C E1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        push 40h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 C3 39 E1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x39
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x58672e5f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 13ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        lea eax, [edx + ecx*8 + 244h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 13ch]
        mov dword ptr [eax + ecx*4], edx
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x58672ddb
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x58672dbf
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 81 74 02 00 00: mov word ptr [ecx + 0x274], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or edx, 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 90 76 02 00 00: mov word ptr [eax + 0x276], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 278h], 1
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 27ch], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 81 80 02 00 00: mov word ptr [ecx + 0x280], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 30 E1 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
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

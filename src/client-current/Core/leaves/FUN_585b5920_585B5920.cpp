// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B5920 .. +0x871 bytes.
extern "C" __declspec(naked) void FUN_585b5920_585B5920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ech
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 12ch], ecx
        xor eax, eax
        mov dword ptr [ebp - 128h], eax
        mov dword ptr [ebp - 124h], eax
        mov dword ptr [ebp - 120h], eax
        mov dword ptr [ebp - 11ch], eax
        mov dword ptr [ebp - 118h], eax
        mov dword ptr [ebp - 114h], eax
        mov dword ptr [ebp - 110h], eax
        mov dword ptr [ebp - 10ch], eax
        mov dword ptr [ebp - 108h], eax
        push 24h
        push 0
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes E8 8F 74 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x74
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 79 74 29 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        or eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 42: je 0x585b59e4
        __asm _emit 0x74
        __asm _emit 0x42
        lea ecx, [ebp + 0ch]
        push ecx
        lea edx, [ebp - 128h]
        push edx
        ; Exact mapped bytes E8 2E EF F7 FF: call 0x585348e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xef
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1bch], eax
        cmp dword ptr [ebp - 1bch], 0
        ; Exact mapped bytes 75 20: jne 0x585b59e4
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 114h]
        add eax, 76ch
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        movzx edx, word ptr [ebp + 8]
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 3
        ; Exact mapped bytes 0F 87 7A 07 00 00: ja 0x585b6175
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 130h]
        ; Exact mapped bytes FF 24 85 94 61 5B 58: jmp dword ptr [eax*4 + 0x585b6194]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x61
        __asm _emit 0x5b
        __asm _emit 0x58
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 134h], ecx
        push 588ab248h
        ; Exact mapped bytes E8 C3 C5 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc5
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1e8h], eax
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 58 06 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 13ch], edx
        push 588ab26ch
        ; Exact mapped bytes E8 83 C5 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 138h], eax
        mov eax, dword ptr [ebp - 138h]
        push eax
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 18 06 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 140h], eax
        push 588ab14bh
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 EE 05 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 144h], ecx
        push 588ab161h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 C3 05 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 148h], ecx
        push 588ab162h
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 98 05 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 14ch], edx
        push 26h
        push 10eh
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 EB FA 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 150h], edx
        push 35h
        push 10eh
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 BE FA 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfa
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 154h], eax
        push 0d7ffh
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 53 05 ED FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 05 00 00: jmp 0x585b6175
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        push 588ab294h
        ; Exact mapped bytes E8 3E C4 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc4
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 15ch], edx
        push 588ab2c0h
        ; Exact mapped bytes E8 05 C4 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 158h], eax
        mov eax, dword ptr [ebp - 158h]
        push eax
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 9A 04 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 164h], eax
        push 588ab2e4h
        ; Exact mapped bytes E8 C5 C3 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 5A 04 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 168h], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 2E 04 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 16ch], eax
        push 588ab163h
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 03 04 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 170h], eax
        push 588ab187h
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 D8 03 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 174h], ecx
        push 26h
        push 10eh
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 2B F9 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf9
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 178h], ecx
        push 35h
        push 104h
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 FE F8 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 17ch], ecx
        push 44h
        push 0ebh
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 D2 F8 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 180h], edx
        push 0d7ffh
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 67 03 ED FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F6 03 00 00: jmp 0x585b6175
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 11ch]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        push 588ab30ch
        ; Exact mapped bytes E8 52 C2 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc2
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 188h], ecx
        push 588ab338h
        ; Exact mapped bytes E8 19 C2 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc2
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 184h], eax
        mov edx, dword ptr [ebp - 184h]
        push edx
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 AE 02 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 190h], edx
        push 588ab35ch
        ; Exact mapped bytes E8 D9 C1 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18ch], eax
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 6E 02 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 198h], eax
        push 588ab388h
        ; Exact mapped bytes E8 9A C1 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 2F 02 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1a0h], edx
        push 588ab3b4h
        ; Exact mapped bytes E8 5A C1 F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 19ch], eax
        mov eax, dword ptr [ebp - 19ch]
        push eax
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 EF 01 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 1a4h], eax
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 C2 01 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1a8h], edx
        push 26h
        push 104h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 15 F7 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1ach], edx
        push 35h
        push 0f0h
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 E8 F6 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1b0h], edx
        push 44h
        push 0f0h
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 BC F6 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 1b4h], eax
        push 53h
        push 0f0h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 8F F6 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 1b8h], eax
        push 62h
        push 0e8h
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 62 F6 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf6
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 1d4h], ecx
        push 0d7ffh
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 F7 00 ED FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x585b6175
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1c4h], edx
        push 588ab3e0h
        ; Exact mapped bytes E8 DC BF F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c0h], eax
        mov eax, dword ptr [ebp - 1c0h]
        push eax
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 71 00 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 1cch], eax
        push 588ab408h
        ; Exact mapped bytes E8 9C BF F6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 31 00 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 1d0h], ecx
        push 588ab19fh
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 07 00 ED FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1ech], edx
        push 588ab1b1h
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 DC FF EC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ecx + eax + 4e4h]
        mov dword ptr [ebp - 1d8h], edx
        push 588ab1b2h
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 B1 FF EC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 1dch], eax
        push 26h
        push 0feh
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 04 F5 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf5
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 12ch]
        mov eax, dword ptr [edx + ecx + 4e4h]
        mov dword ptr [ebp - 1e0h], eax
        push 35h
        push 0ffh
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 D7 F4 1F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 12ch]
        mov ecx, dword ptr [eax + edx + 4e4h]
        mov dword ptr [ebp - 1e4h], ecx
        push 0d7ffh
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 6C FF EC FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 C0 2C 00 00: call 0x585b8e40
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C5 AE 27 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xae
        __asm _emit 0x27
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

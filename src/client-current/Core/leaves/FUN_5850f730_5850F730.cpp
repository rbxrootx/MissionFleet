// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850F730 .. +0x223 bytes.
extern "C" __declspec(naked) void FUN_5850f730_5850F730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 1ch], 989680h
        mov byte ptr [ebp - 1], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 61 F8 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 05 01 00 00: jne 0x5850f85e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 2], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5850f76f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 874h]
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 0F 8D 99 00 00 00: jge 0x5850f81b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 2A 72 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x72
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 6A 18 34 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x18
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 F3 C8 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc8
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 42 18 34 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        imul eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, dword ptr [ebp - 24h]
        add eax, ecx
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 2A 18 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 92 1A 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x1a
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 320h
        ; Exact mapped bytes 7F 0C: jg 0x5850f816
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov dl, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 1], dl
        mov byte ptr [ebp - 2], 1
        ; Exact mapped bytes EB 05: jmp 0x5850f81b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x5850f766
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x5850f83e
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx eax, byte ptr [ebp - 2]
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5850f83e
        __asm _emit 0x74
        __asm _emit 0x15
        movzx ecx, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8f8h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + ecx*4]
        mov dword ptr [edx], eax
        movzx ecx, byte ptr [ebp - 2]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5850f852
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, 1
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x5850f955
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x5850f859
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x5850f955
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x5850f926
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5850f870
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 874h]
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x5850f926
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 29 71 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x71
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 69 17 34 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8f8h]
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 F2 C7 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        sub ecx, eax
        push ecx
        ; Exact mapped bytes E8 41 17 34 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 2ch]
        imul edx, dword ptr [ebp - 2ch]
        imul eax, edx, 75h
        cdq
        mov esi, 64h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 1E 17 34 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 86 19 32 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x19
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 0C: jle 0x5850f921
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov dl, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes E9 41 FF FF FF: jmp 0x5850f867
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 15: je 0x5850f941
        __asm _emit 0x74
        __asm _emit 0x15
        movzx eax, byte ptr [ebp - 1]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8f8h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + eax*4]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp - 1ch], 320h
        ; Exact mapped bytes 7D 09: jge 0x5850f953
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5850f955
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x5850f955
        __asm _emit 0xeb
        __asm _emit 0x02
    }
}

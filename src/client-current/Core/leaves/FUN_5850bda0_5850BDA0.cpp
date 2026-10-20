// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BDA0 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_5850bda0_5850BDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 18h]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5850bdc3
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 4
        ; Exact mapped bytes 74 06: je 0x5850bdc3
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x5850bdc7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp - 3], al
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 2
        ; Exact mapped bytes 74 11: je 0x5850bde6
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        and eax, 2
        ; Exact mapped bytes 74 06: je 0x5850bde6
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 2], 1
        ; Exact mapped bytes EB 04: jmp 0x5850bdea
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 2], 0
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 4], cl
        movzx edx, byte ptr [ebp - 3]
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x5850be00
        __asm _emit 0x75
        __asm _emit 0x08
        movzx eax, byte ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5850be14
        __asm _emit 0x74
        __asm _emit 0x14
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 A7 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x5850c006
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 F5 FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 2
        ; Exact mapped bytes 74 09: je 0x5850be33
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 0B: jmp 0x5850be3e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 05 FC FF FF: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 14: je 0x5850be5e
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 09: jae 0x5850be5e
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BA F0 FF FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 38h]
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0E: je 0x5850be8f
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 1E: je 0x5850bea5
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 74 0C: je 0x5850be99
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes EB 70: jmp 0x5850beff
        __asm _emit 0xeb
        __asm _emit 0x70
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 D0: movlpd qword ptr [ebp - 0x30], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes EB 7A: jmp 0x5850bf13
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 6E: jmp 0x5850bf13
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov dword ptr [ebp - 28h], 3
        mov edx, dword ptr [ebp + 18h]
        and edx, 3
        cmp edx, 3
        ; Exact mapped bytes 74 48: je 0x5850beff
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp + 18h]
        and eax, 1
        ; Exact mapped bytes 74 1D: je 0x5850bedc
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 06: jne 0x5850becb
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x5850beda
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 0ch]
        cdq
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 39: jmp 0x5850bf13
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 23: jmp 0x5850beff
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 2
        ; Exact mapped bytes 74 1B: je 0x5850beff
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 06: jne 0x5850bef0
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0F: jne 0x5850beff
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 0ch]
        cdq
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 14: jmp 0x5850bf13
        __asm _emit 0xeb
        __asm _emit 0x14
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 A6 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x5850c006
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 30h]
        mov esi, dword ptr [ebp + 10h]
        adc esi, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], esi
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 3ch], edx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 72 1E: jb 0x5850bf55
        __asm _emit 0x72
        __asm _emit 0x1e
        ; Exact mapped bytes 77 08: ja 0x5850bf41
        __asm _emit 0x77
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 76 14: jbe 0x5850bf55
        __asm _emit 0x76
        __asm _emit 0x14
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 A6 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x5850c006
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp + 10h]
        adc edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        or eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 2D: je 0x5850bf9c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 1
        ; Exact mapped bytes 74 06: je 0x5850bf7d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0E: je 0x5850bf8b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 18h]
        and edx, 2
        ; Exact mapped bytes 74 17: je 0x5850bf9c
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x5850bf9c
        __asm _emit 0x75
        __asm _emit 0x11
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 A6 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 6A: jmp 0x5850c006
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 1
        ; Exact mapped bytes 74 1E: je 0x5850bfcb
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 18: je 0x5850bfcb
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 38h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A6 02 00 00: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 18h]
        and eax, 2
        ; Exact mapped bytes 74 20: je 0x5850bff3
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1A: je 0x5850bff3
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F EF FF FF: call 0x5850af60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BE 02 00 00: call 0x5850c2b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD A5 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

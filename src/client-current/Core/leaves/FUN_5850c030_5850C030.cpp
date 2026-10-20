// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850C030 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_5850c030_5850C030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 24h]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5850c052
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 4
        ; Exact mapped bytes 74 06: je 0x5850c052
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x5850c056
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp - 3], al
        mov ecx, dword ptr [ebp + 24h]
        and ecx, 2
        ; Exact mapped bytes 74 11: je 0x5850c075
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        and eax, 2
        ; Exact mapped bytes 74 06: je 0x5850c075
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 2], 1
        ; Exact mapped bytes EB 04: jmp 0x5850c079
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 2], 0
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 4], cl
        movzx edx, byte ptr [ebp - 3]
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x5850c08f
        __asm _emit 0x75
        __asm _emit 0x08
        movzx eax, byte ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5850c0a3
        __asm _emit 0x74
        __asm _emit 0x14
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 A5 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x5850c1e1
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 A5 B6 FF FF: call 0x58507750
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E7 F2 FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 2
        ; Exact mapped bytes 74 09: je 0x5850c0d0
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 0B: jmp 0x5850c0db
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 F9 FF FF: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x5850c0fb
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 09: jae 0x5850c0fb
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 38h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D EE FF FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 38h]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        cdq
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 72 1E: jb 0x5850c142
        __asm _emit 0x72
        __asm _emit 0x1e
        ; Exact mapped bytes 77 08: ja 0x5850c12e
        __asm _emit 0x77
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 76 14: jbe 0x5850c142
        __asm _emit 0x76
        __asm _emit 0x14
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 A4 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x5850c1e1
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        or eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 74 2D: je 0x5850c177
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 24h]
        and ecx, 1
        ; Exact mapped bytes 74 06: je 0x5850c158
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0E: je 0x5850c166
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 24h]
        and edx, 2
        ; Exact mapped bytes 74 17: je 0x5850c177
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x5850c177
        __asm _emit 0x75
        __asm _emit 0x11
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E A4 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 6A: jmp 0x5850c1e1
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 24h]
        and ecx, 1
        ; Exact mapped bytes 74 1E: je 0x5850c1a6
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 18: je 0x5850c1a6
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 38h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 00 00 00: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp + 24h]
        and eax, 2
        ; Exact mapped bytes 74 20: je 0x5850c1ce
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x5850c1ce
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A4 ED FF FF: call 0x5850af60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 00 00 00: call 0x5850c2b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 A3 FF FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

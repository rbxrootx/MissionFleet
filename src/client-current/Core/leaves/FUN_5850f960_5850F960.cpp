// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850F960 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_5850f960_5850F960() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 5F F8 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5f
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x5850fa65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 910h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5850f99d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 8D BE 00 00 00: jge 0x5850fa65
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8f8h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5850fa38
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 6F F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x6f
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x5850fa38
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 86 CD FE FF: call 0x584fc760
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x5850fa38
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 6E CD FE FF: call 0x584fc760
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 74 41: je 0x5850fa38
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + edx*4]
        ; Exact mapped bytes E8 E5 76 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x76
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 6F F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 91 D5 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 15: jne 0x5850fa38
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 910h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 910h], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 01 00 00: call 0x5850fba0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8E 01 00 00: call 0x5850fbe0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 64 F7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2F FF FF FF: jmp 0x5850f994
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 864h
        ; Exact mapped bytes E8 7D 86 F7 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 858h
        ; Exact mapped bytes E8 6F 86 F7 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8f8h], 0
        ; Exact mapped bytes 74 27: je 0x5850fab5
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8f8h]
        mov dword ptr [ebp - 20h], eax
        push 4
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 8F 15 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x15
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8f8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 37: je 0x5850faf5
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5850fae4
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5850faeb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 37: je 0x5850fb35
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5850fb24
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5850fb2b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 37: je 0x5850fb75
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5850fb64
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5850fb6b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

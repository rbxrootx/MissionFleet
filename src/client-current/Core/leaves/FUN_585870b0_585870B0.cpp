// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585870B0 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_585870b0_585870B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x585872c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 98h], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bch]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 74 77: je 0x58587172
        __asm _emit 0x74
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bch]
        sub eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x5858711f
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x58587126
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 0E: je 0x5858714c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 0D: jmp 0x58587159
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 94h], -1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0a0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 40000000h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 40000000h
        ; Exact mapped bytes 75 17: jne 0x58587198
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 75 0B: jne 0x58587198
        __asm _emit 0x75
        __asm _emit 0x0b
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 FC FF FF: call 0x58586dd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 7ch], 1
        ; Exact mapped bytes 75 26: jne 0x585871d0
        __asm _emit 0x75
        __asm _emit 0x26
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C FC FF FF: call 0x58586dd0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 75 13: jne 0x585871d0
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 7ch], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 7ch], 1
        ; Exact mapped bytes 75 25: jne 0x58587206
        __asm _emit 0x75
        __asm _emit 0x25
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 FB FF FF: call 0x58586dd0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 75 12: jne 0x58587206
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 7ch], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 7ch], 1
        ; Exact mapped bytes 75 26: jne 0x5858723e
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE FB FF FF: call 0x58586dd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 75 13: jne 0x5858723e
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5858725f
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5858725f
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x585872c8
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58587282
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58587268
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 E3 F0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe3
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x585872a6
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x585872c8
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x585872c6
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 62 E3 F0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xe3
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x58587268
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}

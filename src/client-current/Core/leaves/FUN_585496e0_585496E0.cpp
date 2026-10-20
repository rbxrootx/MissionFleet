// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585496E0 .. +0x22E bytes.
extern "C" __declspec(naked) void FUN_585496e0_585496E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2f8h], 0
        ; Exact mapped bytes 74 1C: je 0x58549713
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 0B E5 F3 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE C7 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 2F CA FF FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2f8h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f8h], 0
        ; Exact mapped bytes 74 78: je 0x585497ae
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        ; Exact mapped bytes E8 6C 29 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 75 46: jne 0x58549797
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 26ch]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 37: je 0x58549797
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 26ch]
        cmp eax, 0ch
        ; Exact mapped bytes 74 28: je 0x58549797
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 26ch]
        cmp edx, 0dh
        ; Exact mapped bytes 74 19: je 0x58549797
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4C C6 F3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x585497ae
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 33 C6 F3 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 54 E4 F3 FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xe4
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 17 C7 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc7
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585497dc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 30: jge 0x58549812
        __asm _emit 0x7d
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b4h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 C0 73 27 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 81 7D 27 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C1: jmp 0x585497d3
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f8h], 0
        ; Exact mapped bytes 74 72: je 0x58549890
        __asm _emit 0x74
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c4h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 82 73 27 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0x00
        mov edi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 22 74 27 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x74
        __asm _emit 0x27
        __asm _emit 0x00
        sub edi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 52 B2 FE FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        imul edi, eax
        lea eax, [esi + edi + 0ddh]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B9 BE 26 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xbe
        __asm _emit 0x26
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1c4h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 53 C6 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x585498a7
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1c4h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3A C6 F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 3B FE FD FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x58549908
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 F9 72 27 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x72
        __asm _emit 0x27
        __asm _emit 0x00
        add eax, 1
        imul esi, eax, 48h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 15 FE FD FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 34h]
        lea ecx, [edx + eax + 0e9h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 29 BE 26 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbe
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

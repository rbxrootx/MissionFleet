// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA8E0 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_587aa8e0_587AA8E0() {
    __asm {
        sub esp, 2dch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 2d8h], eax
        mov eax, dword ptr [esp + 2e0h]
        lea ecx, [esp + 0ch]
        push ecx
        push eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], 10001h
        ; Exact mapped bytes FF 15 5C 43 89 58: call dword ptr [0x5889435c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x587aaa00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2e4h]
        push ebx
        ; Exact mapped bytes 8B 1D 98 9C 96 58: mov ebx, dword ptr [0x58969c98]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 03: je 0x587aa931
        __asm _emit 0x74
        __asm _emit 0x03
        lea ebx, [eax + 1]
        xor ecx, ecx
        cmp eax, -1
        cmovne ecx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 0F 83 BE 00 00 00: jae 0x587aa9ff
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, ecx, 2ch
        sub ebx, ecx
        push ebp
        mov ebp, dword ptr [esp + 0cch]
        push esi
        push edi
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2f8h]
        ; Exact mapped bytes 03 15 90 9C 96 58: add edx, dword ptr [0x58969c90]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        sub eax, 0
        ; Exact mapped bytes 74 18: je 0x587aa98a
        __asm _emit 0x74
        __asm _emit 0x18
        sub eax, 1
        ; Exact mapped bytes 74 0C: je 0x587aa983
        __asm _emit 0x74
        __asm _emit 0x0c
        movzx ecx, byte ptr [edx + 14h]
        shr ecx, 2
        and ecx, 1
        ; Exact mapped bytes EB 09: jmp 0x587aa98c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 1
        ; Exact mapped bytes EB 02: jmp 0x587aa98c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov bl, byte ptr [edx + 14h]
        movzx eax, bl
        shr eax, 1
        and eax, 1
        cmp eax, ecx
        ; Exact mapped bytes 74 4B: je 0x587aa9e6
        __asm _emit 0x74
        __asm _emit 0x4b
        test ecx, ecx
        ; Exact mapped bytes 74 7F: je 0x587aaa1e
        __asm _emit 0x74
        __asm _emit 0x7f
        mov edi, dword ptr [edx + 18h]
        xor ecx, ecx
        and edi, 0fh
        ; Exact mapped bytes 76 1A: jbe 0x587aa9c3
        __asm _emit 0x76
        __asm _emit 0x1a
        mov ebx, dword ptr [edx]
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edx + ecx + 1ch]
        lea esi, [edx + ecx]
        add eax, ebx
        cmp ebp, eax
        ; Exact mapped bytes 74 57: je 0x587aaa15
        __asm _emit 0x74
        __asm _emit 0x57
        inc ecx
        cmp ecx, edi
        ; Exact mapped bytes 72 ED: jb 0x587aa9b0
        __asm _emit 0x72
        __asm _emit 0xed
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x587aa9e6
        __asm _emit 0x74
        __asm _emit 0x1d
        lea eax, [esp + 1ch]
        mov dword ptr [esp + 0d4h], ecx
        push eax
        push dword ptr [esp + 1ch]
        ; Exact mapped bytes FF 15 60 43 89 58: call dword ptr [0x58894360]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebp, dword ptr [esp + 0d4h]
        mov edx, dword ptr [esp + 10h]
        add edx, 2ch
        sub dword ptr [esp + 14h], 1
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 0F 85 64 FF FF FF: jne 0x587aa960
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 2d8h]
        xor ecx, esp
        ; Exact mapped bytes E8 42 66 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 2dch
        ret
        movzx ecx, byte ptr [esi + 24h]
        add ecx, dword ptr [edx + 8]
        ; Exact mapped bytes EB A7: jmp 0x587aa9c5
        __asm _emit 0xeb
        __asm _emit 0xa7
        test bl, 1
        ; Exact mapped bytes 74 09: je 0x587aaa2c
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [edx]
        lea eax, [ecx - 5]
        cmp ebp, eax
        ; Exact mapped bytes 74 99: je 0x587aa9c5
        __asm _emit 0x74
        __asm _emit 0x99
        mov edi, dword ptr [edx + 18h]
        xor eax, eax
        and edi, 0fh
        ; Exact mapped bytes 76 8D: jbe 0x587aa9c3
        __asm _emit 0x76
        __asm _emit 0x8d
        mov ebx, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [edx + eax + 24h]
        lea esi, [edx + eax]
        add ecx, ebx
        cmp ebp, ecx
        ; Exact mapped bytes 74 0A: je 0x587aaa58
        __asm _emit 0x74
        __asm _emit 0x0a
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 72 ED: jb 0x587aaa40
        __asm _emit 0x72
        __asm _emit 0xed
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x587aa9c3
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [esi + 1ch]
        add ecx, dword ptr [edx]
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x587aa9c5
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A70F0 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_587a70f0_587A70F0() {
    __asm {
        sub esp, 8
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x587a7270
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [edi + 7ch], 100000h
        push ebx
        mov ebx, dword ptr [esp + 18h]
        push ebp
        lea ebp, [edi + 7ch]
        mov dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 74 21: je 0x587a7137
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [edi + 68h]
        mov dword ptr [esp + 18h], ebp
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x587a7137
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [edi + 128h]
        inc eax
        push eax
        push ebx
        push edi
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        lea eax, [edi + 7ch]
        add esp, 0ch
        mov dword ptr [esp + 18h], eax
        test dword ptr [ebp], 8000h
        push esi
        lea esi, [edi + 128h]
        ; Exact mapped bytes 74 1B: je 0x587a7162
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [edi + 78h]
        shr eax, 7
        not eax
        and eax, 1
        push eax
        mov eax, dword ptr [esi]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 A3 F4 FF FF: call 0x587a6600
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 04: jmp 0x587a7166
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 1ch], ebp
        test dword ptr [ebp], 10000h
        ; Exact mapped bytes 74 0D: je 0x587a717c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 37 F4 FF FF: call 0x587a65b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 1ch], ebp
        test byte ptr [ebp], 4
        ; Exact mapped bytes 74 26: je 0x587a71b4
        __asm _emit 0x74
        __asm _emit 0x26
        movzx eax, byte ptr [edi + 154h]
        push eax
        mov eax, dword ptr [esi]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 70 FA FF FF: call 0x587a6c10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [edi + 128h]
        add esp, 0ch
        mov dword ptr [esp + 10h], eax
        lea eax, [edi + 7ch]
        mov dword ptr [esp + 1ch], eax
        test byte ptr [ebp], 10h
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 19: je 0x587a71d7
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [esi]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 B8 F5 FF FF: call 0x587a6780
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        add esp, 8
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [esp + 14h], eax
        test byte ptr [ebp], 8
        ; Exact mapped bytes 74 14: je 0x587a71f1
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [edi + 1d9h]
        push eax
        mov eax, dword ptr [esi]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 72 FB FF FF: call 0x587a6d60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ebp, dword ptr [esp + 14h]
        test dword ptr [ebp], 20000h
        ; Exact mapped bytes 74 0D: je 0x587a720b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 C8 FD FF FF: call 0x587a6fd0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp]
        mov dword ptr [esp + 1ch], edx
        test edx, 80000h
        ; Exact mapped bytes 74 26: je 0x587a7240
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esi]
        mov cl, byte ptr [ebx + 8]
        inc eax
        cmp cl, 6
        ; Exact mapped bytes 75 6B: jne 0x587a7290
        __asm _emit 0x75
        __asm _emit 0x6b
        cmp byte ptr [ebx + 9], 8
        mov edx, dword ptr [ebx]
        ; Exact mapped bytes 75 48: jne 0x587a7275
        __asm _emit 0x75
        __asm _emit 0x48
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x587a723c
        __asm _emit 0x74
        __asm _emit 0x0b
        not byte ptr [eax + 3]
        lea eax, [eax + 4]
        sub edx, 1
        ; Exact mapped bytes 75 F5: jne 0x587a7231
        __asm _emit 0x75
        __asm _emit 0xf5
        mov edx, dword ptr [esp + 1ch]
        pop esi
        test dl, 1
        ; Exact mapped bytes 74 11: je 0x587a7257
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [edi + 128h]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 3C F0 FF FF: call 0x587a6290
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test byte ptr [edi + 7ch], 20h
        ; Exact mapped bytes 74 11: je 0x587a726e
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [edi + 128h]
        inc eax
        push eax
        push ebx
        ; Exact mapped bytes E8 75 F2 FF FF: call 0x587a64e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop ebp
        pop ebx
        pop edi
        add esp, 8
        ret
        test edx, edx
        ; Exact mapped bytes 74 C3: je 0x587a723c
        __asm _emit 0x74
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        not byte ptr [eax + 6]
        lea eax, [eax + 8]
        not byte ptr [eax - 1]
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x587a7280
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB AC: jmp 0x587a723c
        __asm _emit 0xeb
        __asm _emit 0xac
        cmp cl, 4
        ; Exact mapped bytes 75 AB: jne 0x587a7240
        __asm _emit 0x75
        __asm _emit 0xab
        cmp byte ptr [ebx + 9], 8
        mov esi, dword ptr [ebx]
        ; Exact mapped bytes 75 25: jne 0x587a72c2
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, eax
        test esi, esi
        ; Exact mapped bytes 74 99: je 0x587a723c
        __asm _emit 0x74
        __asm _emit 0x99
        movzx ecx, byte ptr [edx]
        lea eax, [eax + 2]
        mov byte ptr [eax - 2], cl
        lea edx, [edx + 2]
        movzx ecx, byte ptr [edx - 1]
        not cl
        mov byte ptr [eax - 1], cl
        sub esi, 1
        ; Exact mapped bytes 75 E6: jne 0x587a72a3
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x587a723c
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 0F 84 76 FF FF FF: je 0x587a7240
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        not byte ptr [eax + 2]
        lea eax, [eax + 4]
        not byte ptr [eax - 1]
        sub esi, 1
        ; Exact mapped bytes 75 F2: jne 0x587a72d0
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x587a7240
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

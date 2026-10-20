// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588541D7 .. +0x235 bytes.
extern "C" __declspec(naked) void FUN_588541d7_588541D7() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        ; Exact mapped bytes E8 62 1D 00 00: call 0x58855f4e
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 11 02 00 00: je 0x58854405
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 0F 84 E4 01 00 00: je 0x588543e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 450h]
        inc eax
        mov dword ptr [esi + 450h], eax
        cmp eax, 2
        ; Exact mapped bytes 0F 84 AF 01 00 00: je 0x588543c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        and dword ptr [esi + 34h], 0
        mov byte ptr [esi + 18h], 0
        movzx ecx, word ptr [eax]
        add eax, 2
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 66 89 4E 2E: mov word ptr [esi + 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x2e
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x588543a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov ebx, dword ptr [esi + 14h]
        test ebx, ebx
        ; Exact mapped bytes 0F 88 63 01 00 00: js 0x588543a5
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 18h]
        mov ecx, esi
        push eax
        push edi
        ; Exact mapped bytes E8 94 F5 FF FF: call 0x588537e3
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi + 18h], al
        cmp al, 8
        ; Exact mapped bytes 0F 83 6E 01 00 00: jae 0x588543c8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 7
        ; Exact mapped bytes 0F 87 9F 01 00 00: ja 0x58854405
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 0F 44 85 58: jmp dword ptr [eax*4 + 0x5885440f]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0x85
        __asm _emit 0x58
        mov byte ptr [esi + 38h], 1
        lea edx, [esi + 448h]
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 1A: jne 0x5885429b
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x58854292
        __asm _emit 0x74
        __asm _emit 0x0b
        lea eax, [ebx + 1]
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x5885438a
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 14h], 0ffffffffh
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x5885438a
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 1]
        mov dword ptr [esi + 14h], eax
        inc dword ptr [ecx + 8]
        mov eax, dword ptr [edx]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 89 38: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        mov eax, dword ptr [edx]
        add dword ptr [eax], 2
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x5885438a
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [esi + 20h], 0
        and dword ptr [esi + 1ch], 0
        or dword ptr [esi + 24h], 0ffffffffh
        and dword ptr [esi + 28h], 0
        mov byte ptr [esi + 2ch], 0
        mov byte ptr [esi + 38h], 0
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5885438a
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, di
        sub eax, 20h
        ; Exact mapped bytes 74 37: je 0x58854311
        __asm _emit 0x74
        __asm _emit 0x37
        sub eax, 3
        ; Exact mapped bytes 74 2C: je 0x5885430b
        __asm _emit 0x74
        __asm _emit 0x2c
        sub eax, 8
        ; Exact mapped bytes 74 21: je 0x58854305
        __asm _emit 0x74
        __asm _emit 0x21
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 12: je 0x588542fc
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 3
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x5885438a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 8
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5885438a
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 4
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5885438a
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 1
        ; Exact mapped bytes EB 7F: jmp 0x5885438a
        __asm _emit 0xeb
        __asm _emit 0x7f
        or dword ptr [esi + 1ch], 20h
        ; Exact mapped bytes EB 79: jmp 0x5885438a
        __asm _emit 0xeb
        __asm _emit 0x79
        or dword ptr [esi + 1ch], 2
        ; Exact mapped bytes EB 73: jmp 0x5885438a
        __asm _emit 0xeb
        __asm _emit 0x73
        push 2ah
        pop eax
        ; Exact mapped bytes 66 3B F8: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 0D: je 0x5885432c
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [esi + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CF F5 FF FF: call 0x588538f9
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5A: jmp 0x58854386
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 20h], eax
        test eax, eax
        ; Exact mapped bytes 79 09: jns 0x58854347
        __asm _emit 0x79
        __asm _emit 0x09
        or dword ptr [esi + 1ch], 4
        neg eax
        mov dword ptr [esi + 20h], eax
        mov al, 1
        ; Exact mapped bytes EB 3B: jmp 0x58854386
        __asm _emit 0xeb
        __asm _emit 0x3b
        and dword ptr [esi + 24h], 0
        ; Exact mapped bytes EB 39: jmp 0x5885438a
        __asm _emit 0xeb
        __asm _emit 0x39
        push 2ah
        pop eax
        ; Exact mapped bytes 66 3B F8: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 05: je 0x5885435e
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [esi + 24h]
        ; Exact mapped bytes EB C4: jmp 0x58854322
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 24h], eax
        test eax, eax
        ; Exact mapped bytes 79 D7: jns 0x58854347
        __asm _emit 0x79
        __asm _emit 0xd7
        or dword ptr [esi + 24h], 0ffffffffh
        ; Exact mapped bytes EB D1: jmp 0x58854347
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, esi
        ; Exact mapped bytes E8 64 03 00 00: call 0x588546e1
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58854386
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 1B 0D 00 00: call 0x588550a1
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 7B: je 0x58854405
        __asm _emit 0x74
        __asm _emit 0x7b
        mov eax, dword ptr [esi + 0ch]
        movzx ecx, word ptr [eax]
        add eax, 2
        mov dword ptr [esi + 0ch], eax
        mov edi, ecx
        ; Exact mapped bytes 66 89 4E 2E: mov word ptr [esi + 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x2e
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 85 92 FE FF FF: jne 0x58854237
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 18h]
        test al, al
        ; Exact mapped bytes 74 04: je 0x588543b0
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 7
        ; Exact mapped bytes 75 32: jne 0x588543e2
        __asm _emit 0x75
        __asm _emit 0x32
        inc dword ptr [esi + 450h]
        cmp dword ptr [esi + 450h], 2
        ; Exact mapped bytes 0F 85 51 FE FF FF: jne 0x58854214
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes EB 40: jmp 0x58854408
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 8]
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], 16h
        xor ecx, ecx
        push dword ptr [esi + 8]
        push ecx
        push ecx
        push ecx
        push ecx
        push ecx
        ; Exact mapped bytes EB 1B: jmp 0x588543fd
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        push dword ptr [esi + 8]
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 2C CB FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10075E70 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_10075e70_10075E70() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x10075f57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x10075ea9
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10075ea2
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x10075ea9
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x10075e8c
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 74 61: je 0x10075f14
        __asm _emit 0x74
        __asm _emit 0x61
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x10075f57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x10075f57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 8]
        mov eax, 88888889h
        shr edx, 10h
        ; Exact mapped bytes 0F BF CA: movsx ecx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xca
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 15: jle 0x10075eff
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 6ch]
        push 1
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 59 13 00 00: call 0x10077250
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 6ch]
        push -1
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 44 13 00 00: call 0x10077250
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        cmp edi, 1bh
        ; Exact mapped bytes 74 34: je 0x10075f50
        __asm _emit 0x74
        __asm _emit 0x34
        cmp edi, 70h
        ; Exact mapped bytes 75 36: jne 0x10075f57
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 30 57 1C 10: mov ecx, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov al, byte ptr [ecx + 25h]
        and al, 1fh
        cmp al, 5
        ; Exact mapped bytes 75 0D: jne 0x10075f3f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 75 14: jne 0x10075f57
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 19 17 00 00: call 0x10077670
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

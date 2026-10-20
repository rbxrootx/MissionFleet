// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A9BA0 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_588a9ba0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x588a9cba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x588a9bdf
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588a9bd8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x588a9bdf
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588a9bc2
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 204h
        ; Exact mapped bytes 77 58: ja 0x588a9c41
        __asm _emit 0x77
        __asm _emit 0x58
        ; Exact mapped bytes 74 2B: je 0x588a9c16
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp eax, 100h
        ; Exact mapped bytes 74 35: je 0x588a9c27
        __asm _emit 0x74
        __asm _emit 0x35
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x588a9cba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 32 79 E8 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x588a9cba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1bh
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x588a9cba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 75 72: jne 0x588a9cba
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 0F BF 4F 0A: movsx ecx, word ptr [edi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4f
        __asm _emit 0x0a
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 36: jle 0x588a9c98
        __asm _emit 0x7e
        __asm _emit 0x36
        mov eax, dword ptr [esi + 88h]
        movzx edx, word ptr [eax + 0ch]
        movzx edi, word ptr [eax + 0ah]
        mov ecx, dword ptr [esi + 84h]
        movzx eax, word ptr [eax + 2ah]
        xor edx, 0aah
        xor edi, 0aah
        add edx, ecx
        add edi, edx
        xor eax, 0aah
        cmp edi, eax
        ; Exact mapped bytes 7D 20: jge 0x588a9cb3
        __asm _emit 0x7d
        __asm _emit 0x20
        lea eax, [ecx + 1]
        ; Exact mapped bytes EB 0C: jmp 0x588a9ca4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 84h]
        cmp eax, 1
        ; Exact mapped bytes 7E 10: jle 0x588a9cb3
        __asm _emit 0x7e
        __asm _emit 0x10
        dec eax
        mov ecx, dword ptr [esi + 68h]
        push eax
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 AD D6 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 56 F7 FF FF: call 0x588a9410
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

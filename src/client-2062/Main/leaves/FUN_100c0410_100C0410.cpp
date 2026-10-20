// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C0410 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_100c0410_100C0410() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x100c04c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100c0449
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100c0442
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
        ; Exact mapped bytes 74 09: je 0x100c0449
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x100c042c
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 1f00h
        cmp edx, 200h
        ; Exact mapped bytes 75 6A: jne 0x100c04c5
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 74 21: je 0x100c0486
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 20ah
        ; Exact mapped bytes 75 59: jne 0x100c04c5
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [edi + 8]
        mov ecx, esi
        shr eax, 10h
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 47: jle 0x100c04c0
        __asm _emit 0x7e
        __asm _emit 0x47
        ; Exact mapped bytes E8 02 03 00 00: call 0x100c0780
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x03
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
        lea eax, [edi - 0dh]
        cmp eax, 1bh
        ; Exact mapped bytes 77 34: ja 0x100c04c5
        __asm _emit 0x77
        __asm _emit 0x34
        xor ecx, ecx
        mov cl, byte ptr [eax + 100c04e0h]
        ; Exact mapped bytes FF 24 8D D0 04 0C 10: jmp dword ptr [ecx*4 + 0x100c04d0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x0c
        __asm _emit 0x10
        mov edx, dword ptr [esi]
        mov ecx, esi
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
        ; Exact mapped bytes E8 CA 02 00 00: call 0x100c0780
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6B 03 00 00: call 0x100c0830
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x03
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

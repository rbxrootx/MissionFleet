// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A7050 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_588a7050() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 74 7E: je 0x588a70db
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588a708e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x588a7086
        __asm _emit 0x74
        __asm _emit 0x17
        nop
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0C: je 0x588a708e
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588a7070
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebx + 4], 20ah
        ; Exact mapped bytes 75 44: jne 0x588a70db
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 204h]
        add edx, 4
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 92 A4 E8 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x588a70db
        __asm _emit 0x74
        __asm _emit 0x29
        movzx eax, word ptr [ebx + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 0F: jle 0x588a70ca
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, edi
        ; Exact mapped bytes E8 8E 15 06 00: call 0x58908650
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 07: jge 0x588a70d3
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 1D 16 06 00: call 0x589086f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

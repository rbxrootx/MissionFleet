// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094F50 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_10094f50_10094F50() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 64h]
        test esi, esi
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x10094ffc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 70h]
        push ebx
        mov eax, dword ptr [eax + 6ch]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x10094f82
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [esi + 54h]
        test esi, esi
        ; Exact mapped bytes 74 7C: je 0x10094ffc
        __asm _emit 0x74
        __asm _emit 0x7c
        ; Exact mapped bytes EB E9: jmp 0x10094f6b
        __asm _emit 0xeb
        __asm _emit 0xe9
        cmp esi, dword ptr [edi + 64h]
        ; Exact mapped bytes 75 06: jne 0x10094f8d
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [edi + 64h], ecx
        cmp esi, dword ptr [edi + 68h]
        ; Exact mapped bytes 75 06: jne 0x10094f98
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [esi + 50h]
        mov dword ptr [edi + 68h], edx
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10094fa5
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [eax + 54h], ecx
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10094fb2
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [esi + 50h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [edi + 0f8h]
        cmp esi, eax
        ; Exact mapped bytes 75 09: jne 0x10094fc5
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [eax + 54h]
        mov dword ptr [edi + 0f8h], eax
        mov eax, dword ptr [edi + 0f8h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x10094fd8
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [edi + 64h]
        mov dword ptr [edi + 0f8h], ecx
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10094fe9
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 F7 0A F8 FF: call 0x10015ae0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0a
        __asm _emit 0xf8
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x10094ff5
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 66 FF 8F DC 00 00 00: dec word ptr [edi + 0xdc]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x8f
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

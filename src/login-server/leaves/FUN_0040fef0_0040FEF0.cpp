// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FEF0 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_0040fef0_0040FEF0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov ecx, dword ptr [esi + 4ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x40ff03
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi + 4]
        push edi
        or edi, 0ffffffffh
        cmp eax, edi
        ; Exact mapped bytes 74 78: je 0x40ff86
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esi + 0b8h]
        cmp eax, edi
        ; Exact mapped bytes 74 17: je 0x40ff2f
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 0b0h]
        push esi
        push eax
        push 46ah
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi + 0b8h], edi
        mov ecx, dword ptr [esi + 48h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x40ff45
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes E8 6B F9 FF FF: call 0x40f8b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 C5 43 00: call dword ptr [0x43c5b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c8h]
        mov dword ptr [esi + 4], edi
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x40ff68
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0d4h], edi
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 0d8h], ebx
        mov dword ptr [esi + 0dch], ebx
        mov ecx, dword ptr [esi + 50h]
        pop edi
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x40ff97
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        pop ebx
        ret
        ; Exact mapped bytes 8B 0D 08 DC 44 00: mov ecx, dword ptr [0x44dc08]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        dec ecx
        cmp esi, ebx
        ; Exact mapped bytes 89 0D 08 DC 44 00: mov dword ptr [0x44dc08], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x40ffb1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        pop ebx
        ret
    }
}

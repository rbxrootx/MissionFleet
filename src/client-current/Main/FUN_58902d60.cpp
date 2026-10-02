// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 167 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902D60 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_58902d60_segment_00() {
    __asm {
        push edi
        xor edi, edi
        mov dword ptr [ecx], 589a24e4h
        cmp dword ptr [ecx + 3ch], edi
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x58902dfc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov eax, dword ptr [ecx + 3ch]
        mov edx, dword ptr [eax + 30h]
        cmp edx, edi
        ; Exact mapped bytes 74 32: je 0x58902daf
        __asm _emit 0x74
        __asm _emit 0x32
        mov esi, dword ptr [eax + 38h]
        cmp esi, eax
        ; Exact mapped bytes 75 05: jne 0x58902d89
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [edx + 3ch], edi
        ; Exact mapped bytes EB 1D: jmp 0x58902da6
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [eax + 34h]
        mov dword ptr [edx + 38h], esi
        mov edx, dword ptr [eax + 38h]
        mov esi, dword ptr [eax + 34h]
        mov dword ptr [edx + 34h], esi
        mov edx, dword ptr [eax + 30h]
        cmp dword ptr [edx + 3ch], eax
        ; Exact mapped bytes 75 06: jne 0x58902da6
        __asm _emit 0x75
        __asm _emit 0x06
        mov esi, dword ptr [eax + 38h]
        mov dword ptr [edx + 3ch], esi
        mov dword ptr [eax + 38h], eax
        mov dword ptr [eax + 34h], eax
        mov dword ptr [eax + 30h], edi
        mov esi, dword ptr [eax + 40h]
        cmp esi, edi
        ; Exact mapped bytes 74 3C: je 0x58902df2
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [eax + 48h]
        cmp edx, edi
        ; Exact mapped bytes 75 11: jne 0x58902dce
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [eax + 44h]
        cmp edx, edi
        ; Exact mapped bytes 75 05: jne 0x58902dc9
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [esi + 4ch], edi
        ; Exact mapped bytes EB 20: jmp 0x58902de9
        __asm _emit 0xeb
        __asm _emit 0x20
        mov dword ptr [edx + 48h], edi
        ; Exact mapped bytes EB 1B: jmp 0x58902de9
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov esi, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], esi
        mov edx, dword ptr [eax + 44h]
        mov esi, dword ptr [eax + 48h]
        cmp edx, edi
        ; Exact mapped bytes 75 08: jne 0x58902de6
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [eax + 40h]
        mov dword ptr [edx + 4ch], esi
        ; Exact mapped bytes EB 03: jmp 0x58902de9
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edx + 48h], esi
        mov dword ptr [eax + 40h], edi
        mov dword ptr [eax + 44h], edi
        mov dword ptr [eax + 48h], edi
        cmp dword ptr [ecx + 3ch], edi
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x58902d73
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes E8 1F FE FF FF: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        ; Exact mapped bytes E9 69 FE FF FF: jmp 0x58902c70
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

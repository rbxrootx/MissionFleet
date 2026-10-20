// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FEB90 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_100feb90_100FEB90() {
    __asm {
        mov eax, dword ptr [ecx + 3ch]
        push edi
        xor edi, edi
        mov dword ptr [ecx], 1017671ch
        cmp eax, edi
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x100fec30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [eax + 30h]
        cmp esi, edi
        ; Exact mapped bytes 74 32: je 0x100febde
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [eax + 38h]
        cmp edx, eax
        ; Exact mapped bytes 75 05: jne 0x100febb8
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [esi + 3ch], edi
        ; Exact mapped bytes EB 1D: jmp 0x100febd5
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov esi, dword ptr [eax + 34h]
        mov dword ptr [esi + 38h], edx
        mov edx, dword ptr [eax + 38h]
        mov esi, dword ptr [eax + 34h]
        mov dword ptr [edx + 34h], esi
        mov edx, dword ptr [eax + 30h]
        cmp dword ptr [edx + 3ch], eax
        ; Exact mapped bytes 75 06: jne 0x100febd5
        __asm _emit 0x75
        __asm _emit 0x06
        mov esi, dword ptr [eax + 38h]
        mov dword ptr [edx + 3ch], esi
        mov dword ptr [eax + 38h], eax
        mov dword ptr [eax + 34h], eax
        mov dword ptr [eax + 30h], edi
        mov esi, dword ptr [eax + 40h]
        cmp esi, edi
        ; Exact mapped bytes 74 3F: je 0x100fec24
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [eax + 48h]
        cmp edx, edi
        ; Exact mapped bytes 75 11: jne 0x100febfd
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [eax + 44h]
        cmp edx, edi
        ; Exact mapped bytes 75 05: jne 0x100febf8
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [esi + 4ch], edi
        ; Exact mapped bytes EB 23: jmp 0x100fec1b
        __asm _emit 0xeb
        __asm _emit 0x23
        mov dword ptr [edx + 48h], edi
        ; Exact mapped bytes EB 1E: jmp 0x100fec1b
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov esi, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], esi
        mov edx, dword ptr [eax + 44h]
        cmp edx, edi
        ; Exact mapped bytes 75 0B: jne 0x100fec15
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 40h]
        mov esi, dword ptr [eax + 48h]
        mov dword ptr [edx + 4ch], esi
        ; Exact mapped bytes EB 06: jmp 0x100fec1b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [eax + 48h]
        mov dword ptr [edx + 48h], esi
        mov dword ptr [eax + 40h], edi
        mov dword ptr [eax + 44h], edi
        mov dword ptr [eax + 48h], edi
        mov eax, dword ptr [ecx + 3ch]
        cmp eax, edi
        ; Exact mapped bytes 0F 85 76 FF FF FF: jne 0x100feba5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov edx, dword ptr [ecx + 30h]
        cmp edx, edi
        ; Exact mapped bytes 74 32: je 0x100fec69
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ecx + 38h]
        cmp eax, ecx
        ; Exact mapped bytes 75 05: jne 0x100fec43
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [edx + 3ch], edi
        ; Exact mapped bytes EB 1D: jmp 0x100fec60
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [edx + 38h], eax
        mov eax, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [eax + 34h], edx
        mov eax, dword ptr [ecx + 30h]
        cmp dword ptr [eax + 3ch], ecx
        ; Exact mapped bytes 75 06: jne 0x100fec60
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [eax + 3ch], edx
        mov dword ptr [ecx + 38h], ecx
        mov dword ptr [ecx + 34h], ecx
        mov dword ptr [ecx + 30h], edi
        mov edx, dword ptr [ecx + 40h]
        cmp edx, edi
        ; Exact mapped bytes 74 5A: je 0x100fecca
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ecx + 48h]
        cmp eax, edi
        ; Exact mapped bytes 75 23: jne 0x100fec9a
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ecx + 44h]
        cmp eax, edi
        ; Exact mapped bytes 75 0E: jne 0x100fec8c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [edx + 4ch], edi
        mov dword ptr [ecx + 40h], edi
        mov dword ptr [ecx + 44h], edi
        mov dword ptr [ecx + 48h], edi
        pop edi
        ret
        mov dword ptr [eax + 48h], edi
        mov dword ptr [ecx + 40h], edi
        mov dword ptr [ecx + 44h], edi
        mov dword ptr [ecx + 48h], edi
        pop edi
        ret
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [eax + 44h], edx
        mov eax, dword ptr [ecx + 44h]
        cmp eax, edi
        ; Exact mapped bytes 75 14: jne 0x100fecbb
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ecx + 40h]
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 4ch], edx
        mov dword ptr [ecx + 40h], edi
        mov dword ptr [ecx + 44h], edi
        mov dword ptr [ecx + 48h], edi
        pop edi
        ret
        mov edx, dword ptr [ecx + 48h]
        mov dword ptr [eax + 48h], edx
        mov dword ptr [ecx + 40h], edi
        mov dword ptr [ecx + 44h], edi
        mov dword ptr [ecx + 48h], edi
        pop edi
        ret
    }
}

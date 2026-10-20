// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F5F0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_1004f5f0_1004F5F0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 7F: je 0x1004f67b
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 30: jne 0x1004f63b
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [esi + 50h]
        inc ecx
        mov dword ptr [esi + 50h], ecx
        mov edx, ecx
        mov ecx, dword ptr [esi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 3C: je 0x1004f657
        __asm _emit 0x74
        __asm _emit 0x3c
        xor edi, edi
        ; Exact mapped bytes 66 8B 79 0C: mov di, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x0c
        imul edi, dword ptr [ecx + 8]
        dec edi
        xor ecx, ecx
        cmp edx, edi
        setge cl
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x1004f657
        __asm _emit 0x74
        __asm _emit 0x26
        and eax, 0e2ffh
        or ah, 2
        ; Exact mapped bytes EB 18: jmp 0x1004f653
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 15: jne 0x1004f657
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 50h]
        dec ecx
        mov dword ptr [esi + 50h], ecx
        ; Exact mapped bytes 75 0C: jne 0x1004f657
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5ffh
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1004f67b
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x1004f676
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1004f65e
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}

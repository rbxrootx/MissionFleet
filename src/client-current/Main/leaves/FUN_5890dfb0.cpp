// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890DFB0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5890dfb0() {
    __asm {
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 5B: je 0x5890e016
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [edi + 54h]
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x5890dfed
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov ecx, 0ffffh
        ; Exact mapped bytes 66 33 C1: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc1
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov edx, dword ptr [edi + 58h]
        mov dword ptr [edi + 54h], edx
        ; Exact mapped bytes EB 04: jmp 0x5890dff1
        __asm _emit 0xeb
        __asm _emit 0x04
        dec eax
        mov dword ptr [edi + 54h], eax
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x5890e016
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5890e018
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x5890e000
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        ret
        pop esi
        pop edi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}

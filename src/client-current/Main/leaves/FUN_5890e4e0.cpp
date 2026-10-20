// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E4E0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5890e4e0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5890e596
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 54h], 0
        ; Exact mapped bytes 74 7E: je 0x5890e573
        __asm _emit 0x74
        __asm _emit 0x7e
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 2D: jne 0x5890e538
        __asm _emit 0x75
        __asm _emit 0x2d
        inc dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 54h]
        movzx edx, word ptr [eax + 0ch]
        imul edx, dword ptr [eax + 8]
        mov ecx, dword ptr [esi + 50h]
        cmp ecx, edx
        ; Exact mapped bytes 7C 53: jl 0x5890e573
        __asm _emit 0x7c
        __asm _emit 0x53
        movzx ecx, word ptr [eax + 0ch]
        imul ecx, dword ptr [eax + 8]
        dec ecx
        mov dword ptr [esi + 50h], ecx
        mov eax, 0e2ffh
        mov ecx, 200h
        ; Exact mapped bytes EB 2D: jmp 0x5890e565
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 1f00h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 400h
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 25: jne 0x5890e573
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 7E 06: jle 0x5890e55b
        __asm _emit 0x7e
        __asm _emit 0x06
        dec eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes EB 18: jmp 0x5890e573
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, 0e5ffh
        mov ecx, 500h
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x5890e596
        __asm _emit 0x74
        __asm _emit 0x1c
        push edi
        ; Exact mapped bytes EB 03: jmp 0x5890e580
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5890e598
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5890e580
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
    }
}

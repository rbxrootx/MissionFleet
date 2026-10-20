// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CE8F0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_587ce8f0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x587ce996
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 2D: jne 0x587ce942
        __asm _emit 0x75
        __asm _emit 0x2d
        inc dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 54h]
        mov ecx, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x587ce973
        __asm _emit 0x74
        __asm _emit 0x51
        movzx edx, word ptr [eax + 0ch]
        imul edx, dword ptr [eax + 8]
        dec edx
        xor eax, eax
        cmp ecx, edx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x587ce973
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, 0e2ffh
        mov edx, 200h
        ; Exact mapped bytes EB 23: jmp 0x587ce965
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, edx
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 1E: jne 0x587ce973
        __asm _emit 0x75
        __asm _emit 0x1e
        add dword ptr [esi + 50h], -1
        ; Exact mapped bytes 75 18: jne 0x587ce973
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, 0e5ffh
        mov edx, 500h
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x587ce996
        __asm _emit 0x74
        __asm _emit 0x1c
        push edi
        ; Exact mapped bytes EB 03: jmp 0x587ce980
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x587ce998
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x587ce980
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
    }
}

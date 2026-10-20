// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434AE0 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_00434ae0_00434AE0() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        mov edx, ecx
        sub edx, edi
        sar edx, 3
        test edx, edx
        ; Exact mapped bytes 7E 2D: jle 0x434b26
        __asm _emit 0x7e
        __asm _emit 0x2d
        ; Exact mapped bytes 66 39 41 FE: cmp word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0xfe
        lea esi, [ecx - 2]
        ; Exact mapped bytes 74 39: je 0x434b3b
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 66 39 46 FE: cmp word ptr [esi - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0xfe
        lea ecx, [esi - 2]
        ; Exact mapped bytes 74 39: je 0x434b44
        __asm _emit 0x74
        __asm _emit 0x39
        mov esi, ecx
        ; Exact mapped bytes 66 39 46 FE: cmp word ptr [esi - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0xfe
        lea ecx, [esi - 2]
        ; Exact mapped bytes 74 2E: je 0x434b44
        __asm _emit 0x74
        __asm _emit 0x2e
        mov esi, ecx
        ; Exact mapped bytes 66 39 46 FE: cmp word ptr [esi - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0xfe
        lea ecx, [esi - 2]
        ; Exact mapped bytes 74 23: je 0x434b44
        __asm _emit 0x74
        __asm _emit 0x23
        dec edx
        test edx, edx
        ; Exact mapped bytes 7F D3: jg 0x434af9
        __asm _emit 0x7f
        __asm _emit 0xd3
        mov edx, ecx
        sub edx, edi
        sar edx, 1
        dec edx
        ; Exact mapped bytes 74 33: je 0x434b62
        __asm _emit 0x74
        __asm _emit 0x33
        dec edx
        ; Exact mapped bytes 74 1E: je 0x434b50
        __asm _emit 0x74
        __asm _emit 0x1e
        dec edx
        ; Exact mapped bytes 75 3C: jne 0x434b71
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 66 39 41 FE: cmp word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 75 12: jne 0x434b4d
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esp + 0ch]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        ret
        mov eax, dword ptr [esp + 0ch]
        pop edi
        mov dword ptr [eax], esi
        pop esi
        ret
        add ecx, -2
        ; Exact mapped bytes 66 39 41 FE: cmp word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 75 09: jne 0x434b5f
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esp + 0ch]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        ret
        add ecx, -2
        ; Exact mapped bytes 66 39 41 FE: cmp word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 75 09: jne 0x434b71
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esp + 0ch]
        pop edi
        pop esi
        mov dword ptr [eax], ecx
        ret
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        ret
    }
}

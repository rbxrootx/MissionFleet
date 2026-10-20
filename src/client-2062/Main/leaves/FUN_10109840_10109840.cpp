// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10109840 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_10109840_10109840() {
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
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x101098d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 5C: je 0x101098b3
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, eax
        and edx, 1f00h
        ; Exact mapped bytes 66 81 FA 00 01: cmp dx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 2D: jne 0x10109893
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 50h]
        xor edi, edi
        inc edx
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes 66 8B 79 0C: mov di, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x0c
        imul edi, dword ptr [ecx + 8]
        cmp edx, edi
        ; Exact mapped bytes 7C 38: jl 0x101098b3
        __asm _emit 0x7c
        __asm _emit 0x38
        xor edx, edx
        and eax, 0e2ffh
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        imul edx, dword ptr [ecx + 8]
        dec edx
        or ah, 2
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes EB 1C: jmp 0x101098af
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 66 81 FA 00 04: cmp dx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 19: jne 0x101098b3
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 50h]
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x101098a7
        __asm _emit 0x7e
        __asm _emit 0x06
        dec ecx
        mov dword ptr [esi + 50h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x101098b3
        __asm _emit 0xeb
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
        ; Exact mapped bytes 74 1D: je 0x101098d7
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x101098d2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x101098ba
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

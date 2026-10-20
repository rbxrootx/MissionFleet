// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF7E0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_100ff7e0_100FF7E0() {
    __asm {
        push esi
        mov esi, dword ptr [ecx + 60h]
        test esi, esi
        push edi
        ; Exact mapped bytes 7D 02: jge 0x100ff7eb
        __asm _emit 0x7d
        __asm _emit 0x02
        neg esi
        mov eax, dword ptr [ecx + 5ch]
        test eax, eax
        ; Exact mapped bytes 7E 08: jle 0x100ff7fa
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [ecx + 0e8h], eax
        ; Exact mapped bytes EB 32: jmp 0x100ff82c
        __asm _emit 0xeb
        __asm _emit 0x32
        test esi, esi
        mov dword ptr [ecx + 0e8h], 0
        mov edx, esi
        ; Exact mapped bytes 74 22: je 0x100ff82c
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, 66666667h
        mov edi, dword ptr [ecx + 0e8h]
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        inc edi
        test edx, edx
        mov dword ptr [ecx + 0e8h], edi
        ; Exact mapped bytes 75 DE: jne 0x100ff80a
        __asm _emit 0x75
        __asm _emit 0xde
        mov edi, dword ptr [ecx + 0e8h]
        dec edi
        ; Exact mapped bytes 78 45: js 0x100ff87a
        __asm _emit 0x78
        __asm _emit 0x45
        push ebx
        push ebp
        lea ebx, [ecx + edi*4 + 68h]
        mov edx, dword ptr [ecx + 0e8h]
        dec edx
        cmp edi, edx
        ; Exact mapped bytes 74 0B: je 0x100ff851
        __asm _emit 0x74
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes 75 07: jne 0x100ff851
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, 0ah
        ; Exact mapped bytes EB 0A: jmp 0x100ff85b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, esi
        mov ebp, 0ah
        cdq
        idiv ebp
        mov eax, 66666667h
        mov dword ptr [ebx], edx
        imul esi
        sar edx, 2
        mov eax, edx
        sub ebx, 4
        shr eax, 1fh
        add edx, eax
        dec edi
        test edi, edi
        mov esi, edx
        ; Exact mapped bytes 7D C3: jge 0x100ff83b
        __asm _emit 0x7d
        __asm _emit 0xc3
        pop ebp
        pop ebx
        mov eax, dword ptr [ecx + 60h]
        test eax, eax
        ; Exact mapped bytes 7D 08: jge 0x100ff889
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [ecx + edi*4 + 68h], 0bh
        pop edi
        pop esi
        ret
    }
}

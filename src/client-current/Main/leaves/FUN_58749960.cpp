// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749960 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_58749960() {
    __asm {
        mov eax, dword ptr [ecx + 58h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58749970
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ecx + 54h], 1
        ; Exact mapped bytes EB 16: jmp 0x58749986
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 7E 09: jle 0x5874997b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ecx + 54h], 2
        ; Exact mapped bytes EB 0B: jmp 0x58749986
        __asm _emit 0xeb
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x58749986
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ecx + 54h], 4
        mov edx, dword ptr [ecx + 9ch]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        push esi
        mov esi, edx
        push edi
        mov edi, dword ptr [ecx + 0ach]
        add edi, edi
        add edi, edi
        shr esi, 1fh
        add esi, edx
        mov edx, dword ptr [edi + 58a0ed18h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ecx + 0b0h], eax
        mov edi, dword ptr [edi + 58a0b4d8h]
        imul edi, esi
        mov eax, 10624dd3h
        imul edi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 0b0h]
        add dword ptr [ecx + 7ch], edx
        mov dword ptr [ecx + 0b4h], eax
        mov edx, dword ptr [ecx + 0b4h]
        sub dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ecx + 7ch]
        cdq
        ; Exact mapped bytes F7 3D CC 44 A2 58: idiv dword ptr [0x58a244cc]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [ecx + 80h]
        pop edi
        add eax, dword ptr [ecx + 60h]
        mov dword ptr [ecx + 84h], eax
        mov eax, esi
        cdq
        ; Exact mapped bytes F7 3D D0 44 A2 58: idiv dword ptr [0x58a244d0]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        pop esi
        add eax, dword ptr [ecx + 64h]
        mov dword ptr [ecx + 88h], eax
        ret
    }
}

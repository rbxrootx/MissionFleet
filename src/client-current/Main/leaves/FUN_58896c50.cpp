// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58896C50 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_58896c50() {
    __asm {
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push esi
        mov esi, dword ptr [edx + 4]
        push edi
        mov edi, dword ptr [ecx + 4]
        lea eax, [edi + 2]
        cmp esi, eax
        ; Exact mapped bytes 7C 0A: jl 0x58896c70
        __asm _emit 0x7c
        __asm _emit 0x0a
        lea eax, [edi + 0cah]
        cmp esi, eax
        ; Exact mapped bytes 7C 1C: jl 0x58896c8c
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [edx + 8]
        lea ebx, [eax - 4]
        cmp edx, ebx
        ; Exact mapped bytes 0F 8C C7 00 00 00: jl 0x58896d48
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 60h
        cmp edx, eax
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x58896d48
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes 8B 2D 9C 45 A2 58: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 10524h]
        mov ebx, dword ptr [edx + 114h]
        mov eax, 3e80h
        cdq
        idiv ebx
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov eax, 2ee0h
        cdq
        idiv ebx
        sub esi, edi
        sub esi, 4
        shl esi, 6
        mov edi, esi
        cdq
        sub eax, edx
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, dword ptr [edx + 8]
        sar eax, 1
        sub esi, eax
        sub esi, dword ptr [ecx + 8]
        add esi, 6
        shl esi, 6
        test edi, edi
        ; Exact mapped bytes 7D 04: jge 0x58896ce1
        __asm _emit 0x7d
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 1F: jmp 0x58896d00
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 10524h]
        mov eax, 0fa000h
        cdq
        idiv dword ptr [ecx + 114h]
        mov ecx, 3200h
        sub ecx, eax
        cmp edi, ecx
        ; Exact mapped bytes 7E 02: jle 0x58896d00
        __asm _emit 0x7e
        __asm _emit 0x02
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 7D 04: jge 0x58896d08
        __asm _emit 0x7d
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 1F: jmp 0x58896d27
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp + 10524h]
        mov eax, 0bb800h
        cdq
        idiv dword ptr [ecx + 114h]
        mov ecx, 1900h
        sub ecx, eax
        cmp esi, ecx
        ; Exact mapped bytes 7E 02: jle 0x58896d27
        __asm _emit 0x7e
        __asm _emit 0x02
        mov esi, ecx
        mov dword ptr [ebp + 1052ch], edi
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, ebp
        mov eax, dword ptr [eax + 10524h]
        mov dword ptr [edx + 10530h], esi
        mov dword ptr [eax + 50h], edi
        mov dword ptr [eax + 54h], esi
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}

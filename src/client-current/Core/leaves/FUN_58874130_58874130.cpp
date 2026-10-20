// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874130 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_58874130_58874130() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        xor eax, eax
        push edi
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes DD 7D FC: fnstsw word ptr [ebp - 4]
        __asm _emit 0xdd
        __asm _emit 0x7d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        mov esi, edx
        mov eax, edx
        shr esi, 2
        and eax, 10h
        and esi, 8
        mov ecx, edx
        or esi, eax
        and ecx, 2
        shr esi, 2
        mov eax, edx
        and eax, 8
        shl ecx, 3
        or esi, eax
        mov eax, edx
        and eax, 4
        shr esi, 1
        or ecx, eax
        and edx, 1
        add ecx, ecx
        shl edx, 4
        or esi, ecx
        or esi, edx
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 7D 04: jge 0x58874188
        __asm _emit 0x7d
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 0A: jmp 0x58874192
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 0F AE 5D FC: stmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xfc
        mov edi, dword ptr [ebp - 4]
        and edi, 3fh
        mov edx, edi
        mov eax, edi
        and eax, 10h
        shr edx, 2
        and edx, 8
        mov ecx, edi
        or edx, eax
        and ecx, 2
        mov eax, edi
        shr edx, 2
        and eax, 8
        shl ecx, 3
        or edx, eax
        mov eax, edi
        and eax, 4
        shr edx, 1
        or ecx, eax
        and edi, 1
        add ecx, ecx
        shl edi, 4
        or edx, ecx
        or edx, edi
        mov eax, edx
        shl eax, 8
        or eax, esi
        shl eax, 10h
        or eax, edx
        pop edi
        or eax, esi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

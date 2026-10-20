// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080CD0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_10080cd0_10080CD0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        xor ebp, ebp
        xor esi, esi
        lea eax, [ecx + 74h]
        mov ebx, 1
        mov edx, dword ptr [eax - 10h]
        cmp esi, edi
        ; Exact mapped bytes 75 2B: jne 0x10080d16
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 66 09 5A 24: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5a
        __asm _emit 0x24
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 66 09 5A 24: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5a
        __asm _emit 0x24
        mov edx, dword ptr [eax - 10h]
        mov dword ptr [edx + 50h], ebp
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 50h], ebp
        mov edx, dword ptr [eax - 10h]
        mov dword ptr [ecx + 70h], edx
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 80h], edx
        mov dword ptr [ecx + 0a0h], edi
        ; Exact mapped bytes EB 0E: jmp 0x10080d24
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 66 81 62 24 FE FF: and word ptr [edx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 66 81 62 24 FE FF: and word ptr [edx + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x62
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        inc esi
        add eax, 4
        cmp esi, 3
        ; Exact mapped bytes 7C B7: jl 0x10080ce4
        __asm _emit 0x7c
        __asm _emit 0xb7
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

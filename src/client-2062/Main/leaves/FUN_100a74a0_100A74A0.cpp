// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A74A0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_100a74a0_100A74A0() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [ecx + 14h]
        mov edx, dword ptr [esi]
        add edi, eax
        cmp edx, edi
        ; Exact mapped bytes 7C 2B: jl 0x100a74df
        __asm _emit 0x7c
        __asm _emit 0x2b
        mov edi, dword ptr [ecx + 1ch]
        add edi, eax
        cmp edx, edi
        ; Exact mapped bytes 7D 22: jge 0x100a74df
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [ecx + 8]
        mov esi, dword ptr [ecx + 18h]
        add esi, eax
        cmp edx, esi
        ; Exact mapped bytes 7C 13: jl 0x100a74df
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 20h]
        add ecx, eax
        cmp edx, ecx
        ; Exact mapped bytes 7D 0A: jge 0x100a74df
        __asm _emit 0x7d
        __asm _emit 0x0a
        pop edi
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

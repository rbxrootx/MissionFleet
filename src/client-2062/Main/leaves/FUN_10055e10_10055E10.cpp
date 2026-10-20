// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055E10 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_10055e10_10055E10() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 6ch], 40000000h
        ; Exact mapped bytes 75 4E: jne 0x10055e6a
        __asm _emit 0x75
        __asm _emit 0x4e
        mov dword ptr [esi + 6ch], 0
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 82 6E 06 00: call 0x100bccb0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 7E 20: jle 0x10055e5a
        __asm _emit 0x7e
        __asm _emit 0x20
        push ebx
        lea ecx, [esi + 198h]
        mov edx, 1
        mov ebx, dword ptr [ecx]
        inc eax
        add ecx, 4
        mov dword ptr [ebx + 50h], edx
        mov ebx, dword ptr [esi + 120h]
        cmp eax, ebx
        ; Exact mapped bytes 7C ED: jl 0x10055e46
        __asm _emit 0x7c
        __asm _emit 0xed
        pop ebx
        mov dword ptr [esi + 64h], 0
        ; Exact mapped bytes 66 C7 86 18 01 00 00 00 00: mov word ptr [esi + 0x118], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}

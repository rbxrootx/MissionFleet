// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735C70 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58735c70() {
    __asm {
        mov edx, dword ptr [ecx + 0e0h]
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x58735cb5
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 36: je 0x58735cb5
        __asm _emit 0x74
        __asm _emit 0x36
        push esi
        movzx esi, word ptr [ecx + 0ech]
        xor eax, eax
        test esi, esi
        ; Exact mapped bytes 7E 27: jle 0x58735cb4
        __asm _emit 0x7e
        __asm _emit 0x27
        push edi
        mov edi, dword ptr [esp + 0ch]
        cmp dword ptr [edx], edi
        ; Exact mapped bytes 74 0D: je 0x58735ca3
        __asm _emit 0x74
        __asm _emit 0x0d
        inc eax
        add edx, 4
        cmp eax, esi
        ; Exact mapped bytes 7C F4: jl 0x58735c92
        __asm _emit 0x7c
        __asm _emit 0xf4
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 0e4h]
        mov edx, dword ptr [esp + 10h]
        add dword ptr [ecx + eax*4], edx
        lea eax, [ecx + eax*4]
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

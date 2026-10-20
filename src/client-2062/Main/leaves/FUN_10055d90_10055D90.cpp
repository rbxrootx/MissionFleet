// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055D90 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_10055d90_10055D90() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 6ch], 40000000h
        ; Exact mapped bytes 75 6C: jne 0x10055e08
        __asm _emit 0x75
        __asm _emit 0x6c
        mov dword ptr [esi + 6ch], 0
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 02 6F 06 00: call 0x100bccb0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 120h]
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 7E 20: jle 0x10055dda
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
        ; Exact mapped bytes 7C ED: jl 0x10055dc6
        __asm _emit 0x7c
        __asm _emit 0xed
        pop ebx
        mov ecx, dword ptr [esi + 64h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 18 01 00 00: mov ax, word ptr [esi + 0x118]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20000h
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E8 73 FF FF: call 0x1004d1e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
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

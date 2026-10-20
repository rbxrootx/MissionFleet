// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F5B0 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_5882f5b0_5882F5B0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 10h], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 42: je 0x5882f5fe
        __asm _emit 0x74
        __asm _emit 0x42
        cmp eax, 30h
        ; Exact mapped bytes 76 3D: jbe 0x5882f5fe
        __asm _emit 0x76
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, 10h
        ; Exact mapped bytes 77 0F: ja 0x5882f5d8
        __asm _emit 0x77
        __asm _emit 0x0f
        mov ecx, 3e8h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        add eax, eax
        pop ebp
        ret
        cmp ecx, 30h
        ; Exact mapped bytes 77 0F: ja 0x5882f5ec
        __asm _emit 0x77
        __asm _emit 0x0f
        mov ecx, 50h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        add eax, eax
        pop ebp
        ret
        cmp ecx, 0f0h
        mov eax, 1
        cmovbe eax, eax
        add eax, eax
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, 20h
        ; Exact mapped bytes 77 04: ja 0x5882f60a
        __asm _emit 0x77
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        cmp ecx, 30h
        ; Exact mapped bytes 77 0D: ja 0x5882f61c
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, 1a0h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        pop ebp
        ret
        cmp ecx, 40h
        ; Exact mapped bytes 77 0D: ja 0x5882f62e
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, 0e0h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        pop ebp
        ret
        cmp ecx, 50h
        ; Exact mapped bytes 77 0D: ja 0x5882f640
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, 80h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        pop ebp
        ret
        cmp ecx, 21ch
        mov ecx, 30h
        ; Exact mapped bytes 76 05: jbe 0x5882f652
        __asm _emit 0x76
        __asm _emit 0x05
        mov ecx, 20h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        pop ebp
        ret
    }
}

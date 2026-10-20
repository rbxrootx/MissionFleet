// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882F660 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_5882f660_5882F660() {
    __asm {
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 10h], 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 30: je 0x5882f69c
        __asm _emit 0x74
        __asm _emit 0x30
        cmp eax, 30h
        ; Exact mapped bytes 76 2B: jbe 0x5882f69c
        __asm _emit 0x76
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, 8
        ; Exact mapped bytes 77 0F: ja 0x5882f688
        __asm _emit 0x77
        __asm _emit 0x0f
        mov ecx, 80h
        cmp ecx, eax
        sbb eax, eax
        neg eax
        add eax, eax
        pop ebp
        ret
        mov eax, 1
        cmp ecx, 30h
        ; Exact mapped bytes 76 06: jbe 0x5882f698
        __asm _emit 0x76
        __asm _emit 0x06
        cmp ecx, 48h
        cmovbe eax, eax
        add eax, eax
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, 8
        ; Exact mapped bytes 77 04: ja 0x5882f6a8
        __asm _emit 0x77
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        cmp ecx, 50h
        mov ecx, 10h
        ; Exact mapped bytes 76 05: jbe 0x5882f6b7
        __asm _emit 0x76
        __asm _emit 0x05
        mov ecx, 8
        cmp ecx, eax
        sbb eax, eax
        neg eax
        pop ebp
        ret
    }
}

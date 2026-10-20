// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851CE3 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58851ce3_58851CE3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        test byte ptr [ebp + 8], 4
        ; Exact mapped bytes 75 25: jne 0x58851d13
        __asm _emit 0x75
        __asm _emit 0x25
        test byte ptr [ebp + 8], 1
        ; Exact mapped bytes 74 0F: je 0x58851d03
        __asm _emit 0x74
        __asm _emit 0x0f
        test byte ptr [ebp + 8], 2
        ; Exact mapped bytes 74 0D: je 0x58851d07
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp + 0ch], 80000000h
        ; Exact mapped bytes 77 10: ja 0x58851d13
        __asm _emit 0x77
        __asm _emit 0x10
        xor al, al
        pop ebp
        ret
        cmp dword ptr [ebp + 0ch], 7fffffffh
        seta al
        pop ebp
        ret
        mov al, 1
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F580 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5879f580_5879F580() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, 20h
        ; Exact mapped bytes 74 21: je 0x5879f5aa
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 30h
        ; Exact mapped bytes 72 05: jb 0x5879f593
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, 39h
        ; Exact mapped bytes 76 17: jbe 0x5879f5aa
        __asm _emit 0x76
        __asm _emit 0x17
        cmp eax, 41h
        ; Exact mapped bytes 72 05: jb 0x5879f59d
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, 5ah
        ; Exact mapped bytes 76 0D: jbe 0x5879f5aa
        __asm _emit 0x76
        __asm _emit 0x0d
        cmp eax, 61h
        ; Exact mapped bytes 72 05: jb 0x5879f5a7
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, 7ah
        ; Exact mapped bytes 76 03: jbe 0x5879f5aa
        __asm _emit 0x76
        __asm _emit 0x03
        xor eax, eax
        ret
        mov eax, 1
        ret
    }
}

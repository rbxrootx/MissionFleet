// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861A90 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58861a90_58861A90() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x58861aa1
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 10: jne 0x58861ab1
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 C9 09 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 FA F4 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 7fffffffh
        pop ebp
        ret
    }
}

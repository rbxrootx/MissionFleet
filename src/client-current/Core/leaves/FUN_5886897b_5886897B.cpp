// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886897B .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5886897b_5886897B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x58868998
        __asm _emit 0x74
        __asm _emit 0x12
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 00 00 00: call 0x5886899c
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 42 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

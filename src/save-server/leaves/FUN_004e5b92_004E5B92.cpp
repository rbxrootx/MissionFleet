// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5B92 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004e5b92_004E5B92() {
    __asm {
        push ebp
        mov ebp, esp
        push 6734a4h
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 6734a0h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 67349ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 74 2E 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 89 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 66 2E 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7B 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

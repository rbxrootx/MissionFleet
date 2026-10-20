// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5B50 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004e5b50_004E5B50() {
    __asm {
        push ebp
        mov ebp, esp
        push 673498h
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 673494h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 673490h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B6 2E 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CB 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A8 2E 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BD 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F431 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5886f431_5886F431() {
    __asm {
        ; Exact mapped bytes A1 44 A0 96 58: mov eax, dword ptr [0x5896a044]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x5886f43e
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5886f45b
        __asm _emit 0x75
        __asm _emit 0x19
        push 588c5f7ch
        push 588c5f74h
        push 588c5f7ch
        push 11h
        ; Exact mapped bytes E8 85 00 00 00: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

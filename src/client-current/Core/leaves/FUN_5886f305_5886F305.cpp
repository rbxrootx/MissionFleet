// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F305 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5886f305_5886F305() {
    __asm {
        ; Exact mapped bytes A1 00 A0 96 58: mov eax, dword ptr [0x5896a000]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x5886f312
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5886f32e
        __asm _emit 0x75
        __asm _emit 0x18
        push 588c5each
        push 588c5ea8h
        push 588c5each
        push eax
        ; Exact mapped bytes E8 B2 01 00 00: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

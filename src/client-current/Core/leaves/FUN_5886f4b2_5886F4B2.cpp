// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F4B2 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5886f4b2_5886F4B2() {
    __asm {
        ; Exact mapped bytes A1 50 A0 96 58: mov eax, dword ptr [0x5896a050]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x5886f4bf
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5886f4dc
        __asm _emit 0x75
        __asm _emit 0x19
        push 588c5fcch
        push 588c5fc4h
        push 588c5fcch
        push 14h
        ; Exact mapped bytes E8 04 00 00 00: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

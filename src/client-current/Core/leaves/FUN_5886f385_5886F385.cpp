// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F385 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5886f385_5886F385() {
    __asm {
        ; Exact mapped bytes A1 14 A0 96 58: mov eax, dword ptr [0x5896a014]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x5886f392
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5886f3af
        __asm _emit 0x75
        __asm _emit 0x19
        push 588c5f10h
        push 588c5f08h
        push 588c5f10h
        push 5
        ; Exact mapped bytes E8 31 01 00 00: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

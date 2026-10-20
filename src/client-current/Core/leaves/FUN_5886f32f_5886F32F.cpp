// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F32F .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5886f32f_5886F32F() {
    __asm {
        ; Exact mapped bytes A1 04 A0 96 58: mov eax, dword ptr [0x5896a004]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 75 03: jne 0x5886f33c
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5886f359
        __asm _emit 0x75
        __asm _emit 0x19
        push 588c5ec4h
        push 588c5ebch
        push 588c5ec4h
        push 1
        ; Exact mapped bytes E8 87 01 00 00: call 0x5886f4dd
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

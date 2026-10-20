// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046D6A0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_0046d6a0_0046D6A0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 19: push 0x19
        __asm _emit 0x6a
        __asm _emit 0x19
        ; Exact mapped bytes E8 E6 8C FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

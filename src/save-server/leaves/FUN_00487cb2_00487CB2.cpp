// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487CB2 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_00487cb2_00487CB2() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 C0 0B 00: call 0x543cfe
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E8 B8 AF 0B 00: call 0x542c7b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E8 6B C0 0B 00: call 0x543d33
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

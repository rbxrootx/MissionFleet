// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA570 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_584aa570() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 54 52 89 58: push 0x58895254
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 42 38 00: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0x38
        __asm _emit 0x00
    }
}

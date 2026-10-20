// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C640 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5878c640() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 FC 68 8B 58: push 0x588b68fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x68
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 21 0A 00: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
    }
}

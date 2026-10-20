// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED38C .. +0xC bytes.
extern "C" __declspec(naked) void FUN_004ed38c_004ED38C() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 18 2A FE FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

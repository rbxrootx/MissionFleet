// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA800 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_584aa800() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 5D 74 D1 05: mov eax, 0x5d1745d
        __asm _emit 0xb8
        __asm _emit 0x5d
        __asm _emit 0x74
        __asm _emit 0xd1
        __asm _emit 0x05
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524D30 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58524d30() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes E8 D5 F9 00 00: call 0x58534710
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

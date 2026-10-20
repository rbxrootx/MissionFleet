// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58539D40 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58539d40() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 E0 04 96 58: mov eax, 0x589604e0
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

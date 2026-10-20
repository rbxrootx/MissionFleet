// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585800C0 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_585800c0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 C8 60 96 58: mov eax, dword ptr [0x589660c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6A10 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004c6a10_004C6A10() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 A8 2A 5D 00: mov eax, dword ptr [0x5d2aa8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC438 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_004cc438_004CC438() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 CC 11 67 00: mov eax, dword ptr [0x6711cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x11
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

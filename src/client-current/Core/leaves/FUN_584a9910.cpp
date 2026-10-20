// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9910 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_584a9910() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes E8 63 05 00 00: call 0x584a9e80
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

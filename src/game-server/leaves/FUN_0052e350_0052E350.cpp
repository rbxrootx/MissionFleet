// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E350 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0052e350_0052E350() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 44 EC 5D 00: push 0x5dec44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 8B FD FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 68 40 EC 5D 00: push 0x5dec40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 7F 8B FD FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

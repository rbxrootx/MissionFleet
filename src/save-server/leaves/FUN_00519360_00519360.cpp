// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519360 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_00519360_00519360() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 70 6D 68 00: push 0x686d70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 39 2B FD FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 68 6C 6D 68 00: push 0x686d6c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 2F 2B FD FF: call 0x4ebea6
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

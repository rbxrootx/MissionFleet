// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584811A0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_584811a0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 00 96 00 00: push 0x9600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B8 40 89 58: call dword ptr [0x588940b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 18 22 96 58: mov dword ptr [0x58962218], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x22
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C57D .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5887c57d() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 68 00 00 00 40: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 68 98 19 8D 58: push 0x588d1998
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x19
        __asm _emit 0x8d
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 80 43 89 58: call dword ptr [0x58894380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 30 7D 90 58: mov dword ptr [0x58907d30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

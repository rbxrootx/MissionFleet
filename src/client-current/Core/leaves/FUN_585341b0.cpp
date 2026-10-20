// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585341B0 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_585341b0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BA 50 73 94 58: mov edx, 0x58947350
        __asm _emit 0xba
        __asm _emit 0x50
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes F0 0F B1 0A: lock cmpxchg dword ptr [edx], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x0a
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x585341ce
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes FF 15 68 45 89 58: call dword ptr [0x58894568]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

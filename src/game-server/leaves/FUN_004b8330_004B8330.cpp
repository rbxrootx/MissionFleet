// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8330 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_004b8330_004B8330() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 28 04 00 00: call 0x4b8760
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 05 90 ED 5D 00: movsx eax, byte ptr [0x5ded90]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x4b8348
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 08 8F 00 00: call 0x4c1250
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

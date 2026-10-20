// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BC20 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_0047bc20_0047BC20() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 88 4B 00 00: call 0x4807b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 05 6C 72 68 00: movsx eax, byte ptr [0x68726c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x6c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x47bc38
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 38 49 00 00: call 0x480570
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

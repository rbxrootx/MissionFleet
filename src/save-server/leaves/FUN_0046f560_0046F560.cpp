// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046F560 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_0046f560_0046F560() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 98 FD FF FF: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 78 64 00: cmp dword ptr [eax + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x46f576
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes E8 8D FD FF FF: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes E8 55 FF FF FF: call 0x46f4d0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

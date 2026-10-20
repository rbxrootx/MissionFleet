// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2E50 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004b2e50_004B2E50() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 F8 22 00 00: call 0x4b5150
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 16 5D 00 FF: cmp dword ptr [0x5d1660], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 16: je 0x4b2e77
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 60 16 5D 00: mov eax, dword ptr [0x5d1660]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 34 23 5E 00: call dword ptr [0x5e2334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 60 16 5D 00 FF FF FF FF: mov dword ptr [0x5d1660], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ret
    }
}

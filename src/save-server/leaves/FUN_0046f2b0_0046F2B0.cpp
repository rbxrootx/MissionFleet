// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046F2B0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0046f2b0_0046F2B0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 58 15 00 00: call 0x470810
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F0 DD 67 00 FF: cmp dword ptr [0x67ddf0], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 16: je 0x46f2d7
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 F0 DD 67 00: mov eax, dword ptr [0x67ddf0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 58 B9 68 00: call dword ptr [0x68b958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 F0 DD 67 00 FF FF FF FF: mov dword ptr [0x67ddf0], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ret
    }
}

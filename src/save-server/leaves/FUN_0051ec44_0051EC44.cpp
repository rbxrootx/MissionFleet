// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051EC44 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0051ec44_0051EC44() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x51ec5e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 0B FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0b
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x51ec6c
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 F4 60 00 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

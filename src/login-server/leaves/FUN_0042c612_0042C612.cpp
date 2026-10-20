// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C612 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_0042c612_0042C612() {
    __asm {
        ; Exact mapped bytes E8 9C 96 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 88 48 14: mov byte ptr [eax + 0x14], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes 75 08: jne 0x42c62a
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes E8 BA 3D FF FF: call 0x4203e3
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

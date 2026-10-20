// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004663C0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004663c0_004663C0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 14 72 68 00 01: cmp dword ptr [0x687214], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 05: jne 0x4663d1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 2F BA 00 00: call 0x471e00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 76 BA 00 00: call 0x471e50
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0ffh
        ; Exact mapped bytes FF 15 C0 B8 68 00: call dword ptr [0x68b8c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}

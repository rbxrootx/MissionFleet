// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F05C .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0041f05c_0041F05C() {
    __asm {
        ; Exact mapped bytes 83 3D 6C FC 44 00 01: cmp dword ptr [0x44fc6c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 05: jne 0x41f06a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 86 41 00 00: call 0x4231f0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 4]
        ; Exact mapped bytes E8 B6 41 00 00: call 0x423229
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push 0ffh
        ; Exact mapped bytes FF 15 24 C1 43 00: call dword ptr [0x43c124]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F037 .. +0x25 bytes.
extern "C" __declspec(naked) void __amsg_exit_0041F037() {
    __asm {
        ; Exact mapped bytes 83 3D 6C FC 44 00 01: cmp dword ptr [0x44fc6c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 05: jne 0x41f045
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 AB 41 00 00: call 0x4231f0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 4]
        ; Exact mapped bytes E8 DB 41 00 00: call 0x423229
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes FF 15 90 A8 44 00: call dword ptr [0x44a890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x00
        pop ecx
        pop ecx
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ACD70 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004acd70_004ACD70() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 2C ED 5D 00 01: cmp dword ptr [0x5ded2c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 05: jne 0x4acd81
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 4F CF 00 00: call 0x4b9cd0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 CF 00 00: call 0x4b9d20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 0ffh
        ; Exact mapped bytes FF 15 9C 22 5E 00: call dword ptr [0x5e229c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417893 .. +0x1F bytes.
extern "C" __declspec(naked) void _CheckError__YGXJ_Z_00417893() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7D 14: jge 0x4178af
        __asm _emit 0x7d
        __asm _emit 0x14
        ; Exact mapped bytes 3D 0E 00 07 80: cmp eax, 0x8007000e
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x80
        ; Exact mapped bytes 75 07: jne 0x4178a9
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 7A 54 01 00: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x4178af
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 07 FF 01 00: call 0x4377b6
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

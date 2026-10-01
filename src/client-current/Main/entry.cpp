// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F76B6B .. +0x25 bytes.
extern "C" __declspec(naked) void entry() {
    __asm {
        ; Exact mapped bytes 68 3E 4D D5 45: push 0x45d54d3e
        __asm _emit 0x68
        __asm _emit 0x3e
        __asm _emit 0x4d
        __asm _emit 0xd5
        __asm _emit 0x45
        ; Exact mapped bytes E8 23 3E CC FF: call 0x58c3a998
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3e
        __asm _emit 0xcc
        __asm _emit 0xff
        ; Exact mapped bytes 0F CA: bswap edx
        __asm _emit 0x0f
        __asm _emit 0xca
        ; Exact mapped bytes 66 3D 65 53: cmp ax, 0x5365
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x65
        __asm _emit 0x53
        ; Exact mapped bytes F7 DA: neg edx
        __asm _emit 0xf7
        __asm _emit 0xda
        ; Exact mapped bytes 66 85 E1: test cx, sp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xe1
        ; Exact mapped bytes 0F CA: bswap edx
        __asm _emit 0x0f
        __asm _emit 0xca
        ; Exact mapped bytes 66 A9 B8 7F: test ax, 0x7fb8
        __asm _emit 0x66
        __asm _emit 0xa9
        __asm _emit 0xb8
        __asm _emit 0x7f
        ; Exact mapped bytes 33 DA: xor ebx, edx
        __asm _emit 0x33
        __asm _emit 0xda
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 03 F2: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xf2
        ; Exact mapped bytes E9 46 A4 CE FF: jmp 0x58c60fd6
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xa4
        __asm _emit 0xce
        __asm _emit 0xff
    }
}

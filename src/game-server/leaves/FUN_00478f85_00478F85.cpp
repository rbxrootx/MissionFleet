// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478F85 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_00478f85_00478F85() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 78 CB 5D 00: mov ecx, 0x5dcb78
        __asm _emit 0xb9
        __asm _emit 0x78
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 FF F9 FB FF: call 0x438991
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 47 F8 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

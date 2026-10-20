// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A75A0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_100a75a0_100A75A0() {
    __asm {
        ; Exact mapped bytes 80 49 24 02: or byte ptr [ecx + 0x24], 2
        __asm _emit 0x80
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes E8 F9 64 F7 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x64
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

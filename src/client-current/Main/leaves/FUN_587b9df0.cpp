// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9DF0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_587b9df0() {
    __asm {
        ; Exact mapped bytes A1 A0 B4 A0 58: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 02 31 01 80: push 0x80013102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        ; Exact mapped bytes E8 68 6E 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6e
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5898991E .. +0x1B bytes.
extern "C" __declspec(naked) void Unwind_5898991e() {
    __asm {
        ; Exact mapped bytes 68 C0 36 75 58: push 0x587536c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x36
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 18: push 0x18
        __asm _emit 0x6a
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 05 20 18 00 00: add eax, 0x1820
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 23 37 FF FF: call 0x5897d05b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

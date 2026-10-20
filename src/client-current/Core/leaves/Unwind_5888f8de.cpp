// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F8DE .. +0x1B bytes.
extern "C" __declspec(naked) void Unwind_5888f8de() {
    __asm {
        ; Exact mapped bytes 68 E0 77 48 58: push 0x584877e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x77
        __asm _emit 0x48
        __asm _emit 0x58
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 05 14 18 00 00: add eax, 0x1814
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 24 FA FF: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

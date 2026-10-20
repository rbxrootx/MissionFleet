// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888F9F1 .. +0x15 bytes.
extern "C" __declspec(naked) void Unwind_5888f9f1() {
    __asm {
        ; Exact mapped bytes 68 88 00 00 00: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 48 FF FF FF: mov eax, dword ptr [ebp - 0xb8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 32 16 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

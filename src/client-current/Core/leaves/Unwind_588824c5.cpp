// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588824C5 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_588824c5() {
    __asm {
        ; Exact mapped bytes 6A 2C: push 0x2c
        __asm _emit 0x6a
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 85 30 FD FF FF: mov eax, dword ptr [ebp - 0x2d0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 EB FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xeb
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

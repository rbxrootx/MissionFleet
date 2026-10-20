// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891108 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58891108() {
    __asm {
        ; Exact mapped bytes 68 AC 00 00 00: push 0xac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1E FF F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892224 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58892224() {
    __asm {
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 85 FC FA FF FF: mov eax, dword ptr [ebp - 0x504]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 EE F9 FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xee
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

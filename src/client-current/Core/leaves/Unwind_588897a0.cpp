// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588897A0 .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_588897a0() {
    __asm {
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 8B 45 94: mov eax, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 89 78 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x78
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

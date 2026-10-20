// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588898A8 .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_588898a8() {
    __asm {
        ; Exact mapped bytes 6A 70: push 0x70
        __asm _emit 0x6a
        __asm _emit 0x70
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 81 77 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x77
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

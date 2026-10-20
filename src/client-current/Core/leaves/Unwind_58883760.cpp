// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883760 .. +0x12 bytes.
extern "C" __declspec(naked) void Unwind_58883760() {
    __asm {
        ; Exact mapped bytes 68 6C 02 00 00: push 0x26c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 9C: mov eax, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C6 D8 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd8
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

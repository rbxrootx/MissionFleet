// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888A83C .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_5888a83c() {
    __asm {
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes 8B 45 88: mov eax, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 ED 67 FA FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x67
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

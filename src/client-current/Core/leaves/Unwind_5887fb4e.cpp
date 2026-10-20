// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887FB4E .. +0xF bytes.
extern "C" __declspec(naked) void Unwind_5887fb4e() {
    __asm {
        ; Exact mapped bytes 6A 2C: push 0x2c
        __asm _emit 0x6a
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DB 14 FB FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

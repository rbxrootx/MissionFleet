// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798DE0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58798de0() {
    __asm {
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x58798df2
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 6A 30: push 0x30
        __asm _emit 0x6a
        __asm _emit 0x30
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 45 82 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

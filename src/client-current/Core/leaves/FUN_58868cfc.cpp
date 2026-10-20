// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868CFC .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58868cfc() {
    __asm {
        ; Exact mapped bytes A1 58 74 90 58: mov eax, dword ptr [0x58907458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 0D: je 0x58868d13
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7B 6A 00 00: call 0x5886f787
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 0D 58 74 90 58 FF: or dword ptr [0x58907458], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xff
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

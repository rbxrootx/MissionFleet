// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A5E9 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5883a5e9() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 08: je 0x5883a5fe
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 BE F8 FF FF: call 0x58839ebc
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

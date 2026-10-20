// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798E00 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58798e00() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0D: je 0x58798e13
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF 71 08: push dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x08
        ; Exact mapped bytes FF 71 04: push dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x71
        __asm _emit 0x04
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 8D F4 FF FF: call 0x587982a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

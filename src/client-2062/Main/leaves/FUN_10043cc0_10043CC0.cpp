// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043CC0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_10043cc0_10043CC0() {
    __asm {
        ; Exact mapped bytes 8B 89 64 01 00 00: mov ecx, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x10043cd4
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AC 6C FE FF: call 0x1002a980
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

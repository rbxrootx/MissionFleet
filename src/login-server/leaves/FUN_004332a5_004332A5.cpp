// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004332A5 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_004332a5_004332A5() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 0B: je 0x4332bb
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 4E 04 FF: or dword ptr [esi + 4], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4E 0C: lea ecx, [esi + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes E8 73 A8 FF FF: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

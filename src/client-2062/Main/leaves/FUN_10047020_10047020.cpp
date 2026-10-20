// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047020 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_10047020_10047020() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 86 14 39 00 00: mov eax, dword ptr [esi + 0x3914]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 38 5A 17 10: mov dword ptr [esi], 0x10175a38
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 38 50 17 10: call dword ptr [0x10175038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 E3 F0 FF FF: call 0x10046120
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

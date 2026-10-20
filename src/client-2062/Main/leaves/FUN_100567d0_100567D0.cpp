// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100567D0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_100567d0_100567D0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 8E 94 03 00 00: mov ecx, dword ptr [esi + 0x394]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C0 BC FD FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 98 03 00 00: mov ecx, dword ptr [esi + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 B3 BC FD FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

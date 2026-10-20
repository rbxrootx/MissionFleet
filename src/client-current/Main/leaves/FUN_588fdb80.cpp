// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FDB80 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588fdb80() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 14 BB EC FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xbb
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 00 01 00 00 6B E0 0A C2: mov dword ptr [esi + 0x100], 0xc20ae06b
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6b
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0xc2
        ; Exact mapped bytes C6 86 FC 00 00 00 00: mov byte ptr [esi + 0xfc], 0
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

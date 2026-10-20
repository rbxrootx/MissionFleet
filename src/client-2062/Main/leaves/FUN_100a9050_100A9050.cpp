// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A9050 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_100a9050_100A9050() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9C 01 00 00: push 0x19c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 47 4A F7 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4a
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 80 4E 24 02: or byte ptr [esi + 0x24], 2
        __asm _emit 0x80
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

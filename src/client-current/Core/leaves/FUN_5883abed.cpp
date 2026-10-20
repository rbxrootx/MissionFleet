// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883ABED .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_5883abed() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 4E 18: lea ecx, [esi + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x18
        ; Exact mapped bytes E8 91 07 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 86 07 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

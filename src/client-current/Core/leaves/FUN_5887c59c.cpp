// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C59C .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5887c59c() {
    __asm {
        ; Exact mapped bytes 8B 0D 30 7D 90 58: mov ecx, dword ptr [0x58907d30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 F9 FE: cmp ecx, -2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xfe
        ; Exact mapped bytes 75 0B: jne 0x5887c5b2
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 D1 FF FF FF: call 0x5887c57d
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 7D 90 58: mov ecx, dword ptr [0x58907d30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 F9 FF: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

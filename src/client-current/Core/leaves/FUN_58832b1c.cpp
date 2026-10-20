// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832B1C .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58832b1c() {
    __asm {
        ; Exact mapped bytes 80 79 04 00: cmp byte ptr [ecx + 4], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x58832b31
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 83 78 18 00: cmp dword ptr [eax + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58832b31
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

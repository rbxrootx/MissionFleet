// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432726 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_00432726_00432726() {
    __asm {
        ; Exact mapped bytes 83 79 04 00: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0B: jle 0x432737
        __asm _emit 0x7e
        __asm _emit 0x0b
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 07: je 0x432737
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

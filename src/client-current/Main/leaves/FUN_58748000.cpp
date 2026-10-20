// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748000 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_58748000() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 80 79 2D 00: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2d
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x5874801a
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 80 79 2D 00: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2d
        __asm _emit 0x00
        ; Exact mapped bytes 74 F6: je 0x58748010
        __asm _emit 0x74
        __asm _emit 0xf6
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

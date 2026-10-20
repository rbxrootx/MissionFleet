// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58747FE0 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58747fe0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 80 79 2D 00: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2d
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x58747ffb
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 80 79 2D 00: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2d
        __asm _emit 0x00
        ; Exact mapped bytes 74 F5: je 0x58747ff0
        __asm _emit 0x74
        __asm _emit 0xf5
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

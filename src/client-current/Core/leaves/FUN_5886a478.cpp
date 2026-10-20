// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A478 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_5886a478() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 25 00 00 F0 7F: and eax, 0x7ff00000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 3D 00 00 F0 7F: cmp eax, 0x7ff00000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 74 01: je 0x5886a489
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431893 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_00431893_00431893() {
    __asm {
        ; Exact mapped bytes 8B 81 90 00 00 00: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x4318af
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 3D 02 E0 00 00: cmp eax, 0xe002
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x4318af
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 3D 01 E0 00 00: cmp eax, 0xe001
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 04: je 0x4318af
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

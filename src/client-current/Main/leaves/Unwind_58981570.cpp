// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981570 .. +0x1C bytes.
extern "C" __declspec(naked) void Unwind_58981570() {
    __asm {
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 83 E0 01: and eax, 1
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 0F 00 00 00: je 0x5898158b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 EC FE: and dword ptr [ebp - 0x14], 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xec
        __asm _emit 0xfe
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 58: add ecx, 0x58
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x58
        ; Exact mapped bytes E9 75 32 E4 FF: jmp 0x587c4800
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x32
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E437 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_0042e437_0042E437() {
    __asm {
        ; Exact mapped bytes 83 79 38 00: cmp dword ptr [ecx + 0x38], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x42e453
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x42e453
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes FF 92 8C 00 00 00: call dword ptr [edx + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

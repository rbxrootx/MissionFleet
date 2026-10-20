// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413C36 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00413c36_00413C36() {
    __asm {
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 40 4C: mov eax, dword ptr [eax + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x4c
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 74 05: je 0x413c48
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 61 28 00: and dword ptr [ecx + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes A8 02: test al, 2
        __asm _emit 0xa8
        __asm _emit 0x02
        ; Exact mapped bytes 74 04: je 0x413c50
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 28: mov dword ptr [ecx + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x28
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 83 A1 CC 00 00 00 00: and dword ptr [ecx + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

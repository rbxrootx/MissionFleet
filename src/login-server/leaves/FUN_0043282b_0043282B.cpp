// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043282B .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0043282b_0043282B() {
    __asm {
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 10: je 0x43283f
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 3B 4C 24 04: cmp ecx, dword ptr [esp + 4]
        __asm _emit 0x3b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 74 05: je 0x43283a
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 49 10: mov ecx, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x10
        ; Exact mapped bytes EB F1: jmp 0x43282b
        __asm _emit 0xeb
        __asm _emit 0xf1
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x432841
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

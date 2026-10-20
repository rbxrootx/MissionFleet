// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506DE0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58506de0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 38 00: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x58506dfa
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes E8 47 31 00 00: call 0x58509f40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

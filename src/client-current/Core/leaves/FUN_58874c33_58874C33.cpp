// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874C33 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58874c33_58874C33() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 3a4h
        ; Exact mapped bytes 74 28: je 0x58874c6a
        __asm _emit 0x74
        __asm _emit 0x28
        sub eax, 4
        ; Exact mapped bytes 74 1C: je 0x58874c63
        __asm _emit 0x74
        __asm _emit 0x1c
        sub eax, 0dh
        ; Exact mapped bytes 74 10: je 0x58874c5c
        __asm _emit 0x74
        __asm _emit 0x10
        sub eax, 1
        ; Exact mapped bytes 74 04: je 0x58874c55
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        ; Exact mapped bytes A1 DC 9D 8C 58: mov eax, dword ptr [0x588c9ddc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0x58
        pop ebp
        ret
        ; Exact mapped bytes A1 D8 9D 8C 58: mov eax, dword ptr [0x588c9dd8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0x58
        pop ebp
        ret
        ; Exact mapped bytes A1 D4 9D 8C 58: mov eax, dword ptr [0x588c9dd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0x58
        pop ebp
        ret
        ; Exact mapped bytes A1 D0 9D 8C 58: mov eax, dword ptr [0x588c9dd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0x58
        pop ebp
        ret
    }
}

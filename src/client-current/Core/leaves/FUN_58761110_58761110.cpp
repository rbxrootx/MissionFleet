// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761110 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58761110_58761110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1beh
        ; Exact mapped bytes 77 17: ja 0x5876113f
        __asm _emit 0x77
        __asm _emit 0x17
        cmp dword ptr [ebp - 4], 1beh
        ; Exact mapped bytes 74 19: je 0x5876114a
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 4], 27h
        ; Exact mapped bytes 74 13: je 0x5876114a
        __asm _emit 0x74
        __asm _emit 0x13
        cmp dword ptr [ebp - 4], 59h
        ; Exact mapped bytes 74 0D: je 0x5876114a
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes EB 0F: jmp 0x5876114e
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp dword ptr [ebp - 4], 20bh
        ; Exact mapped bytes 74 02: je 0x5876114a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 04: jmp 0x5876114e
        __asm _emit 0xeb
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58761150
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F76E0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_586f76e0_586F76E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 41h
        ; Exact mapped bytes 72 06: jb 0x586f76f3
        __asm _emit 0x72
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 5ah
        ; Exact mapped bytes 76 48: jbe 0x586f773b
        __asm _emit 0x76
        __asm _emit 0x48
        cmp dword ptr [ebp + 8], 10h
        ; Exact mapped bytes 74 42: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 74 3C: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp + 8], 20h
        ; Exact mapped bytes 74 36: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x36
        cmp dword ptr [ebp + 8], 0dch
        ; Exact mapped bytes 74 2D: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp + 8], 0bah
        ; Exact mapped bytes 74 24: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x24
        cmp dword ptr [ebp + 8], 0deh
        ; Exact mapped bytes 74 1B: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp + 8], 0bch
        ; Exact mapped bytes 74 12: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 0beh
        ; Exact mapped bytes 74 09: je 0x586f773b
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 0bfh
        ; Exact mapped bytes 75 07: jne 0x586f7742
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x586f7744
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752A10 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_58752a10_58752A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        movzx edx, word ptr [ecx + 35eh]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 139fh
        ; Exact mapped bytes 7F 3A: jg 0x58752a6c
        __asm _emit 0x7f
        __asm _emit 0x3a
        cmp dword ptr [ebp - 4], 139fh
        ; Exact mapped bytes 74 4E: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 4], 0bd2h
        ; Exact mapped bytes 7F 1D: jg 0x58752a61
        __asm _emit 0x7f
        __asm _emit 0x1d
        cmp dword ptr [ebp - 4], 0bd2h
        ; Exact mapped bytes 74 3C: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 4], 403h
        ; Exact mapped bytes 74 33: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 7d8h
        ; Exact mapped bytes 74 2A: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes EB 2F: jmp 0x58752a90
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp - 4], 0fb1h
        ; Exact mapped bytes 74 1F: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes EB 24: jmp 0x58752a90
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp - 4], 1787h
        ; Exact mapped bytes 74 14: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 4], 1b71h
        ; Exact mapped bytes 74 0B: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 4], 1f58h
        ; Exact mapped bytes 74 02: je 0x58752a89
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 07: jmp 0x58752a90
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x58752a92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

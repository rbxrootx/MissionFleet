// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FB59 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_5886fb59_5886FB59() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, 0deach
        cmp eax, ecx
        ; Exact mapped bytes 77 3D: ja 0x5886fba7
        __asm _emit 0x77
        __asm _emit 0x3d
        ; Exact mapped bytes 74 79: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x79
        mov ecx, 0c433h
        cmp eax, ecx
        ; Exact mapped bytes 77 1D: ja 0x5886fb92
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes 74 6E: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x6e
        sub eax, 2ah
        ; Exact mapped bytes 74 69: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x69
        sub eax, 0c402h
        ; Exact mapped bytes 74 62: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x62
        sub eax, 1
        ; Exact mapped bytes 74 5D: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x5d
        sub eax, 1
        ; Exact mapped bytes 74 58: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x58
        sub eax, 3
        ; Exact mapped bytes EB 47: jmp 0x5886fbd9
        __asm _emit 0xeb
        __asm _emit 0x47
        sub eax, 0c435h
        ; Exact mapped bytes 74 4C: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x4c
        sub eax, 1263h
        ; Exact mapped bytes 74 45: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x45
        sub eax, 812h
        ; Exact mapped bytes EB 2D: jmp 0x5886fbd4
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, 0deb1h
        cmp eax, ecx
        ; Exact mapped bytes 77 13: ja 0x5886fbc3
        __asm _emit 0x77
        __asm _emit 0x13
        ; Exact mapped bytes 74 33: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x33
        sub eax, 0deadh
        ; Exact mapped bytes 74 2C: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x2c
        sub eax, 1
        ; Exact mapped bytes 74 27: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x27
        sub eax, 1
        ; Exact mapped bytes EB 11: jmp 0x5886fbd4
        __asm _emit 0xeb
        __asm _emit 0x11
        sub eax, 0deb2h
        ; Exact mapped bytes 74 1B: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, 1
        ; Exact mapped bytes 74 16: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, 1f35h
        ; Exact mapped bytes 74 0F: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x0f
        sub eax, 1
        ; Exact mapped bytes 74 0A: je 0x5886fbe5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffff7fh
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}

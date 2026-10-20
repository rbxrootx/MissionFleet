// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D3E9 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_5887d3e9_5887D3E9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7C 5C: jl 0x5887d455
        __asm _emit 0x7c
        __asm _emit 0x5c
        cmp ecx, 0c00002b4h
        ; Exact mapped bytes 74 08: je 0x5887d409
        __asm _emit 0x74
        __asm _emit 0x08
        cmp ecx, 0c00002b5h
        ; Exact mapped bytes 75 4C: jne 0x5887d455
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 0F AE 5D FC: stmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 4]
        xor eax, 3fh
        test al, 81h
        ; Exact mapped bytes 74 42: je 0x5887d459
        __asm _emit 0x74
        __asm _emit 0x42
        test eax, 204h
        ; Exact mapped bytes 75 07: jne 0x5887d425
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0c000008eh
        leave
        ret
        test eax, 102h
        ; Exact mapped bytes 74 2D: je 0x5887d459
        __asm _emit 0x74
        __asm _emit 0x2d
        test eax, 408h
        ; Exact mapped bytes 75 07: jne 0x5887d43a
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0c0000091h
        leave
        ret
        test eax, 810h
        ; Exact mapped bytes 75 07: jne 0x5887d448
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 0c0000093h
        leave
        ret
        test eax, 1020h
        mov eax, 0c000008fh
        cmove ecx, eax
        mov eax, ecx
        leave
        ret
        mov eax, 0c0000090h
        leave
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752860 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_58752860_58752860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, 4
        imul ecx, eax, 1fh
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 30h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x58752940
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 2eh
        ; Exact mapped bytes 75 10: jne 0x587528a1
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 6]
        cmp ecx, 1
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x58752931
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2]
        cmp eax, 2fh
        ; Exact mapped bytes 75 0C: jne 0x587528b9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 6]
        cmp edx, 2
        ; Exact mapped bytes 74 78: je 0x58752931
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 30h
        ; Exact mapped bytes 75 0C: jne 0x587528d1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 6]
        cmp eax, 3
        ; Exact mapped bytes 74 60: je 0x58752931
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 31h
        ; Exact mapped bytes 75 0C: jne 0x587528e9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 6]
        cmp ecx, 4
        ; Exact mapped bytes 74 48: je 0x58752931
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2]
        cmp eax, 42h
        ; Exact mapped bytes 75 0C: jne 0x58752901
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 6]
        cmp edx, 5
        ; Exact mapped bytes 74 30: je 0x58752931
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 59h
        ; Exact mapped bytes 75 0C: jne 0x58752919
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 6]
        cmp eax, 6
        ; Exact mapped bytes 74 18: je 0x58752931
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 2]
        cmp edx, 6bh
        ; Exact mapped bytes 75 15: jne 0x5875293a
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 6]
        cmp ecx, 7
        ; Exact mapped bytes 75 09: jne 0x5875293a
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x58752942
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB 04: jmp 0x5875293e
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 04: jmp 0x58752942
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x58752942
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
    }
}

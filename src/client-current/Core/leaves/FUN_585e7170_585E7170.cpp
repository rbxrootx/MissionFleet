// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7170 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_585e7170_585E7170() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20f34h], 0
        ; Exact mapped bytes 74 1E: je 0x585e71a1
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x585e722b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 9
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x585e722b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1ch
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x585e722b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 39: jne 0x585e71e0
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 10688h]
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x585e71b7
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 74: jmp 0x585e722b
        __asm _emit 0xeb
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, dword ptr [ebp + 0ch]
        xor ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 1fh
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 10688h], al
        ; Exact mapped bytes EB 4B: jmp 0x585e722b
        __asm _emit 0xeb
        __asm _emit 0x4b
        cmp dword ptr [ebp + 10h], 40000000h
        ; Exact mapped bytes 75 42: jne 0x585e722b
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 598h]
        and eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 31: je 0x585e722b
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 10688h]
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x585e720a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x585e722b
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 598h]
        or ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 598h], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 10688h], cl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

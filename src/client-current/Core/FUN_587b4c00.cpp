// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4C00 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_587b4c00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 16: je 0x587b4c28
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7D 05: jge 0x587b4c1f
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x587b4cd1
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 04 00 00: call 0x587b50a0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 75 0E: jne 0x587b4c3f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 3ch], ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x587b4cc8
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        cmp ecx, eax
        ; Exact mapped bytes 7F 38: jg 0x587b4c8c
        __asm _emit 0x7f
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 74 1F: je 0x587b4c8a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        cmp ecx, eax
        ; Exact mapped bytes 7E 02: jle 0x587b4c7f
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x587b4c8a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB D6: jmp 0x587b4c60
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes EB 12: jmp 0x587b4c9e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 3ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ecx + 34h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 30h], eax
        mov esp, ebp
        pop ebp
        ret 4
    }
}

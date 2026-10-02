// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4CE0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_587b4ce0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 74 09: je 0x587b4cfb
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 36 04 00 00: call 0x587b5130
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 75 0E: jne 0x587b4d12
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4ch], eax
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x587b4d9b
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 4], edx
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
        ; Exact mapped bytes 7E 44: jle 0x587b4d71
        __asm _emit 0x7e
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0B: jne 0x587b4d43
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4ch], ecx
        ; Exact mapped bytes EB 18: jmp 0x587b4d5b
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 44h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 44h], edx
        ; Exact mapped bytes EB 2C: jmp 0x587b4d9b
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes EB 28: jmp 0x587b4d99
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 75 16: jne 0x587b4d90
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 48h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x587b4d9b
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes EB 09: jmp 0x587b4d99
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 80: jmp 0x587b4d1b
        __asm _emit 0xeb
        __asm _emit 0x80
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 40h], edx
        mov esp, ebp
    }
}

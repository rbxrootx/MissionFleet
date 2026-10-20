// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004709C0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004709c0_004709C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        cmp eax, 100h
        ; Exact mapped bytes 77 17: ja 0x4709ea
        __asm _emit 0x77
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 C0 DE 67 00: mov edx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x470a73
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 8
        and ecx, 0ffh
        and ecx, 0ffh
        ; Exact mapped bytes 8B 15 C0 DE 67 00: mov edx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x470a33
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 8
        and ecx, 0ffh
        mov byte ptr [ebp - 0ch], cl
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 0bh], dl
        mov byte ptr [ebp - 0ah], 0
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 11: jmp 0x470a44
        __asm _emit 0xeb
        __asm _emit 0x11
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 0ch], al
        mov byte ptr [ebp - 0bh], 0
        mov dword ptr [ebp - 8], 1
        push 1
        push 0
        push 0
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 1
        ; Exact mapped bytes E8 43 5F 00 00: call 0x4769a0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x470a68
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x470a73
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        and eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}

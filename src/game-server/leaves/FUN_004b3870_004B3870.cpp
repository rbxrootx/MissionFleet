// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3870 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004b3870_004B3870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        cmp eax, 100h
        ; Exact mapped bytes 77 17: ja 0x4b389a
        __asm _emit 0x77
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 7C 16 5D 00: mov edx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x4b3923
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 8
        and ecx, 0ffh
        and ecx, 0ffh
        ; Exact mapped bytes 8B 15 7C 16 5D 00: mov edx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 4A: mov ax, word ptr [edx + ecx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x4a
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4b38e3
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
        ; Exact mapped bytes EB 11: jmp 0x4b38f4
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
        ; Exact mapped bytes E8 53 6C 00 00: call 0x4ba560
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4b3918
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x4b3923
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

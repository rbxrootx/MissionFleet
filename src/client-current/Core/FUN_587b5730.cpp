// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5730 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_587b5730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F 9D CE FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9d
        __asm _emit 0xce
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x587b579b
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 0D: shr ax, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x587b5783
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E FB FF FF: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 02: jne 0x587b5799
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x587b579b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BF: jmp 0x587b575a
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov esp, ebp
        pop ebp
        ret 4
    }
}

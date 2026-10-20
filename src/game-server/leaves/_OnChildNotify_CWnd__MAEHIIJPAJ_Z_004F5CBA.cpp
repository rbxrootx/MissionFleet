// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5CBA .. +0x7D bytes.
extern "C" __declspec(naked) void _OnChildNotify_CWnd__MAEHIIJPAJ_Z_004F5CBA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 4D: je 0x4f5d19
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 2000h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 5E 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x5e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 132h
        ; Exact mapped bytes 72 13: jb 0x4f5d04
        __asm _emit 0x72
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], 138h
        ; Exact mapped bytes 77 0A: ja 0x4f5d04
        __asm _emit 0x77
        __asm _emit 0x0a
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4f5d04
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x4f5d31
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 08: je 0x4f5d12
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, 1
        ; Exact mapped bytes EB 18: jmp 0x4f5d31
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 00 00 00: call 0x4f5d37
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

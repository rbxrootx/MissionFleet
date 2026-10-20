// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB9E0 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_004bb9e0_004BB9E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes 83 3D 14 F0 5D 00 00: cmp dword ptr [0x5df014], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x4bba0c
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 61h
        ; Exact mapped bytes 7C 0F: jl 0x4bba04
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp + 8], 7ah
        ; Exact mapped bytes 7F 09: jg 0x4bba04
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 20h
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x4bbb07
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 100h
        ; Exact mapped bytes 7D 3E: jge 0x4bba53
        __asm _emit 0x7d
        __asm _emit 0x3e
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x4bba31
        __asm _emit 0x7e
        __asm _emit 0x13
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 47 7E FF FF: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 14: jmp 0x4bba45
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 7C 16 5D 00: mov eax, dword ptr [0x5d167c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 2
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 08: jne 0x4bba53
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x4bbb07
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sar edx, 8
        and edx, 0ffh
        and edx, 0ffh
        ; Exact mapped bytes A1 7C 16 5D 00: mov eax, dword ptr [0x5d167c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x4bba9c
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        sar edx, 8
        and edx, 0ffh
        mov byte ptr [ebp - 8], dl
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 7], al
        mov byte ptr [ebp - 6], 0
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 11: jmp 0x4bbaad
        __asm _emit 0xeb
        __asm _emit 0x11
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 8], cl
        mov byte ptr [ebp - 7], 0
        mov dword ptr [ebp - 4], 1
        push 1
        push 0
        push 3
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        push 200h
        ; Exact mapped bytes 8B 15 14 F0 5D 00: mov edx, dword ptr [0x5df014]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 00 E6 FF FF: call 0x4ba0d0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x4bbae1
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 26: jmp 0x4bbb07
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 75 0A: jne 0x4bbaf1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffh
        ; Exact mapped bytes EB 16: jmp 0x4bbb07
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 0bh]
        and ecx, 0ffh
        shl ecx, 8
        or eax, ecx
        mov esp, ebp
        pop ebp
        ret
    }
}

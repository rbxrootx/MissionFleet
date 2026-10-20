// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C0E0 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_0047c0e0_0047C0E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes 83 3D 40 75 68 00 00: cmp dword ptr [0x687540], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x47c10c
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 41h
        ; Exact mapped bytes 7C 0F: jl 0x47c104
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp dword ptr [ebp + 8], 5ah
        ; Exact mapped bytes 7F 09: jg 0x47c104
        __asm _emit 0x7f
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 20h
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x47c207
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 100h
        ; Exact mapped bytes 7D 3E: jge 0x47c153
        __asm _emit 0x7d
        __asm _emit 0x3e
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x47c131
        __asm _emit 0x7e
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 97 48 FF FF: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 14: jmp 0x47c145
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 C0 DE 67 00: mov eax, dword ptr [0x67dec0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 08: jne 0x47c153
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x47c207
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        sar edx, 8
        and edx, 0ffh
        and edx, 0ffh
        ; Exact mapped bytes A1 C0 DE 67 00: mov eax, dword ptr [0x67dec0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x47c19c
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
        ; Exact mapped bytes EB 11: jmp 0x47c1ad
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
        push 100h
        ; Exact mapped bytes 8B 15 40 75 68 00: mov edx, dword ptr [0x687540]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 10 9D FF FF: call 0x475ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x47c1e1
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 26: jmp 0x47c207
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 75 0A: jne 0x47c1f1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffh
        ; Exact mapped bytes EB 16: jmp 0x47c207
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

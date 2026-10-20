// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C94B .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_0047c94b_0047C94B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 AD FC FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x47c98d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x47ca43
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        add ecx, 6ch
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        and dl, 0fh
        and edx, 0ffh
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 7
        ; Exact mapped bytes 74 15: je 0x47c9e8
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 1F 00: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x1f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 6
        ; Exact mapped bytes 75 26: jne 0x47ca0e
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 7]
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 6]
        add edx, ecx
        mov dword ptr [ebp - 10h], edx
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0ah
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 7C 04: jl 0x47ca0c
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x47ca43
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes EB 30: jmp 0x47ca3e
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 8
        ; Exact mapped bytes 75 1A: jne 0x47ca3e
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 3
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7C 04: jl 0x47ca3e
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47ca43
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 93 BD 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9530 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_004a9530_004A9530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 17: jle 0x4a9556
        __asm _emit 0x7e
        __asm _emit 0x17
        push 8
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 22 A3 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 19: jmp 0x4a956f
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x4a9580
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB B6: jmp 0x4a9536
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 4], 2dh
        ; Exact mapped bytes 74 06: je 0x4a95a5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 2bh
        ; Exact mapped bytes 75 13: jne 0x4a95b8
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x4a95db
        __asm _emit 0x7e
        __asm _emit 0x13
        push 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 9D A2 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 15: jmp 0x4a95f0
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 4
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x4a961b
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [eax + ecx - 30h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB A4: jmp 0x4a95bf
        __asm _emit 0xeb
        __asm _emit 0xa4
        cmp dword ptr [ebp - 0ch], 2dh
        ; Exact mapped bytes 75 07: jne 0x4a9628
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 8]
        neg eax
        ; Exact mapped bytes EB 03: jmp 0x4a962b
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}

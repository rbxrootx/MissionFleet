// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9650 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_004a9650_004A9650() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 17: jle 0x4a9677
        __asm _emit 0x7e
        __asm _emit 0x17
        push 8
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 01 A2 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 19: jmp 0x4a9690
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
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0B: je 0x4a96a1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB B6: jmp 0x4a9657
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
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 4], 2dh
        ; Exact mapped bytes 74 06: je 0x4a96c6
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 2bh
        ; Exact mapped bytes 75 13: jne 0x4a96d9
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x4a9703
        __asm _emit 0x7e
        __asm _emit 0x13
        push 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 75 A1 00 00: call 0x4b3870
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 15: jmp 0x4a9718
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
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3B: je 0x4a9759
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0ah
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D1 2C 00 00: call 0x4ac400
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov esi, edx
        mov eax, dword ptr [ebp - 4]
        sub eax, 30h
        cdq
        add ecx, eax
        adc esi, edx
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], esi
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 8E: jmp 0x4a96e7
        __asm _emit 0xeb
        __asm _emit 0x8e
        cmp dword ptr [ebp - 10h], 2dh
        ; Exact mapped bytes 75 0F: jne 0x4a976e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        neg eax
        mov edx, dword ptr [ebp - 8]
        adc edx, 0
        neg edx
        ; Exact mapped bytes EB 06: jmp 0x4a9774
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

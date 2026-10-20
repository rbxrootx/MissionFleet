// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004660F0 .. +0x129 bytes.
extern "C" __declspec(naked) void FUN_004660f0_004660F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 17: jle 0x466117
        __asm _emit 0x7e
        __asm _emit 0x17
        push 8
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        push ecx
        ; Exact mapped bytes E8 B1 A8 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 19: jmp 0x466130
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
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
        ; Exact mapped bytes 74 0B: je 0x466141
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB B6: jmp 0x4660f7
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
        ; Exact mapped bytes 74 06: je 0x466166
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 2bh
        ; Exact mapped bytes 75 13: jne 0x466179
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
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 13: jle 0x4661a3
        __asm _emit 0x7e
        __asm _emit 0x13
        push 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 25 A8 00 00: call 0x4709c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 15: jmp 0x4661b8
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 0D C0 DE 67 00: mov ecx, dword ptr [0x67dec0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
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
        ; Exact mapped bytes 74 3B: je 0x4661f9
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push 0ah
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 B1 A8 00 00: call 0x470a80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa8
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
        ; Exact mapped bytes EB 8E: jmp 0x466187
        __asm _emit 0xeb
        __asm _emit 0x8e
        cmp dword ptr [ebp - 10h], 2dh
        ; Exact mapped bytes 75 0F: jne 0x46620e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        neg eax
        mov edx, dword ptr [ebp - 8]
        adc edx, 0
        neg edx
        ; Exact mapped bytes EB 06: jmp 0x466214
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

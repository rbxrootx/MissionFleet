// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423E20 .. +0x175 bytes.
extern "C" __declspec(naked) void FUN_00423e20_00423E20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x423e53
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x423f7d
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 75 30: jne 0x423e93
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8001000fh
        ; Exact mapped bytes 74 02: je 0x423e77
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 17: jmp 0x423e8e
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 94 62 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x423f7d
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8002h
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x423f7d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 80020010h
        ; Exact mapped bytes 74 12: je 0x423ecc
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 10h], 80020efdh
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x423f5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x423f7d
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 10h], 0d8h
        ; Exact mapped bytes 74 1F: je 0x423ef7
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 62 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x423f7d
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 20060100h
        ; Exact mapped bytes 74 1C: je 0x423f25
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 61 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x423f7d
        __asm _emit 0xeb
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 170h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A DA FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 04 D5 FD FF: call 0x401447
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x423f5d
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 DA FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0A D3 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 1E: jmp 0x423f7d
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 16ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 168h], eax
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 61 0E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

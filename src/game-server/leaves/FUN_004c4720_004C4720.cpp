// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C4720 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_004c4720_004C4720() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 27: je 0x4c4756
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 83 3D 88 18 5D 00 02: cmp dword ptr [0x5d1888], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 1E: je 0x4c4756
        __asm _emit 0x74
        __asm _emit 0x1e
        push 58d508h
        push 0
        push 4fh
        push 58d4fch
        push 2
        ; Exact mapped bytes E8 E3 C3 FE FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4c4756
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CA: jne 0x4c4726
        __asm _emit 0x75
        __asm _emit 0xca
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4c4768
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x4c476f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x4c4879
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 15: jne 0x4c478e
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x4c4787
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x4c4879
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 F0 5D 00 00: cmp dword ptr [0x5df014], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x4c47b4
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x4c47aa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 0F B6 11: movzx dx, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        mov eax, 1
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x4c4879
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
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
        ; Exact mapped bytes 74 6D: je 0x4c483d
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 83 3D 88 18 5D 00 01: cmp dword ptr [0x5d1888], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 37: jle 0x4c4810
        __asm _emit 0x7e
        __asm _emit 0x37
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 3B 15 88 18 5D 00: cmp edx, dword ptr [0x5d1888]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7C 2C: jl 0x4c4810
        __asm _emit 0x7c
        __asm _emit 0x2c
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        setne al
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 88 18 5D 00: mov edx, dword ptr [0x5d1888]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 9
        ; Exact mapped bytes 8B 0D 24 F0 5D 00: mov ecx, dword ptr [0x5df024]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4c4836
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 3B 15 88 18 5D 00: cmp edx, dword ptr [0x5d1888]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 72 0B: jb 0x4c4826
        __asm _emit 0x72
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 48 01: movsx ecx, byte ptr [eax + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x01
        test ecx, ecx
        ; Exact mapped bytes 75 10: jne 0x4c4836
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 45 CA FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 43: jmp 0x4c4879
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes A1 88 18 5D 00: mov eax, dword ptr [0x5d1888]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x4c4879
        __asm _emit 0xeb
        __asm _emit 0x3c
        xor edx, edx
        cmp dword ptr [ebp + 8], 0
        setne dl
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 9
        ; Exact mapped bytes 8B 15 24 F0 5D 00: mov edx, dword ptr [0x5df024]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x4c4874
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 07 CA FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 05: jmp 0x4c4879
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

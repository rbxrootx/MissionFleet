// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B6B20 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_585b6b20_585B6B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x585b6b45
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes A1 F8 1F 96 58: mov eax, dword ptr [0x58961ff8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 58 0D 00 00: mov dx, word ptr [ecx + 0xd58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x58
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 87 97 00 00 00: ja 0x585b6bfa
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 6C 6C 5B 58: jmp dword ptr [ecx*4 + 0x585b6c6c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x6c
        __asm _emit 0x5b
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x585b6c06
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 7A: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 6C: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 5E: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 50: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 3F: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 2E: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 1D: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [edx + 68h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x585b6c06
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [edx + 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        ; Exact mapped bytes A3 F8 1F 96 58: mov dword ptr [0x58961ff8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [edx + 58947974h], 0
        ; Exact mapped bytes 74 43: je 0x585b6c65
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes A1 64 20 96 58: mov eax, dword ptr [0x58962064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

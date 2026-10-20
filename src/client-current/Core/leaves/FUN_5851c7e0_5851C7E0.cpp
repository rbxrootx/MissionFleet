// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851C7E0 .. +0x1B8 bytes.
extern "C" __declspec(naked) void FUN_5851c7e0_5851C7E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888143ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 81 29 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x81
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588a3f58h
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851c84b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 0F 8D E7 00 00 00: jge 0x5851c93c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 A8 47 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x47
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 3D: je 0x5851c8a9
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        push 3dh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 82 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        movzx ecx, word ptr [ebp - 0eh]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6C 9F F6 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851c8b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + ecx*4 + 50h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        mov dword ptr [ebp - 2ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CF 8C 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 48 8C 29 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8c
        __asm _emit 0x29
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 31 95 F6 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 7A 94 F6 FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x94
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + ecx*4 + 80h], 0
        ; Exact mapped bytes E9 06 FF FF FF: jmp 0x5851c842
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 94h], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 9ch], 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a4h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

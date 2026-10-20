// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8AC0 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_004f8ac0_004F8AC0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d6a9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 90 67 FD FF: call 0x4cf277
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 88h
        ; Exact mapped bytes E8 52 93 03 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 90h
        ; Exact mapped bytes E8 BD 96 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 AF 96 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 A1 96 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 637f6ch
        push 88h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes E8 7E CD F6 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcd
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 67: jne 0x4f8bb5
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 6
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 6
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 09: jne 0x4f8b9c
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 11: je 0x4f8bad
        __asm _emit 0x74
        __asm _emit 0x11
        push 4eh
        push 674fe8h
        ; Exact mapped bytes E8 98 01 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8bad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4f8b8a
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes EB 50: jmp 0x4f8c05
        __asm _emit 0xeb
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 7
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 7
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 2
        push 5
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x4f8c1f
        __asm _emit 0x75
        __asm _emit 0x0d
        push 6
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 12: je 0x4f8c31
        __asm _emit 0x74
        __asm _emit 0x12
        push 674ff8h
        push 675028h
        ; Exact mapped bytes E8 E7 79 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

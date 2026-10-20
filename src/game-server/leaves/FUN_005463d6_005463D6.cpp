// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005463D6 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_005463d6_005463D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 3C 8C 5C 00 FF: cmp dword ptr [0x5c8c3c], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 0A: je 0x5463f2
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 3C 8C 5C 00: mov eax, dword ptr [0x5c8c3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x5464e9
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x546417
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bah
        push 5c8c2ch
        ; Exact mapped bytes E8 EE E5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546417
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5463fd
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c8c6ch
        push 0
        push 0
        push 0
        push 0
        push 2
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 48h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 98 21 5E 00: call dword ptr [0x5e2198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x546466
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 5c8c3ch
        push 36h
        push 36h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 90 1F 5E 00: call dword ptr [0x5e1f90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x546491
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bfh
        push 5c8c2ch
        ; Exact mapped bytes E8 74 E5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546491
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x546466
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x5464b5
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 E4 20 5E 00: call dword ptr [0x5e20e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 3C 8C 5C 00 FF: cmp dword ptr [0x5c8c3c], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x5464de
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c6h
        push 5c8c2ch
        ; Exact mapped bytes E8 27 E5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5464de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5464c1
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes A1 3C 8C 5C 00: mov eax, dword ptr [0x5c8c3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

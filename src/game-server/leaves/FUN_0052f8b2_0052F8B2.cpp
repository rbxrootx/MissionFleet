// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052F8B2 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_0052f8b2_0052F8B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x52f8d6
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 95 5F FC FF: call 0x4f5869
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 71: jmp 0x52f947
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 F5 FB FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x52f90c
        __asm _emit 0x74
        __asm _emit 0x1e
        push 21h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 90 28 5E 00: call dword ptr [0x5e2890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x52f928
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 6
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 90 28 5E 00: call dword ptr [0x5e2890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 0c00000h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x52f947
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 2B 0D 3C EC 5D 00: sub ecx, dword ptr [0x5dec3c]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

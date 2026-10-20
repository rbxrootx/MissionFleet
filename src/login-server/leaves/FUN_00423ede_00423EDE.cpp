// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423EDE .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_00423ede_00423EDE() {
    __asm {
        ; Exact mapped bytes 83 3D 28 B0 44 00 FF: cmp dword ptr [0x44b028], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0xff
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes 75 07: jne 0x423ef2
        __asm _emit 0x75
        __asm _emit 0x07
        mov esi, 44b018h
        ; Exact mapped bytes EB 1D: jmp 0x423f0f
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 2020h
        push 0
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 28 C1 43 00: call dword ptr [0x43c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x42401b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 80 C1 43 00: mov ebp, dword ptr [0x43c180]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 4
        push 2000h
        push 400000h
        push 0
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x424004
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ebx, 10000h
        push 1000h
        push ebx
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x423ff6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 44b018h
        cmp esi, eax
        ; Exact mapped bytes 75 1E: jne 0x423f6e
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 83 3D 18 B0 44 00 00: cmp dword ptr [0x44b018], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x423f5e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes A3 18 B0 44 00: mov dword ptr [0x44b018], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C B0 44 00 00: cmp dword ptr [0x44b01c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x423f83
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes A3 1C B0 44 00: mov dword ptr [0x44b01c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x423f83
        __asm _emit 0xeb
        __asm _emit 0x15
        mov dword ptr [esi], eax
        ; Exact mapped bytes A1 1C B0 44 00: mov eax, dword ptr [0x44b01c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 89 35 1C B0 44 00: mov dword ptr [0x44b01c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov dword ptr [eax], esi
        lea eax, [edi + 400000h]
        lea ecx, [esi + 98h]
        mov dword ptr [esi + 14h], eax
        lea eax, [esi + 18h]
        mov dword ptr [esi + 0ch], ecx
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 8], eax
        xor ebp, ebp
        mov ecx, 0f1h
        xor edx, edx
        cmp ebp, 10h
        setge dl
        dec edx
        and edx, ecx
        dec edx
        inc ebp
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
        add eax, 8
        cmp ebp, 400h
        ; Exact mapped bytes 7C E3: jl 0x423fa5
        __asm _emit 0x7c
        __asm _emit 0xe3
        push ebx
        push 0
        push edi
        ; Exact mapped bytes E8 15 AB FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [esi + 10h]
        add eax, ebx
        cmp edi, eax
        ; Exact mapped bytes 73 1B: jae 0x423ff2
        __asm _emit 0x73
        __asm _emit 0x1b
        or byte ptr [edi + 0f8h], 0ffh
        lea eax, [edi + 8]
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], 0f0h
        add edi, 1000h
        ; Exact mapped bytes EB DC: jmp 0x423fce
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, esi
        ; Exact mapped bytes EB 27: jmp 0x42401d
        __asm _emit 0xeb
        __asm _emit 0x27
        push 8000h
        push 0
        push edi
        ; Exact mapped bytes FF 15 A4 C2 43 00: call dword ptr [0x43c2a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp esi, 44b018h
        ; Exact mapped bytes 74 0F: je 0x42401b
        __asm _emit 0x74
        __asm _emit 0x0f
        push esi
        push 0
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C1 43 00: call dword ptr [0x43c12c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

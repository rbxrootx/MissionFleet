// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F40B .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_0055f40b_0055F40B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f152h
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3A D3 FF FF: call 0x55c76d
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 88h
        ; Exact mapped bytes E8 B8 DA FF FF: call 0x55cf04
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 63c068h
        push 411h
        push 67b3b8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F8 AD F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 13: je 0x55f481
        __asm _emit 0x74
        __asm _emit 0x13
        push 413h
        push 67b3b8h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 DF AD F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        push 28h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 2F 64 F0 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x64
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], 28h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 64h], edx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x55f4c8
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 E8 F5 F6 FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55f4c8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 64h]
        or ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 55c710h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 7808h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x55f4ff
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes EB 0D: jmp 0x55f50c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 88h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], eax
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

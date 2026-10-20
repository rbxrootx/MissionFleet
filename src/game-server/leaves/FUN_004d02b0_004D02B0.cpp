// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D02B0 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_004d02b0_004D02B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d7b8h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2C 37 06 00: call 0x533a06
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 18 0C 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 584bd4h
        push 4ch
        push 0
        mov edx, dword ptr [ebp - 14h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 64 90 FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 0f0h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 1f4h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp + 8]
        neg edx
        sbb edx, edx
        add edx, 7005h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 3ch], edx
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 5ch], 4ch
        mov edx, dword ptr [ebp - 14h]
        add edx, 0f0h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 78h], edx
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 7ch], 104h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0b0h
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 84h], 40h
        mov ecx, dword ptr [ebp + 14h]
        or ecx, 20h
        or ecx, 800000h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 90h]
        or eax, ecx
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x4d03e3
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes E8 A2 07 02 00: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d03e3
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 90h]
        or al, 10h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x4d040e
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 90h]
        or eax, 80000h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes E8 3A 51 06 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 64h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0a0h], 4cfec0h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x4d043a
        __asm _emit 0x74
        __asm _emit 0x19
        push 104h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 0f0h
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 61: je 0x4d04a1
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 AB D6 01 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 96 DB 01 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 7ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 70 CB FB FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x4d048d
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB D8: jmp 0x4d0465
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 0F 0B 06 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 68h], eax
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

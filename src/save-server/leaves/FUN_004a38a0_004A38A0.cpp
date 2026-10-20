// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A38A0 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_004a38a0_004A38A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d318h
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
        ; Exact mapped bytes E8 05 3F 08 00: call 0x5277cf
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 28 14 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 63779ch
        push 4ch
        push 0
        mov edx, dword ptr [ebp - 14h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 C4 1F FC FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1f
        __asm _emit 0xfc
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
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x4a39d3
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes E8 E2 B0 02 00: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a39d3
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 90h]
        or al, 10h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x4a39fe
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 90h]
        or eax, 80000h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes E8 BA E0 08 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 64h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0a0h], 4a34d0h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 19: je 0x4a3a2a
        __asm _emit 0x74
        __asm _emit 0x19
        push 104h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 0f0h
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 61: je 0x4a3a91
        __asm _emit 0x74
        __asm _emit 0x61
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 5B 91 02 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 46 96 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 7ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 10 5C FA FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x4a3a7d
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB D8: jmp 0x4a3a55
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 1F 13 08 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x13
        __asm _emit 0x08
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

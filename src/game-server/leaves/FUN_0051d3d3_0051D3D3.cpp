// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D3D3 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_0051d3d3_0051D3D3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 0
        push 0fh
        push 0fh
        push 0
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x51d41a
        __asm _emit 0x74
        __asm _emit 0x25
        push 0fh
        push 0fh
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 6C 25 5E 00: call dword ptr [0x5e256c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51d40e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x51d52f
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 88 25 5E 00: call dword ptr [0x5e2588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB C5: jmp 0x51d3df
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 68h]
        mov dword ptr [edx + 70h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [edx + 64h]
        and eax, 0f000h
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 78h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x51d45a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a3h
        push 5cb704h
        ; Exact mapped bytes E8 AB 75 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d45a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x51d43d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        ; Exact mapped bytes E8 E0 8B 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 14: je 0x51d4c0
        __asm _emit 0x74
        __asm _emit 0x14
        push 1abh
        push 5cb704h
        ; Exact mapped bytes E8 45 75 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d4c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x51d4a0
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E8 79 F6 01 00: call 0x53cb44
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB F3 01 00: call 0x53c891
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x51d4f4
        __asm _emit 0x74
        __asm _emit 0x1a
        push 403h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A F3 01 00: call 0x53c833
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 84h], eax
        ; Exact mapped bytes EB 15: jmp 0x51d509
        __asm _emit 0xeb
        __asm _emit 0x15
        push 3
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 F3 01 00: call 0x53c833
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x51d529
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b1h
        push 5cb704h
        ; Exact mapped bytes E8 DC 74 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d529
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x51d509
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

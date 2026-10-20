// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D58E .. +0x248 bytes.
extern "C" __declspec(naked) void FUN_0051d58e_0051D58E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x51d5ba
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c7h
        push 5cb704h
        ; Exact mapped bytes E8 4B 74 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d5ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x51d59a
        __asm _emit 0x75
        __asm _emit 0xda
        push 1
        push 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 74 80 01 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7D 87 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 64 21 5E 00: call dword ptr [0x5e2164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A0 94 01 00: call 0x536a82
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E8 32 51 00 00: call 0x52271c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 0a000h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x51d625
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 38h]
        add edx, 28h
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x51d6e6
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 74h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x51d656
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 38h
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x51d6e6
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        push 21h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 78h]
        and edx, 0a000h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x51d68b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 19: je 0x51d6a4
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 78h]
        and edx, 5000h
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x51d6c3
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 1F: je 0x51d6c3
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 48h
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1D: jmp 0x51d6e0
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 58h
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x51d6f9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x51d72d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 0a000h
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x51d721
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 74h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x51d72d
        __asm _emit 0x74
        __asm _emit 0x0c
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 89 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 08: je 0x51d73e
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 06: jmp 0x51d744
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        add edx, 0ch
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 1C 50 00 00: call 0x5227ac
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        add eax, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [ebp - 24h]
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 20h]
        sete cl
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [edx + 24h], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

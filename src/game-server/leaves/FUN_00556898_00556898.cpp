// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556898 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_00556898_00556898() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        push 663h
        push 5cfa08h
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes E8 A9 48 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 92 95 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x95
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5568dc
        __asm _emit 0x75
        __asm _emit 0x14
        push 664h
        push 5cfa08h
        ; Exact mapped bytes E8 29 E1 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5568dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5568b7
        __asm _emit 0x75
        __asm _emit 0xd5
        push 665h
        push 5cfa08h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6B 48 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x48
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 09: je 0x556907
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 54h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 75 07: jne 0x55690e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x556a71
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 09: jne 0x55691d
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 17 FE FF: call 0x5380ab
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 17 FE FF: call 0x538125
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 32 14 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D 0F FE FF: call 0x537944
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5569cc
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 15: je 0x5569cc
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push -1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 24h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3D: je 0x556a47
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp - 0ch], 80040007h
        ; Exact mapped bytes 75 34: jne 0x556a47
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        push 0
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 0
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 24h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x556a5a
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 0ch], 80040007h
        ; Exact mapped bytes 75 04: jne 0x556a5a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x556a71
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525DBB .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_00525dbb_00525DBB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 9B 35 F8 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 80h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x525dfd
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes E8 4B F7 00 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 4ef8f0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 523080h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 52: je 0x525e7b
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 45 4D FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525e53
        __asm _emit 0x75
        __asm _emit 0x14
        push 536h
        push 5c8174h
        ; Exact mapped bytes E8 B2 EB 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525e53
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x525e29
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 43 B1 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        or al, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 30: je 0x525eb1
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8ch
        ; Exact mapped bytes E8 ED 4C FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525eab
        __asm _emit 0x75
        __asm _emit 0x14
        push 53bh
        push 5c8174h
        ; Exact mapped bytes E8 5A EB 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525eab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x525e81
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 30: je 0x525ee7
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 90h
        ; Exact mapped bytes E8 B7 4C FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525ee1
        __asm _emit 0x75
        __asm _emit 0x14
        push 53dh
        push 5c8174h
        ; Exact mapped bytes E8 24 EB 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525ee1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x525eb7
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes E8 81 AC FC FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x525eff
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], ecx
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x525f22
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [eax + 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

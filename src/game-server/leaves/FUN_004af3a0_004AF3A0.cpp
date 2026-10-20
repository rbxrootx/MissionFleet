// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AF3A0 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_004af3a0_004AF3A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 0A: jne 0x4af3b6
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes A1 F8 13 5D 00: mov eax, dword ptr [0x5d13f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x4af3bc
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        push 5df110h
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C F1 5D 00 00: cmp dword ptr [0x5df10c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x4af3fa
        __asm _emit 0x74
        __asm _emit 0x1e
        push 5df110h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 13h
        ; Exact mapped bytes E8 02 5E 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x4af401
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 86 E7 00 00 00: jbe 0x4af4f2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 14h], dl
        cmp byte ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x4af421
        __asm _emit 0x74
        __asm _emit 0x08
        cmp byte ptr [ebp - 14h], 25h
        ; Exact mapped bytes 74 07: je 0x4af426
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes EB 5F: jmp 0x4af480
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x4af4f2
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes C7 05 74 02 5E 00 00 00 00 00: mov dword ptr [0x5e0274], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 23h
        ; Exact mapped bytes 75 13: jne 0x4af457
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes C7 05 74 02 5E 00 01 00 00 00: mov dword ptr [0x5e0274], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        add eax, 1
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 BE 00 00 00: call 0x4af530
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes EB 6D: jmp 0x4af4ed
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        mov al, byte ptr [edx]
        ; Exact mapped bytes 8B 0D 7C 16 5D 00: mov ecx, dword ptr [0x5d167c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x4af4c8
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 76 25: jbe 0x4af4c8
        __asm _emit 0x76
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x4af401
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x4af504
        __asm _emit 0x74
        __asm _emit 0x0c
        push 13h
        ; Exact mapped bytes E8 91 5D 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 0B: jmp 0x4af50f
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 5df110h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 76 0E: jbe 0x4af523
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x4af525
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

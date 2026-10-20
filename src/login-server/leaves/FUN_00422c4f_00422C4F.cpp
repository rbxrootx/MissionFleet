// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422C4F .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_00422c4f_00422C4F() {
    __asm {
        push ecx
        push ecx
        ; Exact mapped bytes A1 64 FE 44 00: mov eax, dword ptr [0x44fe64]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        push ebx
        push ebp
        ; Exact mapped bytes 8B 2D 5C C1 43 00: mov ebp, dword ptr [0x43c15c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        push edi
        xor ebx, ebx
        xor esi, esi
        xor edi, edi
        cmp eax, ebx
        ; Exact mapped bytes 75 33: jne 0x422c9d
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov esi, eax
        cmp esi, ebx
        ; Exact mapped bytes 74 0C: je 0x422c7e
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 64 FE 44 00 01 00 00 00: mov dword ptr [0x44fe64], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x422ca6
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes FF 15 9C C2 43 00: call dword ptr [0x43c29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x422d78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 64 FE 44 00 02 00 00 00: mov dword ptr [0x44fe64], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x422d2c
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x422d27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebx
        ; Exact mapped bytes 75 0C: jne 0x422cb6
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov esi, eax
        cmp esi, ebx
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x422d78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 1E: cmp word ptr [esi], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x1e
        mov eax, esi
        ; Exact mapped bytes 74 0E: je 0x422ccb
        __asm _emit 0x74
        __asm _emit 0x0e
        inc eax
        inc eax
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 75 F9: jne 0x422cbd
        __asm _emit 0x75
        __asm _emit 0xf9
        inc eax
        inc eax
        ; Exact mapped bytes 66 39 18: cmp word ptr [eax], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x18
        ; Exact mapped bytes 75 F2: jne 0x422cbd
        __asm _emit 0x75
        __asm _emit 0xf2
        sub eax, esi
        ; Exact mapped bytes 8B 3D 88 C2 43 00: mov edi, dword ptr [0x43c288]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        sar eax, 1
        push ebx
        push ebx
        inc eax
        push ebx
        push ebx
        push eax
        push esi
        push ebx
        push ebx
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebp, eax
        cmp ebp, ebx
        ; Exact mapped bytes 74 32: je 0x422d1c
        __asm _emit 0x74
        __asm _emit 0x32
        push ebp
        ; Exact mapped bytes E8 F4 C6 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebx
        pop ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 74 23: je 0x422d1c
        __asm _emit 0x74
        __asm _emit 0x23
        push ebx
        push ebx
        push ebp
        push eax
        push dword ptr [esp + 24h]
        push esi
        push ebx
        push ebx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x422d18
        __asm _emit 0x75
        __asm _emit 0x0e
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 0B C8 FF FF: call 0x41f51e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esp + 10h], ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        ; Exact mapped bytes FF 15 94 C2 43 00: call dword ptr [0x43c294]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, ebx
        ; Exact mapped bytes EB 53: jmp 0x422d7a
        __asm _emit 0xeb
        __asm _emit 0x53
        cmp eax, 2
        ; Exact mapped bytes 75 4C: jne 0x422d78
        __asm _emit 0x75
        __asm _emit 0x4c
        cmp edi, ebx
        ; Exact mapped bytes 75 0C: jne 0x422d3c
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 15 9C C2 43 00: call dword ptr [0x43c29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 74 3C: je 0x422d78
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp byte ptr [edi], bl
        mov eax, edi
        ; Exact mapped bytes 74 0A: je 0x422d4c
        __asm _emit 0x74
        __asm _emit 0x0a
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 FB: jne 0x422d42
        __asm _emit 0x75
        __asm _emit 0xfb
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 F6: jne 0x422d42
        __asm _emit 0x75
        __asm _emit 0xf6
        sub eax, edi
        inc eax
        mov ebp, eax
        push ebp
        ; Exact mapped bytes E8 8D C6 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        cmp esi, ebx
        ; Exact mapped bytes 75 04: jne 0x422d62
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 0B: jmp 0x422d6d
        __asm _emit 0xeb
        __asm _emit 0x0b
        push ebp
        push edi
        push esi
        ; Exact mapped bytes E8 56 BE FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push edi
        ; Exact mapped bytes FF 15 54 C1 43 00: call dword ptr [0x43c154]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x422d7a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        pop ecx
        ret
    }
}

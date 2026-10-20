// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DEE3A .. +0x245 bytes.
extern "C" __declspec(naked) void FUN_004dee3a_004DEE3A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 830h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4dee5f
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x4df076
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ah
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4dee75
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x4df076
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 628h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 628h], eax
        ; Exact mapped bytes 74 07: je 0x4dee9e
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D8 01 00 00: jmp 0x4df076
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 628h], 104h
        ; Exact mapped bytes 7C 14: jl 0x4deebe
        __asm _emit 0x7c
        __asm _emit 0x14
        push 27fh
        push 677f28h
        ; Exact mapped bytes E8 87 9E 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4deebe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4dee9e
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes FF 15 44 B9 68 00: call dword ptr [0x68b944]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 41ch], eax
        lea edx, [ebp - 624h]
        push edx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        ; Exact mapped bytes FF 15 0C B9 68 00: call dword ptr [0x68b90c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4def04
        __asm _emit 0x75
        __asm _emit 0x14
        push 284h
        push 677f28h
        ; Exact mapped bytes E8 41 9E 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4def04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x4deed0
        __asm _emit 0x75
        __asm _emit 0xc6
        lea eax, [ebp - 830h]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 4
        mov edx, dword ptr [ebp - 41ch]
        push edx
        ; Exact mapped bytes FF 15 0C B9 68 00: call dword ptr [0x68b90c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4def3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 286h
        push 677f28h
        ; Exact mapped bytes E8 07 9E 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4def3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x4def0a
        __asm _emit 0x75
        __asm _emit 0xc6
        lea ecx, [ebp - 20ch]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 41ch]
        push eax
        ; Exact mapped bytes FF 15 0C B9 68 00: call dword ptr [0x68b90c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4def78
        __asm _emit 0x75
        __asm _emit 0x14
        push 288h
        push 677f28h
        ; Exact mapped bytes E8 CD 9D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4def78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C6: jne 0x4def44
        __asm _emit 0x75
        __asm _emit 0xc6
        lea edx, [ebp - 414h]
        push edx
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        ; Exact mapped bytes FF 15 0C B9 68 00: call dword ptr [0x68b90c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4defb2
        __asm _emit 0x75
        __asm _emit 0x14
        push 28bh
        push 677f28h
        ; Exact mapped bytes E8 93 9D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4defb2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x4def7e
        __asm _emit 0x75
        __asm _emit 0xc6
        mov dword ptr [ebp - 418h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4defd9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 3D A7 F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x4df071
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 418h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 4D D0 F7 FF FF: mov dx, word ptr [ebp + ecx*2 - 0x830]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0xd0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 5C: je 0x4df05d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 418h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 45 EC FB FF FF: mov cx, word ptr [ebp + eax*2 - 0x414]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4df02f
        __asm _emit 0x75
        __asm _emit 0x14
        push 296h
        push 677f28h
        ; Exact mapped bytes E8 16 9D 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4df02f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x4df001
        __asm _emit 0x75
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 418h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 45 DC F9 FF FF: mov cx, word ptr [ebp + eax*2 - 0x624]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 418h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 55 F4 FD FF FF: mov ax, word ptr [ebp + edx*2 - 0x20c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, eax
        ; Exact mapped bytes 74 04: je 0x4df05d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x4df076
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 418h]
        add ecx, 1
        mov dword ptr [ebp - 418h], ecx
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x4defca
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

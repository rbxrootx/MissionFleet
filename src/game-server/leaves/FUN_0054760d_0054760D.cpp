// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054760D .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_0054760d_0054760D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 25 DE FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x547638
        __asm _emit 0x74
        __asm _emit 0x11
        push 30h
        push 5ca1f4h
        ; Exact mapped bytes E8 CD D3 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547638
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x547619
        __asm _emit 0x75
        __asm _emit 0xdb
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x547651
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x547820
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5de894h
        ; Exact mapped bytes E8 45 AF FF FF: call 0x5425a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 0F 85 9C 01 00 00: jne 0x547807
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ca200h
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x547746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        push 0dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], eax
        push 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], eax
        push 18h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], eax
        push 6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], eax
        push 15h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], eax
        push 16h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], eax
        push 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], eax
        push 19h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 34: je 0x547783
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 2B: je 0x547783
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 22: je 0x547783
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 19: je 0x547783
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 10: je 0x547783
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 95 DD FE FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 7A: jne 0x5477fd
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 17: je 0x5477fd
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 88 23 5E 00: call dword ptr [0x5e2388]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 04: jne 0x547814
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x547820
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes E8 F4 DC FE FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

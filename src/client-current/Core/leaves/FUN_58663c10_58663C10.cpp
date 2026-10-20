// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58663C10 .. +0x47E bytes.
extern "C" __declspec(naked) void FUN_58663c10_58663C10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b0h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588afc34h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 3D: je 0x58663c6e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58663c5a
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663c61
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 37: je 0x58663cae
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58663c9d
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663ca4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 37: je 0x58663cee
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58663cdd
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663ce4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 37: je 0x58663d2e
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58663d1d
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 A4: call dword ptr [ebp - 0x5c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa4
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663d24
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 74 37: je 0x58663d6e
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x58663d5d
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 64h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663d64
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 3D: je 0x58663db7
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x58663da3
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663daa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 3D: je 0x58663e00
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x58663dec
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 74h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 8C: call dword ptr [ebp - 0x74]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x8c
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663df3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 3D: je 0x58663e49
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x58663e35
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 84: call dword ptr [ebp - 0x7c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x84
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58663e3c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 49: je 0x58663e9e
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x58663e87
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 84h], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 7C FF FF FF: call dword ptr [ebp - 0x84]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58663e91
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 74 49: je 0x58663ef3
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x58663edc
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8ch], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58663ee6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 49: je 0x58663f48
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x58663f31
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 94h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 6C FF FF FF: call dword ptr [ebp - 0x94]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58663f3b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 49: je 0x58663f9d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x58663f86
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 9ch], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 64 FF FF FF: call dword ptr [ebp - 0x9c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58663f90
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58663faf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 5A: jge 0x5866400f
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 60h], 0
        ; Exact mapped bytes 74 4B: je 0x5866400d
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x58663ff5
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58663fff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 60h], 0
        ; Exact mapped bytes EB 97: jmp 0x58663fa6
        __asm _emit 0xeb
        __asm _emit 0x97
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58664021
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 5A: jge 0x58664081
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 68h], 0
        ; Exact mapped bytes 74 4B: je 0x5866407f
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 68h]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x58664067
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ach], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 54 FF FF FF: call dword ptr [ebp - 0xac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58664071
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0b0h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 68h], 0
        ; Exact mapped bytes EB 97: jmp 0x58664018
        __asm _emit 0xeb
        __asm _emit 0x97
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 18 15 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x18
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

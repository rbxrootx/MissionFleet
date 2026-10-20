// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EC7D0 .. +0x44C bytes.
extern "C" __declspec(naked) void FUN_586ec7d0_586EC7D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b31d8h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b7ch], 0
        ; Exact mapped bytes 74 3D: je 0x586ec82e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b7ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x586ec81a
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec821
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b7ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec840
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 4E: jge 0x586ec894
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 6ch], 0
        ; Exact mapped bytes 74 3F: je 0x586ec892
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x586ec87d
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec884
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 6ch], 0
        ; Exact mapped bytes EB A3: jmp 0x586ec837
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec8a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 4E: jge 0x586ec8fa
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 64h], 0
        ; Exact mapped bytes 74 3F: je 0x586ec8f8
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x586ec8e3
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec8ea
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 64h], 0
        ; Exact mapped bytes EB A3: jmp 0x586ec89d
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec90c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 0F 8D BC 00 00 00: jge 0x586ec9d2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec928
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ec9cd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec944
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 7E: jge 0x586ec9c8
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 10h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [edx + eax*8]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 5D: je 0x586ec9c3
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 10h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [edx + eax*8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x586ec99f
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 58h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ec9a6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [eax + ecx*8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + eax*4], 0
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x586ec93b
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ec91f
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x586ec903
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ec9e4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x586ecae2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586eca00
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D D3 00 00 00: jge 0x586ecadd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 974h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 51: je 0x586eca71
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 974h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x586eca53
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x586eca5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 974h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + eax*4], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0a74h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 51: je 0x586ecad8
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0a74h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 17: je 0x586ecaba
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 98: call dword ptr [ebp - 0x68]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x98
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ecac1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0a74h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x586ec9f7
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F9 FE FF FF: jmp 0x586ec9db
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b80h], 0
        ; Exact mapped bytes 74 3D: je 0x586ecb2b
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b80h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x586ecb17
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 90: call dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x90
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x586ecb1e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b80h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b84h], 0
        ; Exact mapped bytes 74 3D: je 0x586ecb74
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b84h]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 17: je 0x586ecb60
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 78h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586ecb67
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b84h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b88h], 0
        ; Exact mapped bytes 74 43: je 0x586ecbc3
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b88h]
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 1A: je 0x586ecbac
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ecbb6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b88h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 43: je 0x586ecc0f
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x586ecbfb
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 88h], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 78 FF FF FF: call dword ptr [ebp - 0x88]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x586ecc05
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 8ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 8C 0C 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

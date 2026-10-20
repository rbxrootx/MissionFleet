// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004145C0 .. +0x3C3 bytes.
extern "C" __declspec(naked) void FUN_004145c0_004145C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b180h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0a4h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b0h]
        mov ecx, 29h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 633fd4h
        mov dword ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 158h]
        ; Exact mapped bytes E8 A4 D3 FE FF: call 0x4019ba
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 154h]
        ; Exact mapped bytes E8 96 D3 FE FF: call 0x4019ba
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 158h], 0
        ; Exact mapped bytes 74 46: je 0x414676
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 158h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1A: je 0x414662
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 93 07 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x414669
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 158h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 154h], 0
        ; Exact mapped bytes 74 46: je 0x4146c8
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 154h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1A: je 0x4146b4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 41 07 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x4146bb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 154h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 150h], 0
        ; Exact mapped bytes 74 46: je 0x41471a
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 150h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x414706
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 EF 06 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x41470d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 150h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 46: je 0x41476c
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1A: je 0x414758
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 9D 06 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x41475f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 108h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 10ch], 0
        ; Exact mapped bytes 74 46: je 0x4147be
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1A: je 0x4147aa
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 4B 06 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x4147b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 110h], 0
        ; Exact mapped bytes 74 46: je 0x414810
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 1A: je 0x4147fc
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 F9 05 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x414803
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 74 46: je 0x414862
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 1A: je 0x41484e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 A7 05 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x414855
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 118h], 0
        ; Exact mapped bytes 74 46: je 0x4148b4
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 118h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 1A: je 0x4148a0
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 55 05 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x4148a7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 118h], 0
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 A7 CD FE FF: call 0x40166d
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 95 CD FE FF: call 0x40166d
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 02 80 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 F0 7F 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 DE 7F 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 CC 7F 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 BA 7F 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0fch
        ; Exact mapped bytes E8 A8 7F 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0f4h
        ; Exact mapped bytes E8 96 7F 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D 53 01 00: call 0x429c72
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 0b0h
        cmp ebp, esp
        ; Exact mapped bytes E8 71 04 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

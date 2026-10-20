// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050672B .. +0x248 bytes.
extern "C" __declspec(naked) void FUN_0050672b_0050672B() {
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
        ; Exact mapped bytes 75 14: jne 0x506757
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c7h
        push 677edch
        ; Exact mapped bytes E8 EE 25 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506757
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x506737
        __asm _emit 0x75
        __asm _emit 0xda
        push 1
        push 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 47 B4 02 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 56 BA 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 80 B6 68 00: call dword ptr [0x68b680]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 5B C7 02 00: call 0x532eda
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E8 85 64 01 00: call 0x51cc0c
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 0a000h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x5067c2
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
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x506883
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 74h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x5067f3
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
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x506883
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        push 21h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 78h]
        and edx, 0a000h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x506828
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 19: je 0x506841
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 78h]
        and edx, 5000h
        test edx, edx
        ; Exact mapped bytes 74 28: je 0x506860
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 1F: je 0x506860
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
        ; Exact mapped bytes EB 1D: jmp 0x50687d
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
        ; Exact mapped bytes 74 0D: je 0x506896
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x5068ca
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 0a000h
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x5068be
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 74h]
        and eax, 5000h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5068ca
        __asm _emit 0x74
        __asm _emit 0x0c
        push -1
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 BC 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 08: je 0x5068db
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 06: jmp 0x5068e1
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
        ; Exact mapped bytes E8 6F 63 01 00: call 0x51cc9c
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x63
        __asm _emit 0x01
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

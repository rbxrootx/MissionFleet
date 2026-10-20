// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887714C .. +0x2DF bytes.
extern "C" __declspec(naked) void FUN_5887714c_5887714C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 88h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        ; Exact mapped bytes E8 34 1A FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        push 40h
        mov esi, eax
        xor edi, edi
        lea eax, [ebp - 84h]
        mov dword ptr [ebp - 88h], edi
        push eax
        push 7
        cmp dword ptr [esi + 64h], edi
        mov ecx, 1002h
        pop eax
        cmovne ecx, eax
        push ecx
        push ebx
        ; Exact mapped bytes E8 24 86 FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x588771a3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [esi + 58h], edi
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 3F 02 00 00: jmp 0x588773e2
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 84h]
        push eax
        push dword ptr [esi + 54h]
        ; Exact mapped bytes E8 FE CA FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, 1001h
        pop ecx
        pop ecx
        push 3
        pop edx
        test eax, eax
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x588772b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        lea eax, [ebp - 84h]
        xor ecx, ecx
        cmp dword ptr [esi + 60h], ecx
        push eax
        mov eax, edi
        cmovne eax, edx
        push eax
        push ebx
        ; Exact mapped bytes E8 DA 85 FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x588771e9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes EB B2: jmp 0x5887719b
        __asm _emit 0xeb
        __asm _emit 0xb2
        lea eax, [ebp - 84h]
        push eax
        push dword ptr [esi + 50h]
        ; Exact mapped bytes E8 B8 CA FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x58877220
        __asm _emit 0x75
        __asm _emit 0x1f
        or ecx, 304h
        mov dword ptr [esi + 58h], ecx
        mov ecx, ebx
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x5887720f
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 6B: jmp 0x5887728b
        __asm _emit 0xeb
        __asm _emit 0x6b
        test cl, 2
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x588772ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 74 33: je 0x58877262
        __asm _emit 0x74
        __asm _emit 0x33
        push dword ptr [esi + 5ch]
        lea eax, [ebp - 84h]
        push eax
        push dword ptr [esi + 50h]
        ; Exact mapped bytes E8 3F 18 00 00: call 0x58878a80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x58877262
        __asm _emit 0x75
        __asm _emit 0x1a
        or dword ptr [esi + 58h], 2
        mov ecx, ebx
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58877251
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 29: jmp 0x5887728b
        __asm _emit 0xeb
        __asm _emit 0x29
        test byte ptr [esi + 58h], 1
        ; Exact mapped bytes 75 45: jne 0x588772ad
        __asm _emit 0x75
        __asm _emit 0x45
        push ebx
        ; Exact mapped bytes E8 68 03 00 00: call 0x588775d6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x588772ad
        __asm _emit 0x74
        __asm _emit 0x3a
        or dword ptr [esi + 58h], 1
        mov ecx, ebx
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x5887727c
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edx
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        push ebx
        lea eax, [esi + 2a0h]
        push 55h
        push eax
        ; Exact mapped bytes E8 CE EC FE FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 0F 85 72 01 00 00: jne 0x5887741f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        pop edx
        mov eax, dword ptr [esi + 58h]
        mov ecx, 300h
        and eax, ecx
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x588773d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        lea eax, [ebp - 84h]
        push eax
        xor eax, eax
        cmp dword ptr [esi + 60h], eax
        cmovne edi, edx
        push edi
        push ebx
        ; Exact mapped bytes E8 DE 84 FF FF: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 00 FF FF FF: je 0x588771e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 84h]
        push eax
        push dword ptr [esi + 50h]
        ; Exact mapped bytes E8 BF C9 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x588773d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        or ecx, 200h
        mov dword ptr [esi + 58h], ecx
        cmp dword ptr [esi + 60h], eax
        ; Exact mapped bytes 74 31: je 0x5887733d
        __asm _emit 0x74
        __asm _emit 0x31
        or ecx, 100h
        lea edx, [esi + 2a0h]
        mov dword ptr [esi + 58h], ecx
        ; Exact mapped bytes 66 39 02: cmp word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x588773d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        lea edi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x58877329
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x588773bf
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 5ch], eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x588773f5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        lea edi, [edx + 2]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        add edx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x5887734c
        __asm _emit 0x75
        __asm _emit 0xf1
        sub edx, edi
        sar edx, 1
        cmp edx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x588773f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 68 02 00 00: call 0x588775d6
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x58877397
        __asm _emit 0x75
        __asm _emit 0x24
        mov edi, dword ptr [esi + 50h]
        xor edx, edx
        lea ecx, [edi + 2]
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        add edi, 2
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 F5: jne 0x5887737b
        __asm _emit 0x75
        __asm _emit 0xf5
        push dword ptr [esi + 50h]
        sub edi, ecx
        sar edi, 1
        ; Exact mapped bytes E8 86 FD FF FF: call 0x58877118
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp eax, edi
        ; Exact mapped bytes 74 40: je 0x588773d7
        __asm _emit 0x74
        __asm _emit 0x40
        or dword ptr [esi + 58h], 100h
        lea edx, [esi + 2a0h]
        xor eax, eax
        ; Exact mapped bytes 66 39 02: cmp word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 75 2C: jne 0x588773d7
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, ebx
        lea edi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x588773b0
        __asm _emit 0x75
        __asm _emit 0xf1
        sub ecx, edi
        sar ecx, 1
        lea eax, [ecx + 1]
        push eax
        push ebx
        push 55h
        push edx
        ; Exact mapped bytes E8 A0 EB FE FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x5887741f
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [esi + 58h]
        shr eax, 2
        not eax
        and eax, 1
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 61 9C FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        or ecx, 100h
        lea edx, [esi + 2a0h]
        mov dword ptr [esi + 58h], ecx
        ; Exact mapped bytes 66 39 02: cmp word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x02
        ; Exact mapped bytes 75 CE: jne 0x588773d7
        __asm _emit 0x75
        __asm _emit 0xce
        mov ecx, ebx
        lea edi, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 85 78 FF FF FF: cmp ax, word ptr [ebp - 0x88]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 F1: jne 0x5887740e
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB A0: jmp 0x588773bf
        __asm _emit 0xeb
        __asm _emit 0xa0
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 AE 9B FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856EBF0 .. +0x2F2 bytes.
extern "C" __declspec(naked) void FUN_5856ebf0_5856EBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 228h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 208h], ecx
        mov eax, dword ptr [ebp - 208h]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 0C: je 0x5856ec21
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes E8 20 D8 2B 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd8
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 210h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5856ec3c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 210h]
        add ecx, 1
        mov dword ptr [ebp - 210h], ecx
        cmp dword ptr [ebp - 210h], 3
        ; Exact mapped bytes 7D 3A: jge 0x5856ec7f
        __asm _emit 0x7d
        __asm _emit 0x3a
        push 18h
        push 0
        imul edx, dword ptr [ebp - 210h], 18h
        mov eax, dword ptr [ebp - 208h]
        lea ecx, [eax + edx + 130h]
        push ecx
        ; Exact mapped bytes E8 AD E1 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe1
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 210h]
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + edx*4 + 178h], 0ffffffffh
        ; Exact mapped bytes EB AE: jmp 0x5856ec2d
        __asm _emit 0xeb
        __asm _emit 0xae
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 184h], 0ffffffffh
        mov edx, dword ptr [ebp - 208h]
        mov dword ptr [edx + 188h], 0ffffffffh
        mov eax, dword ptr [ebp - 208h]
        mov dword ptr [eax + 18ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 208h]
        mov dword ptr [ecx + 190h], 0ffffffffh
        mov dword ptr [ebp - 220h], 80h
        mov dword ptr [ebp - 214h], 0
        mov dword ptr [ebp - 214h], 588a9a18h
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 20 E1 2D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe1
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 20ch]
        push eax
        push 0f003fh
        push 0
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5856ed48
        __asm _emit 0x74
        __asm _emit 0x31
        lea edx, [ebp - 218h]
        push edx
        lea eax, [ebp - 20ch]
        push eax
        push 0
        push 0f003fh
        push 0
        push 588a9975h
        push 0
        mov ecx, dword ptr [ebp - 214h]
        push ecx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea edx, [ebp - 220h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        lea ecx, [ebp - 218h]
        push ecx
        push 0
        push 588a9a40h
        mov edx, dword ptr [ebp - 20ch]
        push edx
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5856edff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a9a4ch
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 218h]
        push ecx
        lea edx, [ebp - 20ch]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a9a5ch
        push 0
        mov eax, dword ptr [ebp - 214h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 224h], eax
        mov edx, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 228h], edx
        mov eax, dword ptr [ebp - 224h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        push 1
        push 0
        push 588a9a68h
        mov edx, dword ptr [ebp - 228h]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea eax, [ebp - 220h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        lea edx, [ebp - 218h]
        push edx
        push 0
        push 588a9a74h
        mov eax, dword ptr [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x5856ee86
        __asm _emit 0x74
        __asm _emit 0x5a
        mov dword ptr [ebp - 21ch], 4db0h
        lea ecx, [ebp - 218h]
        push ecx
        lea edx, [ebp - 20ch]
        push edx
        push 0
        push 0f003fh
        push 0
        push 588a9a84h
        push 0
        mov eax, dword ptr [ebp - 214h]
        push eax
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 4
        lea ecx, [ebp - 21ch]
        push ecx
        push 4
        push 0
        push 588a9a94h
        mov edx, dword ptr [ebp - 20ch]
        push edx
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 21ch]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        push 588a9aa4h
        lea eax, [ebp - 204h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        push 0
        lea ecx, [ebp - 204h]
        push ecx
        ; Exact mapped bytes 8B 15 B4 56 90 58: mov edx, dword ptr [0x589056b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D D0 2B 00: call 0x5882bf40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xd0
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 72 21 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x21
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041EF20 .. +0x255 bytes.
extern "C" __declspec(naked) void FUN_0041ef20_0041EF20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579fc9h
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
        sub esp, 68h
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 70h], ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 38 17 00 00: call 0x420690
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 14h], 1
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 CE A0 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 3B 05 3C 2F 5D 00: cmp eax, dword ptr [0x5d2f3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 67: je 0x41efeb
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 2D 06 00 00: call 0x41f5c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 9D 05 00 00: call 0x41f540
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        ; Exact mapped bytes E8 B1 05 00 00: call 0x41f560
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 14h], al
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x41efd2
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 28 06 00 00: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 11: jmp 0x41efe3
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 25 06 00 00: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 8E: jmp 0x41ef79
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 26 A1 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa1
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 70h]
        xor edx, edx
        mov dl, byte ptr [ecx + 8]
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x41f044
        __asm _emit 0x74
        __asm _emit 0x3e
        mov byte ptr [ebp - 30h], 1
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 1A 11 00 00: call 0x420140
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E1 04 00 00: call 0x41f510
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 16 01 00 00: jmp 0x41f15a
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        push edx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 80 17 00 00: call 0x4207d0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x41f064
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 64: jmp 0x41f0c8
        __asm _emit 0xeb
        __asm _emit 0x64
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 20 FE FF FF: call 0x41ee90
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 57 FD FF FF: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x41f0c0
        __asm _emit 0x74
        __asm _emit 0x3e
        mov byte ptr [ebp - 48h], 1
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 9E 10 00 00: call 0x420140
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 65 04 00 00: call 0x41f510
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x41f15a
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 38 17 00 00: call 0x420800
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 6C 04 00 00: call 0x41f540
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D3 16 00 00: call 0x4207b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DD 04 00 00: call 0x41f5c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        ; Exact mapped bytes E8 6E 04 00 00: call 0x41f560
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x41f136
        __asm _emit 0x74
        __asm _emit 0x3b
        mov byte ptr [ebp - 5ch], 1
        lea eax, [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 25 10 00 00: call 0x420140
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 EC 03 00 00: call 0x41f510
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x41f15a
        __asm _emit 0xeb
        __asm _emit 0x24
        mov byte ptr [ebp - 6ch], 0
        lea edx, [ebp - 6ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 C6 03 00 00: call 0x41f510
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
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
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 71 96 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

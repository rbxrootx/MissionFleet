// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECC71 .. +0x18F bytes.
extern "C" __declspec(naked) void FUN_004ecc71_004ECC71() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d758h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 13dh
        push 5c7e38h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 BB E4 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0A 3D 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D 4C 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x4ecd66
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 90 01 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4eccde
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x4ecded
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4eccfb
        __asm _emit 0x75
        __asm _emit 0x14
        push 147h
        push 5c7e38h
        ; Exact mapped bytes E8 0A 7D 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eccfb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4eccde
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4ecd13
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 73 43: jae 0x4ecd61
        __asm _emit 0x73
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 08: jmp 0x4ecd37
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 22: je 0x4ecd5f
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 73 79 01 00: call 0x5046c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 63 79 01 00: call 0x5046c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4ecd2f
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB A9: jmp 0x4ecd0a
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4ecded
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 8F 01 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8E 41 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7F 41 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x4ecdd2
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 42 7A 01 00: call 0x5047eb
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 35 7A 01 00: call 0x5047eb
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 EC 41 04 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E3 41 04 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EC 6B 04 00: call 0x5339bc
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB BA: jmp 0x4ecd8c
        __asm _emit 0xeb
        __asm _emit 0xba
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6E 0A 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5F 0A 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0a
        __asm _emit 0x00
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

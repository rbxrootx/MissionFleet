// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D19AB .. +0x1AA bytes.
extern "C" __declspec(naked) void FUN_004d19ab_004D19AB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dcddh
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
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2C 61 02 00: call 0x4f7b08
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4d19e7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x4d1b42
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 18 F5 05 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EF 16 02 00: call 0x4f30f1
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 82 F5 05 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4d1a1f
        __asm _emit 0x74
        __asm _emit 0x11
        push 58h
        push 5c8e64h
        ; Exact mapped bytes E8 E6 2F 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1a1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d1a02
        __asm _emit 0x75
        __asm _emit 0xdd
        push 5c8ee0h
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 73 C2 01 00: call 0x4edcaa
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5E F5 05 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5c8ee4h
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 4B C2 01 00: call 0x4edcaa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 36 F5 05 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5c8ee8h
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 23 C2 01 00: call 0x4edcaa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0E F5 05 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5c8eech
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 FB C1 01 00: call 0x4edcaa
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 E6 F4 05 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 63 FD FF FF: call 0x4d1830
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 73 BD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 67 BD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 5B BD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4F BD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 1B: jne 0x4d1b21
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 30 BD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 21: jmp 0x4d1b42
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E7 FD FF FF: call 0x4d1910
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0D BD 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

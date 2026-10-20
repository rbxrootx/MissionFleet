// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4F9B .. +0x1AA bytes.
extern "C" __declspec(naked) void FUN_004a4f9b_004A4F9B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d83dh
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
        ; Exact mapped bytes E8 6C 0A 03 00: call 0x4d5a38
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4a4fd7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x4a5132
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 28 FD 07 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2F C0 02 00: call 0x4d1021
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 92 FD 07 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4a500f
        __asm _emit 0x74
        __asm _emit 0x11
        push 58h
        push 67599ch
        ; Exact mapped bytes E8 36 3D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a500f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4a4ff2
        __asm _emit 0x75
        __asm _emit 0xdd
        push 675a18h
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 23 7D 02 00: call 0x4ccd4a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 6E FD 07 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        push 675a1ch
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 FB 7C 02 00: call 0x4ccd4a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], eax
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 46 FD 07 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        push 675a20h
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 D3 7C 02 00: call 0x4ccd4a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1E FD 07 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        push 675a24h
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 AB 7C 02 00: call 0x4ccd4a
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F6 FC 07 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 63 FD FF FF: call 0x4a4e20
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 23 78 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 17 78 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 0B 78 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 FF 77 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 1B: jne 0x4a5111
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 77 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 21: jmp 0x4a5132
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E7 FD FF FF: call 0x4a4f00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BD 77 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x77
        __asm _emit 0x02
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

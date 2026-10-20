// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424000 .. +0x2D9 bytes.
extern "C" __declspec(naked) void FUN_00424000_00424000() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b755h
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
        mov eax, 20a90h
        ; Exact mapped bytes E8 7E 1F 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 20a9ch]
        mov ecx, 82a4h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 72 E5 07 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9C 0D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ecx + 0ca8h]
        mov eax, dword ptr [ebp - 10h]
        cmp edx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes 0F 82 47 02 00 00: jb 0x4242b9
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ca8h]
        mov eax, dword ptr [ebp - 10h]
        add edx, dword ptr [eax + 0ca4h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ca8h], edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 AD 14 10 00: call 0x525542
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 1C 02 00 00: jne 0x4242b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B5 14 10 00: call 0x52555a
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x4242b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 63404ch
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 BE 88 0A 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 CD 8F 0A 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8f
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 634358h
        lea ecx, [ebp - 1052ch]
        ; Exact mapped bytes E8 3F D7 FD FF: call 0x40181b
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ca0h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 68 14 10 00: call 0x52555a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 47 14 10 00: call 0x525542
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 26 14 10 00: call 0x52552a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        push 633e04h
        lea ecx, [ebp - 20a48h]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B0 EA 07 00: call 0x4a2bc9
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xea
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 20a50h], eax
        mov edx, dword ptr [ebp - 20a50h]
        mov dword ptr [ebp - 20a54h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 20a54h]
        mov ecx, dword ptr [eax]
        push ecx
        push 634344h
        lea edx, [ebp - 1052ch]
        push edx
        ; Exact mapped bytes E8 0C D4 FD FF: call 0x401555
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 1ch
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 20a48h]
        ; Exact mapped bytes E8 91 87 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F6 CF FD FF: call 0x401159
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10530h], eax
        ; Exact mapped bytes EB 11: jmp 0x42417c
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10530h]
        ; Exact mapped bytes E8 18 D2 FD FF: call 0x40138e
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10530h], eax
        cmp dword ptr [ebp - 10530h], 0
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x42429b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 10534h]
        ; Exact mapped bytes E8 82 83 0A 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        push 633110h
        lea ecx, [ebp - 10534h]
        ; Exact mapped bytes E8 49 8E 0A 00: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10530h]
        add ecx, 0f4h
        push ecx
        lea ecx, [ebp - 10534h]
        ; Exact mapped bytes E8 AA 8E 0A 00: call 0x4cd06e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10534h]
        ; Exact mapped bytes E8 C7 8E 0A 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 63431ch
        lea ecx, [ebp - 20a44h]
        ; Exact mapped bytes E8 39 D6 FD FF: call 0x40181b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov edx, dword ptr [ebp - 10530h]
        mov eax, dword ptr [edx + 168h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5F 13 10 00: call 0x52555a
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3E 13 10 00: call 0x525542
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 1D 13 10 00: call 0x52552a
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        push 633e04h
        lea ecx, [ebp - 20a4ch]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A7 E9 07 00: call 0x4a2bc9
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 20a58h], eax
        mov edx, dword ptr [ebp - 20a58h]
        mov dword ptr [ebp - 20a5ch], edx
        mov byte ptr [ebp - 4], 5
        mov eax, dword ptr [ebp - 20a5ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 634344h
        lea edx, [ebp - 20a44h]
        push edx
        ; Exact mapped bytes E8 03 D3 FD FF: call 0x401555
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 1ch
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 20a4ch]
        ; Exact mapped bytes E8 88 86 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x00
        push 63315ch
        lea eax, [ebp - 20a44h]
        push eax
        ; Exact mapped bytes E8 E0 D2 FD FF: call 0x401555
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 20a44h]
        ; Exact mapped bytes E8 33 D2 FD FF: call 0x4014ba
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 10534h]
        ; Exact mapped bytes E8 56 86 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x86
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 D0 FE FF FF: jmp 0x42416b
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 1052ch]
        ; Exact mapped bytes E8 10 D2 FD FF: call 0x4014ba
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 33 86 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x0a
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
        add esp, 20a9ch
        cmp ebp, esp
        ; Exact mapped bytes E8 1D 0B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

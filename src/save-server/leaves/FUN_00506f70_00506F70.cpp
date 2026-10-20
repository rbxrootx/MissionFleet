// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506F70 .. +0x1C5 bytes.
extern "C" __declspec(naked) void FUN_00506f70_00506F70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e4e0h
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
        sub esp, 8
        push ebx
        push esi
        push edi
        push 173h
        push 678024h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 BF 32 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        push 639040h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 E2 31 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x31
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x506fc6
        __asm _emit 0x75
        __asm _emit 0x14
        push 174h
        push 678024h
        ; Exact mapped bytes E8 7F 1D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506fc6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x506fa1
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 33 DD 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 24 DD 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 4
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x507107
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 DD 01 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x507107
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x507107
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5B DD 01 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x507107
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 40 DF 01 00: call 0x524f83
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 2eh
        ; Exact mapped bytes 74 14: je 0x50705f
        __asm _emit 0x74
        __asm _emit 0x14
        push 17dh
        push 678024h
        ; Exact mapped bytes E8 E6 1C 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50705f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x507039
        __asm _emit 0x75
        __asm _emit 0xd4
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 31: je 0x50709c
        __asm _emit 0x74
        __asm _emit 0x31
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 37 DD 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 1E 5B FC FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 23 DD 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 18h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 5F FC FF: call 0x4cd06e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC DC 01 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5070c8
        __asm _emit 0x74
        __asm _emit 0x14
        push 188h
        push 678024h
        ; Exact mapped bytes E8 7D 1C 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5070c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5070a8
        __asm _emit 0x75
        __asm _emit 0xda
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 5F FC FF: call 0x4cd050
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        push 2ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 5F FC FF: call 0x4cd050
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 5F FC FF: call 0x4cd06e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 5F FC FF: call 0x4cd050
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D9 57 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CA 57 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486E90 .. +0x336 bytes.
extern "C" __declspec(naked) void FUN_00486e90_00486E90() {
    __asm {
        sub esp, 44h
        push ebx
        push esi
        mov esi, dword ptr [esp + 50h]
        push edi
        push ebp
        push -10h
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        test eax, 10000000h
        ; Exact mapped bytes 0F 84 0B 03 00 00: je 0x4871be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 60h], 3
        ; Exact mapped bytes 75 1E: jne 0x486ed8
        __asm _emit 0x75
        __asm _emit 0x1e
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 18: jne 0x486ed8
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 0
        push 157h
        push esi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E6 02 00 00: jne 0x4871be
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], 0
        ; Exact mapped bytes 74 07: je 0x486ee6
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 68 BD 68 00: call dword ptr [0x68bd68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [esp + 24h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 8B 1D 9C BE 68 00: mov ebx, dword ptr [0x68be9c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [esp + 24h]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + 2ch]
        ; Exact mapped bytes 66 BD 0F 00: mov bp, 0xf
        __asm _emit 0x66
        __asm _emit 0xbd
        __asm _emit 0x0f
        __asm _emit 0x00
        push ecx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push edi
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [esp + 10h]
        and eax, 100000h
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 74 04: je 0x486f31
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 BD 07 00: mov bp, 7
        __asm _emit 0x66
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        and eax, 200000h
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 74 05: je 0x486f45
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E5 FB FF: and bp, 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        push -0ch
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 5ch]
        sub ecx, eax
        cmp ecx, 0fffffc18h
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x4870b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], 29ah
        lea eax, [esp + 18h]
        push eax
        push 0
        push 1944h
        push edi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [esp + 18h], 29ah
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 75 17: jne 0x486fa0
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [esp + 18h]
        push eax
        push 0
        push 1943h
        push edi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 34h], eax
        lea eax, [esp + 44h]
        push 10h
        push eax
        push edi
        ; Exact mapped bytes FF 15 04 BF 68 00: call dword ptr [0x68bf04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 44h]
        push 641568h
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x486fdb
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x4870b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 34h], 3ebh
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x4870b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 14h], eax
        push 2
        lea eax, [esp + 28h]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push ecx
        push edi
        ; Exact mapped bytes FF 15 80 BE 68 00: call dword ptr [0x68be80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push ebx
        push edi
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        push ecx
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], 0
        mov ebx, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x4870a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -10h
        push edi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 3
        cmp eax, 2
        ; Exact mapped bytes 74 4C: je 0x487076
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 3
        ; Exact mapped bytes 74 47: je 0x487076
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 66 81 E5 F7 FF: and bp, 0xfff7
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xf7
        __asm _emit 0xff
        push 5
        push edi
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 34h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [esp + 34h]
        push 1008h
        sub eax, dword ptr [esp + 40h]
        lea ecx, [esp + 28h]
        add dword ptr [esp + 30h], eax
        push ecx
        push ebx
        ; Exact mapped bytes E8 FB D7 FF FF: call 0x484860
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 48h]
        sub eax, dword ptr [esp + 40h]
        add dword ptr [esp + 38h], eax
        add esp, 0ch
        ; Exact mapped bytes EB 38: jmp 0x4870ae
        __asm _emit 0xeb
        __asm _emit 0x38
        push 0
        push 0
        push 157h
        push edi
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x4870ae
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esp + 14h]
        push ebx
        push eax
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 64 BD 68 00: call dword ptr [0x68bd64]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        ret
        ; Exact mapped bytes 66 81 E5 FD FF: and bp, 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        inc dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 14h]
        lea eax, [esp + 24h]
        push ebp
        push eax
        push ebx
        ; Exact mapped bytes E8 A2 D7 FF FF: call 0x484860
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [esp + 60h], 3
        ; Exact mapped bytes 75 3E: jne 0x487106
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [esp + 10h]
        and al, 3
        cmp al, 3
        ; Exact mapped bytes 75 34: jne 0x487106
        __asm _emit 0x75
        __asm _emit 0x34
        mov ebp, dword ptr [esp + 2ch]
        push 2
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        sub ebp, eax
        push 0ch
        lea eax, [esp + 28h]
        push 7
        mov dword ptr [esp + 2ch], ebp
        push 7
        push eax
        push ebx
        ; Exact mapped bytes E8 2B D6 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        push esi
        ; Exact mapped bytes E8 B2 F1 FF FF: call 0x4862b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x4871a8
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], 0
        ; Exact mapped bytes 74 52: je 0x48715f
        __asm _emit 0x74
        __asm _emit 0x52
        lea eax, [esp + 24h]
        push 4
        inc dword ptr [esp + 30h]
        push 0
        push 0
        push eax
        push ebx
        ; Exact mapped bytes E8 FE D5 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 38h]
        dec dword ptr [esp + 40h]
        mov ebp, dword ptr [esp + 40h]
        mov dword ptr [esp + 58h], eax
        add esp, 14h
        push 2
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        sub ebp, eax
        push 8
        lea eax, [esp + 28h]
        push 7
        mov dword ptr [esp + 2ch], ebp
        push 7
        push eax
        push ebx
        ; Exact mapped bytes E8 CC D5 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 58h]
        mov dword ptr [esp + 38h], eax
        add esp, 14h
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 74 42: je 0x4871a8
        __asm _emit 0x74
        __asm _emit 0x42
        lea eax, [esp + 24h]
        push 8
        inc dword ptr [esp + 34h]
        push 0
        push 0
        push eax
        push ebx
        ; Exact mapped bytes E8 A5 D5 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        dec dword ptr [esp + 44h]
        add esp, 14h
        mov ebp, dword ptr [esp + 30h]
        push 15h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        sub ebp, eax
        push 4
        lea eax, [esp + 28h]
        push 7
        mov dword ptr [esp + 30h], ebp
        push 7
        push eax
        push ebx
        ; Exact mapped bytes E8 7B D5 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        push ebx
        push edi
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], 0
        ; Exact mapped bytes 74 07: je 0x4871be
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 64 BD 68 00: call dword ptr [0x68bd64]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        ret
    }
}

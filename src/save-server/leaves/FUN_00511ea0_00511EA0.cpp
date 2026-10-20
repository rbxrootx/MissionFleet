// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511EA0 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_00511ea0_00511EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x511ec9
        __asm _emit 0x75
        __asm _emit 0x14
        push 15ah
        push 673dc0h
        ; Exact mapped bytes E8 7C 6E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511ec9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x511eac
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x511ef4
        __asm _emit 0x75
        __asm _emit 0x14
        push 15bh
        push 673dc0h
        ; Exact mapped bytes E8 51 6E 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511ef4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x511ecf
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0a0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0a0h], eax
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 0a0h], 1
        ; Exact mapped bytes 76 05: jbe 0x511f20
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x5120e3
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 16 0C FC FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 0
        push 5
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 60: je 0x511faa
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 AC BF 68 00: call dword ptr [0x68bfac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x511f99
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D3 D9 FB FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x511f99
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 AB FE FF FF: call 0x511e20
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x511f99
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        push 0
        push 36ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x511f99
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 9A: jmp 0x511f44
        __asm _emit 0xeb
        __asm _emit 0x9a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x511fb5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x5120e3
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 176h
        push 673dc0h
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx*4 + 4]
        push eax
        ; Exact mapped bytes E8 04 A1 FB FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0a4h], edx
        mov dword ptr [ebp - 10h], 0
        push 5
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x5120ab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 AC BF 68 00: call dword ptr [0x68bfac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x512097
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 15 D9 FB FF: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x512097
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 ED FD FF FF: call 0x511e20
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x512097
        __asm _emit 0x74
        __asm _emit 0x60
        push 0
        push 0
        push 36ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x512097
        __asm _emit 0x75
        __asm _emit 0x49
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 72 14: jb 0x512076
        __asm _emit 0x72
        __asm _emit 0x14
        push 183h
        push 673dc0h
        ; Exact mapped bytes E8 CF 6C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512076
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x51205a
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0a4h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x511ffa
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 72 14: jb 0x5120ca
        __asm _emit 0x72
        __asm _emit 0x14
        push 18bh
        push 673dc0h
        ; Exact mapped bytes E8 7B 6C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5120ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x5120ab
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0a4h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx*4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005159B0 .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_005159b0_005159B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x5159cd
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x515b65
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 83 F5 02 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7E FF 01 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 50 68 02 00: call 0x53c243
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 6E: jl 0x515a7f
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F5 F1 FD FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 17 F3 FD FF: call 0x4f4d3b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x515a34
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 71 99 FD FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x515a3b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes E8 03 61 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E8 82 70 02 00: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 21: je 0x515a7d
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E8 60 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 14: je 0x515a7d
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9D F1 FD FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 07: jne 0x515a7d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 0D: jmp 0x515a8c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0ffffffffh
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 76: jl 0x515b08
        __asm _emit 0x7c
        __asm _emit 0x76
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 59 67 02 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 CC 26 5E 00: call dword ptr [0x5e26cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 33: je 0x515af4
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 74 3C: je 0x515b08
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 26 5E 00: call dword ptr [0x5e26d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x515b08
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0cch]
        ; Exact mapped bytes E8 5D 60 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 14: je 0x515b08
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0ffffffffh
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 29: jge 0x515b37
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 104h], -1
        ; Exact mapped bytes 75 0D: jne 0x515b27
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0e001h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FD 6E 02 00: call 0x53ca24
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        push -1
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0e000h
        ; Exact mapped bytes 75 25: jne 0x515b65
        __asm _emit 0x75
        __asm _emit 0x25
        push 0e000h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D7 6E 02 00: call 0x53ca24
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 12: jl 0x515b65
        __asm _emit 0x7c
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

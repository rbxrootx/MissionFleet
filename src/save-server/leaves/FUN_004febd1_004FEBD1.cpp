// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FEBD1 .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_004febd1_004FEBD1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 1
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x4febee
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 01 00 00: jmp 0x4fed86
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 82 15 04 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 50 32 03 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 2C BD 68 00: call dword ptr [0x68bd2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8F D0 02 00: call 0x52bca3
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd0
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
        ; Exact mapped bytes 7C 6E: jl 0x4feca0
        __asm _emit 0x7c
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 04 3F FD FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 26 40 FD FF: call 0x4d2c6b
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4fec55
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E0 7B FD FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4fec5c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes E8 42 C9 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E8 C1 D8 02 00: call 0x52c533
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 21: je 0x4fec9e
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 27 C9 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 14: je 0x4fec9e
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AC 3E FD FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 07: jne 0x4fec9e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 0D: jmp 0x4fecad
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0ffffffffh
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 76: jl 0x4fed29
        __asm _emit 0x7c
        __asm _emit 0x76
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 98 CF 02 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xcf
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
        ; Exact mapped bytes FF 15 94 BD 68 00: call dword ptr [0x68bd94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 33: je 0x4fed15
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 74 3C: je 0x4fed29
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 BE 68 00: call dword ptr [0x68bed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x4fed29
        __asm _emit 0x75
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0cch]
        ; Exact mapped bytes E8 9C C8 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 14: je 0x4fed29
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0ffffffffh
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 29: jge 0x4fed58
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 104h], -1
        ; Exact mapped bytes 75 0D: jne 0x4fed48
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0e001h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 3C D7 02 00: call 0x52c484
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd7
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
        ; Exact mapped bytes 75 25: jne 0x4fed86
        __asm _emit 0x75
        __asm _emit 0x25
        push 0e000h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 16 D7 02 00: call 0x52c484
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 12: jl 0x4fed86
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

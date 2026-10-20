// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A959 .. +0x307 bytes.
extern "C" __declspec(naked) void FUN_0040a959_0040A959() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439dach
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
        sub esp, 134h
        mov dword ptr [ebp - 140h], ecx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 52 07 00 00: call 0x40b0e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 83 B4 02 00 00: jae 0x40ac4b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 11 99 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 A1 24 02 00: call 0x42ce5c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 84 74 02 00 00: je 0x40ac3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 1
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 1ch], 3ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 13ch]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 2ch], 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B5 09 00 00: call 0x40b3b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4494bch
        lea eax, [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 13ch]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 E1 06 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 3
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D2 08 00 00: call 0x40b310
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4494c0h
        lea eax, [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 A7 06 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 4
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 B8 07 00 00: call 0x40b230
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x40aaa3
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AC 07 00 00: call 0x40b230
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 95 9A FF FF: call 0x404520
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 4494c4h
        lea edx, [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 15: jmp 0x40aab8
        __asm _emit 0xeb
        __asm _emit 0x15
        push 4494c8h
        lea eax, [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 43 06 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 5
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 94 08 00 00: call 0x40b370
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4494cch
        lea edx, [ebp - 13ch]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 09 06 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 6
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 1A 08 00 00: call 0x40b330
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4494d0h
        lea ecx, [ebp - 13ch]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 CF 05 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 7
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 00 08 00 00: call 0x40b350
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 4494d4h
        lea eax, [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 95 05 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 8
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 1b8h], 0
        ; Exact mapped bytes 75 1C: jne 0x40abaa
        __asm _emit 0x75
        __asm _emit 0x1c
        push 4494d8h
        push 4494e0h
        lea eax, [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1A: jmp 0x40abc4
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 4494e4h
        push 4494e8h
        lea ecx, [ebp - 13ch]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 37 05 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 9
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 48 06 00 00: call 0x40b230
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 0ce8h], 0
        ; Exact mapped bytes 75 1C: jne 0x40ac0d
        __asm _emit 0x75
        __asm _emit 0x1c
        push 4494ech
        push 4494f4h
        lea eax, [ebp - 13ch]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1A: jmp 0x40ac27
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 4494f8h
        push 4494fch
        lea ecx, [ebp - 13ch]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 124h
        ; Exact mapped bytes E8 D4 04 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 60 2F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

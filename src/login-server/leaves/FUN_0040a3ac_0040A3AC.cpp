// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A3AC .. +0x4BE bytes.
extern "C" __declspec(naked) void FUN_0040a3ac_0040A3AC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439d99h
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
        sub esp, 148h
        mov dword ptr [ebp - 150h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 75 07: jne 0x40a3e9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 71 04 00 00: jmp 0x40a85a
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 BC 9E FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 38h], 1
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 1ch], 5
        mov dword ptr [ebp - 20h], 3ch
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 24h], 449468h
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 2F 0D 00 00: call 0x40b170
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 5D 0F 00 00: call 0x40b3b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 44946ch
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 89 0C 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 2
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 7C 63 00 00: call 0x410820
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 C1 3A 02 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 44 0C 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 3
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 32 0E 00 00: call 0x40b310
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 449470h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 FE 0B 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 4
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 0C 0D 00 00: call 0x40b230
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x40a552
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 FD 0C 00 00: call 0x40b230
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E6 9F FF FF: call 0x404520
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 449474h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 15: jmp 0x40a567
        __asm _emit 0xeb
        __asm _emit 0x15
        push 449478h
        lea eax, [ebp - 138h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 94 0B 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 5
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 E2 0D 00 00: call 0x40b370
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 44947ch
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 4E 0B 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 6
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 5C 0D 00 00: call 0x40b330
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 449480h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 08 0B 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 7
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 36 0D 00 00: call 0x40b350
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 449484h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 C2 0A 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 8
        push 449488h
        push 449490h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 83 0A 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 9
        push 449494h
        push 44949ch
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 44 0A 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0ah
        push 4494a0h
        lea edx, [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 66 0B 00 00: call 0x40b250
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 25 02 00: call 0x42cc64
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], eax
        mov eax, dword ptr [ebp - 154h]
        mov ecx, dword ptr [eax]
        push ecx
        push 4494b0h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 8B 34 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 D2 09 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 144h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 E8 09 00 00: call 0x40b140
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 3B 9D FF FF: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 94 B8 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], 1
        ; Exact mapped bytes EB 0F: jmp 0x40a787
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 13ch]
        add eax, 1
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 48 09 00 00: call 0x40b0e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x40a82a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 1ch], 5
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov eax, dword ptr [ebp - 13ch]
        push eax
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 82 26 02 00: call 0x42ce5c
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BF 9C FF FF: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 B8 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 1
        push ecx
        push 4494b4h
        lea edx, [ebp - 138h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 138h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        add ecx, 124h
        ; Exact mapped bytes E8 EB 08 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x40a778
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 150h]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 78 0A 00 00: call 0x40b2b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 140h]
        ; Exact mapped bytes E8 57 33 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14ch]
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

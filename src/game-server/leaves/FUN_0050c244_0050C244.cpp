// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050C244 .. +0x31A bytes.
extern "C" __declspec(naked) void FUN_0050c244_0050C244() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57eca7h
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
        sub esp, 168h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 16ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50c285
        __asm _emit 0x75
        __asm _emit 0x14
        push 207h
        push 5cba5ch
        ; Exact mapped bytes E8 80 87 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50c285
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50c26b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 19 14 FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 6C 12 00 00: call 0x50d510
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 1000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x50c3b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 37 43 FF FF: call 0x5005fc
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x50c3b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 2F 4C 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 138h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 55 38 FF FF: call 0x4ffb44
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], 0
        lea eax, [ebp - 134h]
        push eax
        lea ecx, [ebp - 13ch]
        push ecx
        lea edx, [ebp - 12ch]
        push edx
        lea eax, [ebp - 130h]
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 8A 4C 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 DC 22 5E 00: call dword ptr [0x5e22dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x50c345
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 13ch]
        imul ecx, dword ptr [ebp - 130h]
        imul ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 118h]
        shl edx, 1
        cmp dword ptr [ebp - 128h], edx
        ; Exact mapped bytes 76 4F: jbe 0x50c3a4
        __asm _emit 0x76
        __asm _emit 0x4f
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 160h]
        push ecx
        ; Exact mapped bytes E8 09 FE FF FF: call 0x50c170
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        mov dword ptr [ebp - 174h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 174h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 B1 16 FE FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 A8 14 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 96 14 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 C8 4B 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 5A 01 00 00: jne 0x50c526
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 C8 4B 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 C5 26 FF FF: call 0x4feab3
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x50c526
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 F5 16 FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 15ch]
        push ecx
        lea edx, [ebp - 150h]
        push edx
        lea eax, [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 E0 22 5E 00: call dword ptr [0x5e22e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x50c46c
        __asm _emit 0x74
        __asm _emit 0x3b
        lea eax, [ebp - 144h]
        push eax
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes E8 14 43 FF FF: call 0x500758
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 15ch]
        push edx
        lea eax, [ebp - 150h]
        push eax
        lea ecx, [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 E4 22 5E 00: call dword ptr [0x5e22e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], 0
        mov dword ptr [ebp - 154h], 0
        lea ecx, [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        push 0
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 30 1E 5E 00: call dword ptr [0x5e1e30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x50c51f
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes E8 14 0F FE FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 164h], eax
        mov edx, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 154h], edx
        lea eax, [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov edx, dword ptr [ebp - 154h]
        push edx
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 30 1E 5E 00: call dword ptr [0x5e1e30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x50c504
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        push 4
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 AD 4A 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 2C 1E 5E 00: call dword ptr [0x5e1e2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 168h], edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        ; Exact mapped bytes E8 ED 0E FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        ; Exact mapped bytes EB 25: jmp 0x50c54b
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 7E 11 FE FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 68 25 FF FF: call 0x4feab3
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

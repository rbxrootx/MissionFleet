// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFFB8 .. +0x313 bytes.
extern "C" __declspec(naked) void FUN_004fffb8_004FFFB8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 351h
        push 6756ach
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 89 A2 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        push 352h
        push 6756ach
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 76 A2 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0f00h
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x500005
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x5002c2
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 08: jne 0x500016
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 14: je 0x50002a
        __asm _emit 0x74
        __asm _emit 0x14
        push 359h
        push 6756ach
        ; Exact mapped bytes E8 1B 8D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50002a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x500005
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8F 21 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 87 21 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x500088
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 15 DC 6D 68 00: mov edx, dword ptr [0x686ddc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 08: jmp 0x500090
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes A1 E8 6D 68 00: mov eax, dword ptr [0x686de8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 28h]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x5000b5
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 28h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x5000ce
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 03 05 C4 6D 68 00: add eax, dword ptr [0x686dc4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 800h
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5000e7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 2B 15 C4 6D 68 00: sub edx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 28h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x500110
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C7 21 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D CF 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x500135
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 CF 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x500161
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 78 21 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push -1
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC CE 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x500189
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 CE 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x50024a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 E0 6D 68 00: mov edx, dword ptr [0x686de0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 28h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5001cc
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 0B 21 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 CE 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x5001f1
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 1
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C CE 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 400h
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x500220
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 BC 20 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push -1
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D CE 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x50024a
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 CE 01 00: call 0x51d05d
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x500266
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 03 15 C0 6D 68 00: add edx, dword ptr [0x686dc0]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x500285
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 03 05 C4 6D 68 00: add eax, dword ptr [0x686dc4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 28h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x5002a4
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 2B 0D C0 6D 68 00: sub ecx, dword ptr [0x686dc0]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 28h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5002c2
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 2B 15 C4 6D 68 00: sub edx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
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

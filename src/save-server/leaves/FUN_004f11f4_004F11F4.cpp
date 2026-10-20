// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F11F4 .. +0x31A bytes.
extern "C" __declspec(naked) void FUN_004f11f4_004F11F4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e787h
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
        ; Exact mapped bytes 75 14: jne 0x4f1235
        __asm _emit 0x75
        __asm _emit 0x14
        push 207h
        push 678234h
        ; Exact mapped bytes E8 10 7B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f1235
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f121b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 09 B5 FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 6C 12 00 00: call 0x4f24c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 1000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x4f1366
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
        ; Exact mapped bytes E8 87 E4 FE FF: call 0x4df6fc
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x4f1366
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 7F 3A 03 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 138h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A5 D9 FE FF: call 0x4dec44
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xfe
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
        ; Exact mapped bytes E8 DA 3A 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 B8 68 00: call dword ptr [0x68b8f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4f12f5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 13ch]
        imul ecx, dword ptr [ebp - 130h]
        imul ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 118h]
        shl edx, 1
        cmp dword ptr [ebp - 128h], edx
        ; Exact mapped bytes 76 4F: jbe 0x4f1354
        __asm _emit 0x76
        __asm _emit 0x4f
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 160h]
        push ecx
        ; Exact mapped bytes E8 09 FE FF FF: call 0x4f1120
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
        ; Exact mapped bytes E8 A1 B7 FD FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 98 B5 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 86 B5 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 18 3A 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 5A 01 00 00: jne 0x4f14d6
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
        ; Exact mapped bytes E8 18 3A 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 15 C8 FE FF: call 0x4ddbb3
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x4f14d6
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
        ; Exact mapped bytes E8 E5 B7 FD FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb7
        __asm _emit 0xfd
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
        ; Exact mapped bytes FF 15 F8 B8 68 00: call dword ptr [0x68b8f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x4f141c
        __asm _emit 0x74
        __asm _emit 0x3b
        lea eax, [ebp - 144h]
        push eax
        lea ecx, [ebp - 124h]
        push ecx
        ; Exact mapped bytes E8 64 E4 FE FF: call 0x4df858
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe4
        __asm _emit 0xfe
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
        ; Exact mapped bytes FF 15 FC B8 68 00: call dword ptr [0x68b8fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb8
        __asm _emit 0x68
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
        ; Exact mapped bytes FF 15 C0 B2 68 00: call dword ptr [0x68b2c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x4f14cf
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        ; Exact mapped bytes E8 04 B0 FD FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb0
        __asm _emit 0xfd
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
        ; Exact mapped bytes FF 15 C0 B2 68 00: call dword ptr [0x68b2c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4f14b4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 154h]
        push ecx
        push 4
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 FD 38 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 BC B2 68 00: call dword ptr [0x68b2bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 154h]
        mov dword ptr [ebp - 168h], edx
        mov eax, dword ptr [ebp - 168h]
        push eax
        ; Exact mapped bytes E8 DD AF FD FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        ; Exact mapped bytes EB 25: jmp 0x4f14fb
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 10h
        ; Exact mapped bytes E8 6E B2 FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B8 C6 FE FF: call 0x4ddbb3
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc6
        __asm _emit 0xfe
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

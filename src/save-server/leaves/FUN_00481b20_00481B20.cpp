// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481B20 .. +0x23F bytes.
extern "C" __declspec(naked) void FUN_00481b20_00481B20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63fbc8h
        push 46d504h
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
        add esp, -24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        ; Exact mapped bytes 83 3D E4 75 68 00 00: cmp dword ptr [0x6875e4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 4F: jne 0x481b9e
        __asm _emit 0x75
        __asm _emit 0x4f
        lea eax, [ebp - 1ch]
        push eax
        push 1
        push 63f220h
        push 1
        ; Exact mapped bytes FF 15 40 B8 68 00: call dword ptr [0x68b840]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x481b72
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 E4 75 68 00 01 00 00 00: mov dword ptr [0x6875e4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x481b9e
        __asm _emit 0xeb
        __asm _emit 0x2c
        lea ecx, [ebp - 1ch]
        push ecx
        push 1
        push 63f21ch
        push 1
        push 0
        ; Exact mapped bytes FF 15 44 B8 68 00: call dword ptr [0x68b844]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x481b97
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 E4 75 68 00 02 00 00 00: mov dword ptr [0x6875e4], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x481b9e
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DB 01 00 00: jmp 0x481d79
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 75 68 00 01: cmp dword ptr [0x6875e4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 1B: jne 0x481bc2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 40 B8 68 00: call dword ptr [0x68b840]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x481d79
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 75 68 00 02: cmp dword ptr [0x6875e4], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 A8 01 00 00: jne 0x481d77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 08: jne 0x481bdd
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes A1 50 75 68 00: mov eax, dword ptr [0x687550]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 18h], eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 220h
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 07: jne 0x481c0c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x481d79
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 28h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 80 43 FE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 85 3C FE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x481c5e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 07: jne 0x481c6b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x481d79
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 220h
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x481c99
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x481d79
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 28h]
        lea eax, [eax + eax + 2]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 EF 42 FE FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], esp
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x481cdd
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 07: jne 0x481cea
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x481d79
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 09: jne 0x481cf9
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 40 75 68 00: mov edx, dword ptr [0x687540]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 1ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 C7 04 41 FF FF: mov word ptr [ecx + eax*2], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 C7 44 50 FE FF FF: mov word ptr [eax + edx*2 - 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        ; Exact mapped bytes FF 15 44 B8 68 00: call dword ptr [0x68b844]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 54 41 FE: mov dx, word ptr [ecx + eax*2 - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0xfe
        cmp edx, 0ffffh
        ; Exact mapped bytes 74 14: je 0x481d58
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 14 41: mov dx, word ptr [ecx + eax*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x41
        cmp edx, 0ffffh
        ; Exact mapped bytes 74 04: je 0x481d5c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x481d79
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 10h]
    }
}

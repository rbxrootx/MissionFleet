// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D410 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_0054d410_0054D410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 DC C2 68 00: call dword ptr [0x68c2dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 2B: je 0x54d45b
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 15 20 0D 64 00: mov edx, dword ptr [0x640d20]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes A1 24 0D 64 00: mov eax, dword ptr [0x640d24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 28 0D 64 00: mov ecx, dword ptr [0x640d28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 15 2C 0D 64 00: mov edx, dword ptr [0x640d2c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x54d56f
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 EC C2 68 00: call dword ptr [0x68c2ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 26: je 0x54d4a3
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x54d48f
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 14: je 0x54d4a3
        __asm _emit 0x74
        __asm _emit 0x14
        push 421h
        push 679318h
        ; Exact mapped bytes E8 A2 B8 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54d4a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CE: jne 0x54d477
        __asm _emit 0x75
        __asm _emit 0xce
        ; Exact mapped bytes 66 C7 45 E8 00 00: mov word ptr [ebp - 0x18], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 F0 C2 68 00: call dword ptr [0x68c2f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x54d4d0
        __asm _emit 0x74
        __asm _emit 0x06
        lea ecx, [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E8 C2 68 00: call dword ptr [0x68c2e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 05: je 0x54d4ec
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x54d56d
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F8 C2 68 00: call dword ptr [0x68c2f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 02: je 0x54d50a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 61: jmp 0x54d56b
        __asm _emit 0xeb
        __asm _emit 0x61
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 FC C2 68 00: call dword ptr [0x68c2fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 02: je 0x54d521
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 48: jmp 0x54d569
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes EB 44: jmp 0x54d567
        __asm _emit 0xeb
        __asm _emit 0x44
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E8 C2 68 00: call dword ptr [0x68c2e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F8 C2 68 00: call dword ptr [0x68c2f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ebp - 18h]
        cmp ecx, edx
        ; Exact mapped bytes 74 0A: je 0x54d558
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 08: jmp 0x54d56f
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB DB: jmp 0x54d544
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes EB B8: jmp 0x54d523
        __asm _emit 0xeb
        __asm _emit 0xb8
        ; Exact mapped bytes EB B6: jmp 0x54d523
        __asm _emit 0xeb
        __asm _emit 0xb6
        ; Exact mapped bytes EB D5: jmp 0x54d544
        __asm _emit 0xeb
        __asm _emit 0xd5
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

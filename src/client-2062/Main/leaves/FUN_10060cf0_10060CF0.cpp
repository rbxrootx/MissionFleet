// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060CF0 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_10060cf0_10060CF0() {
    __asm {
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B1 0C 0D 00 00: mov esi, dword ptr [ecx + 0xd0c]
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 4C 0B 00 00: mov eax, dword ptr [esi + 0xb4c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 68 0A: mov bp, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x0a
        ; Exact mapped bytes C1 ED 0A: shr ebp, 0xa
        __asm _emit 0xc1
        __asm _emit 0xed
        __asm _emit 0x0a
        ; Exact mapped bytes 83 E5 1F: and ebp, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 8E AA 00 00 00: jle 0x10060dc3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 58 02 00 00: mov ecx, dword ptr [eax + 0x258]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 54 02 00 00: mov edx, dword ptr [eax + 0x254]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 10: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 9E CC 09 00 00: lea ebx, [esi + 0x9cc]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B9 1F 00 00 00: mov ecx, 0x1f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D3 E2: shl edx, cl
        __asm _emit 0xd3
        __asm _emit 0xe2
        ; Exact mapped bytes 85 C2: test edx, eax
        __asm _emit 0x85
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 74 0D: je 0x10060d5a
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C0 03: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x03
        ; Exact mapped bytes EB 09: jmp 0x10060d63
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 0F: jne 0x10060d78
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 94 86 3C 08 00 00: mov edx, dword ptr [esi + eax*4 + 0x83c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 3E: jne 0x10060db2
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 2A: je 0x10060da2
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 94 86 3C 08 00 00: mov edx, dword ptr [esi + eax*4 + 0x83c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 2F: je 0x10060db2
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 1B: je 0x10060da2
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x10060da2
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 43 80: mov ax, word ptr [ebx - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x80
        ; Exact mapped bytes 66 35 AA 00: xor ax, 0xaa
        __asm _emit 0x66
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x10060da2
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4B 82: mov cx, word ptr [ebx - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x82
        ; Exact mapped bytes 66 81 F1 AA 00: xor cx, 0xaa
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x10060db2
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 7C 89: jl 0x10060d33
        __asm _emit 0x7c
        __asm _emit 0x89
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 84 00 00 00: mov ecx, dword ptr [edx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

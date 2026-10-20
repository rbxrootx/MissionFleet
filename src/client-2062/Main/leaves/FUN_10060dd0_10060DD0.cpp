// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060DD0 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_10060dd0_10060DD0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        test esi, esi
        mov dword ptr [esi + 0a0h], 1
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x10060e92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BB 3A FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [esi + 0b70h]
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x10060e31
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0A: jne 0x10060e27
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 0a0h]
        test edx, edx
        ; Exact mapped bytes 74 53: je 0x10060e7a
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [eax + 0b70h]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x10060e07
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 74 3A FF FF: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, ah
        mov eax, dword ptr [esi + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x10060e92
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 66 0F B6 C9: movzx cx, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        mov edx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 66 8B 92 48 03 00 00: mov dx, word ptr [edx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 0D: shr dx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 75 0A: jne 0x10060e6e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 0a0h]
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x10060e87
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [eax + 0b6ch]
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x10060e4e
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 18: jmp 0x10060e92
        __asm _emit 0xeb
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 74 B3: je 0x10060e31
        __asm _emit 0x74
        __asm _emit 0xb3
        mov ecx, edi
        ; Exact mapped bytes E8 7B E5 FF FF: call 0x1005f400
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x10060e92
        __asm _emit 0xeb
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x10060e92
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 5E E3 FF FF: call 0x1005f1f0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 85 D5 FF FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0d68h]
        ; Exact mapped bytes E8 6A 79 03 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

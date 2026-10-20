// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58715450 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_58715450_58715450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b3fd0h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 37: je 0x587154a2
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x58715491
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715498
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 74 37: je 0x587154e2
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x587154d1
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x587154d8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 37: je 0x58715522
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58715511
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 44h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715518
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 37: je 0x58715562
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x58715551
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715558
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 37: je 0x587155a2
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x58715591
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 54h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715598
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587155b4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 4E: jge 0x58715608
        __asm _emit 0x7d
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 74h], 0
        ; Exact mapped bytes 74 3F: je 0x58715606
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x587155f1
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 A4: call dword ptr [ebp - 0x5c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa4
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x587155f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 74h], 0
        ; Exact mapped bytes EB A3: jmp 0x587155ab
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5871561a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes 7D 7D: jge 0x5871569d
        __asm _emit 0x7d
        __asm _emit 0x7d
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58715632
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 60: jge 0x58715698
        __asm _emit 0x7d
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 4B: je 0x58715696
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 17: je 0x5871567b
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 64h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715682
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB 91: jmp 0x58715629
        __asm _emit 0xeb
        __asm _emit 0x91
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x58715611
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587156af
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 7D 57: jge 0x5871570c
        __asm _emit 0x7d
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0b4h], 0
        ; Exact mapped bytes 74 45: je 0x5871570a
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 17: je 0x587156f2
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 6ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 94: call dword ptr [ebp - 0x6c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x94
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x587156f9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0b4h], 0
        ; Exact mapped bytes EB 9A: jmp 0x587156a6
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 37: je 0x5871574c
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 17: je 0x5871573b
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 74h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 8C: call dword ptr [ebp - 0x74]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x8c
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x58715742
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 01 0A 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

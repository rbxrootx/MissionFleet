// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494910 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_00494910_00494910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c0h
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 3
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 80 20 5E 00: call dword ptr [0x5e2080]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 79: je 0x4949d5
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        push 2
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 14 1F 5E 00: call dword ptr [0x5e1f14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x4949ac
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes DB 45 E0: fild dword ptr [ebp - 0x20]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 19: fstp dword ptr [ecx]
        __asm _emit 0xd9
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        sub edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes DB 45 DC: fild dword ptr [ebp - 0x24]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xdc
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 58 04: fstp dword ptr [eax + 4]
        __asm _emit 0xd9
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes EB 24: jmp 0x4949d0
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x4949c9
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes DB 45 F0: fild dword ptr [ebp - 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf0
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 1A: fstp dword ptr [edx]
        __asm _emit 0xd9
        __asm _emit 0x1a
        ; Exact mapped bytes DB 45 F4: fild dword ptr [ebp - 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 58 04: fstp dword ptr [eax + 4]
        __asm _emit 0xd9
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes EB 07: jmp 0x4949d0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80070057h
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x494a5a
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 74: je 0x494a53
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 02: fld dword ptr [edx]
        __asm _emit 0xd9
        __asm _emit 0x02
        ; Exact mapped bytes E8 13 4B 01 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 40 04: fld dword ptr [eax + 4]
        __asm _emit 0xd9
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes E8 05 4B 01 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 2
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 10 1F 5E 00: call dword ptr [0x5e1f10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x494a2d
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 24: jmp 0x494a51
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 14h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x494a4a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 07: jmp 0x494a51
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80070057h
        ; Exact mapped bytes EB 07: jmp 0x494a5a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80070057h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005895F0 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_005895f0_005895F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 65 70 FB FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 1
        ; Exact mapped bytes E8 72 97 FB FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 34h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x58966a
        __asm _emit 0x74
        __asm _emit 0x4f
        push 0ah
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4A 00 EC FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 11: jne 0x589643
        __asm _emit 0x75
        __asm _emit 0x11
        push 26h
        push 68145ch
        ; Exact mapped bytes E8 02 F7 F9 FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x589643
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x58962c
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes E8 29 84 FA FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 DC BF 68 00: call dword ptr [0x68bfdc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A7: jmp 0x589611
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 34h], 0
        push 1
        ; Exact mapped bytes E8 34 98 FB FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 F3 83 FA FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x589699
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 0A: je 0x589699
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 51 58: call dword ptr [ecx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 6A FB FF: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0cch], 0
        ; Exact mapped bytes 74 2B: je 0x5896d8
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5896d8
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        ; Exact mapped bytes E8 86 6F FB FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6f
        __asm _emit 0xfb
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 40: jne 0x589726
        __asm _emit 0x75
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 17: je 0x589706
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        push ecx
        ; Exact mapped bytes FF 15 20 BF 68 00: call dword ptr [0x68bf20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 17: je 0x589726
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        ; Exact mapped bytes FF 15 20 BF 68 00: call dword ptr [0x68bf20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

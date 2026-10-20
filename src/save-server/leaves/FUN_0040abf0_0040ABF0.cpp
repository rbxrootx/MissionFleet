// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040ABF0 .. +0x1C3 bytes.
extern "C" __declspec(naked) void FUN_0040abf0_0040ABF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 A6 AC 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 6A 6E FF FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], -1
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x40ad42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 0C 6A FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x40ac67
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x40ad42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 D7 69 FF FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x40ad3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 5A 6C FF FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x40ad39
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 25 A1 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x40ad37
        __asm _emit 0x75
        __asm _emit 0x68
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 07: jne 0x40acdc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x40ada0
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F6 A0 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        push 63317ch
        ; Exact mapped bytes E8 09 59 09 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 24h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 8A 6B FF FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x40ad33
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 6D: jmp 0x40ada0
        __asm _emit 0xeb
        __asm _emit 0x6d
        xor eax, eax
        ; Exact mapped bytes EB 69: jmp 0x40ada0
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes EB 04: jmp 0x40ad3d
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 63: jmp 0x40ada0
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x40ac5e
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 A0 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        push 24h
        lea edx, [ebp - 28h]
        push edx
        push 63315ch
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 F2 6B FF FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 1C: je 0x40ad9e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 2ch]
        push edx
        lea eax, [ebp - 24h]
        push eax
        push 633160h
        ; Exact mapped bytes E8 81 58 09 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x40ada0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 43 A0 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

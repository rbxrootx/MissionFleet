// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004181D0 .. +0x36D bytes.
extern "C" __declspec(naked) void FUN_004181d0_004181D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 540h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 540h]
        mov ecx, 150h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 30h
        ; Exact mapped bytes 0F 85 07 03 00 00: jne 0x418507
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0ffffffffh
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63310ch
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 CA CB 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        mov esi, esp
        push eax
        push 63310ch
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 A8 CB 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 9], 0
        mov byte ptr [ebp - 21h], 0
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 19 95 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 78 02 00 00: je 0x4184e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 18 98 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4f0h], eax
        cmp dword ptr [ebp - 4f0h], -1
        ; Exact mapped bytes 0F 84 C0 01 00 00: je 0x418456
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4b1h
        lea eax, [ebp - 4ech]
        push eax
        mov ecx, dword ptr [ebp - 4f0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 71 92 FE FF: call 0x401528
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4f4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4182d2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4f4h]
        add eax, 1
        mov dword ptr [ebp - 4f4h], eax
        cmp dword ptr [ebp - 4f4h], 32h
        ; Exact mapped bytes 7D 4F: jge 0x41832a
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov esi, esp
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 4f4h]
        imul edx, edx, 18h
        lea eax, [ebp + edx - 4ebh]
        push eax
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 CA 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x418328
        __asm _emit 0x75
        __asm _emit 0x25
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 1E 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x418527
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 99: jmp 0x4182c3
        __asm _emit 0xeb
        __asm _emit 0x99
        mov dword ptr [ebp - 4f4h], 0
        ; Exact mapped bytes EB 0F: jmp 0x418345
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4f4h]
        add ecx, 1
        mov dword ptr [ebp - 4f4h], ecx
        cmp dword ptr [ebp - 4f4h], 32h
        ; Exact mapped bytes 0F 8D E1 00 00 00: jge 0x418433
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4f8h], 17h
        mov dword ptr [ebp - 4fch], 4
        mov edx, dword ptr [ebp - 4f4h]
        imul edx, edx, 18h
        lea eax, [ebp + edx - 4ebh]
        push eax
        ; Exact mapped bytes E8 C4 D3 04 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd3
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 500h], eax
        lea ecx, [ebp - 4f8h]
        push ecx
        lea edx, [ebp - 4fch]
        push edx
        lea eax, [ebp - 500h]
        push eax
        ; Exact mapped bytes E8 77 8F FE FF: call 0x401316
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x41842e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 38h]
        push ecx
        push 63310ch
        mov edx, dword ptr [ebp - 4f4h]
        imul edx, edx, 18h
        lea eax, [ebp + edx - 4ebh]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 1A CA 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 4ech]
        add cl, 1
        mov byte ptr [ebp - 4ech], cl
        push 4b1h
        lea edx, [ebp - 4ech]
        push edx
        mov eax, dword ptr [ebp - 4f0h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 C6 92 FE FF: call 0x4016cc
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 1C 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x418527
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x418336
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 1C 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x4184e5
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4b1h
        push 0
        lea edx, [ebp - 4ech]
        push edx
        ; Exact mapped bytes E8 57 D4 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 38h]
        push eax
        push 63310ch
        lea ecx, [ebp - 4ebh]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 62 C9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 4ech]
        add dl, 1
        mov byte ptr [ebp - 4ech], dl
        push 4b1h
        lea eax, [ebp - 4ech]
        push eax
        push 63315ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 0D 91 FE FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 1C 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 42: jmp 0x418527
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes EB 1E: jmp 0x418505
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 1C 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x418525
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 0
        push 80020f04h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 1B 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 540h
        cmp ebp, esp
        ; Exact mapped bytes E8 B9 C8 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

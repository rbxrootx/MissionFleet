// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045253A .. +0x25A bytes.
extern "C" __declspec(naked) void FUN_0045253a_0045253A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ded9h
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
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x452575
        __asm _emit 0x75
        __asm _emit 0x14
        push 925h
        push 67702ch
        ; Exact mapped bytes E8 D0 67 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x67
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x452575
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x45255b
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x4526f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ecx + 90h]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 74 14: je 0x4525bb
        __asm _emit 0x74
        __asm _emit 0x14
        push 92ah
        push 67702ch
        ; Exact mapped bytes E8 8A 67 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x67
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4525bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x452596
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x452663
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x4525e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 76: jge 0x452661
        __asm _emit 0x7d
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 C3 41 00 00: call 0x4567c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 09 A4 07 00: call 0x4cca0f
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 9ch
        push eax
        ; Exact mapped bytes E8 CC 29 0D 00: call 0x524feb
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 28h], al
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 BB A2 07 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x45265c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 EB F0 06 00: call 0x4c1742
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x452781
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x4525d7
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7B: jmp 0x4526de
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x452675
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 5E: jge 0x4526de
        __asm _emit 0x7d
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        cmp dword ptr [edx + eax + 1ch], 0
        ; Exact mapped bytes 75 02: jne 0x452695
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x45266c
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [edx + eax + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 9ch
        push ecx
        ; Exact mapped bytes E8 53 29 0D 00: call 0x525008
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4526dc
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 6B F0 06 00: call 0x4c1742
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x452781
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 8E: jmp 0x45266c
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 90h], 0
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x452781
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x45270d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7D 69: jge 0x452781
        __asm _emit 0x7d
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 2A 43 0D 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 49: je 0x45277f
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 24 43 0D 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 1B: jne 0x45277d
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 06 F5 06 00: call 0x4c1c81
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x452781
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B1: jmp 0x452730
        __asm _emit 0xeb
        __asm _emit 0xb1
        ; Exact mapped bytes EB 83: jmp 0x452704
        __asm _emit 0xeb
        __asm _emit 0x83
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

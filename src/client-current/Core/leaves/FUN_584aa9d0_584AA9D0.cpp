// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA9D0 .. +0x4FD bytes.
extern "C" __declspec(naked) void FUN_584aa9d0_584AA9D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e12bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4C 7A FD FF: call 0x58482470
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58895284h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 28h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 90h], 100h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 3B: jne 0x584aaaa1
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 CA 65 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x65
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 80h], ecx
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 80h]
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB 0C: jmp 0x584aaaad
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 94h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 9C 00 00 00: mov word ptr [edx + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0e8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ech], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0fch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        ; Exact mapped bytes E8 EB 64 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x64
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 100h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 90h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 C7 64 38 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x64
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 104h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 100h]
        push edx
        ; Exact mapped bytes E8 65 22 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x22
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 104h]
        push eax
        ; Exact mapped bytes E8 44 22 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        push 58h
        ; Exact mapped bytes E8 2E 64 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x64
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1D: je 0x584aac03
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 12 BC FD FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584aac0a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 3ch], edx
        push 0ffffff38h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 77 A9 30 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa9
        __asm _emit 0x30
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 91 B1 FD FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 0a8h], 0
        ; Exact mapped bytes FF 15 10 43 89 58: call dword ptr [0x58894310]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 A3 80 BF 90 58: mov word ptr [0x5890bf80], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F B7 05 80 BF 90 58: movzx eax, word ptr [0x5890bf80]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 412h
        ; Exact mapped bytes 7F 30: jg 0x584aacaf
        __asm _emit 0x7f
        __asm _emit 0x30
        cmp dword ptr [ebp - 14h], 412h
        ; Exact mapped bytes 74 6A: je 0x584aacf2
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 404h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0dh
        ; Exact mapped bytes 0F 87 66 01 00 00: ja 0x584aae04
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx + 584aaee0h]
        ; Exact mapped bytes FF 24 85 D0 AE 4A 58: jmp dword ptr [eax*4 + 0x584aaed0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xae
        __asm _emit 0x4a
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 1004h
        ; Exact mapped bytes 7F 28: jg 0x584aace0
        __asm _emit 0x7f
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 1004h
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x584aad52
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 804h
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x584aad82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0c04h
        ; Exact mapped bytes 74 77: je 0x584aad52
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x584aae04
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 1042h
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x584aadd9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x584aae04
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 81h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x584aae04
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 80h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x584aae04
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 88h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x584aae04
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 2
        push 2
        push 0
        push 4
        push 86h
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 55: jmp 0x584aae04
        __asm _emit 0xeb
        __asm _emit 0x55
        push 0
        push 2
        push 2
        push 0
        push 4
        push 0
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 2B: jmp 0x584aae04
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 0
        push 2
        push 2
        push 0
        push 4
        push 0cch
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 10h
        ; Exact mapped bytes FF 15 D4 40 89 58: call dword ptr [0x588940d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a4h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 45: je 0x584aae5c
        __asm _emit 0x74
        __asm _emit 0x45
        push 10h
        ; Exact mapped bytes E8 E6 61 38 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x61
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 11: je 0x584aae3f
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B6 B2 30 00: call 0x587b60f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb2
        __asm _emit 0x30
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584aae46
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 44h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0b8h], 0
        push 28h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 0bch
        push eax
        ; Exact mapped bytes E8 7B 1F 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1f
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 108h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}

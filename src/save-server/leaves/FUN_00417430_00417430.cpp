// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417430 .. +0x4B0 bytes.
extern "C" __declspec(naked) void FUN_00417430_00417430() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b370h
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
        sub esp, 9ach
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 9b8h]
        mov ecx, 26bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 40h], 0ffffffffh
        mov dword ptr [ebp - 44h], 0ffffffffh
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov dword ptr [ebp - 940h], 0
        mov dword ptr [ebp - 944h], 0
        mov dword ptr [ebp - 948h], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 2ch
        ; Exact mapped bytes 74 07: je 0x4174ab
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 15 04 00 00: jmp 0x4178c0
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 46 DE 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 AC A2 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 B5 A5 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 9E A5 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 40h], -1
        ; Exact mapped bytes 0F 84 93 03 00 00: je 0x41789d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], -1
        ; Exact mapped bytes 0F 84 89 03 00 00: je 0x41789d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 48h], -1
        ; Exact mapped bytes 0F 84 7F 03 00 00: je 0x41789d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 78h
        lea eax, [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 65 9D FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 948h], 2ch
        mov eax, dword ptr [ebp - 948h]
        add eax, 78h
        mov dword ptr [ebp - 948h], eax
        mov ecx, dword ptr [ebp - 72h]
        and ecx, 0ffffh
        imul ecx, ecx, 500h
        mov edx, dword ptr [ebp - 948h]
        add edx, ecx
        mov dword ptr [ebp - 948h], edx
        mov eax, dword ptr [ebp - 70h]
        and eax, 0ffffh
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp - 948h]
        add ecx, eax
        mov dword ptr [ebp - 948h], ecx
        ; Exact mapped bytes 66 8B 55 90: mov dx, word ptr [ebp - 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x90
        ; Exact mapped bytes 66 89 55 DC: mov word ptr [ebp - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 66 8B 45 8E: mov ax, word ptr [ebp - 0x72]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x8e
        ; Exact mapped bytes 66 89 45 DE: mov word ptr [ebp - 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xde
        ; Exact mapped bytes 66 C7 45 E0 00 00: mov word ptr [ebp - 0x20], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 0D 28 04 67 00: movsx ecx, word ptr [0x670428]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 2ah
        push ecx
        push 670388h
        push 24h
        ; Exact mapped bytes E8 1B 4B 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 968h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 968h], 0
        ; Exact mapped bytes 74 1A: je 0x4175eb
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 948h]
        push edx
        mov ecx, dword ptr [ebp - 968h]
        ; Exact mapped bytes E8 0A A3 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 974h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4175f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 974h], 0
        mov eax, dword ptr [ebp - 974h]
        mov dword ptr [ebp - 964h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 964h]
        mov dword ptr [ebp - 94ch], ecx
        push 2ch
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 E5 99 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        push 78h
        lea eax, [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 D1 99 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 950h], 0
        ; Exact mapped bytes EB 0F: jmp 0x417654
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 950h]
        add ecx, 1
        mov dword ptr [ebp - 950h], ecx
        cmp dword ptr [ebp - 950h], 32h
        ; Exact mapped bytes 0F 8D 94 00 00 00: jge 0x4176f5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 950h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 E4 9F FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 954h], eax
        cmp dword ptr [ebp - 954h], -1
        ; Exact mapped bytes 74 67: je 0x4176f0
        __asm _emit 0x74
        __asm _emit 0x67
        push 500h
        lea edx, [ebp - 5c0h]
        push edx
        mov eax, dword ptr [ebp - 954h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 5C A2 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 254h], 0
        ; Exact mapped bytes 75 3D: jne 0x4176f0
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 5c0h]
        shr edx, 0ah
        and edx, 3fffffh
        cmp edx, dword ptr [ebp - 950h]
        ; Exact mapped bytes 75 26: jne 0x4176f0
        __asm _emit 0x75
        __asm _emit 0x26
        push 500h
        lea eax, [ebp - 5c0h]
        push eax
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 29 99 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 940h]
        add ecx, 1
        mov dword ptr [ebp - 940h], ecx
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x417645
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 958h], 0
        ; Exact mapped bytes EB 0F: jmp 0x417710
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 958h]
        add edx, 1
        mov dword ptr [ebp - 958h], edx
        cmp dword ptr [ebp - 958h], 64h
        ; Exact mapped bytes 0F 8D 8B 00 00 00: jge 0x4177a8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 958h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 28 9F FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 95ch], eax
        cmp dword ptr [ebp - 95ch], -1
        ; Exact mapped bytes 74 5E: je 0x4177a3
        __asm _emit 0x74
        __asm _emit 0x5e
        push 37ch
        lea eax, [ebp - 93ch]
        push eax
        mov ecx, dword ptr [ebp - 95ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 A0 A1 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 87ch], 0
        ; Exact mapped bytes 75 34: jne 0x4177a3
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 93ch]
        cmp eax, dword ptr [ebp - 958h]
        ; Exact mapped bytes 75 26: jne 0x4177a3
        __asm _emit 0x75
        __asm _emit 0x26
        push 37ch
        lea ecx, [ebp - 93ch]
        push ecx
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 76 98 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 944h]
        add edx, 1
        mov dword ptr [ebp - 944h], edx
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x417701
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 960h], 0
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 7B A1 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 960h], eax
        push 0
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 F4 A1 FE FF: call 0x4019c4
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 85 BC F6 FF FF: mov ax, word ptr [ebp - 0x944]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 DC: mov word ptr [ebp - 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 66 8B 8D C0 F6 FF FF: mov cx, word ptr [ebp - 0x940]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D DE: mov word ptr [ebp - 0x22], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xde
        ; Exact mapped bytes 66 C7 45 E0 00 00: mov word ptr [ebp - 0x20], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ch
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 0D 98 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 960h]
        push eax
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 B5 A1 FE FF: call 0x4019c4
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 1C A1 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 94ch]
        ; Exact mapped bytes E8 FB 9C FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 1
        push 8002d020h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 28 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 94ch], 0
        ; Exact mapped bytes 74 58: je 0x41789b
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 94ch]
        mov dword ptr [ebp - 970h], ecx
        mov edx, dword ptr [ebp - 970h]
        mov dword ptr [ebp - 96ch], edx
        cmp dword ptr [ebp - 96ch], 0
        ; Exact mapped bytes 74 23: je 0x417887
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 96ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 96ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 71 D5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 978h], eax
        ; Exact mapped bytes EB 0A: jmp 0x417891
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 978h], 0
        mov dword ptr [ebp - 94ch], 0
        ; Exact mapped bytes EB 1E: jmp 0x4178bb
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        push 2
        push 8002d020h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 28 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
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
        add esp, 9b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 16 D5 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd5
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

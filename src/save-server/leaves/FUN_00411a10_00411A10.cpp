// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411A10 .. +0x395 bytes.
extern "C" __declspec(naked) void FUN_00411a10_00411A10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ae60h
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
        sub esp, 0cch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0d8h]
        mov ecx, 33h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 20h], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        push 633f9ch
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6D 33 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40cc4h], 1
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 74 71: je 0x411b0a
        __asm _emit 0x74
        __asm _emit 0x71
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 C0 B7 68 00: call dword ptr [0x68b7c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 42 33 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F BF 15 80 03 67 00: movsx edx, word ptr [0x670380]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 0eh
        push edx
        push 6702e8h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 09 A6 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa6
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 20h], ecx
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F9 32 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 32 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 0D 80 03 67 00: movsx ecx, word ptr [0x670380]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 14h
        push ecx
        push 6702e8h
        push 24h
        ; Exact mapped bytes E8 B2 A5 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 84h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 18: je 0x411b52
        __asm _emit 0x74
        __asm _emit 0x18
        push 9c40h
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 A3 FD FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes EB 0A: jmp 0x411b5c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 80h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 40cc8h], ecx
        ; Exact mapped bytes 0F BF 15 80 03 67 00: movsx edx, word ptr [0x670380]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 15h
        push edx
        push 6702e8h
        push 0ffffh
        ; Exact mapped bytes E8 41 A5 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 8E 9D 01 00 00: jle 0x411d4b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x411cdb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0eh
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ebp - 18h]
        push edx
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 34 37 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx + 0eh]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 1B 37 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 36h]
        sub edx, 36h
        mov dword ptr [ebp - 74h], edx
        push 0eh
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 00 37 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 28h
        lea edx, [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 0eh
        push eax
        ; Exact mapped bytes E8 EB 36 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        lea ecx, [eax + edx + 36h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 36h
        push edx
        ; Exact mapped bytes E8 CD 36 05 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax + 36h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 68h], 0
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40cc4h]
        mov dword ptr [ebp - 6ch], ecx
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x411c76
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 78h]
        add edx, 1
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 78h]
        cmp eax, dword ptr [ebp - 74h]
        ; Exact mapped bytes 7D 14: jge 0x411c92
        __asm _emit 0x7d
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes 0F BE 51 36: movsx edx, byte ptr [ecx + 0x36]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 68h]
        add eax, edx
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB DB: jmp 0x411c6d
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 40cc4h]
        push eax
        push 633f80h
        ; Exact mapped bytes E8 6B E9 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        lea ecx, [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 40cc8h]
        ; Exact mapped bytes E8 49 F3 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40cc4h]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40cc4h], ecx
        ; Exact mapped bytes E9 D3 FE FF FF: jmp 0x411bae
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40cc8h]
        ; Exact mapped bytes E8 4F FC FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x411d4b
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 40cc8h]
        ; Exact mapped bytes E8 3D FC FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 40cc8h]
        ; Exact mapped bytes E8 19 F8 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40cc4h]
        sub ecx, 1
        push ecx
        push 80022b34h
        ; Exact mapped bytes E8 4C FD 11 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 AC 30 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CF F6 FE FF: call 0x40141a
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 18: je 0x411d69
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8ch], ecx
        mov edx, dword ptr [ebp - 8ch]
        push edx
        ; Exact mapped bytes E8 43 A7 0B 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 18: je 0x411d87
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        ; Exact mapped bytes E8 25 A7 0B 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
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
        add esp, 0d8h
        cmp ebp, esp
        ; Exact mapped bytes E8 4F 30 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

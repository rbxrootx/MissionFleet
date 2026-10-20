// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A5D0 .. +0x4E1 bytes.
extern "C" __declspec(naked) void FUN_0040a5d0_0040A5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 90h]
        mov ecx, 24h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0ffffffffh
        push 900h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 B3 B2 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 59 71 FF FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 A6 01 00 00: je 0x40a7d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 51 6C FF FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x40a7ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 63 01 00 00: jne 0x40a7c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 49 B2 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 EC 08 00 00: mov word ptr [ecx + 0x8ec], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 874h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 84h
        push ecx
        ; Exact mapped bytes E8 1C B2 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 18h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 9ch
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 A7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 9
        mov edx, dword ptr [ebp + 10h]
        add edx, 18h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 0b4h
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 A7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 800h
        mov edx, dword ptr [ebp + 10h]
        add edx, 39h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 0c4h
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DA A6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 18h
        mov edx, dword ptr [ebp + 10h]
        add edx, 21h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 84h
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 A6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 63310ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 8d4h
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
        ; Exact mapped bytes E8 8D A6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        push 900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 88 6E FF FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 32 B1 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 4
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 82 70 FF FF: call 0x40182f
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 128h
        ; Exact mapped bytes E8 80 69 FF FF: call 0x401140
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, 4
        ; Exact mapped bytes E9 D4 02 00 00: jmp 0x40aa9b
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, 1
        ; Exact mapped bytes E9 CD 02 00 00: jmp 0x40aa9b
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 C6 02 00 00: jmp 0x40aa9b
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 85 BA 02 00 00: jne 0x40aa99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 CE B0 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 110h]
        mov eax, dword ptr [edx + 134h]
        add eax, 190h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 C7 41 0C 00 00: mov word ptr [ecx + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 C7 40 0A 00 00: mov word ptr [eax + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 C7 42 08 00 00: mov word ptr [edx + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 C7 81 C8 08 00 00 00 00: mov word ptr [ecx + 0x8c8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 C7 80 C6 08 00 00 00 00: mov word ptr [eax + 0x8c6], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 66 C7 82 C4 08 00 00 00 00: mov word ptr [edx + 0x8c4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 EC 08 00 00: mov word ptr [ecx + 0x8ec], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 10h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x40a89f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 24: jge 0x40a8c9
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*8 + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + edx*8 + 18h], 0
        ; Exact mapped bytes EB CD: jmp 0x40a896
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov esi, esp
        push 18h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 9ch
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 05 A5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 9
        mov eax, dword ptr [ebp + 10h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 0b4h
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 A4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 800h
        mov eax, dword ptr [ebp + 10h]
        add eax, 39h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 0c4h
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 A4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 18h
        mov eax, dword ptr [ebp + 10h]
        add eax, 21h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 84h
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 93 A4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 8d4h
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
        ; Exact mapped bytes E8 6B A4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        push 900h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 E4 70 FF FF: call 0x401a87
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x40aa95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 63315ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 02 6C FF FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 E7 6B FF FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 CC 6B FF FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 B1 6B FF FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 96 6B FF FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 7B 6B FF FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 61 AE 05 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 4
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 B1 6D FF FF: call 0x40182f
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 128h
        ; Exact mapped bytes E8 AF 66 FF FF: call 0x401140
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, 4
        ; Exact mapped bytes EB 06: jmp 0x40aa9b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x40aa9b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop edi
        pop esi
        pop ebx
        add esp, 90h
        cmp ebp, esp
        ; Exact mapped bytes E8 45 A3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

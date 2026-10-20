// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424840 .. +0x44F bytes.
extern "C" __declspec(naked) void FUN_00424840_00424840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 88h]
        mov ecx, 22h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3A C8 FD FF: call 0x4010b4
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x424885
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, 2
        ; Exact mapped bytes E9 F4 03 00 00: jmp 0x424c79
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0ffffffffh
        push 888h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 21 10 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 C7 CE FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 A9 01 00 00: je 0x424a6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 BF C9 FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x424a63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 66 01 00 00: jne 0x424a5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [eax + 880h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx + 884h], 0
        push 874h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes E8 7B 0F 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 24h
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 89 04 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 9
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 3ch
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 04 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 800h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 39h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 4ch
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 42 04 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 21h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 20 04 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        push 63310ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 85ch
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
        ; Exact mapped bytes E8 F8 03 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        push 888h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 F3 CB FD FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        push 8
        push 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 9D 0E 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x04
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
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 ED CD FD FF: call 0x40182f
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 EB C6 FD FF: call 0x401140
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov al, 4
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x424c79
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, 1
        ; Exact mapped bytes E9 16 02 00 00: jmp 0x424c79
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x424c79
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 85 03 02 00 00: jne 0x424c77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 39 0E 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 114h]
        mov eax, dword ptr [edx + 134h]
        add eax, 4e20h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx + 4], eax
        mov esi, esp
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 24h
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1E 03 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 9
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 3ch
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC 02 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 800h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 39h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 4ch
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D7 02 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 21h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 0ch
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 02 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        push 63310ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 85ch
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
        ; Exact mapped bytes E8 8D 02 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        push 888h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 06 CF FD FF: call 0x401a87
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x424c73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 63315ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 24 CA FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 09 CA FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 EE C9 FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 D3 C9 FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 B8 C9 FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 9D C9 FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 8
        push 0
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 83 0C 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 4
        push edx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 D3 CB FD FF: call 0x40182f
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 D1 C4 FD FF: call 0x401140
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov al, 4
        ; Exact mapped bytes EB 06: jmp 0x424c79
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x424c79
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop edi
        pop esi
        pop ebx
        add esp, 88h
        cmp ebp, esp
        ; Exact mapped bytes E8 67 01 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

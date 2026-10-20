// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041B1F0 .. +0x52A bytes.
extern "C" __declspec(naked) void FUN_0041b1f0_0041B1F0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 12d0h
        ; Exact mapped bytes E8 A3 AD 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 12d0h]
        mov ecx, 4b4h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 31h
        push 0
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 9C A6 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 8C A6 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        push 0
        lea edx, [ebp - 80h]
        push edx
        ; Exact mapped bytes E8 7C A6 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        lea ecx, [ebp - 50h]
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
        ; Exact mapped bytes E8 8A 9B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 39h], 0
        push 30h
        mov esi, esp
        lea edx, [ebp - 50h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 71 9B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 70 A0 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 F9 61 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 EE 61 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        push 900h
        push 0
        lea ecx, [ebp - 990h]
        push ecx
        ; Exact mapped bytes E8 04 A6 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        push 0
        lea edx, [ebp - 1218h]
        push edx
        ; Exact mapped bytes E8 EE A5 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 121ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1220h], eax
        push 18h
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 37h]
        push edx
        ; Exact mapped bytes E8 04 A0 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 1220h], 0
        ; Exact mapped bytes 75 0D: jne 0x41b315
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 121ch], 0
        ; Exact mapped bytes 0F 84 C3 03 00 00: je 0x41b6d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1220h], 0
        ; Exact mapped bytes 0F 85 DF 01 00 00: jne 0x41b501
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 121ch]
        push eax
        lea ecx, [ebp - 1278h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 E7 5F FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 88h], edx
        mov dword ptr [ebp - 84h], eax
        lea ecx, [ebp - 1280h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 00 67 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 B3 65 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x41b3ae
        __asm _emit 0x74
        __asm _emit 0x31
        mov byte ptr [ebp - 38h], 0
        push 0
        push 31h
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 1220h]
        push ecx
        mov edx, dword ptr [ebp - 121ch]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E ED 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 56 03 00 00: jmp 0x41b704
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 1E 5D FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 1224h], eax
        push 900h
        lea ecx, [ebp - 990h]
        push ecx
        mov edx, dword ptr [ebp - 1224h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 BB 5E FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x41b4fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 990h], 0
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x41b4fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 68h]
        push ecx
        lea edx, [ebp - 90ch]
        push edx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DD 99 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x41b4fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 1224h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c84h]
        ; Exact mapped bytes E8 B0 61 FE FF: call 0x4015eb
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x41b4fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a4h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 7E 12: jle 0x41b465
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 85 5C FF FF FF: mov ax, word ptr [ebp - 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 5C FF FF FF: mov word ptr [ebp - 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 900h
        lea ecx, [ebp - 990h]
        push ecx
        mov edx, dword ptr [ebp - 1224h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 83 61 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea ecx, [ebp - 1248h]
        push ecx
        ; Exact mapped bytes E8 2A A4 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 1248h]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 2C 62 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        lea ecx, [ebp - 80h]
        push ecx
        lea edx, [ebp - 1fh]
        push edx
        ; Exact mapped bytes E8 38 9E 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 38h], 1
        push 0
        push 31h
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 1220h]
        push ecx
        mov edx, dword ptr [ebp - 121ch]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 EC 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x41b704
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x41b6d8
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1220h]
        push eax
        lea ecx, [ebp - 1288h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 08 5E FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 90h], edx
        mov dword ptr [ebp - 8ch], eax
        lea ecx, [ebp - 1290h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 21 65 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 90h]
        push edx
        ; Exact mapped bytes E8 D4 63 FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x41b58d
        __asm _emit 0x74
        __asm _emit 0x31
        mov byte ptr [ebp - 38h], 0
        push 0
        push 31h
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 1220h]
        push ecx
        mov edx, dword ptr [ebp - 121ch]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F EB 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x41b704
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 3F 5B FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 124ch], eax
        push 888h
        lea ecx, [ebp - 1218h]
        push ecx
        mov edx, dword ptr [ebp - 124ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 DC 5C FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x41b6d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1218h], 0
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x41b6d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 68h]
        push ecx
        lea edx, [ebp - 120ch]
        push edx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE 97 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x41b6d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 124ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c88h]
        ; Exact mapped bytes E8 80 5B FE FF: call 0x40119a
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x41b6d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9a4h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 7E 12: jle 0x41b644
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 85 5C F6 FF FF: mov ax, word ptr [ebp - 0x9a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 5C F6 FF FF: mov word ptr [ebp - 0x9a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 888h
        lea ecx, [ebp - 1218h]
        push ecx
        mov edx, dword ptr [ebp - 124ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 A4 5F FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea ecx, [ebp - 1270h]
        push ecx
        ; Exact mapped bytes E8 4B A2 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 1270h]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 4D 60 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        lea ecx, [ebp - 80h]
        push ecx
        lea edx, [ebp - 1fh]
        push edx
        ; Exact mapped bytes E8 59 9C 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 38h], 1
        push 0
        push 31h
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 1220h]
        push ecx
        mov edx, dword ptr [ebp - 121ch]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 EA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x41b704
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov byte ptr [ebp - 38h], 0
        push 0
        push 31h
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 1220h]
        push ecx
        mov edx, dword ptr [ebp - 121ch]
        push edx
        push 80020f0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 EA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 12d0h
        cmp ebp, esp
        ; Exact mapped bytes E8 DC 96 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x96
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

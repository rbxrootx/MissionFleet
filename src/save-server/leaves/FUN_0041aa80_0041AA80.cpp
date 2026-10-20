// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AA80 .. +0x5EC bytes.
extern "C" __declspec(naked) void FUN_0041aa80_0041AA80() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 12d8h
        ; Exact mapped bytes E8 13 B5 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 12d8h]
        mov ecx, 4b6h
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
        ; Exact mapped bytes E8 0C AE 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 FC AD 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        push 0
        lea edx, [ebp - 80h]
        push edx
        ; Exact mapped bytes E8 EC AD 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xad
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
        ; Exact mapped bytes E8 FA A2 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa2
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
        ; Exact mapped bytes E8 E1 A2 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 E0 A7 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 69 69 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 5E 69 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push 900h
        push 0
        lea ecx, [ebp - 990h]
        push ecx
        ; Exact mapped bytes E8 74 AD 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        push 0
        lea edx, [ebp - 1218h]
        push edx
        ; Exact mapped bytes E8 5E AD 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xad
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
        ; Exact mapped bytes E8 74 A7 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 1220h], 0
        ; Exact mapped bytes 75 0D: jne 0x41aba5
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 121ch], 0
        ; Exact mapped bytes 0F 84 85 04 00 00: je 0x41b02a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1220h], 0
        ; Exact mapped bytes 0F 85 40 02 00 00: jne 0x41adf2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 121ch]
        push eax
        lea ecx, [ebp - 1280h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 57 67 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 88h], edx
        mov dword ptr [ebp - 84h], eax
        lea ecx, [ebp - 1288h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        ; Exact mapped bytes E8 70 6E FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 23 6D FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x41ac3e
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
        push 80020f09h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE F4 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 18 04 00 00: jmp 0x41b056
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 8E 64 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x64
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
        ; Exact mapped bytes E8 2B 66 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 71 01 00 00: jne 0x41aded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 990h], 0
        ; Exact mapped bytes 0F 85 64 01 00 00: jne 0x41aded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
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
        ; Exact mapped bytes E8 4D A1 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x41aded
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 BE 6A FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1228h], eax
        cmp dword ptr [ebp - 1228h], -1
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x41aded
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 1224h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c84h]
        ; Exact mapped bytes E8 56 6D FE FF: call 0x401a46
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x41aded
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8D 5C FF FF FF: mov cx, word ptr [ebp - 0xa4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 5C FF FF FF: mov word ptr [ebp - 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 900h
        lea edx, [ebp - 990h]
        push edx
        mov eax, dword ptr [ebp - 1224h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 DE 68 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea edx, [ebp - 124ch]
        push edx
        ; Exact mapped bytes E8 85 AB 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 121ch]
        mov dword ptr [ebp - 124ch], eax
        mov ecx, dword ptr [ebp - 1220h]
        mov dword ptr [ebp - 1248h], ecx
        mov edx, dword ptr [ebp - 8d0h]
        mov dword ptr [ebp - 1240h], edx
        mov esi, esp
        push 9
        lea eax, [ebp - 8dch]
        push eax
        lea ecx, [ebp - 123ch]
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F A0 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 BC ED FF FF 04 00: mov word ptr [ebp - 0x1244], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 124ch]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 3B 69 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        lea ecx, [ebp - 80h]
        push ecx
        lea edx, [ebp - 1fh]
        push edx
        ; Exact mapped bytes E8 47 A5 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa5
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
        push 80020f09h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F F3 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 69 02 00 00: jmp 0x41b056
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 02 00 00: jmp 0x41b02a
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1220h]
        push eax
        lea ecx, [ebp - 1290h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 17 65 FE FF: call 0x401325
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 90h], edx
        mov dword ptr [ebp - 8ch], eax
        lea ecx, [ebp - 1298h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 30 6C FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 90h]
        push edx
        ; Exact mapped bytes E8 E3 6A FE FF: call 0x401924
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x41ae7e
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
        push 80020f09h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE F2 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 D8 01 00 00: jmp 0x41b056
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 4E 62 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 1250h], eax
        push 888h
        lea ecx, [ebp - 1218h]
        push ecx
        mov edx, dword ptr [ebp - 1250h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 EB 63 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x41b02a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1218h], 0
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x41b02a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
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
        ; Exact mapped bytes E8 0D 9F 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x41b02a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 7E 68 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1254h], eax
        cmp dword ptr [ebp - 1254h], -1
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x41b02a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 1250h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c88h]
        ; Exact mapped bytes E8 CA 61 FE FF: call 0x4010fa
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x41b02a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8D 5C F6 FF FF: mov cx, word ptr [ebp - 0x9a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 5C F6 FF FF: mov word ptr [ebp - 0x9a4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 888h
        lea edx, [ebp - 1218h]
        push edx
        mov eax, dword ptr [ebp - 1250h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 9E 66 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        push 24h
        push 0
        lea edx, [ebp - 1278h]
        push edx
        ; Exact mapped bytes E8 45 A9 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 121ch]
        mov dword ptr [ebp - 1278h], eax
        mov ecx, dword ptr [ebp - 1220h]
        mov dword ptr [ebp - 1274h], ecx
        mov edx, dword ptr [ebp - 11d0h]
        mov dword ptr [ebp - 126ch], edx
        mov esi, esp
        push 9
        lea eax, [ebp - 11dch]
        push eax
        lea ecx, [ebp - 1268h]
        push ecx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2F 9E 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 90 ED FF FF 01 00: mov word ptr [ebp - 0x1270], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp - 1278h]
        push eax
        lea ecx, [ebp - 80h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40c78h]
        ; Exact mapped bytes E8 FB 66 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        lea ecx, [ebp - 80h]
        push ecx
        lea edx, [ebp - 1fh]
        push edx
        ; Exact mapped bytes E8 07 A3 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa3
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
        push 80020f09h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF F0 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x41b056
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
        push 80020f09h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 F0 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 12d8h
        cmp ebp, esp
        ; Exact mapped bytes E8 8A 9D 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9d
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042AF69 .. +0x618 bytes.
extern "C" __declspec(naked) void FUN_0042af69_0042AF69() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 20ch]
        mov ecx, 83h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 200h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x42afa4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C3 05 00 00: jmp 0x42b567
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 0F 85 5A 05 00 00: jne 0x42b512
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 204h], edx
        cmp dword ptr [ebp - 204h], 8001000fh
        ; Exact mapped bytes 77 3B: ja 0x42b00b
        __asm _emit 0x77
        __asm _emit 0x3b
        cmp dword ptr [ebp - 204h], 8001000fh
        ; Exact mapped bytes 0F 84 16 05 00 00: je 0x42b4f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 204h]
        add eax, 7ffeffffh
        mov dword ptr [ebp - 204h], eax
        cmp dword ptr [ebp - 204h], 6
        ; Exact mapped bytes 0F 87 12 05 00 00: ja 0x42b510
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes FF 24 8D 81 B5 42 00: jmp dword ptr [ecx*4 + 0x42b581]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0xb5
        __asm _emit 0x42
        __asm _emit 0x00
        cmp dword ptr [ebp - 204h], 80010109h
        ; Exact mapped bytes 74 25: je 0x42b03c
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 204h], 8001010ah
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x42b0c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 204h], 8001010bh
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x42b14f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D4 04 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 200h]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ebp - 0d4h], eax
        mov dword ptr [ebp - 0d0h], 0
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 D0 11 00 00: call 0x42c240
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 D4 11 00 00: call 0x42c260
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 4], 0
        push 0
        push 0d8h
        lea ecx, [ebp - 0d8h]
        push ecx
        push 0
        push 80020010h
        push 80020010h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 5F F0 FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 48 04 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 200h]
        mov eax, dword ptr [edx + 44h]
        and eax, 0f0000000h
        cmp eax, 20000000h
        ; Exact mapped bytes 75 50: jne 0x42b12d
        __asm _emit 0x75
        __asm _emit 0x50
        push 40h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 6ch
        push ecx
        lea edx, [ebp - 11ch]
        push edx
        ; Exact mapped bytes E8 0B A2 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 0ddh], 0
        mov dword ptr [ebp - 0dch], 0
        push 0
        push 44h
        lea eax, [ebp - 11ch]
        push eax
        push 0
        push 8001010ah
        push 80020012h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 F7 EF FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x42b14a
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 8001010ah
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 D8 EF FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C1 03 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 200h]
        mov edx, dword ptr [ecx + 44h]
        and edx, 0f0000000h
        cmp edx, 10000000h
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x42b1fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], 0
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 9E 13 00 00: call 0x42c520
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1f0h], ecx
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 9B 10 00 00: call 0x42c240
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 1e8h], eax
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 9F 10 00 00: call 0x42c260
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 1e4h], eax
        mov dword ptr [ebp - 120h], 0
        push 0
        push 0d8h
        lea edx, [ebp - 1f4h]
        push edx
        push 0
        push 8001010bh
        push 80020011h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 27 EF FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1D: jmp 0x42b21a
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 0
        push 0
        push 0
        push 8001010bh
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 08 EF FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F1 02 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 8002h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 D9 0F 00 00: call 0x42c210
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8002h
        push 80010100h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 C9 EE FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 02 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1f8h], edx
        mov esi, esp
        mov eax, dword ptr [ebp - 1f8h]
        push eax
        ; Exact mapped bytes FF 15 BC BF 68 00: call dword ptr [0x68bfbc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 73 9B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        push 40h
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        add edx, 6ch
        push edx
        ; Exact mapped bytes E8 6B A0 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 200h]
        mov byte ptr [eax + 0abh], 0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x42b350
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 57 10 00 00: call 0x42c320
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 208h], eax
        mov ecx, dword ptr [ebp - 208h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 208h]
        ; Exact mapped bytes FF 92 DC 00 00 00: call dword ptr [edx + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 9B 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x42b350
        __asm _emit 0x74
        __asm _emit 0x62
        push 0
        push 0
        push 0
        push 8003h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 17 EE FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ffffh
        push 46ch
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 41 5F FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 200h]
        mov dword ptr [eax + 0ach], 3
        push 0
        push 8000h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 C2 0E 00 00: call 0x42c210
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x42b394
        __asm _emit 0xeb
        __asm _emit 0x44
        mov dword ptr [ebp - 1fch], 6706b4h
        push 0
        mov esi, esp
        mov ecx, dword ptr [ebp - 1fch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7E 9A 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp - 1fch]
        push edx
        push 8003h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 8E ED FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 8005h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 80010100h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 67 ED FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 8005h
        mov ecx, dword ptr [ebp - 200h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 3D 0E 00 00: call 0x42c210
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x42b510
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 200h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x42b481
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 200h]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 8A 0F 00 00: call 0x42c380
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x42b481
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 200h]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 13 0F 00 00: call 0x42c320
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 87 61 FD FF: call 0x40159b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 E4 EA FF FF: call 0x429f04
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x42b45d
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 200h]
        mov ecx, dword ptr [edx + 4ch]
        ; Exact mapped bytes E8 EE 0E 00 00: call 0x42c320
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 67 0F 00 00: call 0x42c3a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8006h
        push 80000002h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 C7 EC FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x42b47f
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 8006h
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 A3 EC FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x42b4a3
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 8006h
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 7F EC FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 6B: jmp 0x42b510
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x42b4d2
        __asm _emit 0x74
        __asm _emit 0x24
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 8004h
        push 80000002h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 52 EC FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x42b4f4
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 8004h
        push 80000003h
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 2E EC FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x42b510
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 200h]
        ; Exact mapped bytes E8 12 EC FF FF: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 55: jmp 0x42b567
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20ch], eax
        cmp dword ptr [ebp - 20ch], 80020300h
        ; Exact mapped bytes 74 02: je 0x42b52c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3B: jmp 0x42b567
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 200h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 2F: je 0x42b567
        __asm _emit 0x74
        __asm _emit 0x2f
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 200h]
        push ecx
        mov edx, dword ptr [ebp - 200h]
        mov ecx, dword ptr [edx + 4ch]
        mov eax, dword ptr [ebp - 200h]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        cmp esi, esp
        ; Exact mapped bytes E8 89 98 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 20ch
        cmp ebp, esp
        ; Exact mapped bytes E8 75 98 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

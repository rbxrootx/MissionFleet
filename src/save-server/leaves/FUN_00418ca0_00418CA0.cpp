// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418CA0 .. +0xA68 bytes.
extern "C" __declspec(naked) void FUN_00418ca0_00418CA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b3b0h
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
        mov eax, 144ch
        ; Exact mapped bytes E8 DE D2 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1458h]
        mov ecx, 513h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 75 8D FE FF: call 0x401a5f
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 67 8D FE FF: call 0x401a5f
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 88 FE FF: call 0x401587
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x418d12
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 634168h
        ; Exact mapped bytes E8 CF DD 0D 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 85 FE FF: call 0x40122b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x418d2c
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 0
        push 634144h
        ; Exact mapped bytes E8 B5 DD 0D 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 05 2C 04 67 00: movsx eax, word ptr [0x67042c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 13h
        push eax
        push 670388h
        push 24h
        ; Exact mapped bytes E8 90 33 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x33
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 13c4h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 13c4h], 0
        ; Exact mapped bytes 74 18: je 0x418d74
        __asm _emit 0x74
        __asm _emit 0x18
        push 2625a00h
        mov ecx, dword ptr [ebp - 13c4h]
        ; Exact mapped bytes E8 81 8B FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1414h], eax
        ; Exact mapped bytes EB 0A: jmp 0x418d7e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1414h], 0
        mov ecx, dword ptr [ebp - 1414h]
        mov dword ptr [ebp - 13c0h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 13c0h]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 20 88 FE FF: call 0x4015c8
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 0F 88 FE FF: call 0x4015c8
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 8
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 82 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 130ch]
        ; Exact mapped bytes E8 C2 86 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 1314h]
        ; Exact mapped bytes E8 B7 86 FE FF: call 0x401497
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 13cch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 1B 86 FE FF: call 0x401410
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 130ch], edx
        mov dword ptr [ebp - 1308h], eax
        lea ecx, [ebp - 13d4h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 49 8C FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1314h], edx
        mov dword ptr [ebp - 1310h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cc8h]
        ; Exact mapped bytes E8 F9 8A FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40cc8h]
        ; Exact mapped bytes E8 D2 86 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc8h]
        ; Exact mapped bytes E8 D3 8A FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        cdq
        and edx, 0fh
        add eax, edx
        sar eax, 4
        push eax
        push 80022b34h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 12 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1314h]
        push ecx
        lea edx, [ebp - 130ch]
        push edx
        ; Exact mapped bytes E8 E1 84 FE FF: call 0x401370
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 08 04 00 00: je 0x4192a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 900h
        push 0
        lea eax, [ebp - 91ch]
        push eax
        ; Exact mapped bytes E8 0E CA 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0ech
        push 0
        lea ecx, [ebp - 1290h]
        push ecx
        ; Exact mapped bytes E8 F8 C9 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 130ch]
        ; Exact mapped bytes E8 01 82 FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 1318h], edx
        push 900h
        lea eax, [ebp - 91ch]
        push eax
        mov ecx, dword ptr [ebp - 1318h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 9E 83 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 918h]
        mov dword ptr [ebp - 1290h], eax
        ; Exact mapped bytes 66 8B 8D F0 F6 FF FF: mov cx, word ptr [ebp - 0x910]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 78 ED FF FF: mov word ptr [ebp - 0x1288], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 95 EC F6 FF FF: mov dx, word ptr [ebp - 0x914]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 74 ED FF FF: mov word ptr [ebp - 0x128c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 85 EE F6 FF FF: mov ax, word ptr [ebp - 0x912]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 76 ED FF FF: mov word ptr [ebp - 0x128a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 85ch]
        mov dword ptr [ebp - 11d4h], ecx
        lea edx, [ebp - 85ch]
        push edx
        lea eax, [ebp - 918h]
        push eax
        lea ecx, [ebp - 13dch]
        ; Exact mapped bytes E8 44 82 FE FF: call 0x40119f
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 13e8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 48h]
        add ecx, 40c98h
        ; Exact mapped bytes E8 5F 85 FE FF: call 0x4014d3
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 85ch]
        mov dword ptr [ebp - 11d4h], eax
        push 18h
        lea ecx, [ebp - 48h]
        push ecx
        lea edx, [ebp - 11c0h]
        push edx
        ; Exact mapped bytes E8 6E C3 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 880h]
        push eax
        push 63310ch
        lea ecx, [ebp - 11f8h]
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
        ; Exact mapped bytes E8 36 BE 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 868h]
        push edx
        push 63310ch
        lea eax, [ebp - 11e0h]
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
        ; Exact mapped bytes E8 11 BE 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 898h]
        push ecx
        push 63310ch
        lea edx, [ebp - 1210h]
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
        ; Exact mapped bytes E8 EC BD 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 91ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c84h]
        ; Exact mapped bytes E8 FC 85 FE FF: call 0x401618
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 90ch]
        mov dword ptr [ebp - 1284h], eax
        mov dword ptr [ebp - 131ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x419043
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 131ch]
        add ecx, 1
        mov dword ptr [ebp - 131ch], ecx
        mov edx, dword ptr [ebp - 131ch]
        cmp edx, dword ptr [ebp - 90ch]
        ; Exact mapped bytes 7D 36: jge 0x419087
        __asm _emit 0x7d
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 131ch]
        mov ecx, dword ptr [ebp - 131ch]
        mov edx, dword ptr [ebp + ecx*8 - 908h]
        mov dword ptr [ebp + eax*8 - 1280h], edx
        mov eax, dword ptr [ebp - 131ch]
        mov ecx, dword ptr [ebp - 131ch]
        mov edx, dword ptr [ebp + ecx*8 - 904h]
        mov dword ptr [ebp + eax*8 - 127ch], edx
        ; Exact mapped bytes EB AD: jmp 0x419034
        __asm _emit 0xeb
        __asm _emit 0xad
        ; Exact mapped bytes 66 8B 45 AC: mov ax, word ptr [ebp - 0x54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 66 89 85 34 EE FF FF: mov word ptr [ebp - 0x11cc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D AA: mov cx, word ptr [ebp - 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xaa
        ; Exact mapped bytes 66 89 8D 32 EE FF FF: mov word ptr [ebp - 0x11ce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 A8: mov dx, word ptr [ebp - 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 66 89 95 30 EE FF FF: mov word ptr [ebp - 0x11d0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 11c8h], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 11c4h], ecx
        lea edx, [ebp - 1318h]
        push edx
        lea eax, [ebp - 91ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 25 8A FE FF: call 0x401af5
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D D0: mov cx, word ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 8D 58 EE FF FF: mov word ptr [ebp - 0x11a8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ech
        lea edx, [ebp - 1290h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1B 7F FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        push 0
        lea eax, [ebp - 1334h]
        push eax
        ; Exact mapped bytes E8 C1 C7 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 24h
        push 0
        lea ecx, [ebp - 1358h]
        push ecx
        ; Exact mapped bytes E8 AE C7 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 135ch], 0
        push 1
        mov edx, dword ptr [ebp - 1318h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 65 89 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1360h], eax
        push -1
        mov ecx, dword ptr [ebp - 1360h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 0B 85 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1364h], eax
        ; Exact mapped bytes 66 C7 85 98 EC FF FF 00 00: mov word ptr [ebp - 0x1368], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 131ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x41917d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 131ch]
        add eax, 1
        mov dword ptr [ebp - 131ch], eax
        cmp dword ptr [ebp - 1364h], -1
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x419262
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 131ch]
        push ecx
        mov edx, dword ptr [ebp - 1360h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 B8 84 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1364h], eax
        cmp dword ptr [ebp - 1364h], -1
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x41925d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        lea ecx, [ebp - 1358h]
        push ecx
        mov edx, dword ptr [ebp - 1364h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 2F 87 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 135ch], eax
        cmp dword ptr [ebp - 135ch], 0
        ; Exact mapped bytes 74 77: je 0x41925d
        __asm _emit 0x74
        __asm _emit 0x77
        cmp dword ptr [ebp - 1358h], 0
        ; Exact mapped bytes 75 6E: jne 0x41925d
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes 66 8B 8D 98 EC FF FF: mov cx, word ptr [ebp - 0x1368]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 98 EC FF FF: mov word ptr [ebp - 0x1368], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 18h
        push 0
        lea edx, [ebp - 1334h]
        push edx
        ; Exact mapped bytes E8 AF C6 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 1354h]
        push eax
        lea ecx, [ebp - 1334h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BF BB 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1364h]
        push edx
        lea eax, [ebp - 1334h]
        push eax
        push 634108h
        ; Exact mapped bytes E8 CC 73 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        lea ecx, [ebp - 1334h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AD 7D FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C FF FF FF: jmp 0x41916e
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 95 98 EC FF FF: mov dx, word ptr [ebp - 0x1368]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 55 D0: mov word ptr [ebp - 0x30], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xd0
        push 900h
        lea eax, [ebp - 91ch]
        push eax
        mov ecx, dword ptr [ebp - 1318h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 7B 83 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea eax, [ebp - 13f0h]
        push eax
        lea ecx, [ebp - 130ch]
        ; Exact mapped bytes E8 EF 7D FE FF: call 0x401091
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 FB FF FF: jmp 0x418e7c
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 13f8h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 54 81 FE FF: call 0x401410
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 130ch], edx
        mov dword ptr [ebp - 1308h], eax
        lea ecx, [ebp - 1400h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 82 87 FE FF: call 0x401a64
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1314h], edx
        mov dword ptr [ebp - 1310h], eax
        lea ecx, [ebp - 1314h]
        push ecx
        lea edx, [ebp - 130ch]
        push edx
        ; Exact mapped bytes E8 6A 80 FE FF: call 0x401370
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 50 03 00 00: je 0x419666
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        push 0
        lea eax, [ebp - 11a4h]
        push eax
        ; Exact mapped bytes E8 97 C5 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 74h
        push 0
        lea ecx, [ebp - 1304h]
        push ecx
        ; Exact mapped bytes E8 84 C5 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 130ch]
        ; Exact mapped bytes E8 8D 7D FE FF: call 0x4010d7
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 136ch], edx
        push 888h
        lea eax, [ebp - 11a4h]
        push eax
        mov ecx, dword ptr [ebp - 136ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 2A 7F FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 119ch]
        mov dword ptr [ebp - 1300h], eax
        mov ecx, dword ptr [ebp - 11a0h]
        mov dword ptr [ebp - 1304h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 11a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c88h]
        ; Exact mapped bytes E8 0F 84 FE FF: call 0x4017b7
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 115ch]
        mov dword ptr [ebp - 12c0h], eax
        push 18h
        lea ecx, [ebp - 948h]
        push ecx
        lea edx, [ebp - 12ach]
        push edx
        ; Exact mapped bytes E8 37 BF 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 1180h]
        push eax
        push 63310ch
        lea ecx, [ebp - 12e4h]
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
        ; Exact mapped bytes E8 FF B9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 1168h]
        push edx
        push 63310ch
        lea eax, [ebp - 12cch]
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
        ; Exact mapped bytes E8 DA B9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 1198h]
        push ecx
        push 63310ch
        lea edx, [ebp - 12fch]
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
        ; Exact mapped bytes E8 B5 B9 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 AC F6 FF FF: mov ax, word ptr [ebp - 0x954]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 48 ED FF FF: mov word ptr [ebp - 0x12b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D AA F6 FF FF: mov cx, word ptr [ebp - 0x956]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 46 ED FF FF: mov word ptr [ebp - 0x12ba], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 95 A8 F6 FF FF: mov dx, word ptr [ebp - 0x958]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 44 ED FF FF: mov word ptr [ebp - 0x12bc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 950h]
        mov dword ptr [ebp - 12b4h], eax
        mov ecx, dword ptr [ebp - 94ch]
        mov dword ptr [ebp - 12b0h], ecx
        lea edx, [ebp - 136ch]
        push edx
        lea eax, [ebp - 11a4h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 80 FE FF: call 0x401573
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D D0 F6 FF FF: mov cx, word ptr [ebp - 0x930]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 6C ED FF FF: mov word ptr [ebp - 0x1294], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push 74h
        lea edx, [ebp - 1304h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 58 7B FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 18h
        push 0
        lea eax, [ebp - 1384h]
        push eax
        ; Exact mapped bytes E8 FE C3 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 24h
        push 0
        lea ecx, [ebp - 13a8h]
        push ecx
        ; Exact mapped bytes E8 EB C3 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 13ach], 0
        push 1
        mov edx, dword ptr [ebp - 136ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 A2 85 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 13b0h], eax
        push -1
        mov ecx, dword ptr [ebp - 13b0h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 48 81 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 13b4h], eax
        ; Exact mapped bytes 66 C7 85 48 EC FF FF 00 00: mov word ptr [ebp - 0x13b8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 13bch], 0
        ; Exact mapped bytes EB 0F: jmp 0x419540
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 13bch]
        add eax, 1
        mov dword ptr [ebp - 13bch], eax
        cmp dword ptr [ebp - 13b4h], -1
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x41961e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13bch]
        push ecx
        mov edx, dword ptr [ebp - 13b0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 F5 80 FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 13b4h], eax
        cmp dword ptr [ebp - 13b4h], -1
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x419619
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        lea ecx, [ebp - 13a8h]
        push ecx
        mov edx, dword ptr [ebp - 13b4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 6C 83 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 13ach], eax
        cmp dword ptr [ebp - 13ach], 0
        ; Exact mapped bytes 74 70: je 0x419619
        __asm _emit 0x74
        __asm _emit 0x70
        cmp dword ptr [ebp - 13a8h], 0
        ; Exact mapped bytes 75 67: jne 0x419619
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 66 8B 8D 48 EC FF FF: mov cx, word ptr [ebp - 0x13b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 8D 48 EC FF FF: mov word ptr [ebp - 0x13b8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 18h
        push 0
        lea edx, [ebp - 1384h]
        push edx
        ; Exact mapped bytes E8 EC C2 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        lea eax, [ebp - 13a4h]
        push eax
        lea ecx, [ebp - 1384h]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC B7 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 1384h]
        push edx
        push 6340d8h
        ; Exact mapped bytes E8 10 70 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        push 18h
        lea eax, [ebp - 1384h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F1 79 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x419531
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D 48 EC FF FF: mov cx, word ptr [ebp - 0x13b8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D D0 F6 FF FF: mov word ptr [ebp - 0x930], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 888h
        lea edx, [ebp - 11a4h]
        push edx
        mov eax, dword ptr [ebp - 136ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 BC 7F FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea edx, [ebp - 1408h]
        push edx
        lea ecx, [ebp - 130ch]
        ; Exact mapped bytes E8 30 7A FE FF: call 0x401091
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 8D FC FF FF: jmp 0x4192f3
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C8 82 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AA 7E FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 0
        push 8002a001h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 97 0A 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 52: je 0x4196e3
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1410h], eax
        mov ecx, dword ptr [ebp - 1410h]
        mov dword ptr [ebp - 140ch], ecx
        cmp dword ptr [ebp - 140ch], 0
        ; Exact mapped bytes 74 23: je 0x4196d2
        __asm _emit 0x74
        __asm _emit 0x23
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 140ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 140ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 26 B7 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1418h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4196dc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1418h], 0
        mov dword ptr [ebp - 14h], 0
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
        add esp, 1458h
        cmp ebp, esp
        ; Exact mapped bytes E8 EE B6 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb6
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

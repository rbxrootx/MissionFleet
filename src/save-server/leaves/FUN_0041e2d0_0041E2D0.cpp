// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E2D0 .. +0x47D bytes.
extern "C" __declspec(naked) void FUN_0041e2d0_0041E2D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b4e4h
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
        mov eax, 12a8h
        ; Exact mapped bytes E8 AE 7C 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 12b4h]
        mov ecx, 4aah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 63310ch
        lea ecx, [ebp - 28h]
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
        ; Exact mapped bytes E8 C5 6A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 11h], 0
        push 839h
        mov esi, esp
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A9 6A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 1]
        push edx
        lea eax, [ebp - 864h]
        push eax
        ; Exact mapped bytes E8 A5 6F 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea edx, [ebp - 864h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40c88h]
        ; Exact mapped bytes E8 08 33 FE FF: call 0x401686
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 868h], al
        mov eax, dword ptr [ebp - 868h]
        and eax, 0ffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x41e424
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        lea ecx, [ebp - 88ch]
        ; Exact mapped bytes E8 48 35 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov esi, esp
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 6A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6a
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        lea ecx, [ebp - 88ch]
        ; Exact mapped bytes E8 38 2C FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 88ch]
        ; Exact mapped bytes E8 59 35 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 88ch]
        ; Exact mapped bytes E8 38 31 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 1
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 25 BD 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1270h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 88ch]
        ; Exact mapped bytes E8 DD 35 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1270h]
        ; Exact mapped bytes E9 09 03 00 00: jmp 0x41e72d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 868h]
        and eax, 0ffh
        cmp eax, 2
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x41e4c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        lea ecx, [ebp - 8b0h]
        ; Exact mapped bytes E8 A8 34 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov esi, esp
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 91 69 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        lea ecx, [ebp - 8b0h]
        ; Exact mapped bytes E8 98 2B FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 8b0h]
        ; Exact mapped bytes E8 B9 34 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8b0h]
        ; Exact mapped bytes E8 98 30 FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 2
        push 0
        push 80020f10h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 BC 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1274h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 8b0h]
        ; Exact mapped bytes E8 3D 35 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1274h]
        ; Exact mapped bytes E9 69 02 00 00: jmp 0x41e72d
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 868h]
        and eax, 0ffh
        cmp eax, 4
        ; Exact mapped bytes 0F 85 53 02 00 00: jne 0x41e72b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        push 0
        lea ecx, [ebp - 11ach]
        push ecx
        ; Exact mapped bytes E8 D8 73 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 864h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 7B 32 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 11b0h], eax
        cmp dword ptr [ebp - 11b0h], -1
        ; Exact mapped bytes 0F 84 11 02 00 00: je 0x41e724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        lea ecx, [ebp - 1138h]
        push ecx
        mov edx, dword ptr [ebp - 11b0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 6A 2D FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E8 01 00 00: je 0x41e724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1130h]
        mov dword ptr [ebp - 11d4h], ecx
        mov edx, dword ptr [ebp - 1134h]
        mov dword ptr [ebp - 11d0h], edx
        mov eax, dword ptr [ebp - 10f0h]
        mov dword ptr [ebp - 11c8h], eax
        mov esi, esp
        lea ecx, [ebp - 10fch]
        push ecx
        push 63310ch
        lea edx, [ebp - 11c4h]
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
        ; Exact mapped bytes E8 6B 68 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 34 EE FF FF 03 00: mov word ptr [ebp - 0x11cc], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 11d4h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 48h]
        mov ecx, dword ptr [ecx + 40c78h]
        ; Exact mapped bytes E8 37 31 FE FF: call 0x4016e5
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1130h]
        mov dword ptr [ebp - 1244h], edx
        mov eax, dword ptr [ebp - 1134h]
        mov dword ptr [ebp - 1248h], eax
        mov ecx, dword ptr [ebp - 10f0h]
        mov dword ptr [ebp - 1204h], ecx
        mov esi, esp
        lea edx, [ebp - 8dch]
        push edx
        lea eax, [ebp - 11f0h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 68 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8D 3C F7 FF FF: mov cx, word ptr [ebp - 0x8c4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 28 EE FF FF: mov word ptr [ebp - 0x11d8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        lea edx, [ebp - 1114h]
        push edx
        lea eax, [ebp - 1228h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 67 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 10fch]
        push ecx
        lea edx, [ebp - 1210h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B9 67 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 85 18 F7 FF FF: mov ax, word ptr [ebp - 0x8e8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 04 EE FF FF: mov word ptr [ebp - 0x11fc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 8D 16 F7 FF FF: mov cx, word ptr [ebp - 0x8ea]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 8D 02 EE FF FF: mov word ptr [ebp - 0x11fe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 95 14 F7 FF FF: mov dx, word ptr [ebp - 0x8ec]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 00 EE FF FF: mov word ptr [ebp - 0x1200], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8e4h]
        mov dword ptr [ebp - 11f8h], eax
        mov esi, esp
        lea ecx, [ebp - 112ch]
        push ecx
        lea edx, [ebp - 1240h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 66 67 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8e0h]
        mov dword ptr [ebp - 11f4h], eax
        push 8dh
        lea ecx, [ebp - 126ch]
        ; Exact mapped bytes E8 47 32 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 2
        mov esi, esp
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 30 67 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 1
        push eax
        lea edx, [ebp - 28h]
        push edx
        lea ecx, [ebp - 126ch]
        ; Exact mapped bytes E8 37 29 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        push 74h
        lea eax, [ebp - 1248h]
        push eax
        lea ecx, [ebp - 126ch]
        ; Exact mapped bytes E8 23 29 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 126ch]
        ; Exact mapped bytes E8 44 32 FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 126ch]
        ; Exact mapped bytes E8 23 2E FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 1
        push 80020f10h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 BA 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 126ch]
        ; Exact mapped bytes E8 D2 32 FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41e72d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
        add esp, 12b4h
        cmp ebp, esp
        ; Exact mapped bytes E8 A9 66 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x66
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

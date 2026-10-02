// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 487 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971070 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_58971070_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 14: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x14
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 28: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8A 16: mov dl, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x16
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 8C 40 01 00 00: jl 0x589711e5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 FA 39: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x39
        ; Exact mapped bytes 0F 8F 37 01 00 00: jg 0x589711e5
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 24 10: mov word ptr [esp + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes 32 DB: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xdb
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 88 44 24 14: mov byte ptr [esp + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 88 5C 24 15: mov byte ptr [esp + 0x15], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x15
        ; Exact mapped bytes 88 44 24 16: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 88 44 24 17: mov byte ptr [esp + 0x17], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        ; Exact mapped bytes 66 89 7C 24 12: mov word ptr [esp + 0x12], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 80 FA 39: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x39
        ; Exact mapped bytes 7F 16: jg 0x589710f0
        __asm _emit 0x7f
        __asm _emit 0x16
        ; Exact mapped bytes B3 0A: mov bl, 0xa
        __asm _emit 0xb3
        __asm _emit 0x0a
        ; Exact mapped bytes F6 EB: imul bl
        __asm _emit 0xf6
        __asm _emit 0xeb
        ; Exact mapped bytes 8A 5C 24 15: mov bl, byte ptr [esp + 0x15]
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x15
        ; Exact mapped bytes 02 C2: add al, dl
        __asm _emit 0x02
        __asm _emit 0xc2
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 2C 30: sub al, 0x30
        __asm _emit 0x2c
        __asm _emit 0x30
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 7D E5: jge 0x589710d5
        __asm _emit 0x7d
        __asm _emit 0xe5
        ; Exact mapped bytes 80 3C 0E 2E: cmp byte ptr [esi + ecx], 0x2e
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x2e
        ; Exact mapped bytes 88 44 24 14: mov byte ptr [esp + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 17: je 0x58971111
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 CF BA 00 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 7C 24: jl 0x5897113f
        __asm _emit 0x7c
        __asm _emit 0x24
        ; Exact mapped bytes EB 03: jmp 0x58971120
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971120 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_58971070_segment_01() {
    __asm {
        ; Exact mapped bytes 80 FA 39: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x39
        ; Exact mapped bytes 7F 16: jg 0x5897113b
        __asm _emit 0x7f
        __asm _emit 0x16
        ; Exact mapped bytes 8A C3: mov al, bl
        __asm _emit 0x8a
        __asm _emit 0xc3
        ; Exact mapped bytes B3 0A: mov bl, 0xa
        __asm _emit 0xb3
        __asm _emit 0x0a
        ; Exact mapped bytes F6 EB: imul bl
        __asm _emit 0xf6
        __asm _emit 0xeb
        ; Exact mapped bytes 02 C2: add al, dl
        __asm _emit 0x02
        __asm _emit 0xc2
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 2C 30: sub al, 0x30
        __asm _emit 0x2c
        __asm _emit 0x30
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 8A D8: mov bl, al
        __asm _emit 0x8a
        __asm _emit 0xd8
        ; Exact mapped bytes 7D E5: jge 0x58971120
        __asm _emit 0x7d
        __asm _emit 0xe5
        ; Exact mapped bytes 88 5C 24 15: mov byte ptr [esp + 0x15], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x15
        ; Exact mapped bytes 80 3C 0E 2E: cmp byte ptr [esi + ecx], 0x2e
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x2e
        ; Exact mapped bytes 75 B5: jne 0x589710fa
        __asm _emit 0x75
        __asm _emit 0xb5
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 7C 20: jl 0x5897116f
        __asm _emit 0x7c
        __asm _emit 0x20
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 80 FA 39: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x39
        ; Exact mapped bytes 7F 1A: jg 0x5897116f
        __asm _emit 0x7f
        __asm _emit 0x1a
        ; Exact mapped bytes 8A 44 24 16: mov al, byte ptr [esp + 0x16]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes B3 0A: mov bl, 0xa
        __asm _emit 0xb3
        __asm _emit 0x0a
        ; Exact mapped bytes F6 EB: imul bl
        __asm _emit 0xf6
        __asm _emit 0xeb
        ; Exact mapped bytes 02 C2: add al, dl
        __asm _emit 0x02
        __asm _emit 0xc2
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 2C 30: sub al, 0x30
        __asm _emit 0x2c
        __asm _emit 0x30
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 88 44 24 16: mov byte ptr [esp + 0x16], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        ; Exact mapped bytes 7D E1: jge 0x58971150
        __asm _emit 0x7d
        __asm _emit 0xe1
        ; Exact mapped bytes 80 3C 0E 2E: cmp byte ptr [esi + ecx], 0x2e
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x2e
        ; Exact mapped bytes 75 85: jne 0x589710fa
        __asm _emit 0x75
        __asm _emit 0x85
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 7C 20: jl 0x5897119f
        __asm _emit 0x7c
        __asm _emit 0x20
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 80 FA 39: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x39
        ; Exact mapped bytes 7F 1A: jg 0x5897119f
        __asm _emit 0x7f
        __asm _emit 0x1a
        ; Exact mapped bytes 8A 44 24 17: mov al, byte ptr [esp + 0x17]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        ; Exact mapped bytes B3 0A: mov bl, 0xa
        __asm _emit 0xb3
        __asm _emit 0x0a
        ; Exact mapped bytes F6 EB: imul bl
        __asm _emit 0xf6
        __asm _emit 0xeb
        ; Exact mapped bytes 02 C2: add al, dl
        __asm _emit 0x02
        __asm _emit 0xc2
        ; Exact mapped bytes 8A 54 0E 01: mov dl, byte ptr [esi + ecx + 1]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x0e
        __asm _emit 0x01
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 2C 30: sub al, 0x30
        __asm _emit 0x2c
        __asm _emit 0x30
        ; Exact mapped bytes 80 FA 30: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x30
        ; Exact mapped bytes 88 44 24 17: mov byte ptr [esp + 0x17], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x17
        ; Exact mapped bytes 7D E1: jge 0x58971180
        __asm _emit 0x7d
        __asm _emit 0xe1
        ; Exact mapped bytes 80 3C 0E 3A: cmp byte ptr [esi + ecx], 0x3a
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x0e
        __asm _emit 0x3a
        ; Exact mapped bytes 0F 85 51 FF FF FF: jne 0x589710fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 8A 04 31: mov al, byte ptr [ecx + esi]
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x31
        ; Exact mapped bytes 03 CE: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xce
        ; Exact mapped bytes 3C 30: cmp al, 0x30
        __asm _emit 0x3c
        __asm _emit 0x30
        ; Exact mapped bytes 7C 27: jl 0x589711da
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 3C 39: cmp al, 0x39
        __asm _emit 0x3c
        __asm _emit 0x39
        ; Exact mapped bytes 7F 21: jg 0x589711da
        __asm _emit 0x7f
        __asm _emit 0x21
        ; Exact mapped bytes 8B 4C 24 12: mov ecx, dword ptr [esp + 0x12]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 8D 3C 89: lea edi, [ecx + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x89
        ; Exact mapped bytes 66 0F BE C8: movsx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc8
        ; Exact mapped bytes 8A 42 01: mov al, byte ptr [edx + 1]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x01
        ; Exact mapped bytes 03 FF: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xff
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 66 03 F9: add di, cx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 66 83 EF 30: sub di, 0x30
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x30
        ; Exact mapped bytes 3C 30: cmp al, 0x30
        __asm _emit 0x3c
        __asm _emit 0x30
        ; Exact mapped bytes 66 89 7C 24 12: mov word ptr [esp + 0x12], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 7D DB: jge 0x589711b5
        __asm _emit 0x7d
        __asm _emit 0xdb
        ; Exact mapped bytes 66 C1 C7 08: rol di, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xc7
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 7C 24 12: mov word ptr [esp + 0x12], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes EB 4D: jmp 0x58971232
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 66 89 54 24 14: mov word ptr [esp + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes FF 15 3C C4 98 58: call dword ptr [0x5898c43c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 33: jne 0x58971232
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 38 C4 98 58: call dword ptr [0x5898c438]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 EC FE FF FF: je 0x589710fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 44 24 30: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E9 08: shr ecx, 8
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 81 E1 FF 00 00 00: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E0 08: shl eax, 8
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x08
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 4C 24 12: mov word ptr [esp + 0x12], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8D 54 24 14: lea edx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 4B FD FF FF: call 0x58970f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 86 B9 00 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

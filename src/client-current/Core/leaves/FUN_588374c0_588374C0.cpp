// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588374C0 .. +0x1FC0 bytes.
extern "C" __declspec(naked) void FUN_588374c0_588374C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 38 21 00 00: mov eax, 0x2138
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 A6 FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 9D 10 DF FF FF: mov dword ptr [ebp - 0x20f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 B5 3C DF FF FF: mov dword ptr [ebp - 0x20c4], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 50 4D 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3B 00: cmp byte ptr [ebx], 0
        __asm _emit 0x80
        __asm _emit 0x3b
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 68 1F 00 00: jne 0x58839461
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 A9 F5 FF FF: call 0x58836aa9
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 88 83 98 5B 00 00: mov byte ptr [ebx + 0x5b98], al
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 50 42 89 58: call dword ptr [0x58894250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes A3 8C 7D 96 58: mov dword ptr [0x58967d8c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 83 70 14 00 00: mov dword ptr [ebx + 0x1470], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes A3 A4 7A 96 58: mov dword ptr [0x58967aa4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 69 F1 02 00: call 0x5886669a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 88 83 97 14 00 00: mov byte ptr [ebx + 0x1497], al
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0x97
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 08 02 00 00: push 0x208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 83 74 14 00 00: mov dword ptr [ebx + 0x1474], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 84 F0 FF FF: lea eax, [ebp - 0xf7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BF 58 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BE 04 01 00 00: mov esi, 0x104
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 84 F0 FF FF: lea eax, [ebp - 0xf7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 48 E4 FF FF: call 0x588359ab
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 84 F0 FF FF: lea eax, [ebp - 0xf7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1A F3 02 00: call 0x5886688b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 3E: jne 0x588375b7
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 84 F0 FF FF: lea eax, [ebp - 0xf7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 D8 43 89 58: call dword ptr [0x588943d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2B: jne 0x588375b7
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 AC 03 8F 58: push 0x588f03ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 4D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 43 28: lea eax, [ebx + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DE 2A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 6F: push 0x6f
        __asm _emit 0x6a
        __asm _emit 0x6f
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes E9 B6 1E 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes BF 70 7B 96 58: mov edi, 0x58967b70
        __asm _emit 0xbf
        __asm _emit 0x70
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9B E3 FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 38 42 89 58: mov esi, dword ptr [0x58894238]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E2 B5 FF FF: call 0x58832bbf
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 CC 03 8F 58: push 0x588f03cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 4D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C6 45 DC 00: mov byte ptr [ebp - 0x24], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8D 7D DD: lea edi, [ebp - 0x23]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xdd
        ; Exact mapped bytes C7 85 0C DF FF FF 20 00 00 00: mov dword ptr [ebp - 0x20f4], 0x20
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        ; Exact mapped bytes 8D 85 0C DF FF FF: lea eax, [ebp - 0x20f4]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 DC: lea eax, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 08 44 89 58: call dword ptr [0x58894408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 68 DC 03 8F 58: push 0x588f03dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 2D 4D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 DC: lea eax, [ebp - 0x24]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FF EB 02 00: call 0x58866230
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 1B F6: sbb esi, esi
        __asm _emit 0x1b
        __asm _emit 0xf6
        ; Exact mapped bytes 81 E6 88 13 00 00: and esi, 0x1388
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 12 BA FF FF: call 0x58833057
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7B 28: lea edi, [ebx + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x28
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 7B 96 58: push 0x58967b70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 89 BD 24 DF FF FF: mov dword ptr [ebp - 0x20dc], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 1C F8 FF FF: call 0x58836e7b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 3C DF FF FF: push dword ptr [ebp - 0x20c4]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 69 2B 00 00: call 0x5883a1d5
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 DD DB FF FF: call 0x58835250
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 E8 03 8F 58: push 0x588f03e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 4C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 06 2A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C9 E2 FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0A 24 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 23 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 F0 03 8F 58: push 0x588f03f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 4C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E0 23 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 30: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x30
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8D D0 FC FF FF: lea ecx, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E5 63 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5883778d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BF E0 FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8F 23 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7C 23 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 F0 03 8F 58: push 0x588f03f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 4C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 65 23 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6A 63 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 25: jne 0x5883778d
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 38 DF FF FF: push dword ptr [ebp - 0x20c8]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 FC 03 8F 58: push 0x588f03fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 4B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 07 29 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 78: push 0x78
        __asm _emit 0x6a
        __asm _emit 0x78
        ; Exact mapped bytes E9 24 FE FF FF: jmp 0x588375b1
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 35 DC 60 90 58: push dword ptr [0x589060dc]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 4B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 C0 05: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x05
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 FF 07 00 00: push 0x7ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 76 69 00 00: call 0x5883e131
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 48 02 00 00: je 0x58837a0b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 24 04 8F 58: push 0x588f0424
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 4F 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 85 40 DF FF FF: mov dword ptr [ebp - 0x20c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8D 85 B0 FC FF FF: lea eax, [ebp - 0x350]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 30 04 8F 58: push 0x588f0430
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 4E 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 3C 04 8F 58: push 0x588f043c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 4B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 30 70 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 B0 FC FF FF: lea eax, [ebp - 0x350]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8A EB 02 00: call 0x588663a4
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 D0 01 00 00: jne 0x588379f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 4C 04 8F 58: push 0x588f044c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 4B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 74 6F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 98 7D 96 58: mov dword ptr [0x58967d98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 5C 04 8F 58: push 0x588f045c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 4A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 4C 6F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 9C 7D 96 58: mov dword ptr [0x58967d9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 6C 04 8F 58: push 0x588f046c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 4A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 24 6F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 B8 7D 96 58: mov dword ptr [0x58967db8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 7C 04 8F 58: push 0x588f047c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 4A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FC 6E 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 EC 60 90 58: mov dword ptr [0x589060ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 8C 04 8F 58: push 0x588f048c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B 4A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 D4 6E 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 DC 83 96 58: mov dword ptr [0x589683dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 9C 04 8F 58: push 0x588f049c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 4A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 AC 6E 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 E0 83 96 58: mov dword ptr [0x589683e0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 D0 7D 96 58: push 0x58967dd0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 AC 04 8F 58: push 0x588f04ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 4A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F5 6E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 7F 96 58: push 0x58967fd4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0x7f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 BC 04 8F 58: push 0x588f04bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 49 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C5 6E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 D8 81 96 58: push 0x589681d8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 CC 04 8F 58: push 0x588f04cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 49 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 95 6E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 DC 04 8F 58: push 0x588f04dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 49 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F4 6D 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 CC 7D 96 58: mov dword ptr [0x58967dcc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 EC 04 8F 58: push 0x588f04ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 49 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 CC 6D 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 7C 7D 96 58: mov dword ptr [0x58967d7c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 84 E8 FF FF: lea eax, [ebp - 0x177c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 08 54 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes A1 98 7D 96 58: mov eax, dword ptr [0x58967d98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes BF D0 7D 96 58: mov edi, 0x58967dd0
        __asm _emit 0xbf
        __asm _emit 0xd0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 0F 44 C1: cmove eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xc1
        ; Exact mapped bytes A3 98 7D 96 58: mov dword ptr [0x58967d98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 16 4E 00 00: call 0x5883c83e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3F 00: cmp byte ptr [edi], 0
        __asm _emit 0x80
        __asm _emit 0x3f
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 75 19: jne 0x58837a47
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 68 FC 04 8F 58: push 0x588f04fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 49 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 02 00 00: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 4C FD 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 81 C7 04 02 00 00: add edi, 0x204
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 FF DC 83 96 58: cmp edi, 0x589683dc
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 7C CD: jl 0x58837a22
        __asm _emit 0x7c
        __asm _emit 0xcd
        ; Exact mapped bytes A1 EC 60 90 58: mov eax, dword ptr [0x589060ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FF B5 3C DF FF FF: push dword ptr [ebp - 0x20c4]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 44 C1: cmove eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xc1
        ; Exact mapped bytes B9 2C 4C 00 00: mov ecx, 0x4c2c
        __asm _emit 0xb9
        __asm _emit 0x2c
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 EC 60 90 58: mov dword ptr [0x589060ec], eax
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A1 DC 83 96 58: mov eax, dword ptr [0x589683dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 44 C1: cmove eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xc1
        ; Exact mapped bytes A3 DC 83 96 58: mov dword ptr [0x589683dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 48 00 00: call 0x5883c2cc
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D B8 7D 96 58: mov ecx, dword ptr [0x58967db8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 7B 28: lea edi, [ebx + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x28
        ; Exact mapped bytes 80 E1 0C: and cl, 0xc
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x0c
        ; Exact mapped bytes A3 E4 83 96 58: mov dword ptr [0x589683e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 80 F9 04: cmp cl, 4
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 A6 02 00 00: je 0x58837d47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D CE 1D 35 00: cmp eax, 0x351dce
        __asm _emit 0x3d
        __asm _emit 0xce
        __asm _emit 0x1d
        __asm _emit 0x35
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9B 02 00 00: je 0x58837d47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 30 DF FF FF: lea eax, [ebp - 0x20d0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 22 EE FF FF: call 0x588368da
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 04 24 04 01 00 00: mov dword ptr [esp], 0x104
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3D 53 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7A DE FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BB 1F 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 38 DF FF FF: mov eax, dword ptr [ebp - 0x20c8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 5A: jne 0x58837b5f
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 68 14 05 8F 58: push 0x588f0514
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 48 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 94 1F 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 37 EE 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x58837bcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 88 DC FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 58 1F 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 14 05 8F 58: push 0x588f0514
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 59: jmp 0x58837bb8
        __asm _emit 0xeb
        __asm _emit 0x59
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 69: jne 0x58837bcd
        __asm _emit 0x75
        __asm _emit 0x69
        ; Exact mapped bytes 68 28 05 8F 58: push 0x588f0528
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 47 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 35 1F 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D8 ED 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 3C: jne 0x58837bcd
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2D DC FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FD 1E 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 28 05 8F 58: push 0x588f0528
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 47 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E6 1E 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 86 ED 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 26: je 0x58837c08
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 5E 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x58837c08
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 68 40 05 8F 58: push 0x588f0540
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 47 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x58837c36
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 68 44 69 96 58: push 0x58966944
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 A4 33 83 58: push 0x588333a4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x33
        __asm _emit 0x83
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 F8 43 89 58: call dword ptr [0x588943f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 40 DF FF FF: mov dword ptr [ebp - 0x20c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1A: jne 0x58837c42
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 54 05 8F 58: push 0x588f0554
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 47 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 4D 24 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 5A: jmp 0x58837c9c
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes FF 35 44 69 96 58: push dword ptr [0x58966944]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 68 05 8F 58: push 0x588f0568
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 47 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 2F 24 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 69 05 EC 60 90 58 E8 03 00 00: imul eax, dword ptr [0x589060ec], 0x3e8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 3D 02 01 00 00: cmp eax, 0x102
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x58837c90
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 84 05 8F 58: push 0x588f0584
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 46 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FD 23 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D B8 7D 96 58 00: cmp dword ptr [0x58967db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 79: je 0x58837d1e
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D 4C 6A 96 58: mov ecx, dword ptr [0x58966a4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 54: je 0x58837d03
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes A1 BC 7D 96 58: mov eax, dword ptr [0x58967dbc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F7 C1 00 00 08 00: test ecx, 0x80000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes F7 C1 00 00 20 00: test ecx, 0x200000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes A3 BC 7D 96 58: mov dword ptr [0x58967dbc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 C0 7D 96 58: mov eax, dword ptr [0x58967dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes F7 C1 00 00 40 00: test ecx, 0x400000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes A3 C0 7D 96 58: mov dword ptr [0x58967dc0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 7D 96 58: mov eax, dword ptr [0x58967dc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes F7 C1 00 00 00 20: test ecx, 0x20000000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes A3 C4 7D 96 58: mov dword ptr [0x58967dc4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 74 7C 96 58: mov eax, dword ptr [0x58967c74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 0F 45 C1: cmovne eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc1
        ; Exact mapped bytes A3 74 7C 96 58: mov dword ptr [0x58967c74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 03: jmp 0x58837d06
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes A1 74 6B 96 58: mov eax, dword ptr [0x58966b74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x58837d1e
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes A1 C8 7D 96 58: mov eax, dword ptr [0x58967dc8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes A3 C8 7D 96 58: mov dword ptr [0x58967dc8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 39 05 BC 7D 96 58: cmp dword ptr [0x58967dbc], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 21: jne 0x58837d4a
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 68 90 05 8F 58: push 0x588f0590
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 46 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 50 23 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 55 07 00 00: mov eax, 0x755
        __asm _emit 0xb8
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 26 17 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 80 BB AC 5B 00 00 00: cmp byte ptr [ebx + 0x5bac], 0
        __asm _emit 0x80
        __asm _emit 0xbb
        __asm _emit 0xac
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x58837d5a
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AE D5 FF FF: call 0x58835307
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 1C 25 00 00: push 0x251c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 C2 FF FF: call 0x58834062
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 24: jne 0x58837d92
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 68 A0 05 8F 58: push 0x588f05a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 45 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0B 23 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BB 9C 20 00 00 00: cmp dword ptr [ebx + 0x209c], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x58837d92
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 6A 73: push 0x73
        __asm _emit 0x6a
        __asm _emit 0x73
        ; Exact mapped bytes E9 1F F8 FF FF: jmp 0x588375b1
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 FC B4 FF FF: call 0x58833297
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x58837e25
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 83 9C 20 00 00: cmp dword ptr [ebx + 0x209c], eax
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58837e43
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC 05 8F 58: push 0x588f05bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 45 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 02 00 10 00: push 0x100002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 F0 43 89 58: call dword ptr [0x588943f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 40 DF FF FF: mov dword ptr [ebp - 0x20c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 07: jne 0x58837dd9
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 6A 6E: push 0x6e
        __asm _emit 0x6a
        __asm _emit 0x6e
        ; Exact mapped bytes E9 D8 F7 FF FF: jmp 0x588375b1
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 3D 02 01 00 00: cmp eax, 0x102
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 18: jne 0x58837e01
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 E0 43 89 58: call dword ptr [0x588943e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 1C 25 00 00: push 0x251c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 8A B4 FF FF: call 0x58833297
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 C1: je 0x58837dd2
        __asm _emit 0x74
        __asm _emit 0xc1
        ; Exact mapped bytes 68 D0 05 8F 58: push 0x588f05d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 45 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 68 22 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BB 9C 20 00 00 00: cmp dword ptr [ebx + 0x209c], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x58837e43
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 83 BB A0 20 00 00 00: cmp dword ptr [ebx + 0x20a0], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x58837e43
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF B5 3C DF FF FF: push dword ptr [ebp - 0x20c4]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 72 B7 FF FF: call 0x588335b4
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 A5 2C DF FF FF 00: and dword ptr [ebp - 0x20d4], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes C7 85 28 DF FF FF 0C 00 00 00: mov dword ptr [ebp - 0x20d8], 0xc
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 28 DF FF FF: lea eax, [ebp - 0x20d8]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 83 A8 5B 00 00: mov dword ptr [ebx + 0x5ba8], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 24: jne 0x58837e9e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 F0 05 8F 58: push 0x588f05f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 44 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F9 21 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 AB 00 00 00: mov eax, 0xab
        __asm _emit 0xb8
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CF 15 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 28 DF FF FF: lea eax, [ebp - 0x20d8]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 43 1C: mov dword ptr [ebx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x1c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x58837ec6
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 14 06 8F 58: push 0x588f0614
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB BE: jmp 0x58837e84
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 28 DF FF FF: lea eax, [ebp - 0x20d8]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 58 42 89 58: call dword ptr [0x58894258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 83 A4 5B 00 00: mov dword ptr [ebx + 0x5ba4], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x58837ef1
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 38 06 8F 58: push 0x588f0638
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB 93: jmp 0x58837e84
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes 68 5C 06 8F 58: push 0x588f065c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 44 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 88 21 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BC D8 FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8C 1B 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 06 8F 58: push 0x588f0664
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 44 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 75 1B 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 18 EA 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 30: add esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x30
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 26: jne 0x58837f77
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 78 06 8F 58: push 0x588f0678
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 43 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 20 21 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 99 00 00 00: mov eax, 0x99
        __asm _emit 0xb8
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F6 14 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 44 DF FF FF: lea eax, [ebp - 0x20bc]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 84 43 89 58: call dword ptr [0x58894384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x5883801c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 64 06 8F 58: push 0x588f0664
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 43 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DA F7 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 96 E5 02 00: call 0x5886655d
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 70 DF FF FF: lea eax, [ebp - 0x2090]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CE E2 02 00: call 0x588662a8
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 2F: jne 0x58838010
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CE 9E 02 00: call 0x58861ebc
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1C: je 0x58838010
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 8C 06 8F 58: push 0x588f068c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 43 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 7D 20 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes FF B5 38 DF FF FF: push dword ptr [ebp - 0x20c8]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 DC 43 89 58: call dword ptr [0x588943dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 85 37 DF FF FF: mov byte ptr [ebp - 0x20c9], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 94 5A 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 B1 01 00 00: jne 0x588381f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BB 84 5B 00 00 08: cmp dword ptr [ebx + 0x5b84], 8
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 88 85 3C DF FF FF: mov byte ptr [ebp - 0x20c4], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 1C: jne 0x5883806d
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8D 3C DF FF FF: mov ecx, dword ptr [ebp - 0x20c4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3D 06 00 09 80: cmp eax, 0x80090006
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x80
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 0F B6 C9: movzx ecx, cl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 0F 44 C8: cmove ecx, eax
        __asm _emit 0x0f
        __asm _emit 0x44
        __asm _emit 0xc8
        ; Exact mapped bytes 89 8D 3C DF FF FF: mov dword ptr [ebp - 0x20c4], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B B3 84 5B 00 00: mov esi, dword ptr [ebx + 0x5b84]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 A4 06 8F 58: push 0x588f06a4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 42 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F4 1F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 00 00 80: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 83 FE FF: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 75 27: jne 0x588380e7
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 C0 06 8F 58: push 0x588f06c0
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 42 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A8 1F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes EB 74: jmp 0x5883815b
        __asm _emit 0xeb
        __asm _emit 0x74
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 D8 06 8F 58: push 0x588f06d8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 42 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 87 1F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A FC: push -4
        __asm _emit 0x6a
        __asm _emit 0xfc
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 A5 40 DF FF FF 00: and dword ptr [ebp - 0x20c0], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 30 DF FF FF: lea eax, [ebp - 0x20d0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 85 40 DF FF FF: lea eax, [ebp - 0x20c0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 E8 06 8F 58: push 0x588f06e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 42 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 3F 1F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 FC 41 89 58: mov esi, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 80 BD 3C DF FF FF 00: cmp byte ptr [ebp - 0x20c4], 0
        __asm _emit 0x80
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 74 6D: je 0x588381d1
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes 80 BB 98 5B 00 00 00: cmp byte ptr [ebx + 0x5b98], 0
        __asm _emit 0x80
        __asm _emit 0xbb
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x588381a2
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes E8 0D B9 FF FF: call 0x58833a7f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x588381a2
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 42 59 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 25: jne 0x588381b5
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 83 BB 84 5B 00 00 08: cmp dword ptr [ebx + 0x5b84], 8
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 75 13: jne 0x588381ac
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 3D 06 00 09 80: cmp eax, 0x80090006
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x80
        ; Exact mapped bytes 75 0A: jne 0x588381ac
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes B8 9B 00 00 00: mov eax, 0x9b
        __asm _emit 0xb8
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C1 12 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 88 85 37 DF FF FF: mov byte ptr [ebp - 0x20c9], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 F8 06 8F 58: push 0x588f06f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 41 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C4 1E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 85 37 DF FF FF: mov al, byte ptr [ebp - 0x20c9]
        __asm _emit 0x8a
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes EB 03: jmp 0x588381d4
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1B: je 0x588381f3
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 68 10 07 8F 58: push 0x588f0710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 41 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 A1 1E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 7C: push 0x7c
        __asm _emit 0x6a
        __asm _emit 0x7c
        ; Exact mapped bytes E9 BE F3 FF FF: jmp 0x588375b1
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 34 07 8F 58: push 0x588f0734
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 41 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 86 1E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 44: push 0x44
        __asm _emit 0x6a
        __asm _emit 0x44
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 85 C8 DE FF FF: lea eax, [ebp - 0x2138]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FA 4B 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 8D 85 14 DF FF FF: lea eax, [ebp - 0x20ec]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 B5 C8 DE FF FF: mov dword ptr [ebp - 0x2138], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E4 4B 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BE 38 67 96 58: mov esi, 0x58966738
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 49 8F 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 72 12: jb 0x58838253
        __asm _emit 0x72
        __asm _emit 0x12
        ; Exact mapped bytes 80 3D 39 67 96 58 3A: cmp byte ptr [0x58966739], 0x3a
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x39
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x3a
        ; Exact mapped bytes 74 16: je 0x58838260
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 80 3D 3A 67 96 58 5C: cmp byte ptr [0x5896673a], 0x5c
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x3a
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x5c
        ; Exact mapped bytes 74 0D: je 0x58838260
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 68 3C 07 8F 58: push 0x588f073c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 02 49 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x49
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes BE 78 6B 96 58: mov esi, 0x58966b78
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 15 8F 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 73 0D: jae 0x58838280
        __asm _emit 0x73
        __asm _emit 0x0d
        ; Exact mapped bytes 68 3C 07 8F 58: push 0x588f073c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E2 48 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x48
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 E7 07 00 00: push 0x7e7
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0C C3 FF FF: call 0x588345ad
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 06: jne 0x588382ae
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 81 E6 00 00 F0 FF: and esi, 0xfff00000
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes FF 35 74 6B 96 58: push dword ptr [0x58966b74]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 4C 6A 96 58: push dword ptr [0x58966a4c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 A4 00 00 00: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 78 6B 96 58: push 0x58966b78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 38 67 96 58: push 0x58966738
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 E0 60 90 58: push dword ptr [0x589060e0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes FF B3 A0 20 00 00: push dword ptr [ebx + 0x20a0]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B3 70 14 00 00: push dword ptr [ebx + 0x1470]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 73 1C: push dword ptr [ebx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x73
        __asm _emit 0x1c
        ; Exact mapped bytes FF B3 A8 5B 00 00: push dword ptr [ebx + 0x5ba8]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 44 07 8F 58: push 0x588f0744
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 40 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 38: add esp, 0x38
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x38
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 70 07 8F 58: push 0x588f0770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 40 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 69 1D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 29 44 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 84 E0 FF FF: lea eax, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CA 4A 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2E 8E 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 7C 07 8F 58: push 0x588f077c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 3F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 20 1D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 04: lea eax, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 85 3C DF FF FF: mov dword ptr [ebp - 0x20c4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D B5 84 E0 FF FF: lea esi, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 2F: jle 0x588383af
        __asm _emit 0x7e
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 9D 38 DF FF FF: mov ebx, dword ptr [ebp - 0x20c8]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 0F B6 03: movzx eax, byte ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 88 07 8F 58: push 0x588f0788
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 03 F0: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xf0
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E5: jne 0x58838388
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 9D 10 DF FF FF: mov ebx, dword ptr [ebp - 0x20f0]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B BD 24 DF FF FF: mov edi, dword ptr [ebp - 0x20dc]
        __asm _emit 0x8b
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 84 E0 FF FF: lea eax, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 06 00: mov byte ptr [esi], 0
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 90 07 8F 58: push 0x588f0790
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 3F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 BF 1C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 A5 40 DF FF FF 00: and dword ptr [ebp - 0x20c0], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 8C F2 FF FF: lea eax, [ebp - 0xd74]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EC D3 FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 39 8B 9C 20 00 00: cmp dword ptr [ebx + 0x209c], ecx
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 AC 01 00 00: jne 0x588385a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 14 DF FF FF: lea eax, [ebp - 0x20ec]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 C8 DE FF FF: lea eax, [ebp - 0x2138]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 8C F2 FF FF: lea eax, [ebp - 0xd74]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 85 84 E0 FF FF: lea eax, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 08 42 89 58: call dword ptr [0x58894208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 38: jne 0x58838461
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes 8B 1D FC 41 89 58: mov ebx, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D4 FD FF FF: lea eax, [ebp - 0x22c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 9C 07 8F 58: push 0x588f079c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 3F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 36 1C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes B8 AA 00 00 00: mov eax, 0xaa
        __asm _emit 0xb8
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 10 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 1C DF FF FF: push dword ptr [ebp - 0x20e4]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C4 07 8F 58: push 0x588f07c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 3E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 11 1C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 A8 5B 00 00: mov eax, dword ptr [ebx + 0x5ba8]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 A5 40 DF FF FF 00: and dword ptr [ebp - 0x20c0], 0
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 83 CE FF: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 2C DF FF FF: mov dword ptr [ebp - 0x20d4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 14 DF FF FF: mov eax, dword ptr [ebp - 0x20ec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 E0 83 96 58: mov eax, dword ptr [0x589683e0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 45 F0: cmovne esi, eax
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 85 2C DF FF FF: lea eax, [ebp - 0x20d4]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes FF 15 20 41 89 58: call dword ptr [0x58894120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x5883857a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 40 DF FF FF: lea eax, [ebp - 0x20c0]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B5 14 DF FF FF: push dword ptr [ebp - 0x20ec]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 F4 43 89 58: call dword ptr [0x588943f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1C: jne 0x588384f5
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 D0 07 8F 58: push 0x588f07d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 3E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 98 1B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 FE FF: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 74 2B: je 0x58838525
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes A1 E0 83 96 58: mov eax, dword ptr [0x589683e0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 22: je 0x58838525
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 81 BD 40 DF FF FF 03 01 00 00: cmp dword ptr [ebp - 0x20c0], 0x103
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x58838525
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 F4 07 8F 58: push 0x588f07f4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 3E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 68 1B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 20 08 8F 58: push 0x588f0820
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 3E 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 4D 1B 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 40 DF FF FF: mov eax, dword ptr [ebp - 0x20c0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 1D F8 42 89 58: mov ebx, dword ptr [0x588942f8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 3D 00 4D ED BF: cmp eax, 0xbfed4d00
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xbf
        ; Exact mapped bytes B9 FF 00 00 00: mov ecx, 0xff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 47 C1: cmova eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x47
        __asm _emit 0xc1
        ; Exact mapped bytes FF B5 14 DF FF FF: push dword ptr [ebp - 0x20ec]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 40 DF FF FF: mov dword ptr [ebp - 0x20c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes FF B5 18 DF FF FF: push dword ptr [ebp - 0x20e8]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 85 40 DF FF FF: mov eax, dword ptr [ebp - 0x20c0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F3 0E 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 44 08 8F 58: push 0x588f0844
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF 3D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 FF 1A 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 14 DF FF FF: lea eax, [ebp - 0x20ec]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E9 0E 00 00: call 0x58839480
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 85 40 DF FF FF: mov dword ptr [ebp - 0x20c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 14 DF FF FF: push dword ptr [ebp - 0x20ec]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 F8 42 89 58: mov esi, dword ptr [0x588942f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes FF B5 18 DF FF FF: push dword ptr [ebp - 0x20e8]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 97 D3 FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D8 14 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C5 14 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 F0 03 8F 58: push 0x588f03f0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 3D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AE 14 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes 8D B3 38 5B 00 00: lea esi, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B1 54 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1E: jne 0x5883863f
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B B3 84 5B 00 00: mov esi, dword ptr [ebx + 0x5b84]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 4C 08 8F 58: push 0x588f084c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E9 37 F1 FF FF: jmp 0x58837776
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 35 DC 60 90 58: push dword ptr [0x589060dc]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 3D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 C0 05: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x05
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 FF 07 00 00: push 0x7ff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 D0 FC FF FF: lea eax, [ebp - 0x330]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C8 5A 00 00: call 0x5883e131
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 33: jne 0x588386a0
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B B3 84 5B 00 00: mov esi, dword ptr [ebx + 0x5b84]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 64 08 8F 58: push 0x588f0864
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 3C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F7 19 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes B8 82 00 00 00: mov eax, 0x82
        __asm _emit 0xb8
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CD 0D 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 24 04 8F 58: push 0x588f0424
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 40 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 8D 85 90 FC FF FF: lea eax, [ebp - 0x370]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 30 04 8F 58: push 0x588f0430
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 40 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 3C 04 8F 58: push 0x588f043c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 3C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 5C 61 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 90 FC FF FF: lea eax, [ebp - 0x370]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 DC 02 00: call 0x588663a4
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 20: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1E: je 0x58838713
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 68 84 08 8F 58: push 0x588f0884
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 3C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 84 19 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 8E 00 00 00: mov eax, 0x8e
        __asm _emit 0xb8
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5A 0D 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 A0 86 01 00: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 9C 08 8F 58: push 0x588f089c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 3C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 88 60 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 6C 7B 96 58: mov dword ptr [0x58967b6c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 74 7C 96 58 00: cmp dword ptr [0x58967c74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 4A: jne 0x5883878c
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 AC 08 8F 58: push 0x588f08ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 5C 60 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 74 7C 96 58: mov dword ptr [0x58967c74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 23: jne 0x5883878c
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 BC 08 8F 58: push 0x588f08bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 35 60 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 74 7C 96 58: mov dword ptr [0x58967c74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 CC 08 8F 58: push 0x588f08cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 12 60 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 DC 08 8F 58: push 0x588f08dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F4 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 24: jne 0x588387f6
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 08 8F 58: push 0x588f08e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 CC 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 EC 04 8F 58: push 0x588f04ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A8 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 7C 7D 96 58: mov dword ptr [0x58967d7c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 F8 08 8F 58: push 0x588f08f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 85 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 08 09 8F 58: push 0x588f0908
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 3B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 61 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 80 7D 96 58: mov dword ptr [0x58967d80], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 09 8F 58: push 0x588f091c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 3A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 3E 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1E: jne 0x588388a0
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 30 09 8F 58: push 0x588f0930
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 3A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 1C 5F 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes F6 D0: not al
        __asm _emit 0xf6
        __asm _emit 0xd0
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 22 C1: and al, cl
        __asm _emit 0x22
        __asm _emit 0xc1
        ; Exact mapped bytes 88 43 26: mov byte ptr [ebx + 0x26], al
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0x26
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 E8 03 00 00: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 09 8F 58: push 0x588f0940
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 3A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 EF 5E 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 83 9C 5B 00 00: mov dword ptr [ebx + 0x5b9c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 09 8F 58: push 0x588f0958
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 3A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 CB 5E 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 83 A0 5B 00 00: mov dword ptr [ebx + 0x5ba0], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 24: jne 0x5883891f
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 6C 09 8F 58: push 0x588f096c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 3A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 A3 5E 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 83 A0 5B 00 00: mov dword ptr [ebx + 0x5ba0], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 68 96 58: push 0x58966840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 7C 09 8F 58: push 0x588f097c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 3A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F0 5E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 48 69 96 58: push 0x58966948
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 8C 09 8F 58: push 0x588f098c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 39 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 C5 5E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 6A 96 58: push 0x58966a50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 9C 09 8F 58: push 0x588f099c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 39 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 9A 5E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 80 3D 40 68 96 58 00: cmp byte ptr [0x58966840], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x588389d4
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 68 96 58: push 0x58966840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 AC 09 8F 58: push 0x588f09ac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 39 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 66 5E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 80 3D 48 69 96 58 00: cmp byte ptr [0x58966948], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x58838a08
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 48 69 96 58: push 0x58966948
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 BC 09 8F 58: push 0x588f09bc
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 39 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 32 5E 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 80 3D 50 6A 96 58 00: cmp byte ptr [0x58966a50], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 2B: jne 0x58838a3c
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 6A 96 58: push 0x58966a50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 CC 09 8F 58: push 0x588f09cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 39 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 FE 5D 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 68 54 6B 96 58: push 0x58966b54
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 BF 00 8F 58: push 0x588f00bf
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 DC 09 8F 58: push 0x588f09dc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 D6 5D 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 EC 09 8F 58: push 0x588f09ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 3A 5D 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 A0 7D 96 58: mov dword ptr [0x58967da0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 23: jne 0x58838aae
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC 09 8F 58: push 0x588f09fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 13 5D 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 A0 7D 96 58: mov dword ptr [0x58967da0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 0C 0A 8F 58: push 0x588f0a0c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 F0 5C 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 A4 7D 96 58: mov dword ptr [0x58967da4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 0A 8F 58: push 0x588f0a1c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 CD 5C 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 A8 7D 96 58: mov dword ptr [0x58967da8], eax
        __asm _emit 0xa3
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 2C 0A 8F 58: push 0x588f0a2c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 AA 5C 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 B4 7D 96 58: mov dword ptr [0x58967db4], eax
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 6C 04 8F 58: push 0x588f046c
        __asm _emit 0x68
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 87 5C 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 B8 7D 96 58: mov dword ptr [0x58967db8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 40 0A 8F 58: push 0x588f0a40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 38 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 64 5C 00 00: call 0x5883e7b9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes A3 E8 83 96 58: mov dword ptr [0x589683e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D B8 7D 96 58 00: cmp dword ptr [0x58967db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 79: je 0x58838bdf
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 0D 4C 6A 96 58: mov ecx, dword ptr [0x58966a4c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 54: je 0x58838bc4
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes A1 BC 7D 96 58: mov eax, dword ptr [0x58967dbc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F7 C1 00 00 08 00: test ecx, 0x80000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 5A: pop edx
        __asm _emit 0x5a
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes F7 C1 00 00 20 00: test ecx, 0x200000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes A3 BC 7D 96 58: mov dword ptr [0x58967dbc], eax
        __asm _emit 0xa3
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 C0 7D 96 58: mov eax, dword ptr [0x58967dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes F7 C1 00 00 40 00: test ecx, 0x400000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes A3 C0 7D 96 58: mov dword ptr [0x58967dc0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 C4 7D 96 58: mov eax, dword ptr [0x58967dc4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes F7 C1 00 00 00 20: test ecx, 0x20000000
        __asm _emit 0xf7
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes A3 C4 7D 96 58: mov dword ptr [0x58967dc4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 74 7C 96 58: mov eax, dword ptr [0x58967c74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 0F 45 C1: cmovne eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc1
        ; Exact mapped bytes A3 74 7C 96 58: mov dword ptr [0x58967c74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 03: jmp 0x58838bc7
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes A1 74 6B 96 58: mov eax, dword ptr [0x58966b74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0F: je 0x58838bdf
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes A1 C8 7D 96 58: mov eax, dword ptr [0x58967dc8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 45 C2: cmovne eax, edx
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xc2
        ; Exact mapped bytes A3 C8 7D 96 58: mov dword ptr [0x58967dc8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 40 68 96 58: push 0x58966840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 3C 00 00: call 0x5883c83e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 04 24 48 69 96 58: mov dword ptr [esp], 0x58966948
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 3C 00 00: call 0x5883c83e
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 04 24 50 6A 96 58: mov dword ptr [esp], 0x58966a50
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 3C 00 00: call 0x5883c83e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 04 24 54 6B 96 58: mov dword ptr [esp], 0x58966b54
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x54
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 3C 00 00: call 0x5883c83e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 7D 96 58: mov eax, dword ptr [0x58967da0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x58838c22
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 69 C0 E8 03 00 00: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 A0 7D 96 58: mov dword ptr [0x58967da0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 00 08 00 00: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 90 F3 FF FF: lea eax, [ebp - 0xc70]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DB 41 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 50 0A 8F 58: push 0x588f0a50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 37 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 44 14 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BE 78 7C 96 58: mov esi, 0x58967c78
        __asm _emit 0xbe
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 08 CD FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 4F 0E 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 0A 8F 58: push 0x588f0a58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 36 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 3E 0E 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 34: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x34
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 7F: je 0x58838cfd
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D DC 42 89 58: mov ecx, dword ptr [0x588942dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 41 04: movzx eax, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 41 03: movzx eax, byte ptr [ecx + 3]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 41 02: movzx eax, byte ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 41 01: movzx eax, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 01: movzx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 68 0A 8F 58: push 0x588f0a68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 36 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D4 13 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x58838cfd
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D E0 42 89 58: mov ecx, dword ptr [0x588942e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 0F B6 41 04: movzx eax, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 41 03: movzx eax, byte ptr [ecx + 3]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 41 02: movzx eax, byte ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x02
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 41 01: movzx eax, byte ptr [ecx + 1]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 01: movzx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 8C 0A 8F 58: push 0x588f0a8c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 36 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 28: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 13 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes 68 B0 0A 8F 58: push 0x588f0ab0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 36 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 7C 13 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 3D B8 7D 96 58 00: cmp dword ptr [0x58967db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 59: je 0x58838d73
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 39 05 C0 7D 96 58: cmp dword ptr [0x58967dc0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 4E: jne 0x58838d73
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 68 B8 0A 8F 58: push 0x588f0ab8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 36 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 54 13 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 3D C4 7D 96 58 00: cmp dword ptr [0x58967dc4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 F7 EF FF FF: jne 0x58837d3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 1F D4 FF FF: call 0x5883616c
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 E8 EF FF FF: jne 0x58837d3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 0A 8F 58: push 0x588f0ac8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 35 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 24 13 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 DC 00 00 00: mov eax, 0xdc
        __asm _emit 0xb8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA 06 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E6 DB 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 57: jne 0x58838dd9
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 68 04 01 00 00: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 D1 CB FF FF: call 0x5883595e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 C8 03 8F 58: push 0x588f03c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 18 0D 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 E4 0A 8F 58: push 0x588f0ae4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 35 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 07 0D 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 B0 DB 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 20: jne 0x58838dd9
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 F4 0A 8F 58: push 0x588f0af4
        __asm _emit 0x68
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 35 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 BE 12 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 9A 00 00 00: mov eax, 0x9a
        __asm _emit 0xb8
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 06 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 8B 38 5B 00 00: lea ecx, [ebx + 0x5b38]
        __asm _emit 0x8d
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 E5 4C 00 00: call 0x5883dace
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 35: jne 0x58838e22
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B B3 84 5B 00 00: mov esi, dword ptr [ebx + 0x5b84]
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 68 A4 06 8F 58: push 0x588f06a4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 35 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 72 12 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 6A 7A: push 0x7a
        __asm _emit 0x6a
        __asm _emit 0x7a
        ; Exact mapped bytes E9 8F E7 FF FF: jmp 0x588375b1
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 10 0B 8F 58: push 0x588f0b10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 35 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 57 12 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D B3 C4 22 00 00: lea esi, [ebx + 0x22c4]
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F3 43 00 00: call 0x5883d236
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1E: jne 0x58838e65
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 68 18 0B 8F 58: push 0x588f0b18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 35 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 32 12 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes B8 A0 00 00 00: mov eax, 0xa0
        __asm _emit 0xb8
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 08 06 00 00: jmp 0x5883946d
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes FF 36: push dword ptr [esi]
        __asm _emit 0xff
        __asm _emit 0x36
        ; Exact mapped bytes FF 15 24 41 89 58: call dword ptr [0x58894124]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 2C 0B 8F 58: push 0x588f0b2c
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 34 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0A 12 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 BB A0 20 00 00 00: cmp dword ptr [ebx + 0x20a0], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 3C DF FF FF: mov dword ptr [ebp - 0x20c4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 24: jne 0x58838ebc
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 6A 09: push 9
        __asm _emit 0x6a
        __asm _emit 0x09
        ; Exact mapped bytes 68 E7 07 00 00: push 0x7e7
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE B6 FF FF: call 0x588345ad
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x58838ec7
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 85 3C DF FF FF: mov eax, dword ptr [ebp - 0x20c4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 25 00 00 F0 FF: and eax, 0xfff00000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 3C DF FF FF: mov dword ptr [ebp - 0x20c4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 35 74 6B 96 58: push dword ptr [0x58966b74]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 35 4C 6A 96 58: push dword ptr [0x58966a4c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x6a
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 A4 00 00 00: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 E0 60 90 58: push dword ptr [0x589060e0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes FF B5 38 DF FF FF: push dword ptr [ebp - 0x20c8]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B3 A8 5B 00 00: push dword ptr [ebx + 0x5ba8]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B3 A4 5B 00 00: push dword ptr [ebx + 0x5ba4]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa4
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1F 43 00 00: call 0x5883d21d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 10 43 00 00: call 0x5883d216
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 83 98 5B 00 00: movzx eax, byte ptr [ebx + 0x5b98]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF B3 70 14 00 00: push dword ptr [ebx + 0x1470]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 3C DF FF FF: push dword ptr [ebp - 0x20c4]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 34 0B 8F 58: push 0x588f0b34
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 34 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 6A 44: push 0x44
        __asm _emit 0x6a
        __asm _emit 0x44
        ; Exact mapped bytes 8D 85 C8 DE FF FF: lea eax, [ebp - 0x2138]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CC 3E 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 48: add esp, 0x48
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x48
        ; Exact mapped bytes C7 85 C8 DE FF FF 44 00 00 00: mov dword ptr [ebp - 0x2138], 0x44
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 14 DF FF FF: lea eax, [ebp - 0x20ec]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AF 3E 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes FF B3 A8 5B 00 00: push dword ptr [ebx + 0x5ba8]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E4 43 89 58: call dword ptr [0x588943e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DA 37 00 00: call 0x5883c756
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 3C DF FF FF: mov dword ptr [ebp - 0x20c4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 84 E0 FF FF: lea eax, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 38 DF FF FF: mov dword ptr [ebp - 0x20c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E6 81 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 89 85 24 DF FF FF: mov dword ptr [ebp - 0x20dc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 3E: jle 0x58838fe7
        __asm _emit 0x7e
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 9D 3C DF FF FF: mov ebx, dword ptr [ebp - 0x20c4]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D BD 84 E0 FF FF: lea edi, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 0F B6 03: movzx eax, byte ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x03
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 88 07 8F 58: push 0x588f0788
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 03 F8: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xf8
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E5: jne 0x58838fb7
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 9D 10 DF FF FF: mov ebx, dword ptr [ebp - 0x20f0]
        __asm _emit 0x8b
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 BD 38 DF FF FF: mov dword ptr [ebp - 0x20c8], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 7B 28: lea edi, [ebx + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0x28
        ; Exact mapped bytes 8D B3 C4 22 00 00: lea esi, [ebx + 0x22c4]
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 38 DF FF FF: mov eax, dword ptr [ebp - 0x20c8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 68 0B 8F 58: push 0x588f0b68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 33 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 89 10 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 39 8B A0 20 00 00: cmp dword ptr [ebx + 0x20a0], ecx
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x58839097
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 8B 9C 20 00 00: cmp dword ptr [ebx + 0x209c], ecx
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7D: jne 0x58839097
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes 8D 85 14 DF FF FF: lea eax, [ebp - 0x20ec]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 85 C8 DE FF FF: lea eax, [ebp - 0x2138]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 85 84 E0 FF FF: lea eax, [ebp - 0x1f7c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 08 42 89 58: call dword ptr [0x58894208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1C: jne 0x58839061
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 1D FC 41 89 58: mov ebx, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8D 85 90 FB FF FF: lea eax, [ebp - 0x470]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 E1 F3 FF FF: jmp 0x58838442
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF B5 1C DF FF FF: push dword ptr [ebp - 0x20e4]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 70 0B 8F 58: push 0x588f0b70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 32 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 11 10 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 1C DF FF FF: mov eax, dword ptr [ebp - 0x20e4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes A3 88 7D 96 58: mov dword ptr [0x58967d88], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 3C 68 96 58: mov dword ptr [0x5896683c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 14 DF FF FF: mov eax, dword ptr [ebp - 0x20ec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 90 7D 96 58: mov dword ptr [0x58967d90], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 24 DF FF FF: mov dword ptr [ebp - 0x20dc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 74 7C 96 58: mov eax, dword ptr [0x58967c74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 83 98 20 00 00: mov dword ptr [ebx + 0x2098], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0C: jne 0x588390be
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 85 30 DF FF FF: mov eax, dword ptr [ebp - 0x20d0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 83 98 20 00 00: mov dword ptr [ebx + 0x2098], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 8B 98 20 00 00: cmp dword ptr [ebx + 0x2098], ecx
        __asm _emit 0x39
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 41: jne 0x58839109
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes 8B 83 9C 20 00 00: mov eax, dword ptr [ebx + 0x209c]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 83 98 20 00 00: mov dword ptr [ebx + 0x2098], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 31: jne 0x58839109
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 83 A0 20 00 00: mov eax, dword ptr [ebx + 0x20a0]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 83 98 20 00 00: mov dword ptr [ebx + 0x2098], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 21: jne 0x58839109
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 7C 0B 8F 58: push 0x588f0b7c
        __asm _emit 0x68
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 68 78 7C 96 58: push 0x58967c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x7c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A A0 FF FF: call 0x58833157
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 C0: movzx eax, al
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 83 98 20 00 00: mov dword ptr [ebx + 0x2098], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 90 0B 8F 58: push 0x588f0b90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 32 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 70 0F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 8C 46 00 00: call 0x5883d7b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1B: jne 0x58839143
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 1D FC 41 89 58: mov ebx, dword ptr [0x588941fc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 98 0B 8F 58: push 0x588f0b98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 32 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes E9 0E FD FF FF: jmp 0x58838e51
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 AC 0B 8F 58: push 0x588f0bac
        __asm _emit 0x68
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 32 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 34 0F 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BB A0 20 00 00 00: cmp dword ptr [ebx + 0x20a0], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xa0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 CF 00 00 00: jne 0x58839235
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BB 9C 20 00 00 00: cmp dword ptr [ebx + 0x209c], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x9c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x58839235
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 18 DF FF FF: push dword ptr [ebp - 0x20e8]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 14 42 89 58: call dword ptr [0x58894214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 83 A4 5B 00 00: mov eax, dword ptr [ebx + 0x5ba4]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 6C 7B 96 58: push dword ptr [0x58967b6c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 2C DF FF FF: mov dword ptr [ebp - 0x20d4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 14 DF FF FF: mov eax, dword ptr [ebp - 0x20ec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 85 2C DF FF FF: lea eax, [ebp - 0x20d4]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes FF 15 20 41 89 58: call dword ptr [0x58894120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x5883924b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 DC 0B 8F 58: push 0x588f0bdc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 31 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 10 00: push 0x100000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 F0 43 89 58: call dword ptr [0x588943f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 55: je 0x58839228
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 35 6C 7B 96 58: push dword ptr [0x58967b6c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF B3 A4 5B 00 00: push dword ptr [ebx + 0x5ba4]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa4
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5B: je 0x5883924b
        __asm _emit 0x74
        __asm _emit 0x5b
        ; Exact mapped bytes FF 35 6C 7B 96 58: push dword ptr [0x58967b6c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 F0 0B 8F 58: push 0x588f0bf0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 31 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 82 0E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 68 28 0C 00 40: push 0x40000c28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 68 00 09 BD 1C: push 0x1cbd0900
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0xbd
        __asm _emit 0x1c
        ; Exact mapped bytes 68 E6 2E 00 00: push 0x2ee6
        __asm _emit 0x68
        __asm _emit 0xe6
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8C C4 FF FF: call 0x588356ad
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 72: push 0x72
        __asm _emit 0x6a
        __asm _emit 0x72
        ; Exact mapped bytes E9 89 E3 FF FF: jmp 0x588375b1
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 35 6C 7B 96 58: push dword ptr [0x58967b6c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 0C 0C 8F 58: push 0x588f0c0c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes EB C6: jmp 0x588391fb
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes FF 35 6C 7B 96 58: push dword ptr [0x58967b6c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF B3 A4 5B 00 00: push dword ptr [ebx + 0x5ba4]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa4
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 DD: jne 0x58839228
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes FF 15 B8 42 89 58: call dword ptr [0x588942b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 2B 85 24 DF FF FF: sub eax, dword ptr [ebp - 0x20dc]
        __asm _emit 0x2b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 24 0C 8F 58: push 0x588f0c24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 EB 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 1A 0E 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3C 0C 8F 58: push 0x588f0c3c
        __asm _emit 0x68
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 83 78 14 00 00: lea eax, [ebx + 0x1478]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AA 30 00 00: call 0x5883c331
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 74 19: je 0x588392a7
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes FF B5 30 DF FF FF: push dword ptr [ebp - 0x20d0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 24 0C 8F 58: push 0x588f0c24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8D 0D 00 00: call 0x5883a032
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF B3 A8 5B 00 00: push dword ptr [ebx + 0x5ba8]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0xa8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 42 89 58: call dword ptr [0x5889425c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 19: je 0x588392d2
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 68 4C 0C 8F 58: push 0x588f0c4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 C0 0D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58839221
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 DC 0B 8F 58: push 0x588f0bdc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 10 00: push 0x100000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 F0 43 89 58: call dword ptr [0x588943f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x5883931b
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 68 64 0C 8F 58: push 0x588f0c64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 83 0D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes A3 88 7D 96 58: mov dword ptr [0x58967d88], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 3C 68 96 58: mov dword ptr [0x5896683c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 90 7D 96 58: mov dword ptr [0x58967d90], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 68 70 0C 8F 58: push 0x588f0c70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 30 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 5E 0D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 BB 98 20 00 00 00: cmp dword ptr [ebx + 0x2098], 0
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x98
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DF FA FF FF: je 0x58838e1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 A3 9D FF FF: call 0x588330e4
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 54 D2 FF FF: call 0x5883659a
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 15: jne 0x58839365
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 6A 0B: push 0xb
        __asm _emit 0x6a
        __asm _emit 0x0b
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 2D 06 00 00: push 0x62d
        __asm _emit 0x68
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 9C B7 FF FF: call 0x58834afb
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 30 DF FF FF: mov eax, dword ptr [ebp - 0x20d0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 78 0C 8F 58: push 0x588f0c78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 2F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 12 0D 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes E8 DF D0 FF FF: call 0x5883645f
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 30 DF FF FF: mov dword ptr [ebp - 0x20d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 19: jne 0x588393a3
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 6A 0D: push 0xd
        __asm _emit 0x6a
        __asm _emit 0x0d
        ; Exact mapped bytes 68 30 06 00 00: push 0x630
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B1 08 00 00: push 0x8b1
        __asm _emit 0x68
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 7F 44 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 30 DF FF FF: mov eax, dword ptr [ebp - 0x20d0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 90 0C 8F 58: push 0x588f0c90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 2F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 D4 0C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 3D B8 7D 96 58 00: cmp dword ptr [0x58967db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x588393cd
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 39 05 C4 7D 96 58: cmp dword ptr [0x58967dc4], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x7d
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 2C: je 0x588393f9
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 80 7B 26 00: cmp byte ptr [ebx + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7b
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x588393f9
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 92 CD FF FF: call 0x5883616c
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 1B: jne 0x588393f9
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 68 C8 0A 8F 58: push 0x588f0ac8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 2F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 9B 0C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes BE DC 00 00 00: mov esi, 0xdc
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x58839466
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes 68 A8 0C 8F 58: push 0x588f0ca8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 2F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 80 0C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF B3 70 14 00 00: push dword ptr [ebx + 0x1470]
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 11 06 00 00: push 0x611
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B1 08 00 00: push 0x8b1
        __asm _emit 0x68
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 43 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF B5 40 DF FF FF: push dword ptr [ebp - 0x20c0]
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0x40
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 68 17 06 00 00: push 0x617
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B1 08 00 00: push 0x8b1
        __asm _emit 0x68
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 43 00 00: call 0x5883d81c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 AA CF FF FF: call 0x588363ec
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 B0 0C 8F 58: push 0x588f0cb0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 88 83 D8 5B 00 00: mov byte ptr [ebx + 0x5bd8], al
        __asm _emit 0x88
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 2F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 31 0C 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 88 03: mov byte ptr [ebx], al
        __asm _emit 0x88
        __asm _emit 0x03
        ; Exact mapped bytes BE 55 07 00 00: mov esi, 0x755
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF 2D 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes E8 D6 7B FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

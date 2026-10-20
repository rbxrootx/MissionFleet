// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F370 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_0040f370_0040F370() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 B0 AB 58 00: push 0x58abb0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xab
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 44: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x44
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7D B0: lea edi, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xb0
        ; Exact mapped bytes B9 11 00 00 00: mov ecx, 0x11
        __asm _emit 0xb9
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 4D F0: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 66: push 0x66
        __asm _emit 0x6a
        __asm _emit 0x66
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 47 F0 0B 00: call 0x4ce3f7
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 60: add ecx, 0x60
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x60
        ; Exact mapped bytes E8 41 EB 11 00: call 0x52df03
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 9C 00 00 00: add ecx, 0x9c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 0D 0A 00: call 0x4b019b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 02: mov byte ptr [ebp - 4], 2
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 D8 00 00 00: add ecx, 0xd8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B5 0D 0A 00: call 0x4b019b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 03: mov byte ptr [ebp - 4], 3
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x03
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 14 01 00 00: add ecx, 0x114
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A3 0D 0A 00: call 0x4b019b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 04: mov byte ptr [ebp - 4], 4
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 50 01 00 00: add ecx, 0x150
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 17 0A 00: call 0x4b0b44
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 05: mov byte ptr [ebp - 4], 5
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x05
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 8C 01 00 00: add ecx, 0x18c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3B DC 09 00: call 0x4ad057
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 06: mov byte ptr [ebp - 4], 6
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x06
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes C7 01 30 3C 63 00: mov dword ptr [ecx], 0x633c30
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x30
        __asm _emit 0x3c
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes C7 82 C8 01 00 00 00 00 00 00: mov dword ptr [edx + 0x1c8], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes C7 80 CC 01 00 00 00 00 00 00: mov dword ptr [eax + 0x1cc], 0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes C7 81 D0 01 00 00 47 1F 00 00: mov dword ptr [ecx + 0x1d0], 0x1f47
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes C7 82 D4 01 00 00 00 00 00 00: mov dword ptr [edx + 0x1d4], 0
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes C7 80 D8 01 00 00 F0 00 00 00: mov dword ptr [eax + 0x1d8], 0xf0
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 25 12 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x25
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 45 23 12 00: call 0x5317c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x23
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 89 81 DC 01 00 00: mov dword ptr [ecx + 0x1dc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 50: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x50
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 4B 59 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
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

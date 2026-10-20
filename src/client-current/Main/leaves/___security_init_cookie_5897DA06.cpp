// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897DA06 .. +0x96 bytes.
extern "C" __declspec(naked) void ___security_init_cookie_5897DA06() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 83 65 F8 00: and dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 83 65 FC 00: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes BF 4E E6 40 BB: mov edi, 0xbb40e64e
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0xbb
        ; Exact mapped bytes BB 00 00 FF FF: mov ebx, 0xffff0000
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 0D: je 0x5897da38
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 85 C3: test ebx, eax
        __asm _emit 0x85
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x5897da38
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes F7 D0: not eax
        __asm _emit 0xf7
        __asm _emit 0xd0
        ; Exact mapped bytes A3 D8 FB 9C 58: mov dword ptr [0x589cfbd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes EB 60: jmp 0x5897da98
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 45 F8: lea eax, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 E0 C0 98 58: call dword ptr [0x5898c0e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 75 FC: mov esi, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xfc
        ; Exact mapped bytes 33 75 F8: xor esi, dword ptr [ebp - 8]
        __asm _emit 0x33
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes FF 15 E4 C0 98 58: call dword ptr [0x5898c0e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 33 F0: xor esi, eax
        __asm _emit 0x33
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 E8 C0 98 58: call dword ptr [0x5898c0e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 33 F0: xor esi, eax
        __asm _emit 0x33
        __asm _emit 0xf0
        ; Exact mapped bytes FF 15 20 C1 98 58: call dword ptr [0x5898c120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 33 F0: xor esi, eax
        __asm _emit 0x33
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 45 F0: lea eax, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 34 C1 98 58: call dword ptr [0x5898c134]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 33 45 F0: xor eax, dword ptr [ebp - 0x10]
        __asm _emit 0x33
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 33 F0: xor esi, eax
        __asm _emit 0x33
        __asm _emit 0xf0
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 75 07: jne 0x5897da7e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes BE 4F E6 40 BB: mov esi, 0xbb40e64f
        __asm _emit 0xbe
        __asm _emit 0x4f
        __asm _emit 0xe6
        __asm _emit 0x40
        __asm _emit 0xbb
        ; Exact mapped bytes EB 0B: jmp 0x5897da89
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 85 F3: test ebx, esi
        __asm _emit 0x85
        __asm _emit 0xf3
        ; Exact mapped bytes 75 07: jne 0x5897da89
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes C1 E0 10: shl eax, 0x10
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x10
        ; Exact mapped bytes 0B F0: or esi, eax
        __asm _emit 0x0b
        __asm _emit 0xf0
        ; Exact mapped bytes 89 35 D4 FB 9C 58: mov dword ptr [0x589cfbd4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes F7 D6: not esi
        __asm _emit 0xf7
        __asm _emit 0xd6
        ; Exact mapped bytes 89 35 D8 FB 9C 58: mov dword ptr [0x589cfbd8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}

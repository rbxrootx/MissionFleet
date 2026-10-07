// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 199 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821CE0 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_58821ce0_segment_00() {
    __asm {
        ; Exact mapped bytes 8A 54 24 04: mov dl, byte ptr [esp + 4]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 0F B7 4E 24: movzx ecx, word ptr [esi + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 8A C2: mov al, dl
        __asm _emit 0x8a
        __asm _emit 0xc2
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CF: and cx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 4E 24: movzx ecx, word ptr [esi + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BF FD FF 00 00: mov edi, 0xfffd
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 66 23 CF: and cx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xcf
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 83 BE 98 0C 00 00 00: cmp word ptr [esi + 0xc98], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 7E 1B: jle 0x58821d3d
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 8E 74 0C 00 00: mov ecx, dword ptr [esi + 0xc74]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 79 24: mov di, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes BB FD FF 00 00: mov ebx, 0xfffd
        __asm _emit 0xbb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 FB: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 0B F8: or di, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf8
        ; Exact mapped bytes 66 89 79 24: mov word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 75 2F: jne 0x58821d71
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4A 30: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x30
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 86 9C 0C 00 00 01 00 00 00: mov dword ptr [esi + 0xc9c], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B6 74 0C 00 00: mov esi, dword ptr [esi + 0xc74]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 84 D2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xd2
        ; Exact mapped bytes 75 2D: jne 0x58821da2
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 30: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 42 18: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x18
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes C7 86 9C 0C 00 00 00 00 00 00: mov dword ptr [esi + 0xc9c], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B6 74 0C 00 00: mov esi, dword ptr [esi + 0xc74]
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A2F30 .. +0x1C0 bytes.
// Source symbol alias: FUN_587a2f30.
extern "C" __declspec(naked) void FUN_587a2f30() {
    __asm {
        // 0x587A2F30: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A2F34: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A2F36: push ebx
        __asm _emit 0x53
        // 0x587A2F37: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587A2F39: push esi
        __asm _emit 0x56
        // 0x587A2F3A: mov dword ptr [ebx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x78
        // 0x587A2F3D: push edi
        __asm _emit 0x57
        // 0x587A2F3E: lea esi, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587A2F41: lea edi, [ebx + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x7C
        // 0x587A2F44: mov ecx, 0x25
        __asm _emit 0xB9
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F49: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587A2F4B: movzx ecx, word ptr [edx + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8A
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F52: mov word ptr [ebx + 0x126], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F59: mov ax, word ptr [edx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F60: mov word ptr [ebx + 0x128], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F67: movzx ecx, word ptr [edx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8A
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F6E: mov word ptr [ebx + 0x12a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F75: lea eax, [ebx + 0x11a]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F7B: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F80: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A2F82: mov word ptr [eax + 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587A2F86: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x587A2F89: mov word ptr [eax - 4], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xFC
        // 0x587A2F8D: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x587A2F90: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x587A2F93: jne 0x587a2f80
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587A2F95: mov byte ptr [ebx + 0x112], cl
        __asm _emit 0x88
        __asm _emit 0x8B
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2F9B: mov eax, 0x8fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FA0: and word ptr [ebx + 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FA7: mov ax, word ptr [edx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FAE: movzx ecx, word ptr [ebx + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FB5: mov word ptr [ebx + 0x122], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FBC: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FC1: or word ptr [ebx + 0x112], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FC8: movzx eax, word ptr [ebx + 0x112]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FCF: mov dx, word ptr [edx + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FD6: and eax, 0xf1ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FDB: mov word ptr [ebx + 0x112], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FE2: and eax, 0xe00
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FE7: sub eax, 0x200
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FEC: and ecx, 0xf000
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2FF2: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587A2FF4: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587A2FF6: and eax, 0x36
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x36
        // 0x587A2FF9: mov word ptr [ebx + 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3000: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A3004: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587A3007: mov word ptr [ebx + 0x124], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A300E: mov dword ptr [ebx + 0x408], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3014: mov dword ptr [ebx + 0x3cc], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xCC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A301A: mov dword ptr [ebx + 0x3f8], 0x44
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3024: mov dword ptr [ebx + 0x3fc], 0x3c
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A302E: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x9C
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A3033: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587A3038: jns 0x587a303f
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587A303A: dec eax
        __asm _emit 0x48
        // 0x587A303B: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x587A303E: inc eax
        __asm _emit 0x40
        // 0x587A303F: add eax, 0x42
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x42
        // 0x587A3042: mov dword ptr [ebx + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3048: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A304D: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587A3052: jns 0x587a3059
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587A3054: dec eax
        __asm _emit 0x48
        // 0x587A3055: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFE
        // 0x587A3058: inc eax
        __asm _emit 0x40
        // 0x587A3059: add eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x26
        // 0x587A305C: mov dword ptr [ebx + 0x404], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3062: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3067: xor word ptr [ebx + 0x122], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A306E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A3070: xor word ptr [ebx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3077: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A307D: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x587A3080: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587A3085: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587A3087: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587A308A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587A308C: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587A308F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587A3091: imul ecx, dword ptr [ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587A3095: mov dword ptr [ebx + 0x418], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A309B: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A30A1: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x587A30A4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587A30A9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587A30AB: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A30AF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587A30B2: imul ecx, ecx, 0x190
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30B8: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A30BA: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A30BD: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A30BF: imul eax, dword ptr [ebx + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x587A30C3: mov dword ptr [ebx + 0x41c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30C9: pop edi
        __asm _emit 0x5F
        // 0x587A30CA: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30CF: pop esi
        __asm _emit 0x5E
        // 0x587A30D0: mov dword ptr [ebx + 0x420], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30D6: mov dword ptr [ebx + 0x424], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30DC: mov dword ptr [ebx + 0x428], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30E2: mov dword ptr [ebx + 0x42c], 0x14
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A30EC: pop ebx
        __asm _emit 0x5B
        // 0x587A30ED: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

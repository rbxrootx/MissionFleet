// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877A9B0 .. +0x11C bytes.
// Source symbol alias: FUN_5877a9b0.
extern "C" __declspec(naked) void FUN_5877a9b0() {
    __asm {
        // 0x5877A9B0: push ebx
        __asm _emit 0x53
        // 0x5877A9B1: push esi
        __asm _emit 0x56
        // 0x5877A9B2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877A9B4: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877A9B7: mov ecx, dword ptr [esi + 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A9BD: mov edx, 0x12c
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A9C2: sub edx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5877A9C5: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A9CA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877A9CC: je 0x5877a9ec
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5877A9CE: cmp dword ptr [esi + 0x25c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5877A9D5: je 0x5877a9ec
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5877A9D7: cmp dword ptr [esp + 0xc], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x5877A9DC: jne 0x5877a9ec
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5877A9DE: mov ebx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A9E4: push ebx
        __asm _emit 0x53
        // 0x5877A9E5: push edx
        __asm _emit 0x52
        // 0x5877A9E6: push eax
        __asm _emit 0x50
        // 0x5877A9E7: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xCA
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5877A9EC: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A9F2: mov dword ptr [esi + 0x25c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A9FC: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA01: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AA05: mov eax, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA0B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5877AA0D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877AA11: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA17: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA1C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AA20: mov eax, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA26: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5877AA28: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877AA2C: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5877AA2F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5877AA32: add eax, 0x41
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x41
        // 0x5877AA35: add ecx, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2C
        // 0x5877AA38: push eax
        __asm _emit 0x50
        // 0x5877AA39: push ecx
        __asm _emit 0x51
        // 0x5877AA3A: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA40: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877AA45: test dword ptr [esi + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5877AA4F: mov ebx, 0xf
        __asm _emit 0xBB
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA54: je 0x5877aa65
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5877AA56: test byte ptr [esi + 0x5e], bl
        __asm _emit 0x84
        __asm _emit 0x5E
        __asm _emit 0x5E
        // 0x5877AA59: je 0x5877aa65
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5877AA5B: mov eax, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA61: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5877AA65: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5877AA68: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877AA6B: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA71: add edx, 0x41
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x41
        // 0x5877AA74: push edx
        __asm _emit 0x52
        // 0x5877AA75: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5877AA78: push eax
        __asm _emit 0x50
        // 0x5877AA79: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877AA7E: mov eax, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA84: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA89: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AA8D: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5877AA90: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877AA93: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AA99: add edx, 0x41
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x41
        // 0x5877AA9C: push edx
        __asm _emit 0x52
        // 0x5877AA9D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5877AAA0: push eax
        __asm _emit 0x50
        // 0x5877AAA1: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877AAA6: mov eax, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AAAC: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5877AAB0: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5877AAB5: mov esi, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AABB: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5877AABE: dec eax
        __asm _emit 0x48
        // 0x5877AABF: cmp dword ptr [esi + 0x64], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5877AAC2: jge 0x5877aac7
        __asm _emit 0x7D
        __asm _emit 0x03
        // 0x5877AAC4: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5877AAC7: pop esi
        __asm _emit 0x5E
        // 0x5877AAC8: pop ebx
        __asm _emit 0x5B
        // 0x5877AAC9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

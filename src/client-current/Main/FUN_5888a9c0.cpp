// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888A9C0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_5888a9c0() {
    __asm {
        // 0x5888A9C0: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x5888A9C5: push esi
        __asm _emit 0x56
        // 0x5888A9C6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888A9C8: jne 0x5888aa61
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A9CE: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5888A9D2: cmp eax, dword ptr [esi + 0x224]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A9D8: jne 0x5888aa61
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A9DE: mov eax, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888A9E4: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5888A9E9: jne 0x5888aa14
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5888A9EB: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5888A9EE: push 0xfffffee1
        __asm _emit 0x68
        __asm _emit 0xE1
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888A9F3: push ecx
        __asm _emit 0x51
        // 0x5888A9F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888A9F6: mov dword ptr [esi + 0x22c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA00: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xB6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888AA05: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5888AA07: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5888AA0A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888AA0C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888AA0E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888AA10: pop esi
        __asm _emit 0x5E
        // 0x5888AA11: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5888AA14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888AA16: jne 0x5888aa61
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x5888AA18: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888AA1E: cmp dword ptr [ecx + 0x30], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x5888AA21: je 0x5888aa61
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5888AA23: mov dword ptr [esi + 0x22c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5888AA2D: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888AA33: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x30
        // 0x5888AA36: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA3C: movzx edx, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5888AA40: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5888AA43: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x5888AA46: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5888AA49: add edx, dword ptr [esi + 0x228]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA4F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888AA51: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5888AA54: sub edx, 0x118
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888AA5A: push edx
        __asm _emit 0x52
        // 0x5888AA5B: push eax
        __asm _emit 0x50
        // 0x5888AA5C: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xB5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888AA61: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888AA63: pop esi
        __asm _emit 0x5E
        // 0x5888AA64: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A5980 .. +0xE3 bytes.
// Source symbol alias: FUN_587a5980.
extern "C" __declspec(naked) void FUN_587a5980() {
    __asm {
        // 0x587A5980: push ebp
        __asm _emit 0x55
        // 0x587A5981: push esi
        __asm _emit 0x56
        // 0x587A5982: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5986: mov byte ptr [esi], 0
        __asm _emit 0xC6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587A5989: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A598E: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A5991: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A5993: cmp dword ptr [eax + 0x141c], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5999: push edi
        __asm _emit 0x57
        // 0x587A599A: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A599F: jle 0x587a5a5b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59A5: push ebx
        __asm _emit 0x53
        // 0x587A59A6: lea ebx, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x587A59A9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59B0: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x587A59B3: je 0x587a5a41
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59B9: mov edx, dword ptr [eax + 0x44c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59BF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A59C1: shl edx, cl
        __asm _emit 0xD3
        __asm _emit 0xE2
        // 0x587A59C3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587A59C5: jns 0x587a5a41
        __asm _emit 0x79
        __asm _emit 0x7A
        // 0x587A59C7: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A59CD: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A59D0: movzx edx, byte ptr [ecx + ebp + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59D8: cmp edx, dword ptr [ecx + 0x340]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59DE: jne 0x587a5a41
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x587A59E0: test byte ptr [esp + 0x14], 0x10
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x10
        // 0x587A59E5: je 0x587a5a0c
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587A59E7: cmp byte ptr [eax + ebp + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x28
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A59EF: jne 0x587a5a0c
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A59F1: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A59F3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A59F5: mov eax, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x40
        // 0x587A59F8: lea edx, [edi + esi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x37
        // 0x587A59FB: push edx
        __asm _emit 0x52
        // 0x587A59FC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A59FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5A00: je 0x587a5a0c
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A5A02: inc byte ptr [esi]
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x587A5A04: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587A5A06: inc dword ptr [0x58a24900]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5A0C: test byte ptr [esp + 0x14], 0x20
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x20
        // 0x587A5A11: je 0x587a5a41
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587A5A13: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5A19: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A5A1C: cmp byte ptr [edx + ebp + 0x21c], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x2A
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A5A24: jne 0x587a5a41
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587A5A26: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587A5A28: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A5A2A: mov eax, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x40
        // 0x587A5A2D: lea edx, [edi + esi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x37
        // 0x587A5A30: push edx
        __asm _emit 0x52
        // 0x587A5A31: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587A5A33: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A5A35: je 0x587a5a41
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A5A37: inc byte ptr [esi]
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x587A5A39: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587A5A3B: inc dword ptr [0x58a24900]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5A41: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A5A47: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A5A4A: inc ebp
        __asm _emit 0x45
        // 0x587A5A4B: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587A5A4E: cmp ebp, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xA8
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5A54: jl 0x587a59b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A5A5A: pop ebx
        __asm _emit 0x5B
        // 0x587A5A5B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587A5A5D: pop edi
        __asm _emit 0x5F
        // 0x587A5A5E: pop esi
        __asm _emit 0x5E
        // 0x587A5A5F: pop ebp
        __asm _emit 0x5D
        // 0x587A5A60: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

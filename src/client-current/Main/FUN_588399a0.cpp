// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588399A0 .. +0x1D7 bytes.
// Source symbol alias: FUN_588399a0.
extern "C" __declspec(naked) void FUN_588399a0() {
    __asm {
        // 0x588399A0: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x24
        // 0x588399A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588399A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588399AA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588399AE: push esi
        __asm _emit 0x56
        // 0x588399AF: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588399B1: cmp byte ptr [esi + 0x2e5], 1
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588399B8: push edi
        __asm _emit 0x57
        // 0x588399B9: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588399BD: jne 0x58839b64
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588399C3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588399C5: jne 0x58839a00
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x588399C7: push edi
        __asm _emit 0x57
        // 0x588399C8: push edi
        __asm _emit 0x57
        // 0x588399C9: push edi
        __asm _emit 0x57
        // 0x588399CA: push 0x24c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588399CF: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x21
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588399D4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588399D6: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xB3
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588399DB: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588399E0: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588399E6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588399E8: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588399EB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588399ED: pop edi
        __asm _emit 0x5F
        // 0x588399EE: pop esi
        __asm _emit 0x5E
        // 0x588399EF: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588399F3: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588399F5: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x31
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588399FA: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x588399FD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58839A00: mov al, byte ptr [esi + 0x2e4]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A06: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58839A08: jne 0x58839a26
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58839A0A: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A10: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58839A15: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A1B: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A20: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58839A24: jmp 0x58839a44
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58839A26: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58839A28: jne 0x58839a44
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58839A2A: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A30: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A35: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58839A39: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A3F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58839A44: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A4A: lea eax, [edi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58839A4D: push eax
        __asm _emit 0x50
        // 0x58839A4E: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x82
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839A53: lea ecx, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x2D
        // 0x58839A56: push ecx
        __asm _emit 0x51
        // 0x58839A57: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A5D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x82
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839A62: movzx edx, word ptr [edi + 0x4a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x4A
        // 0x58839A66: movzx eax, word ptr [edi + 0x48]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x48
        // 0x58839A6A: movzx ecx, word ptr [edi + 0x46]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x46
        // 0x58839A6E: push edx
        __asm _emit 0x52
        // 0x58839A6F: push eax
        __asm _emit 0x50
        // 0x58839A70: push ecx
        __asm _emit 0x51
        // 0x58839A71: push 0x5899e308
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xE3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58839A76: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839A7C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58839A7F: push eax
        __asm _emit 0x50
        // 0x58839A80: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58839A84: push edx
        __asm _emit 0x52
        // 0x58839A85: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58839A8B: mov ecx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839A91: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58839A94: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58839A98: push eax
        __asm _emit 0x50
        // 0x58839A99: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x82
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839A9E: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58839AA5: je 0x58839ac7
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58839AA7: mov byte ptr [esi + 0x2e5], 3
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58839AAE: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58839AB4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58839AB6: push ecx
        __asm _emit 0x51
        // 0x58839AB7: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58839ABD: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xF7
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58839AC2: jmp 0x58839b4c
        __asm _emit 0xE9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839AC7: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839ACD: mov byte ptr [esi + 0x2e5], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839AD4: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x58839ADB: jle 0x58839aef
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58839ADD: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839AE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839AE5: je 0x58839aef
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58839AE7: mov eax, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839AED: jmp 0x58839af1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58839AEF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839AF1: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839AF7: push eax
        __asm _emit 0x50
        // 0x58839AF8: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x7B
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839AFD: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B03: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x58839B0A: jle 0x58839b1e
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58839B0C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B12: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839B14: je 0x58839b1e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58839B16: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B1C: jmp 0x58839b20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58839B1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58839B20: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B26: push eax
        __asm _emit 0x50
        // 0x58839B27: call 0x587316c0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x7B
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58839B2C: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B32: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58839B37: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839B3C: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B42: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B47: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839B4C: mov edx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x58839B4F: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B55: mov dword ptr [esi + 0x30c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839B5B: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58839B5E: push eax
        __asm _emit 0x50
        // 0x58839B5F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xD7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839B64: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58839B68: pop edi
        __asm _emit 0x5F
        // 0x58839B69: pop esi
        __asm _emit 0x5E
        // 0x58839B6A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58839B6C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58839B71: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58839B74: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885FDC0 .. +0xC6 bytes.
// Source symbol alias: FUN_5885fdc0.
extern "C" __declspec(naked) void FUN_5885fdc0() {
    __asm {
        // 0x5885FDC0: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FDC6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5885FDCB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5885FDCD: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FDD4: push esi
        __asm _emit 0x56
        // 0x5885FDD5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885FDD7: cmp dword ptr [esi + 0xa8], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5885FDDE: je 0x5885fe70
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FDE4: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885FDE9: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885FDEC: movzx eax, word ptr [ecx + 0x164]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FDF3: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885FDF6: je 0x5885fdfe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885FDF8: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5885FDFC: jne 0x5885fe70
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x5885FDFE: push edi
        __asm _emit 0x57
        // 0x5885FDFF: movzx edi, word ptr [esi + 0xc8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FE06: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885FE09: je 0x5885fe68
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5885FE0B: push 0xfe
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FE10: lea edx, [esp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x5885FE14: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885FE16: push edx
        __asm _emit 0x52
        // 0x5885FE17: mov byte ptr [esp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5885FE1C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xCE
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885FE21: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x5885FE24: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885FE27: push eax
        __asm _emit 0x50
        // 0x5885FE28: push 0x5899eb40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885FE2D: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885FE33: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885FE36: push eax
        __asm _emit 0x50
        // 0x5885FE37: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885FE3B: push ecx
        __asm _emit 0x51
        // 0x5885FE3C: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885FE42: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885FE45: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5885FE49: push edx
        __asm _emit 0x52
        // 0x5885FE4A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885FE4C: call 0x5885f8c0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885FE51: pop edi
        __asm _emit 0x5F
        // 0x5885FE52: pop esi
        __asm _emit 0x5E
        // 0x5885FE53: mov ecx, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FE5A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5885FE5C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xCD
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885FE61: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FE67: ret
        __asm _emit 0xC3
        // 0x5885FE68: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885FE6A: call 0x5885f3a0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885FE6F: pop edi
        __asm _emit 0x5F
        // 0x5885FE70: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FE77: pop esi
        __asm _emit 0x5E
        // 0x5885FE78: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5885FE7A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xCD
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885FE7F: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885FE85: ret
        __asm _emit 0xC3
    }
}

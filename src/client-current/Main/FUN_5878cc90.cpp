// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878CC90 .. +0xD0 bytes.
// Source symbol alias: FUN_5878cc90.
extern "C" __declspec(naked) void FUN_5878cc90() {
    __asm {
        // 0x5878CC90: push esi
        __asm _emit 0x56
        // 0x5878CC91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878CC93: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5878CC97: mov ecx, 0xedff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CC9C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5878CC9F: mov dword ptr [esi + 0x12150], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CCA9: mov edx, 0xd00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CCAE: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5878CCB1: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5878CCB5: mov eax, dword ptr [esi + 0x12120]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878CCBB: mov dword ptr [eax + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CCC2: mov dword ptr [eax + 0x84], 0x100
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CCCC: mov dword ptr [eax + 0x8c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5878CCD6: mov ecx, dword ptr [esi + 0x12120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878CCDC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878CCDE: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878CCE1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878CCE3: lea eax, [esi + 0x1214c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878CCE9: push eax
        __asm _emit 0x50
        // 0x5878CCEA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878CCEC: push esi
        __asm _emit 0x56
        // 0x5878CCED: push 0x5878af40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xAF
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x5878CCF2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878CCF4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878CCF6: mov dword ptr [esi + 0x124], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD00: mov dword ptr [esi + 0x12c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878CD0A: call dword ptr [0x5898c130]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878CD10: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878CD12: push eax
        __asm _emit 0x50
        // 0x5878CD13: mov dword ptr [esi + 0x12148], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878CD19: call dword ptr [0x5898c1b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878CD1F: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878CD24: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5878CD27: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5878CD2A: cmp ecx, 0x400
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD30: je 0x5878cd5e
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5878CD32: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878CD38: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x5878CD3B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878CD3D: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5878CD40: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878CD42: push 0x67
        __asm _emit 0x6A
        __asm _emit 0x67
        // 0x5878CD44: push esi
        __asm _emit 0x56
        // 0x5878CD45: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878CD47: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5878CD4A: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5878CD4D: add eax, 0x400
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD52: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878CD58: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5878CD5B: mov dword ptr [esi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5878CD5E: pop esi
        __asm _emit 0x5E
        // 0x5878CD5F: ret
        __asm _emit 0xC3
    }
}

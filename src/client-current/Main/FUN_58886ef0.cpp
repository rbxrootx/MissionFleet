// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58886EF0 .. +0x17B bytes.
extern "C" __declspec(naked) void FUN_58886ef0() {
    __asm {
        // 0x58886EF0: push esi
        __asm _emit 0x56
        // 0x58886EF1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58886EF3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58886EF7: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886EFC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58886EFF: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F04: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58886F07: jne 0x58887069
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F0D: push edi
        __asm _emit 0x57
        // 0x58886F0E: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F13: or word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x58886F17: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58886F1C: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58886F20: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F25: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58886F28: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F2D: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58886F30: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58886F34: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58886F37: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58886F3A: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F41: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58886F46: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x58886F4D: jle 0x58886f66
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58886F4F: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F56: je 0x58886f66
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886F58: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F5E: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F64: jmp 0x58886f68
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58886F66: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58886F68: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58886F6E: push edx
        __asm _emit 0x52
        // 0x58886F6F: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58886F74: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58886F79: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x58886F80: jle 0x58886f99
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58886F82: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F89: je 0x58886f99
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58886F8B: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F91: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886F97: jmp 0x58886f9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58886F99: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58886F9B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58886F9D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58886FA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58886FA2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58886FA4: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58886FAA: movzx eax, byte ptr [ecx + 0x61]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x61
        // 0x58886FAE: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58886FB1: je 0x58886fc4
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58886FB3: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58886FB5: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x58886FB8: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58886FBA: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58886FBD: lea ecx, [edx + eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0xFF
        // 0x58886FC1: push ecx
        __asm _emit 0x51
        // 0x58886FC2: jmp 0x58886fce
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58886FC4: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58886FC7: add edx, 0x98
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886FCD: push edx
        __asm _emit 0x52
        // 0x58886FCE: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58886FD1: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xC3
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58886FD6: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58886FD9: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x58886FDC: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58886FDF: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58886FE2: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886FE8: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58886FEB: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886FF1: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x58886FF4: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886FFA: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58886FFD: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887003: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58887006: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888700C: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5888700F: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887015: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58887018: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888701E: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58887021: mov dword ptr [esi + 0xe4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888702B: mov eax, dword ptr [0x58a2456c]
        __asm _emit 0xA1
        __asm _emit 0x6C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887030: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58887034: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x58887037: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888703C: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5888703F: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58887042: mov eax, dword ptr [0x58a24570]
        __asm _emit 0xA1
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887047: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888704B: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x5888704E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58887051: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58887054: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58887059: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5888705C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5888705E: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58887061: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58887063: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58887065: push esi
        __asm _emit 0x56
        // 0x58887066: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58887068: pop edi
        __asm _emit 0x5F
        // 0x58887069: pop esi
        __asm _emit 0x5E
        // 0x5888706A: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A9F20 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_588a9f20() {
    __asm {
        // 0x588A9F20: push esi
        __asm _emit 0x56
        // 0x588A9F21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A9F23: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A9F27: push edi
        __asm _emit 0x57
        // 0x588A9F28: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588A9F2A: je 0x588aa0ab
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F30: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A9F34: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F39: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588A9F3C: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F41: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A9F44: je 0x588a9f8f
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x588A9F46: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A9F4A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588A9F4D: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F52: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A9F55: je 0x588a9f8f
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588A9F57: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A9F5B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588A9F5E: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F63: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A9F66: je 0x588aa0ab
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F6C: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A9F70: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588A9F73: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F78: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A9F7B: jne 0x588aa0ab
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F81: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F86: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588A9F8A: jmp 0x588aa0ab
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9F8F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588A9F92: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588A9F95: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588A9F97: jne 0x588a9fa1
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588A9F99: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588A9F9C: cmp edx, dword ptr [esi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588A9F9F: je 0x588aa006
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x588A9FA1: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588A9FA3: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588A9FA6: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588A9FA9: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588A9FAC: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588A9FAF: ja 0x588a9fd6
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x588A9FB1: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588A9FB4: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588A9FB7: ja 0x588a9fcd
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588A9FB9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A9FBB: jge 0x588a9fc2
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588A9FBD: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588A9FC0: jmp 0x588a9fe1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588A9FC2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588A9FC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A9FC6: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588A9FC9: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588A9FCB: jmp 0x588a9fe1
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588A9FCD: cdq
        __asm _emit 0x99
        // 0x588A9FCE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588A9FD0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A9FD2: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588A9FD4: jmp 0x588a9fe1
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588A9FD6: cdq
        __asm _emit 0x99
        // 0x588A9FD7: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588A9FDA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588A9FDC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588A9FDE: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588A9FE1: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588A9FE3: cdq
        __asm _emit 0x99
        // 0x588A9FE4: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588A9FE6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588A9FE8: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x588A9FEB: jle 0x588a9ffd
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588A9FED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9FEF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588A9FF1: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x588A9FF4: dec eax
        __asm _emit 0x48
        // 0x588A9FF5: and eax, 0xffffff80
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x80
        // 0x588A9FF8: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588A9FFB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9FFD: push ecx
        __asm _emit 0x51
        // 0x588A9FFE: push edi
        __asm _emit 0x57
        // 0x588A9FFF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AA001: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x8E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AA006: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588AA009: cmp ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AA00C: jne 0x588aa0ab
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA012: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588AA015: cmp edx, dword ptr [esi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588AA018: jne 0x588aa0ab
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA01E: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA022: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA027: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AA02A: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA02F: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588AA032: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA036: jne 0x588aa06b
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588AA038: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA03D: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AA040: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA045: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588AA048: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA04C: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588AA051: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA057: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA05D: push eax
        __asm _emit 0x50
        // 0x588AA05E: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA064: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x6A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588AA069: jmp 0x588aa0ab
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588AA06B: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AA06E: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA073: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588AA076: jne 0x588aa0ab
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x588AA078: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA07C: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA081: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AA084: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA089: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588AA08C: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA090: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA095: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA099: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA09E: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588AA0A2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA0A7: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AA0AB: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588AA0AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588AA0B0: je 0x588aa0c7
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588AA0B2: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588AA0B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588AA0B7: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588AA0BA: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588AA0BD: je 0x588aa0ca
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AA0BF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588AA0C1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588AA0C3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588AA0C5: jne 0x588aa0b2
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588AA0C7: pop edi
        __asm _emit 0x5F
        // 0x588AA0C8: pop esi
        __asm _emit 0x5E
        // 0x588AA0C9: ret
        __asm _emit 0xC3
        // 0x588AA0CA: pop edi
        __asm _emit 0x5F
        // 0x588AA0CB: pop esi
        __asm _emit 0x5E
        // 0x588AA0CC: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 277 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887da90.

// Ghidra body range 0x5887DA90..0x5887DBA5; 277 mapped bytes.
extern "C" __declspec(naked) void FUN_5887da90_segment_00() {
    __asm {
        // 0x5887DA90: push esi
        __asm _emit 0x56
        // 0x5887DA91: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887DA93: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887DA97: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DA9C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5887DA9F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAA4: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5887DAA7: jne 0x5887dba3
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAAD: push edi
        __asm _emit 0x57
        // 0x5887DAAE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887DAB0: mov dword ptr [esi + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAB7: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DABD: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAC3: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5887DAC8: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887DACC: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAD1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5887DAD4: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAD9: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5887DADC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887DADE: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5887DAE2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887DAE4: mov word ptr [esi + 0x92], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAEB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887DAED: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5887DAF0: mov dword ptr [esi + 0x70], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887DAF7: mov word ptr [esi + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DAFE: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB04: call 0x5887cba0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887DB09: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5887DB0C: mov ecx, dword ptr [esi + eax*4 + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB13: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5887DB15: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5887DB18: push edi
        __asm _emit 0x57
        // 0x5887DB19: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5887DB1B: push ecx
        __asm _emit 0x51
        // 0x5887DB1C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887DB1E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5887DB20: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887DB22: call 0x5887d1c0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887DB27: mov dword ptr [esi + 0x50], 0x52
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB2E: mov dword ptr [esi + 0x54], 0x7a
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x7A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB35: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887DB3A: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5887DB3D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5887DB3F: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5887DB42: push edi
        __asm _emit 0x57
        // 0x5887DB43: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5887DB45: push esi
        __asm _emit 0x56
        // 0x5887DB46: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5887DB48: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887DB4E: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5887DB52: pop edi
        __asm _emit 0x5F
        // 0x5887DB53: test dl, 1
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x01
        // 0x5887DB56: je 0x5887db65
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5887DB58: mov ecx, dword ptr [0x58a245f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887DB5E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5887DB60: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5887DB63: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5887DB65: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB6B: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB70: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887DB74: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB7A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB7F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887DB84: mov eax, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB8A: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB8F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887DB93: mov ecx, dword ptr [esi + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB99: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887DB9E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887DBA3: pop esi
        __asm _emit 0x5E
        // 0x5887DBA4: ret
        __asm _emit 0xC3
    }
}

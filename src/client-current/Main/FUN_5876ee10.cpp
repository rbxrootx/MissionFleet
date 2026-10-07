// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 126 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876ee10.

// Ghidra body range 0x5876EE10..0x5876EE8E; 126 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ee10_segment_00() {
    __asm {
        // 0x5876EE10: push ebx
        __asm _emit 0x53
        // 0x5876EE11: push ebp
        __asm _emit 0x55
        // 0x5876EE12: push esi
        __asm _emit 0x56
        // 0x5876EE13: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5876EE15: mov dword ptr [ebx + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EE1C: lea esi, [ebx + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x5C
        // 0x5876EE1F: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EE24: push edi
        __asm _emit 0x57
        // 0x5876EE25: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5876EE28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876EE2A: je 0x5876ee46
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5876EE2C: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EE31: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5876EE35: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5876EE38: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876EE3A: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EE3F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876EE41: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x3E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EE46: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5876EE48: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876EE4A: je 0x5876ee65
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5876EE4C: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EE51: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5876EE55: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x5876EE57: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876EE59: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EE5E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876EE60: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x3E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EE65: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5876EE68: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5876EE6B: jne 0x5876ee25
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x5876EE6D: mov ecx, dword ptr [ebx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x54
        // 0x5876EE70: pop edi
        __asm _emit 0x5F
        // 0x5876EE71: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876EE73: je 0x5876ee7c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5876EE75: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EE77: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876EE7A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EE7C: mov ecx, dword ptr [ebx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x58
        // 0x5876EE7F: pop esi
        __asm _emit 0x5E
        // 0x5876EE80: pop ebp
        __asm _emit 0x5D
        // 0x5876EE81: pop ebx
        __asm _emit 0x5B
        // 0x5876EE82: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876EE84: je 0x5876ee8d
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5876EE86: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EE88: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876EE8B: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x5876EE8D: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 195 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ce7a0.

// Ghidra body range 0x587CE7A0..0x587CE863; 195 mapped bytes.
extern "C" __declspec(naked) void FUN_587ce7a0_segment_00() {
    __asm {
        // 0x587CE7A0: push esi
        __asm _emit 0x56
        // 0x587CE7A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CE7A3: cmp dword ptr [esi + 0x20], 2
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587CE7A7: jne 0x587ce861
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE7AD: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587CE7B0: cmp eax, 0x136
        __asm _emit 0x3D
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE7B5: jb 0x587ce80e
        __asm _emit 0x72
        __asm _emit 0x57
        // 0x587CE7B7: jne 0x587ce800
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x587CE7B9: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587CE7BC: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587CE7BF: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE7C4: sub eax, 0x1a4
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE7C9: sub ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x1E
        // 0x587CE7CC: push eax
        __asm _emit 0x50
        // 0x587CE7CD: push ecx
        __asm _emit 0x51
        // 0x587CE7CE: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587CE7D1: call 0x587cada0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE7D6: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587CE7D9: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587CE7DC: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587CE7DF: push 0x186a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE7E4: sub edx, 0x1a4
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE7EA: push edx
        __asm _emit 0x52
        // 0x587CE7EB: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x587CE7EE: push eax
        __asm _emit 0x50
        // 0x587CE7EF: call 0x587cada0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE7F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE7F6: call 0x587ce320
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE7FB: inc dword ptr [esi + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587CE7FE: pop esi
        __asm _emit 0x5E
        // 0x587CE7FF: ret
        __asm _emit 0xC3
        // 0x587CE800: cmp eax, 0x136
        __asm _emit 0x3D
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE805: jbe 0x587ce818
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x587CE807: cmp eax, 0x1a4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE80C: jae 0x587ce81d
        __asm _emit 0x73
        __asm _emit 0x0F
        // 0x587CE80E: call 0x587ce320
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE813: inc dword ptr [esi + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587CE816: pop esi
        __asm _emit 0x5E
        // 0x587CE817: ret
        __asm _emit 0xC3
        // 0x587CE818: cmp eax, 0x1a4
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE81D: jne 0x587ce85e
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x587CE81F: call 0x587ce360
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE824: mov dword ptr [esi + 0x20], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE82B: cmp dword ptr [0x589c903c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587CE832: je 0x587ce84b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587CE834: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE83A: mov ecx, dword ptr [ecx + 0x10544]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE840: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CE842: je 0x587ce84b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587CE844: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE846: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x2D
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587CE84B: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE851: mov eax, dword ptr [edx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587CE857: mov dword ptr [eax + 0x18], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE85E: inc dword ptr [esi + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587CE861: pop esi
        __asm _emit 0x5E
        // 0x587CE862: ret
        __asm _emit 0xC3
    }
}

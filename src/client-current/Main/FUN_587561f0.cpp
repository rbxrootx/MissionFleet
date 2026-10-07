// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 185 bytes in 1 exact ranges.
// Source symbol alias: FUN_587561f0.

// Ghidra body range 0x587561F0..0x587562A9; 185 mapped bytes.
extern "C" __declspec(naked) void FUN_587561f0_segment_00() {
    __asm {
        // 0x587561F0: push esi
        __asm _emit 0x56
        // 0x587561F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587561F3: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587561F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587561F9: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587561FC: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587561FF: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58756202: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58756205: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58756208: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875620C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5875620E: mov dword ptr [esi + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58756211: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58756214: mov dword ptr [esi + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58756217: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875621D: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58756222: call 0x587e5ab0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58756227: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5875622A: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5875622D: push eax
        __asm _emit 0x50
        // 0x5875622E: push ecx
        __asm _emit 0x51
        // 0x5875622F: mov ecx, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756235: mov dword ptr [esi + 0xac], 0x20
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875623F: mov dword ptr [esi + 0x3b8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756249: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xD0
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875624E: lea ecx, [esi + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756254: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756259: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756260: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58756262: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58756267: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5875626A: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5875626D: jne 0x58756260
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5875626F: cmp dword ptr [esi + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x58756272: jne 0x587562a5
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58756274: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x58756277: cmp edx, dword ptr [esi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x5875627A: jne 0x58756284
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5875627C: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875627F: cmp eax, dword ptr [esi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58756282: je 0x587562a5
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58756284: mov esi, dword ptr [esi + 0x3b4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875628A: mov dword ptr [esi + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756291: mov dword ptr [esi + 0x84], 0x100
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875629B: mov dword ptr [esi + 0x8c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587562A5: pop esi
        __asm _emit 0x5E
        // 0x587562A6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

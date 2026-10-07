// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 152 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743860.

// Ghidra body range 0x58743860..0x587438F8; 152 mapped bytes.
extern "C" __declspec(naked) void FUN_58743860_segment_00() {
    __asm {
        // 0x58743860: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743864: push esi
        __asm _emit 0x56
        // 0x58743865: push edi
        __asm _emit 0x57
        // 0x58743866: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58743868: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874386F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58743871: lea esi, [edi + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xCF
        // 0x58743874: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58743876: mov dword ptr [esi + 0x2c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874387D: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743884: mov dword ptr [esi + 0x20], 0x3c
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874388B: mov dword ptr [esi + 0x34], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743892: mov dword ptr [esi + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58743895: mov dword ptr [esi + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58743898: mov dword ptr [esi + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x38
        // 0x5874389B: mov dword ptr [esi + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5874389E: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587438A1: add dword ptr [edi + 0x70c], edx
        __asm _emit 0x01
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587438A7: mov cl, byte ptr [esi + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587438AA: mov dl, byte ptr [esi + 0x18]
        __asm _emit 0x8A
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587438AD: mov byte ptr [esp + 0xe], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x587438B1: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587438B3: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587438B6: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587438BA: push eax
        __asm _emit 0x50
        // 0x587438BB: mov byte ptr [esp + 0x14], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587438BF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587438C1: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x587438C3: mov byte ptr [esp + 0x19], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x19
        // 0x587438C7: call 0x588e4260
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587438CC: fld qword ptr [0x5898ceb8]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587438D2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587438D4: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587438D7: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x587438DA: push ecx
        __asm _emit 0x51
        // 0x587438DB: call 0x58747d70
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587438E0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587438E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587438E5: je 0x587438f3
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587438E7: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587438EA: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587438ED: mov dword ptr [esi + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587438F0: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587438F3: pop edi
        __asm _emit 0x5F
        // 0x587438F4: pop esi
        __asm _emit 0x5E
        // 0x587438F5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

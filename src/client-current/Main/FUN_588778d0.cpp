// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 167 bytes in 1 exact ranges.
// Source symbol alias: FUN_588778d0.

// Ghidra body range 0x588778D0..0x58877977; 167 mapped bytes.
extern "C" __declspec(naked) void FUN_588778d0_segment_00() {
    __asm {
        // 0x588778D0: push esi
        __asm _emit 0x56
        // 0x588778D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588778D3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588778D7: push edi
        __asm _emit 0x57
        // 0x588778D8: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588778DA: je 0x5887796f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588778E0: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588778E3: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588778E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588778E9: je 0x5887790f
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588778EB: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588778EE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588778F0: je 0x58877908
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588778F2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588778F4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588778F6: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588778F9: push edi
        __asm _emit 0x57
        // 0x588778FA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588778FC: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588778FF: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58877902: je 0x5887790f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58877904: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58877906: jne 0x588778f2
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58877908: pop edi
        __asm _emit 0x5F
        // 0x58877909: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887790B: pop esi
        __asm _emit 0x5E
        // 0x5887790C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5887790F: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58877913: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877918: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5887791B: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877920: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58877923: jne 0x5887796f
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x58877925: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58877928: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887792D: je 0x5887794c
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5887792F: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877934: jne 0x5887796f
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x58877936: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5887793B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887793D: jg 0x5887796a
        __asm _emit 0x7F
        __asm _emit 0x2B
        // 0x5887793F: call 0x58877310
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877944: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58877947: pop edi
        __asm _emit 0x5F
        // 0x58877948: pop esi
        __asm _emit 0x5E
        // 0x58877949: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5887794C: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5887794F: sub eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x26
        // 0x58877952: je 0x58877968
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58877954: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58877957: jne 0x5887796f
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58877959: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887795B: call 0x58877310
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877960: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58877963: pop edi
        __asm _emit 0x5F
        // 0x58877964: pop esi
        __asm _emit 0x5E
        // 0x58877965: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58877968: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887796A: call 0x588772c0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887796F: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58877972: pop edi
        __asm _emit 0x5F
        // 0x58877973: pop esi
        __asm _emit 0x5E
        // 0x58877974: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

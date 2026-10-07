// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 184 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_58789b40.

// Ghidra body range 0x58789B40..0x58789BEE; 174 mapped bytes.
extern "C" __declspec(naked) void FUN_58789b40_segment_00() {
    __asm {
        // 0x58789B40: push esi
        __asm _emit 0x56
        // 0x58789B41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58789B43: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58789B46: push edi
        __asm _emit 0x57
        // 0x58789B47: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58789B49: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789B4B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58789B4D: je 0x58789bf9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789B53: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58789B57: cmp dword ptr [ecx + 0x18], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58789B5A: je 0x58789b67
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58789B5C: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x58789B5E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58789B60: jne 0x58789b57
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x58789B62: pop edi
        __asm _emit 0x5F
        // 0x58789B63: pop esi
        __asm _emit 0x5E
        // 0x58789B64: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58789B67: movzx eax, word ptr [ecx + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x2C
        // 0x58789B6B: mov dl, byte ptr [esp + 0x10]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58789B6F: push ebx
        __asm _emit 0x53
        // 0x58789B70: shr eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58789B73: mov ebx, 0xff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789B78: and eax, ebx
        __asm _emit 0x23
        __asm _emit 0xC3
        // 0x58789B7A: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x58789B7D: je 0x58789b9b
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58789B7F: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x58789B82: dec edx
        __asm _emit 0x4A
        // 0x58789B83: cmp edx, 7
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58789B86: ja 0x58789baa
        __asm _emit 0x77
        __asm _emit 0x22
        // 0x58789B88: jmp dword ptr [edx*4 + 0x58789c04]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x9C
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x58789B8F: add byte ptr [eax + esi + 0xe], bl
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0x30
        __asm _emit 0x0E
        // 0x58789B93: jmp 0x58789baa
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58789B95: add byte ptr [eax + esi + 0x18], bl
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0x30
        __asm _emit 0x18
        // 0x58789B99: jmp 0x58789baa
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58789B9B: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58789B9E: jae 0x58789ba6
        __asm _emit 0x73
        __asm _emit 0x06
        // 0x58789BA0: add byte ptr [eax + esi + 4], bl
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0x30
        __asm _emit 0x04
        // 0x58789BA4: jmp 0x58789baa
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58789BA6: add byte ptr [eax + esi - 2], bl
        __asm _emit 0x00
        __asm _emit 0x5C
        __asm _emit 0x30
        __asm _emit 0xFE
        // 0x58789BAA: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58789BAD: mov dword ptr [esi + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58789BB0: mov eax, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58789BB3: sub dword ptr [esi + 0x54], eax
        __asm _emit 0x29
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58789BB6: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58789BB9: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58789BBB: pop ebx
        __asm _emit 0x5B
        // 0x58789BBC: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58789BBE: je 0x58789bc9
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58789BC0: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58789BC2: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58789BC4: je 0x58789bd8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58789BC6: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58789BC9: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58789BCB: je 0x58789bdb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58789BCD: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58789BD0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58789BD2: je 0x58789bfe
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58789BD4: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58789BD6: jmp 0x58789be8
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58789BD8: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58789BDB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58789BDD: jne 0x58789be8
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58789BDF: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58789BE2: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x58789BE5: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58789BE8: push ecx
        __asm _emit 0x51
        // 0x58789BE9: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x1F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58789BF9..0x58789C03; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_58789b40_segment_01() {
    __asm {
        // 0x58789BF9: pop edi
        __asm _emit 0x5F
        // 0x58789BFA: pop esi
        __asm _emit 0x5E
        // 0x58789BFB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58789BFE: mov dword ptr [esi + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58789C01: jmp 0x58789be8
        __asm _emit 0xEB
        __asm _emit 0xE5
    }
}

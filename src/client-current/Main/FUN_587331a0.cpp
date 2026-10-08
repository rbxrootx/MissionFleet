// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 209 bytes in 1 exact ranges.
// Source symbol alias: FUN_587331a0.

// Ghidra body range 0x587331A0..0x58733271; 209 mapped bytes.
extern "C" __declspec(naked) void FUN_587331a0_segment_00() {
    __asm {
        // 0x587331A0: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587331A6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587331AB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587331AD: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587331B4: push esi
        __asm _emit 0x56
        // 0x587331B5: push 0xfe
        __asm _emit 0x68
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587331BA: lea eax, [esp + 9]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x587331BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587331C0: push eax
        __asm _emit 0x50
        // 0x587331C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587331C3: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587331C8: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x9A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587331CD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587331D0: cmp dword ptr [esp + 0x10c], 1
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587331D8: jne 0x58733218
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x587331DA: movzx ecx, word ptr [esi + 0x126]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587331E1: push ecx
        __asm _emit 0x51
        // 0x587331E2: push 0x5898c924
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587331E7: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587331ED: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587331F0: push eax
        __asm _emit 0x50
        // 0x587331F1: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587331F5: push edx
        __asm _emit 0x52
        // 0x587331F6: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587331FC: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587331FF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58733202: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58733206: push eax
        __asm _emit 0x50
        // 0x58733207: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873320C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873320F: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x58733212: push ecx
        __asm _emit 0x51
        // 0x58733213: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58733216: jmp 0x58733254
        __asm _emit 0xEB
        __asm _emit 0x3C
        // 0x58733218: movzx edx, word ptr [esi + 0x126]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873321F: push edx
        __asm _emit 0x52
        // 0x58733220: push 0x5898c798
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733225: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873322B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873322E: push eax
        __asm _emit 0x50
        // 0x5873322F: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58733233: push eax
        __asm _emit 0x50
        // 0x58733234: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873323A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873323D: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58733241: push ecx
        __asm _emit 0x51
        // 0x58733242: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58733245: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873324A: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873324D: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58733250: add edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x46
        // 0x58733253: push edx
        __asm _emit 0x52
        // 0x58733254: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58733259: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733260: pop esi
        __asm _emit 0x5E
        // 0x58733261: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58733263: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733268: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873326E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

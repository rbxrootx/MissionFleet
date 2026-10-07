// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 173 bytes in 1 exact ranges.
// Source symbol alias: FUN_587af8f0.

// Ghidra body range 0x587AF8F0..0x587AF99D; 173 mapped bytes.
extern "C" __declspec(naked) void FUN_587af8f0_segment_00() {
    __asm {
        // 0x587AF8F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587AF8F2: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AF8F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF8FD: push eax
        __asm _emit 0x50
        // 0x587AF8FE: push ecx
        __asm _emit 0x51
        // 0x587AF8FF: push esi
        __asm _emit 0x56
        // 0x587AF900: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587AF905: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587AF907: push eax
        __asm _emit 0x50
        // 0x587AF908: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587AF90C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF912: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587AF914: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF919: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF91E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF920: je 0x587af92e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587AF922: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF927: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AF929: call 0x587af500
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF92E: push 0x448
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF933: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xD3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF938: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587AF93B: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587AF93F: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF947: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF949: je 0x587af962
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587AF94B: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AF94F: push ecx
        __asm _emit 0x51
        // 0x587AF950: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AF952: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF957: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587AF959: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AF95B: call 0x587ad4b0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF960: jmp 0x587af964
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587AF962: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF964: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AF968: push edx
        __asm _emit 0x52
        // 0x587AF969: lea ecx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587AF96C: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF974: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AF978: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF97D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587AF981: push eax
        __asm _emit 0x50
        // 0x587AF982: lea ecx, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587AF985: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF98A: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587AF98E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF995: pop ecx
        __asm _emit 0x59
        // 0x587AF996: pop esi
        __asm _emit 0x5E
        // 0x587AF997: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AF99A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

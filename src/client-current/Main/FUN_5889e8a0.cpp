// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889E8A0 .. +0x6F bytes.
// Source symbol alias: FUN_5889e8a0.
extern "C" __declspec(naked) void FUN_5889e8a0() {
    __asm {
        // 0x5889E8A0: push ecx
        __asm _emit 0x51
        // 0x5889E8A1: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889E8A5: push esi
        __asm _emit 0x56
        // 0x5889E8A6: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E8AA: push edi
        __asm _emit 0x57
        // 0x5889E8AB: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889E8AF: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889E8B3: push eax
        __asm _emit 0x50
        // 0x5889E8B4: push edi
        __asm _emit 0x57
        // 0x5889E8B5: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889E8B9: push ecx
        __asm _emit 0x51
        // 0x5889E8BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E8BC: push esi
        __asm _emit 0x56
        // 0x5889E8BD: push edx
        __asm _emit 0x52
        // 0x5889E8BE: mov dword ptr [esp + 0x20], 0x80
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889E8C6: call dword ptr [0x5898c004]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889E8CC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889E8CE: je 0x5889e909
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5889E8D0: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E8D4: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889E8D8: push eax
        __asm _emit 0x50
        // 0x5889E8D9: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E8DD: push ecx
        __asm _emit 0x51
        // 0x5889E8DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E8E0: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889E8E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E8E7: push esi
        __asm _emit 0x56
        // 0x5889E8E8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E8EA: push edx
        __asm _emit 0x52
        // 0x5889E8EB: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5889E8F0: call dword ptr [0x5898c010]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889E8F6: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889E8FA: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E8FC: push edi
        __asm _emit 0x57
        // 0x5889E8FD: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E8FF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E901: push esi
        __asm _emit 0x56
        // 0x5889E902: push eax
        __asm _emit 0x50
        // 0x5889E903: call dword ptr [0x5898c00c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x0C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889E909: pop edi
        __asm _emit 0x5F
        // 0x5889E90A: pop esi
        __asm _emit 0x5E
        // 0x5889E90B: pop ecx
        __asm _emit 0x59
        // 0x5889E90C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

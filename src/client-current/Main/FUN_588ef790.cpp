// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EF790 .. +0xC2 bytes.
// Source symbol alias: FUN_588ef790.
extern "C" __declspec(naked) void FUN_588ef790() {
    __asm {
        // 0x588EF790: sub esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x54
        // 0x588EF793: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EF798: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EF79A: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588EF79E: push esi
        __asm _emit 0x56
        // 0x588EF79F: push edi
        __asm _emit 0x57
        // 0x588EF7A0: mov edi, dword ptr [esp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x588EF7A4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EF7A6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588EF7A8: jne 0x588ef7d1
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588EF7AA: mov edi, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x588EF7AE: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF7B4: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF7B9: push edi
        __asm _emit 0x57
        // 0x588EF7BA: push 0x5899f050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588EF7BF: mov dword ptr [eax + 0x60], 0x505050
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588EF7C6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF7CC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF7CF: jmp 0x588ef81d
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x588EF7D1: push 0x4f
        __asm _emit 0x6A
        __asm _emit 0x4F
        // 0x588EF7D3: lea ecx, [esp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x588EF7D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EF7D9: push ecx
        __asm _emit 0x51
        // 0x588EF7DA: mov byte ptr [esp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588EF7DF: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF7E4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EF7E7: push edi
        __asm _emit 0x57
        // 0x588EF7E8: push 0x589a17a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x17
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EF7ED: mov dword ptr [esi + 0x40c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF7F7: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF7FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EF800: push eax
        __asm _emit 0x50
        // 0x588EF801: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EF805: push edx
        __asm _emit 0x52
        // 0x588EF806: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF80C: mov edi, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x588EF810: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588EF813: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588EF818: push edi
        __asm _emit 0x57
        // 0x588EF819: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EF81D: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF823: push eax
        __asm _emit 0x50
        // 0x588EF824: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EF829: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EF82F: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588EF834: push edi
        __asm _emit 0x57
        // 0x588EF835: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EF83A: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EF83F: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588EF843: pop edi
        __asm _emit 0x5F
        // 0x588EF844: pop esi
        __asm _emit 0x5E
        // 0x588EF845: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588EF847: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xD3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588EF84C: add esp, 0x54
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x54
        // 0x588EF84F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

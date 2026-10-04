// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5882A680 .. +0xA9 bytes.
// Source symbol alias: FUN_5882a680.
extern "C" __declspec(naked) void FUN_5882a680() {
    __asm {
        // 0x5882A680: sub esp, 0x804
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A686: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882A68B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882A68D: mov dword ptr [esp + 0x800], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A694: mov eax, dword ptr [esp + 0x810]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A69B: push esi
        __asm _emit 0x56
        // 0x5882A69C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882A69E: mov ecx, dword ptr [esp + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A6A5: push edi
        __asm _emit 0x57
        // 0x5882A6A6: mov edi, dword ptr [esp + 0x814]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A6AD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882A6AF: ja 0x5882a6b5
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5882A6B1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882A6B3: jbe 0x5882a710
        __asm _emit 0x76
        __asm _emit 0x5B
        // 0x5882A6B5: cmp ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882A6BB: jne 0x5882a710
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x5882A6BD: cmp edi, dword ptr [0x58a0b4a4]
        __asm _emit 0x3B
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882A6C3: jne 0x5882a710
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x5882A6C5: mov ecx, dword ptr [esp + 0x81c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A6CC: cmp ecx, 0x800
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A6D2: jb 0x5882a6e1
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x5882A6D4: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A6D9: push eax
        __asm _emit 0x50
        // 0x5882A6DA: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882A6DE: push eax
        __asm _emit 0x50
        // 0x5882A6DF: jmp 0x5882a6e9
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5882A6E1: inc ecx
        __asm _emit 0x41
        // 0x5882A6E2: push ecx
        __asm _emit 0x51
        // 0x5882A6E3: push eax
        __asm _emit 0x50
        // 0x5882A6E4: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882A6E8: push ecx
        __asm _emit 0x51
        // 0x5882A6E9: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882A6EF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882A6F1: je 0x5882a700
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5882A6F3: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A6F9: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882A6FD: push edx
        __asm _emit 0x52
        // 0x5882A6FE: jmp 0x5882a70b
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x5882A700: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A706: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882A70A: push eax
        __asm _emit 0x50
        // 0x5882A70B: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x63
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882A710: mov ecx, dword ptr [esp + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A717: pop edi
        __asm _emit 0x5F
        // 0x5882A718: pop esi
        __asm _emit 0x5E
        // 0x5882A719: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882A71B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x5882A720: add esp, 0x804
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882A726: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

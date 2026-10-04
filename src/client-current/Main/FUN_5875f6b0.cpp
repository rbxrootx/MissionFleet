// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F6B0 .. +0xFD bytes.
// Source symbol alias: FUN_5875f6b0.
extern "C" __declspec(naked) void FUN_5875f6b0() {
    __asm {
        // 0x5875F6B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875F6B2: push 0x5897ed18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875F6B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F6BD: push eax
        __asm _emit 0x50
        // 0x5875F6BE: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5875F6C1: push ebx
        __asm _emit 0x53
        // 0x5875F6C2: push ebp
        __asm _emit 0x55
        // 0x5875F6C3: push esi
        __asm _emit 0x56
        // 0x5875F6C4: push edi
        __asm _emit 0x57
        // 0x5875F6C5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875F6CA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875F6CC: push eax
        __asm _emit 0x50
        // 0x5875F6CD: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875F6D1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F6D7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875F6D9: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5875F6DD: push 0x5898dba4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0xDB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F6E2: push eax
        __asm _emit 0x50
        // 0x5875F6E3: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875F6E7: call 0x58902b60
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x34
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875F6EC: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875F6F0: sub ecx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875F6F4: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x5875F6F9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875F6FB: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5875F6FD: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5875F700: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5875F702: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875F704: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F709: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5875F70C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5875F70E: lea edi, [esi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5875F711: push ebx
        __asm _emit 0x53
        // 0x5875F712: push edi
        __asm _emit 0x57
        // 0x5875F713: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875F717: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5875F71A: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xD5
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875F71F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875F722: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875F726: call 0x58902030
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x29
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875F72B: mov ebp, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F731: push eax
        __asm _emit 0x50
        // 0x5875F732: push edi
        __asm _emit 0x57
        // 0x5875F733: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5875F735: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F73A: push edi
        __asm _emit 0x57
        // 0x5875F73B: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F741: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875F743: jne 0x5875f748
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5875F745: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x5875F748: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F74D: cmp dword ptr [esi + 0x1c], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x5875F750: jle 0x5875f78c
        __asm _emit 0x7E
        __asm _emit 0x3A
        // 0x5875F752: lea edi, [esi + 0x120]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F758: jmp 0x5875f760
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5875F75A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F760: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875F764: call 0x58902090
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x29
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875F769: push eax
        __asm _emit 0x50
        // 0x5875F76A: push edi
        __asm _emit 0x57
        // 0x5875F76B: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5875F76D: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F772: push edi
        __asm _emit 0x57
        // 0x5875F773: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F779: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875F77B: jne 0x5875f780
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5875F77D: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x5875F780: inc ebx
        __asm _emit 0x43
        // 0x5875F781: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F787: cmp ebx, dword ptr [esi + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x5875F78A: jl 0x5875f760
        __asm _emit 0x7C
        __asm _emit 0xD4
        // 0x5875F78C: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875F790: mov dword ptr [esp + 0x3c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875F798: call 0x589023b0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x2C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875F79D: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875F7A1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F7A8: pop ecx
        __asm _emit 0x59
        // 0x5875F7A9: pop edi
        __asm _emit 0x5F
        // 0x5875F7AA: pop esi
        __asm _emit 0x5E
        // 0x5875F7AB: pop ebp
        __asm _emit 0x5D
        // 0x5875F7AC: pop ebx
        __asm _emit 0x5B
    }
}

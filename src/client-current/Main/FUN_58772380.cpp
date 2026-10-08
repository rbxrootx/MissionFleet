// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 229 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772380.

// Ghidra body range 0x58772380..0x58772465; 229 mapped bytes.
extern "C" __declspec(naked) void FUN_58772380_segment_00() {
    __asm {
        // 0x58772380: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772386: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877238B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877238D: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772394: push ebx
        __asm _emit 0x53
        // 0x58772395: push esi
        __asm _emit 0x56
        // 0x58772396: push edi
        __asm _emit 0x57
        // 0x58772397: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877239B: push eax
        __asm _emit 0x50
        // 0x5877239C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877239E: call dword ptr [0x5898c158]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587723A4: movzx ecx, word ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587723A9: movzx edx, word ptr [esp + 0x1a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587723AE: movzx eax, word ptr [esp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587723B3: push ecx
        __asm _emit 0x51
        // 0x587723B4: movzx ecx, word ptr [esp + 0x1a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587723B9: push edx
        __asm _emit 0x52
        // 0x587723BA: movzx edx, word ptr [esp + 0x1a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x587723BF: push eax
        __asm _emit 0x50
        // 0x587723C0: movzx eax, word ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587723C5: push ecx
        __asm _emit 0x51
        // 0x587723C6: push edx
        __asm _emit 0x52
        // 0x587723C7: push eax
        __asm _emit 0x50
        // 0x587723C8: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587723CC: push 0x589962e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587723D1: push ecx
        __asm _emit 0x51
        // 0x587723D2: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587723D8: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587723DB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587723DD: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587723E2: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587723E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587723E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587723E8: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587723ED: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587723EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587723F1: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587723F6: push eax
        __asm _emit 0x50
        // 0x587723F7: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587723FD: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587723FF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772401: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58772403: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772405: push esi
        __asm _emit 0x56
        // 0x58772406: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877240C: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772412: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772414: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772418: push edx
        __asm _emit 0x52
        // 0x58772419: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877241D: push eax
        __asm _emit 0x50
        // 0x5877241E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58772420: mov ebx, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772426: push eax
        __asm _emit 0x50
        // 0x58772427: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877242B: push ecx
        __asm _emit 0x51
        // 0x5877242C: push esi
        __asm _emit 0x56
        // 0x5877242D: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5877242F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772431: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772435: push edx
        __asm _emit 0x52
        // 0x58772436: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877243B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877243D: push eax
        __asm _emit 0x50
        // 0x5877243E: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772443: push esi
        __asm _emit 0x56
        // 0x58772444: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58772446: push esi
        __asm _emit 0x56
        // 0x58772447: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877244D: mov ecx, dword ptr [esp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772454: pop edi
        __asm _emit 0x5F
        // 0x58772455: pop esi
        __asm _emit 0x5E
        // 0x58772456: pop ebx
        __asm _emit 0x5B
        // 0x58772457: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58772459: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xA7
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877245E: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772464: ret
        __asm _emit 0xC3
    }
}

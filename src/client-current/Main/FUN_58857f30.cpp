// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58857F30 .. +0x100 bytes.
// Source symbol alias: FUN_58857f30.
extern "C" __declspec(naked) void FUN_58857f30() {
    __asm {
        // 0x58857F30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58857F32: push 0x589854f3
        __asm _emit 0x68
        __asm _emit 0xF3
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58857F37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857F3D: push eax
        __asm _emit 0x50
        // 0x58857F3E: push ecx
        __asm _emit 0x51
        // 0x58857F3F: push ebx
        __asm _emit 0x53
        // 0x58857F40: push ebp
        __asm _emit 0x55
        // 0x58857F41: push esi
        __asm _emit 0x56
        // 0x58857F42: push edi
        __asm _emit 0x57
        // 0x58857F43: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58857F48: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58857F4A: push eax
        __asm _emit 0x50
        // 0x58857F4B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58857F4F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857F55: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58857F57: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58857F5B: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58857F5F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58857F63: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58857F67: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58857F6B: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58857F6F: push ebx
        __asm _emit 0x53
        // 0x58857F70: push eax
        __asm _emit 0x50
        // 0x58857F71: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58857F75: push ecx
        __asm _emit 0x51
        // 0x58857F76: push ebp
        __asm _emit 0x55
        // 0x58857F77: push edx
        __asm _emit 0x52
        // 0x58857F78: push eax
        __asm _emit 0x50
        // 0x58857F79: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857F7B: call 0x587b62b0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xE3
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58857F80: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58857F82: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857F8A: mov dword ptr [esi], 0x5899e9d8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58857F90: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x4C
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58857F95: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58857F97: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58857F9A: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58857F9E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58857FA0: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58857FA5: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58857FA7: je 0x58857fcb
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58857FA9: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58857FAD: push ebx
        __asm _emit 0x53
        // 0x58857FAE: push eax
        __asm _emit 0x50
        // 0x58857FAF: push eax
        __asm _emit 0x50
        // 0x58857FB0: push ebp
        __asm _emit 0x55
        // 0x58857FB1: push ecx
        __asm _emit 0x51
        // 0x58857FB2: push esi
        __asm _emit 0x56
        // 0x58857FB3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58857FB5: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xB1
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857FBA: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58857FC0: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FC7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58857FC9: jmp 0x58857fcd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58857FCB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58857FCD: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58857FD1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58857FD3: mov dword ptr [esi + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FD9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58857FDB: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FE1: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FE7: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FED: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58857FEF: mov word ptr [esi + 0xa6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FF6: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857FFC: mov word ptr [esi + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858003: mov word ptr [esi + 0x92], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885800A: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858011: mov word ptr [esi + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858018: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885801A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885801E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858025: pop ecx
        __asm _emit 0x59
        // 0x58858026: pop edi
        __asm _emit 0x5F
        // 0x58858027: pop esi
        __asm _emit 0x5E
        // 0x58858028: pop ebp
        __asm _emit 0x5D
        // 0x58858029: pop ebx
        __asm _emit 0x5B
        // 0x5885802A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885802D: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

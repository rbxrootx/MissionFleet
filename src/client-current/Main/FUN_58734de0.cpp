// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58734DE0 .. +0x7D bytes.
// Source symbol alias: FUN_58734de0.
extern "C" __declspec(naked) void FUN_58734de0() {
    __asm {
        // 0x58734DE0: push ebp
        __asm _emit 0x55
        // 0x58734DE1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58734DE3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58734DE5: push 0x5897dbe0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xDB
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58734DEA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734DF0: push eax
        __asm _emit 0x50
        // 0x58734DF1: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58734DF4: push ebx
        __asm _emit 0x53
        // 0x58734DF5: push esi
        __asm _emit 0x56
        // 0x58734DF6: push edi
        __asm _emit 0x57
        // 0x58734DF7: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58734DFC: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58734DFE: push eax
        __asm _emit 0x50
        // 0x58734DFF: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58734E02: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734E08: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x58734E0B: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58734E0D: mov dword ptr [ebp - 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xEC
        // 0x58734E10: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58734E13: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58734E15: or esi, 0xf
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0x0F
        // 0x58734E18: cmp esi, -2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFE
        // 0x58734E1B: jbe 0x58734e21
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x58734E1D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58734E1F: jmp 0x58734e43
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58734E21: mov ebx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x18
        // 0x58734E24: mov eax, 0xaaaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58734E29: mul esi
        __asm _emit 0xF7
        __asm _emit 0xE6
        // 0x58734E2B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58734E2D: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x58734E2F: shr edx, 1
        __asm _emit 0xD1
        __asm _emit 0xEA
        // 0x58734E31: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58734E33: jae 0x58734e43
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x58734E35: mov eax, 0xfffffffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734E3A: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58734E3C: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58734E3E: ja 0x58734e43
        __asm _emit 0x77
        __asm _emit 0x03
        // 0x58734E40: lea esi, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x19
        // 0x58734E43: lea ecx, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x01
        // 0x58734E46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58734E48: push ecx
        __asm _emit 0x51
        // 0x58734E49: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734E50: call 0x58734c80
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734E55: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58734E58: mov dword ptr [ebp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58734E5B: jmp 0x58734e85
        __asm _emit 0xEB
        __asm _emit 0x28
    }
}

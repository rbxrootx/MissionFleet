// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x58791F30 .. +0xB0 bytes.
// Source symbol alias: FUN_58791f30.
extern "C" __declspec(naked) void FUN_58791f30() {
    __asm {
        // 0x58791F30: push ebp
        __asm _emit 0x55
        // 0x58791F31: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58791F33: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58791F35: push 0x58980381
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58791F3A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791F40: push eax
        __asm _emit 0x50
        // 0x58791F41: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58791F44: push ebx
        __asm _emit 0x53
        // 0x58791F45: push esi
        __asm _emit 0x56
        // 0x58791F46: push edi
        __asm _emit 0x57
        // 0x58791F47: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58791F4C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58791F4E: push eax
        __asm _emit 0x50
        // 0x58791F4F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58791F52: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791F58: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x58791F5B: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58791F5E: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58791F61: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58791F63: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58791F66: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58791F69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791F70: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58791F72: jbe 0x58791fce
        __asm _emit 0x76
        __asm _emit 0x5A
        // 0x58791F74: mov dword ptr [ebp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58791F77: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58791F7A: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x58791F7E: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58791F80: je 0x58791f9d
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58791F82: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58791F85: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58791F87: push ebx
        __asm _emit 0x53
        // 0x58791F88: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791F8F: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58791F92: push eax
        __asm _emit 0x50
        // 0x58791F93: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791F95: mov byte ptr [esi + 4], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58791F98: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x2F
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58791F9D: dec edi
        __asm _emit 0x4F
        // 0x58791F9E: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x58791FA1: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58791FA4: mov dword ptr [ebp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58791FA7: jmp 0x58791f70
        __asm _emit 0xEB
        __asm _emit 0xC7
        // 0x58791FA9: mov esi, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58791FAC: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58791FAF: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58791FB1: je 0x58791fc5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58791FB3: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x58791FB6: push esi
        __asm _emit 0x56
        // 0x58791FB7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58791FB9: call 0x58791e20
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58791FBE: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x58791FC1: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58791FC3: jne 0x58791fb6
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x58791FC5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58791FC7: push ebx
        __asm _emit 0x53
        // 0x58791FC8: push ebx
        __asm _emit 0x53
        // 0x58791FC9: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xAC
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58791FCE: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58791FD1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791FD8: pop ecx
        __asm _emit 0x59
        // 0x58791FD9: pop edi
        __asm _emit 0x5F
        // 0x58791FDA: pop esi
        __asm _emit 0x5E
        // 0x58791FDB: pop ebx
        __asm _emit 0x5B
        // 0x58791FDC: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58791FDE: pop ebp
        __asm _emit 0x5D
        // 0x58791FDF: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 162 bytes in 1 exact ranges.
// Source symbol alias: FUN_5886dcf0.

// Ghidra body range 0x5886DCF0..0x5886DD92; 162 mapped bytes.
extern "C" __declspec(naked) void FUN_5886dcf0_segment_00() {
    __asm {
        // 0x5886DCF0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5886DCF2: push 0x58985e7b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x5E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5886DCF7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DCFD: push eax
        __asm _emit 0x50
        // 0x5886DCFE: push ebx
        __asm _emit 0x53
        // 0x5886DCFF: push esi
        __asm _emit 0x56
        // 0x5886DD00: push edi
        __asm _emit 0x57
        // 0x5886DD01: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5886DD06: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5886DD08: push eax
        __asm _emit 0x50
        // 0x5886DD09: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5886DD0D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD13: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5886DD15: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5886DD19: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5886DD1B: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x5886DD1D: je 0x5886dd7d
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x5886DD1F: mov ecx, dword ptr [esi + 0x338]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD25: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5886DD27: je 0x5886dd37
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886DD29: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5886DD2B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5886DD2D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5886DD2F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5886DD31: mov dword ptr [esi + 0x338], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD37: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5886DD39: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5886DD3E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886DD41: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5886DD45: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886DD49: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886DD4B: je 0x5886dd75
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5886DD4D: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x5886DD51: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5886DD54: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5886DD57: add cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x5886DD5B: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x5886DD5E: push ecx
        __asm _emit 0x51
        // 0x5886DD5F: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x5886DD62: push edx
        __asm _emit 0x52
        // 0x5886DD63: add edi, 0x83
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD69: push edi
        __asm _emit 0x57
        // 0x5886DD6A: push ebx
        __asm _emit 0x53
        // 0x5886DD6B: push esi
        __asm _emit 0x56
        // 0x5886DD6C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886DD6E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x3E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5886DD73: jmp 0x5886dd77
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886DD75: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886DD77: mov dword ptr [esi + 0x338], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD7D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5886DD81: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886DD88: pop ecx
        __asm _emit 0x59
        // 0x5886DD89: pop edi
        __asm _emit 0x5F
        // 0x5886DD8A: pop esi
        __asm _emit 0x5E
        // 0x5886DD8B: pop ebx
        __asm _emit 0x5B
        // 0x5886DD8C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5886DD8F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

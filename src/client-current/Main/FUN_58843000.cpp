// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58843000 .. +0x5C bytes.
// Source symbol alias: FUN_58843000.
extern "C" __declspec(naked) void FUN_58843000() {
    __asm {
        // 0x58843000: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58843005: push edi
        __asm _emit 0x57
        // 0x58843006: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58843008: je 0x58843058
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x5884300A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884300E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58843010: jbe 0x58843058
        __asm _emit 0x76
        __asm _emit 0x46
        // 0x58843012: push ebx
        __asm _emit 0x53
        // 0x58843013: push esi
        __asm _emit 0x56
        // 0x58843014: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58843018: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5884301A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843020: mov al, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x06
        // 0x58843022: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58843024: jne 0x58843033
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58843026: lea eax, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x58843029: push eax
        __asm _emit 0x50
        // 0x5884302A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884302C: call 0x58842f60
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58843031: jmp 0x58843042
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58843033: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58843035: jne 0x5884304e
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58843037: lea ecx, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x01
        // 0x5884303A: push ecx
        __asm _emit 0x51
        // 0x5884303B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5884303D: call 0x58842fb0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58843042: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58843044: je 0x5884304e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58843046: push esi
        __asm _emit 0x56
        // 0x58843047: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58843049: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x74
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884304E: add esi, 0x60
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x60
        // 0x58843051: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58843054: jne 0x58843020
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x58843056: pop esi
        __asm _emit 0x5E
        // 0x58843057: pop ebx
        __asm _emit 0x5B
        // 0x58843058: pop edi
        __asm _emit 0x5F
        // 0x58843059: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

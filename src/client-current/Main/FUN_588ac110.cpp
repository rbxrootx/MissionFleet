// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC110 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_588ac110() {
    __asm {
        // 0x588AC110: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588AC112: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AC117: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC11D: push eax
        __asm _emit 0x50
        // 0x588AC11E: push ecx
        __asm _emit 0x51
        // 0x588AC11F: push esi
        __asm _emit 0x56
        // 0x588AC120: push edi
        __asm _emit 0x57
        // 0x588AC121: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588AC126: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588AC128: push eax
        __asm _emit 0x50
        // 0x588AC129: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AC12D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC133: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC135: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588AC139: mov dword ptr [esi], 0x589a07a4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588AC13F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588AC142: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588AC144: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588AC148: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588AC14A: je 0x588ac157
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AC14C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588AC14E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AC150: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588AC152: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588AC154: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588AC157: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC15A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588AC15C: je 0x588ac169
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AC15E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588AC160: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AC162: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588AC164: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588AC166: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588AC169: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588AC16C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588AC16E: je 0x588ac17b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AC170: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588AC172: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AC174: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588AC176: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588AC178: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x588AC17B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AC17D: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AC185: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x6A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AC18A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AC18E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC195: pop ecx
        __asm _emit 0x59
        // 0x588AC196: pop edi
        __asm _emit 0x5F
        // 0x588AC197: pop esi
        __asm _emit 0x5E
        // 0x588AC198: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588AC19B: ret
        __asm _emit 0xC3
    }
}

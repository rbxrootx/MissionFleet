// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890A3F0 .. +0x7E bytes.
// Source symbol alias: FUN_5890a3f0.
extern "C" __declspec(naked) void FUN_5890a3f0() {
    __asm {
        // 0x5890A3F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890A3F2: push 0x5898aa48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890A3F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A3FD: push eax
        __asm _emit 0x50
        // 0x5890A3FE: push ecx
        __asm _emit 0x51
        // 0x5890A3FF: push esi
        __asm _emit 0x56
        // 0x5890A400: push edi
        __asm _emit 0x57
        // 0x5890A401: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890A406: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890A408: push eax
        __asm _emit 0x50
        // 0x5890A409: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890A40D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A413: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890A415: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890A419: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5890A41B: call 0x5896cae0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890A420: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890A422: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890A424: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890A428: mov dword ptr [esi], 0x589a2a98
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A42E: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5890A431: mov dword ptr [esi + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5890A434: mov dword ptr [esi + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5890A437: mov dword ptr [esi + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x5890A43A: mov dword ptr [esi + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x5890A43D: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5890A440: mov dword ptr [esi + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5890A443: call 0x5890a230
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890A448: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890A44C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5890A44E: je 0x5890a458
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5890A450: push eax
        __asm _emit 0x50
        // 0x5890A451: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890A453: call 0x5890a300
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890A458: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890A45A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890A45E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A465: pop ecx
        __asm _emit 0x59
        // 0x5890A466: pop edi
        __asm _emit 0x5F
        // 0x5890A467: pop esi
        __asm _emit 0x5E
        // 0x5890A468: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890A46B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

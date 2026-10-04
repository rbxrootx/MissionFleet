// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588C5FD0 .. +0x96 bytes.
// Source symbol alias: FUN_588c5fd0.
extern "C" __declspec(naked) void FUN_588c5fd0() {
    __asm {
        // 0x588C5FD0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588C5FD2: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588C5FD7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5FDD: push eax
        __asm _emit 0x50
        // 0x588C5FDE: push ecx
        __asm _emit 0x51
        // 0x588C5FDF: push esi
        __asm _emit 0x56
        // 0x588C5FE0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588C5FE5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588C5FE7: push eax
        __asm _emit 0x50
        // 0x588C5FE8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C5FEC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5FF2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C5FF4: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5FF9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x6C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C5FFE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588C6001: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588C6005: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C600D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588C600F: je 0x588c6035
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588C6011: movzx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x588C6015: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C6019: push ecx
        __asm _emit 0x51
        // 0x588C601A: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C601E: push edx
        __asm _emit 0x52
        // 0x588C601F: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588C6022: push ecx
        __asm _emit 0x51
        // 0x588C6023: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588C6026: push edx
        __asm _emit 0x52
        // 0x588C6027: push ecx
        __asm _emit 0x51
        // 0x588C6028: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C602A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588C602C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588C602E: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x7D
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588C6033: jmp 0x588c6037
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588C6035: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588C6037: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588C603B: push edx
        __asm _emit 0x52
        // 0x588C603C: lea ecx, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588C603F: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588C6047: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588C604B: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xF4
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588C6050: inc dword ptr [esi + 0x74]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588C6053: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C6057: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C605E: pop ecx
        __asm _emit 0x59
        // 0x588C605F: pop esi
        __asm _emit 0x5E
        // 0x588C6060: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588C6063: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58748BE0 .. +0x67 bytes.
// Source symbol alias: _AfxAygshellState.
extern "C" __declspec(naked) void _AfxAygshellState() {
    __asm {
        // 0x58748BE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58748BE2: push 0x5897e30e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0xE3
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58748BE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748BED: push eax
        __asm _emit 0x50
        // 0x58748BEE: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58748BF3: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58748BF5: push eax
        __asm _emit 0x50
        // 0x58748BF6: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58748BFA: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748C00: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748C05: test byte ptr [0x589cfc44], al
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58748C0B: jne 0x58748c32
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58748C0D: or dword ptr [0x589cfc44], eax
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58748C13: mov ecx, 0x589cfc0c
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58748C18: mov dword ptr [esp + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748C20: call 0x58748b60
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58748C25: push 0x5898af50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xAF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58748C2A: call 0x5897ce0f
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748C2F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58748C32: mov eax, 0x589cfc0c
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58748C37: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58748C3B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748C42: pop ecx
        __asm _emit 0x59
        // 0x58748C43: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58748C46: ret
        __asm _emit 0xC3
    }
}

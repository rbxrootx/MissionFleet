// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CD6A .. +0x9C bytes.
// Source symbol alias: __onexit.
extern "C" __declspec(naked) void __onexit() {
    __asm {
        // 0x5897CD6A: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5897CD6C: push 0x589b6e70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x6E
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x5897CD71: call 0x5897d7bc
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CD76: push dword ptr [0x58a289b0]
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0xB0
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897CD7C: mov esi, dword ptr [0x5898c39c]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x9C
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897CD82: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5897CD84: pop ecx
        __asm _emit 0x59
        // 0x5897CD85: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5897CD88: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5897CD8B: jne 0x5897cd99
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5897CD8D: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897CD90: call dword ptr [0x5898c398]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897CD96: pop ecx
        __asm _emit 0x59
        // 0x5897CD97: jmp 0x5897ce00
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x5897CD99: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5897CD9B: call 0x5897d7b4
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CDA0: pop ecx
        __asm _emit 0x59
        // 0x5897CDA1: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5897CDA5: push dword ptr [0x58a289b0]
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0xB0
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897CDAB: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5897CDAD: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5897CDB0: push dword ptr [0x58a289ac]
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0xAC
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897CDB6: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5897CDB8: pop ecx
        __asm _emit 0x59
        // 0x5897CDB9: pop ecx
        __asm _emit 0x59
        // 0x5897CDBA: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5897CDBD: lea eax, [ebp - 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5897CDC0: push eax
        __asm _emit 0x50
        // 0x5897CDC1: lea eax, [ebp - 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5897CDC4: push eax
        __asm _emit 0x50
        // 0x5897CDC5: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897CDC8: mov esi, dword ptr [0x5898c390]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897CDCE: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5897CDD0: pop ecx
        __asm _emit 0x59
        // 0x5897CDD1: push eax
        __asm _emit 0x50
        // 0x5897CDD2: call 0x5897d7ae
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CDD7: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x5897CDDA: push dword ptr [ebp - 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5897CDDD: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5897CDDF: mov dword ptr [0x58a289b0], eax
        __asm _emit 0xA3
        __asm _emit 0xB0
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897CDE4: push dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5897CDE7: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5897CDE9: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5897CDEC: mov dword ptr [0x58a289ac], eax
        __asm _emit 0xA3
        __asm _emit 0xAC
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897CDF1: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897CDF8: call 0x5897ce06
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CDFD: mov eax, dword ptr [ebp - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x5897CE00: call 0x5897d801
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CE05: ret
        __asm _emit 0xC3
    }
}

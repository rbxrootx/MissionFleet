// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 74 bytes in 1 exact ranges.
// Source symbol alias: FUN_58774c40.

// Ghidra body range 0x58774C40..0x58774C8A; 74 mapped bytes.
extern "C" __declspec(naked) void FUN_58774c40_segment_00() {
    __asm {
        // 0x58774C40: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774C43: mov eax, dword ptr [0x589cfc98]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774C48: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58774C4B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58774C4D: push esi
        __asm _emit 0x56
        // 0x58774C4E: push edi
        __asm _emit 0x57
        // 0x58774C4F: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774C52: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58774C54: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774C59: lea esi, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58774C5D: mov dword ptr [esp + 0x28], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774C65: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774C67: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774C69: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774C6B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774C6D: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58774C6F: call dword ptr [0x5898c154]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774C75: mov ecx, dword ptr [0x589cfc98]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774C7B: call 0x58774a90
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774C80: pop edi
        __asm _emit 0x5F
        // 0x58774C81: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58774C83: pop esi
        __asm _emit 0x5E
        // 0x58774C84: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58774C87: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

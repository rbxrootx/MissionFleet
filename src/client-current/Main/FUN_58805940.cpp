// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805940 .. +0x66 bytes.
// Source symbol alias: FUN_58805940.
extern "C" __declspec(naked) void FUN_58805940() {
    __asm {
        // 0x58805940: push esi
        __asm _emit 0x56
        // 0x58805941: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58805943: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805949: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5880594C: movzx edx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805953: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58805957: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58805959: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5880595B: jne 0x58805980
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5880595D: or dword ptr [esi + 0x78], 2
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x78
        __asm _emit 0x02
        // 0x58805961: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805966: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58805969: call 0x588d6d10
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x13
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5880596E: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58805972: push ecx
        __asm _emit 0x51
        // 0x58805973: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805979: call 0x588a69f0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5880597E: jmp 0x5880598d
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58805980: push eax
        __asm _emit 0x50
        // 0x58805981: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x47
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805986: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58805988: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5880598D: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805993: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58805998: mov dword ptr [esi + 0x300], 0x190
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588059A2: pop esi
        __asm _emit 0x5E
        // 0x588059A3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

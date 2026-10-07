// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 115 bytes in 2 exact ranges.
// Source symbol alias: FUN_588dcd00.

// Ghidra body range 0x588DCD00..0x588DCD2D; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_588dcd00_segment_00() {
    __asm {
        // 0x588DCD00: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCD04: push ebx
        __asm _emit 0x53
        // 0x588DCD05: push esi
        __asm _emit 0x56
        // 0x588DCD06: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DCD08: push edi
        __asm _emit 0x57
        // 0x588DCD09: mov dword ptr [esi + 0x606c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD13: mov dword ptr [esi + 0x6070], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD1D: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588DCD20: lea edi, [esi + 0x240]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD26: mov ebx, 0x20
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD2B: jmp 0x588dcd30
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588DCD30..0x588DCD76; 70 mapped bytes.
extern "C" __declspec(naked) void FUN_588dcd00_segment_01() {
    __asm {
        // 0x588DCD30: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588DCD32: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DCD34: je 0x588dcd3f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588DCD36: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x588DCD39: push edx
        __asm _emit 0x52
        // 0x588DCD3A: call 0x587b2140
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DCD3F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588DCD42: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588DCD45: jne 0x588dcd30
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x588DCD47: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588DCD4C: lea eax, [esi + 0x356]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD52: push eax
        __asm _emit 0x50
        // 0x588DCD53: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCD59: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DCD5B: jne 0x588dcd70
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x588DCD5D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588DCD5F: mov dword ptr [esi + 0x60c8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD69: mov word ptr [esi + 0x60cc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCD70: pop edi
        __asm _emit 0x5F
        // 0x588DCD71: pop esi
        __asm _emit 0x5E
        // 0x588DCD72: pop ebx
        __asm _emit 0x5B
        // 0x588DCD73: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

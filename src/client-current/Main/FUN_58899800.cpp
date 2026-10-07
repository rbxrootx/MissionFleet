// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 63 bytes in 1 exact ranges.
// Source symbol alias: FUN_58899800.

// Ghidra body range 0x58899800..0x5889983F; 63 mapped bytes.
extern "C" __declspec(naked) void FUN_58899800_segment_00() {
    __asm {
        // 0x58899800: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58899803: push ebx
        __asm _emit 0x53
        // 0x58899804: push ebp
        __asm _emit 0x55
        // 0x58899805: push esi
        __asm _emit 0x56
        // 0x58899806: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58899808: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5889980B: push edi
        __asm _emit 0x57
        // 0x5889980C: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x5889980F: jbe 0x58899816
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899811: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899816: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58899819: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x5889981B: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5889981E: jbe 0x58899825
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899820: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x34
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899825: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58899827: push ebp
        __asm _emit 0x55
        // 0x58899828: push ebx
        __asm _emit 0x53
        // 0x58899829: push edi
        __asm _emit 0x57
        // 0x5889982A: push eax
        __asm _emit 0x50
        // 0x5889982B: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889982F: push eax
        __asm _emit 0x50
        // 0x58899830: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899832: call 0x589022b0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x8A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899837: pop edi
        __asm _emit 0x5F
        // 0x58899838: pop esi
        __asm _emit 0x5E
        // 0x58899839: pop ebp
        __asm _emit 0x5D
        // 0x5889983A: pop ebx
        __asm _emit 0x5B
        // 0x5889983B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889983E: ret
        __asm _emit 0xC3
    }
}

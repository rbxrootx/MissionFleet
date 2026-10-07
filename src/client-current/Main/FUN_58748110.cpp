// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 110 bytes in 1 exact ranges.
// Source symbol alias: FUN_58748110.

// Ghidra body range 0x58748110..0x5874817E; 110 mapped bytes.
extern "C" __declspec(naked) void FUN_58748110_segment_00() {
    __asm {
        // 0x58748110: push ebx
        __asm _emit 0x53
        // 0x58748111: push ebp
        __asm _emit 0x55
        // 0x58748112: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58748116: push esi
        __asm _emit 0x56
        // 0x58748117: push edi
        __asm _emit 0x57
        // 0x58748118: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5874811A: cmp dword ptr [edi + 0x14], ebp
        __asm _emit 0x39
        __asm _emit 0x6F
        __asm _emit 0x14
        // 0x5874811D: jae 0x58748124
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5874811F: call 0x589714f6
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x93
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58748124: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x58748127: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874812B: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5874812D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5874812F: jae 0x58748133
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x58748131: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58748133: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58748137: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58748139: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5874813B: jb 0x5874813f
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x5874813D: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5874813F: cmp dword ptr [edi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58748143: jb 0x5874814a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58748145: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x58748148: jmp 0x5874814d
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5874814A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5874814D: push eax
        __asm _emit 0x50
        // 0x5874814E: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58748152: push eax
        __asm _emit 0x50
        // 0x58748153: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x58748155: push edi
        __asm _emit 0x57
        // 0x58748156: call 0x58748020
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874815B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874815E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58748160: jne 0x58748177
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58748162: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58748164: jae 0x58748170
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58748166: pop edi
        __asm _emit 0x5F
        // 0x58748167: pop esi
        __asm _emit 0x5E
        // 0x58748168: pop ebp
        __asm _emit 0x5D
        // 0x58748169: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5874816C: pop ebx
        __asm _emit 0x5B
        // 0x5874816D: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58748170: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748172: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58748174: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x58748177: pop edi
        __asm _emit 0x5F
        // 0x58748178: pop esi
        __asm _emit 0x5E
        // 0x58748179: pop ebp
        __asm _emit 0x5D
        // 0x5874817A: pop ebx
        __asm _emit 0x5B
        // 0x5874817B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

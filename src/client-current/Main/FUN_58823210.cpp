// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58823210 .. +0x5D bytes.
// Source symbol alias: FUN_58823210.
extern "C" __declspec(naked) void FUN_58823210() {
    __asm {
        // 0x58823210: push ebx
        __asm _emit 0x53
        // 0x58823211: push esi
        __asm _emit 0x56
        // 0x58823212: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58823214: mov ecx, dword ptr [ebx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x74
        // 0x58823217: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x5882321A: push edi
        __asm _emit 0x57
        // 0x5882321B: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823221: sub edi, 7
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x07
        // 0x58823224: add esi, 0x25
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x25
        // 0x58823227: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58823229: jle 0x58823238
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5882322B: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x4F
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823230: imul eax, eax, 0x46
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x58823233: cdq
        __asm _emit 0x99
        // 0x58823234: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x58823236: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58823238: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5882323B: lea ecx, [eax + 0x25]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x25
        // 0x5882323E: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58823240: jge 0x58823254
        __asm _emit 0x7D
        __asm _emit 0x12
        // 0x58823242: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58823244: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882324A: push esi
        __asm _emit 0x56
        // 0x5882324B: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823250: pop edi
        __asm _emit 0x5F
        // 0x58823251: pop esi
        __asm _emit 0x5E
        // 0x58823252: pop ebx
        __asm _emit 0x5B
        // 0x58823253: ret
        __asm _emit 0xC3
        // 0x58823254: add eax, 0x6b
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x6B
        // 0x58823257: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58823259: jle 0x5882325d
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5882325B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882325D: mov ecx, dword ptr [ebx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823263: push esi
        __asm _emit 0x56
        // 0x58823264: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58823269: pop edi
        __asm _emit 0x5F
        // 0x5882326A: pop esi
        __asm _emit 0x5E
        // 0x5882326B: pop ebx
        __asm _emit 0x5B
        // 0x5882326C: ret
        __asm _emit 0xC3
    }
}

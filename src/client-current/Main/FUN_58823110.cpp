// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58823110 .. +0x8E bytes.
// Source symbol alias: FUN_58823110.
extern "C" __declspec(naked) void FUN_58823110() {
    __asm {
        // 0x58823110: push ebx
        __asm _emit 0x53
        // 0x58823111: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58823117: push esi
        __asm _emit 0x56
        // 0x58823118: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882311A: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5882311D: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58823123: push eax
        __asm _emit 0x50
        // 0x58823124: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58823126: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823128: jbe 0x58823152
        __asm _emit 0x76
        __asm _emit 0x28
        // 0x5882312A: mov ecx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58823130: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58823136: cmp ecx, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882313C: jge 0x58823155
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x5882313E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823140: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823142: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823144: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58823146: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x89
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882314B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882314D: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x1B
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58823152: pop esi
        __asm _emit 0x5E
        // 0x58823153: pop ebx
        __asm _emit 0x5B
        // 0x58823154: ret
        __asm _emit 0xC3
        // 0x58823155: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x58823158: push edi
        __asm _emit 0x57
        // 0x58823159: mov edi, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882315F: push edi
        __asm _emit 0x57
        // 0x58823160: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58823162: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58823168: inc eax
        __asm _emit 0x40
        // 0x58823169: push eax
        __asm _emit 0x50
        // 0x5882316A: push edi
        __asm _emit 0x57
        // 0x5882316B: call 0x587b9820
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x66
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58823170: pop edi
        __asm _emit 0x5F
        // 0x58823171: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58823173: jne 0x58823194
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58823175: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5882317A: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882317F: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58823185: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882318B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882318E: push eax
        __asm _emit 0x50
        // 0x5882318F: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xA0
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58823194: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58823197: pop esi
        __asm _emit 0x5E
        // 0x58823198: pop ebx
        __asm _emit 0x5B
        // 0x58823199: jmp 0x5875f940
        __asm _emit 0xE9
        __asm _emit 0xA2
        __asm _emit 0xC7
        __asm _emit 0xF3
        __asm _emit 0xFF
    }
}

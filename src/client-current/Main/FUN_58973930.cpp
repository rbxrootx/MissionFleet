// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 64 bytes in 2 exact ranges.
// Source symbol alias: FUN_58973930.

// Ghidra body range 0x58973930..0x5897396B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_58973930_segment_00() {
    __asm {
        // 0x58973930: push ebx
        __asm _emit 0x53
        // 0x58973931: push ebp
        __asm _emit 0x55
        // 0x58973932: mov ebp, dword ptr [0x5898c2ac]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58973938: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5897393A: push esi
        __asm _emit 0x56
        // 0x5897393B: push edi
        __asm _emit 0x57
        // 0x5897393C: lea esi, [ebx + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973942: mov edi, 0x14
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973947: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58973949: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897394B: je 0x58973953
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5897394D: push eax
        __asm _emit 0x50
        // 0x5897394E: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58973950: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973953: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58973956: dec edi
        __asm _emit 0x4F
        // 0x58973957: jne 0x58973947
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x58973959: mov al, byte ptr [ebx + 0x200]
        __asm _emit 0x8A
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897395F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58973961: je 0x5897396e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58973963: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58973965: push eax
        __asm _emit 0x50
        // 0x58973966: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5897396E..0x58973973; 5 mapped bytes.
extern "C" __declspec(naked) void FUN_58973930_segment_01() {
    __asm {
        // 0x5897396E: pop edi
        __asm _emit 0x5F
        // 0x5897396F: pop esi
        __asm _emit 0x5E
        // 0x58973970: pop ebp
        __asm _emit 0x5D
        // 0x58973971: pop ebx
        __asm _emit 0x5B
        // 0x58973972: ret
        __asm _emit 0xC3
    }
}

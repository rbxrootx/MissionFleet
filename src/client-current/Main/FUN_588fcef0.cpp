// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 184 bytes in 2 exact ranges.
// Source symbol alias: FUN_588fcef0.

// Ghidra body range 0x588FCEF0..0x588FCF99; 169 mapped bytes.
extern "C" __declspec(naked) void FUN_588fcef0_segment_00() {
    __asm {
        // 0x588FCEF0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FCEF2: push esi
        __asm _emit 0x56
        // 0x588FCEF3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FCEF5: mov word ptr [esi + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCEFC: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FCF00: mov dword ptr [esi + 0x98], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCF0A: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588FCF0F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FCF11: je 0x588fcf24
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588FCF13: push eax
        __asm _emit 0x50
        // 0x588FCF14: call 0x588f74c0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCF19: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FCF1B: call 0x588f7580
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCF20: pop esi
        __asm _emit 0x5E
        // 0x588FCF21: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588FCF24: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCF26: call 0x588f74c0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCF2B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FCF2D: call 0x588f7580
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCF32: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCF38: push ecx
        __asm _emit 0x51
        // 0x588FCF39: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FCF3B: call 0x588fc8e0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCF40: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FCF44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FCF46: je 0x588fcf6f
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588FCF48: jle 0x588fcfa0
        __asm _emit 0x7E
        __asm _emit 0x56
        // 0x588FCF4A: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FCF4D: jg 0x588fcfa0
        __asm _emit 0x7F
        __asm _emit 0x51
        // 0x588FCF4F: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FCF53: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FCF57: push edx
        __asm _emit 0x52
        // 0x588FCF58: push eax
        __asm _emit 0x50
        // 0x588FCF59: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FCF5B: call 0x588fc050
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FCF60: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCF66: call 0x588feb40
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCF6B: pop esi
        __asm _emit 0x5E
        // 0x588FCF6C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588FCF6F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FCF73: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FCF75: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FCF7B: push edx
        __asm _emit 0x52
        // 0x588FCF7C: call 0x587e0d80
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x3D
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588FCF81: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCF87: call 0x588bcfd0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FCF8C: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FCF92: call 0x587da120
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xD1
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588FCF97: jmp 0x588fcfa0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588FCFA0..0x588FCFAF; 15 mapped bytes.
extern "C" __declspec(naked) void FUN_588fcef0_segment_01() {
    __asm {
        // 0x588FCFA0: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCFA6: call 0x588feb40
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCFAB: pop esi
        __asm _emit 0x5E
        // 0x588FCFAC: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

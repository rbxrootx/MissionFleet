// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 182 bytes in 1 exact ranges.
// Source symbol alias: FUN_58977590.

// Ghidra body range 0x58977590..0x58977646; 182 mapped bytes.
extern "C" __declspec(naked) void FUN_58977590_segment_00() {
    __asm {
        // 0x58977590: push esi
        __asm _emit 0x56
        // 0x58977591: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58977595: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58977597: push esi
        __asm _emit 0x56
        // 0x58977598: call 0x5897b790
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897759D: mov al, byte ptr [esi + 0xb0]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775A3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589775A6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589775A8: jne 0x589775c1
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x589775AA: push esi
        __asm _emit 0x56
        // 0x589775AB: call 0x5897b000
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775B0: push esi
        __asm _emit 0x56
        // 0x589775B1: call 0x5897a5f0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589775B8: push esi
        __asm _emit 0x56
        // 0x589775B9: call 0x5897a030
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775BE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x589775C1: push esi
        __asm _emit 0x56
        // 0x589775C2: call 0x58979a60
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775C7: mov al, byte ptr [esi + 0xb1]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775CD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589775D0: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589775D2: je 0x589775e4
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x589775D4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x589775D6: push esi
        __asm _emit 0x56
        // 0x589775D7: mov dword ptr [eax + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775DE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x589775E0: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x589775E2: jmp 0x589775fb
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x589775E4: mov al, byte ptr [esi + 0xd4]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775EA: push esi
        __asm _emit 0x56
        // 0x589775EB: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589775ED: je 0x589775f6
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x589775EF: call 0x58978e50
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775F4: jmp 0x589775fb
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x589775F6: call 0x589784f0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589775FB: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58977601: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58977604: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58977607: jg 0x58977617
        __asm _emit 0x7F
        __asm _emit 0x0E
        // 0x58977609: mov al, byte ptr [esi + 0xb2]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897760F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58977611: jne 0x58977617
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58977613: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58977615: jmp 0x5897761c
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58977617: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897761C: push eax
        __asm _emit 0x50
        // 0x5897761D: push esi
        __asm _emit 0x56
        // 0x5897761E: call 0x58977840
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58977623: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58977625: push esi
        __asm _emit 0x56
        // 0x58977626: call 0x589776b0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897762B: push esi
        __asm _emit 0x56
        // 0x5897762C: call 0x58976cb0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58977631: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58977634: push esi
        __asm _emit 0x56
        // 0x58977635: call dword ptr [edx + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x58977638: mov eax, dword ptr [esi + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897763E: push esi
        __asm _emit 0x56
        // 0x5897763F: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58977641: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58977644: pop esi
        __asm _emit 0x5E
        // 0x58977645: ret
        __asm _emit 0xC3
    }
}

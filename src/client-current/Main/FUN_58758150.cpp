// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 239 bytes in 1 exact ranges.
// Source symbol alias: FUN_58758150.

// Ghidra body range 0x58758150..0x5875823F; 239 mapped bytes.
extern "C" __declspec(naked) void FUN_58758150_segment_00() {
    __asm {
        // 0x58758150: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58758152: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58758157: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875815D: push eax
        __asm _emit 0x50
        // 0x5875815E: push ecx
        __asm _emit 0x51
        // 0x5875815F: push esi
        __asm _emit 0x56
        // 0x58758160: push edi
        __asm _emit 0x57
        // 0x58758161: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58758166: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58758168: push eax
        __asm _emit 0x50
        // 0x58758169: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875816D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758173: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58758175: cmp dword ptr [edi + 0x5f4], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875817C: jne 0x58758207
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758182: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58758184: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x4A
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58758189: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875818C: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58758190: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758198: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875819A: je 0x587581d4
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5875819C: mov edx, dword ptr [edi + 0x5f0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587581A2: cmp dword ptr [edx + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587581A9: jle 0x587581b9
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587581AB: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587581B1: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587581B3: je 0x587581b9
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587581B5: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587581B7: jmp 0x587581bb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587581B9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587581BB: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587581C1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587581C3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587581C5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587581C7: push edx
        __asm _emit 0x52
        // 0x587581C8: push ecx
        __asm _emit 0x51
        // 0x587581C9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587581CB: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x9A
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587581D0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587581D2: jmp 0x587581d6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587581D4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587581D6: mov dword ptr [edi + 0x5f4], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587581DC: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x587581DF: mov edx, 0x7ff8
        __asm _emit 0xBA
        __asm _emit 0xF8
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587581E4: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587581EC: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x587581F0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587581F2: je 0x587581fa
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587581F4: push esi
        __asm _emit 0x56
        // 0x587581F5: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xAD
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587581FA: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x587581FD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587581FF: je 0x58758207
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58758201: push esi
        __asm _emit 0x56
        // 0x58758202: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xAC
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58758207: mov cl, byte ptr [esp + 0x20]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875820B: mov eax, dword ptr [edi + 0x5f4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758211: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x58758214: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x58758218: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875821C: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758221: and cx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCE
        // 0x58758224: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58758227: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875822B: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875822F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758236: pop ecx
        __asm _emit 0x59
        // 0x58758237: pop edi
        __asm _emit 0x5F
        // 0x58758238: pop esi
        __asm _emit 0x5E
        // 0x58758239: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875823C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

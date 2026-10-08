// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 93 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f4290.

// Ghidra body range 0x588F4290..0x588F42ED; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_588f4290_segment_00() {
    __asm {
        // 0x588F4290: mov edx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x30
        // 0x588F4293: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4298: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F429A: je 0x588f429f
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588F429C: or dword ptr [edx + 0x48], eax
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x588F429F: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588F42A2: push esi
        __asm _emit 0x56
        // 0x588F42A3: push edi
        __asm _emit 0x57
        // 0x588F42A4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F42A6: je 0x588f42c4
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588F42A8: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F42AC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588F42B0: mov edi, dword ptr [edx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x48
        // 0x588F42B3: shr edi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x588F42B6: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x588F42B8: je 0x588f42cb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588F42BA: mov edx, dword ptr [edx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F42C0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F42C2: jne 0x588f42b0
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588F42C4: pop edi
        __asm _emit 0x5F
        // 0x588F42C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F42C7: pop esi
        __asm _emit 0x5E
        // 0x588F42C8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F42CB: cmp dword ptr [edx + 0xec], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F42D2: je 0x588f42e2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F42D4: pop edi
        __asm _emit 0x5F
        // 0x588F42D5: mov dword ptr [ecx + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F42DC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F42DE: pop esi
        __asm _emit 0x5E
        // 0x588F42DF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F42E2: pop edi
        __asm _emit 0x5F
        // 0x588F42E3: mov dword ptr [ecx + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x30
        // 0x588F42E6: or dword ptr [edx + 0x48], eax
        __asm _emit 0x09
        __asm _emit 0x42
        __asm _emit 0x48
        // 0x588F42E9: pop esi
        __asm _emit 0x5E
        // 0x588F42EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A44A0 .. +0x72 bytes.
// Source symbol alias: FUN_588a44a0.
extern "C" __declspec(naked) void FUN_588a44a0() {
    __asm {
        // 0x588A44A0: push ebp
        __asm _emit 0x55
        // 0x588A44A1: push edi
        __asm _emit 0x57
        // 0x588A44A2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A44A6: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588A44A8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A44AA: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588A44AC: je 0x588a450d
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x588A44AE: mov eax, dword ptr [0x58a245b0]
        __asm _emit 0xA1
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A44B3: push esi
        __asm _emit 0x56
        // 0x588A44B4: mov esi, dword ptr [eax + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A44BA: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588A44BC: je 0x588a450c
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588A44BE: push ebx
        __asm _emit 0x53
        // 0x588A44BF: nop
        __asm _emit 0x90
        // 0x588A44C0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588A44C3: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x588A44C6: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x588A44C8: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x588A44CA: cmp bl, byte ptr [edx]
        __asm _emit 0x3A
        __asm _emit 0x1A
        // 0x588A44CC: jne 0x588a44e8
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588A44CE: cmp bl, cl
        __asm _emit 0x3A
        __asm _emit 0xD9
        // 0x588A44D0: je 0x588a44e4
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588A44D2: mov bl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x588A44D5: cmp bl, byte ptr [edx + 1]
        __asm _emit 0x3A
        __asm _emit 0x5A
        __asm _emit 0x01
        // 0x588A44D8: jne 0x588a44e8
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588A44DA: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588A44DD: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x588A44E0: cmp bl, cl
        __asm _emit 0x3A
        __asm _emit 0xD9
        // 0x588A44E2: jne 0x588a44c8
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x588A44E4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A44E6: jmp 0x588a44ed
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588A44E8: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588A44EA: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x588A44ED: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588A44EF: je 0x588a4505
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588A44F1: mov dword ptr [ebp + 0xf0], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A44F7: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x588A44FA: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x588A44FC: jne 0x588a44c0
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x588A44FE: pop ebx
        __asm _emit 0x5B
        // 0x588A44FF: pop esi
        __asm _emit 0x5E
        // 0x588A4500: pop edi
        __asm _emit 0x5F
        // 0x588A4501: pop ebp
        __asm _emit 0x5D
        // 0x588A4502: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A4505: mov dword ptr [ebp + 0xf0], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A450B: pop ebx
        __asm _emit 0x5B
        // 0x588A450C: pop esi
        __asm _emit 0x5E
        // 0x588A450D: pop edi
        __asm _emit 0x5F
        // 0x588A450E: pop ebp
        __asm _emit 0x5D
        // 0x588A450F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A497 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_5885a497() {
    __asm {
        // 0x5885A497: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5885A499: push 0x588ed200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xD2
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885A49E: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x82
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885A4A3: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885A4A7: jne 0x5885a4cc
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5885A4A9: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885A4AB: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885A4AE: push eax
        __asm _emit 0x50
        // 0x5885A4AF: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A4B6: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885A4BA: push esi
        __asm _emit 0x56
        // 0x5885A4BB: push esi
        __asm _emit 0x56
        // 0x5885A4BC: push esi
        __asm _emit 0x56
        // 0x5885A4BD: push esi
        __asm _emit 0x56
        // 0x5885A4BE: push esi
        __asm _emit 0x56
        // 0x5885A4BF: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A4C4: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885A4C7: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A4CA: jmp 0x5885a524
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x5885A4CC: mov edi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x5885A4CF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885A4D1: je 0x5885a4e3
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5885A4D3: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5885A4D6: je 0x5885a4e3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885A4D8: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5885A4DB: je 0x5885a4e3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885A4DD: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885A4DF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A4E1: jmp 0x5885a4e8
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5885A4E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A4E5: inc eax
        __asm _emit 0x40
        // 0x5885A4E6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885A4E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A4EA: je 0x5885a4ab
        __asm _emit 0x74
        __asm _emit 0xBF
        // 0x5885A4EC: or dword ptr [ebp - 0x1c], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4D
        __asm _emit 0xE4
        __asm _emit 0xFF
        // 0x5885A4F0: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A4F3: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A4F8: pop ecx
        __asm _emit 0x59
        // 0x5885A4F9: mov dword ptr [ebp - 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885A4FC: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A4FF: push edi
        __asm _emit 0x57
        // 0x5885A500: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885A503: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885A506: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A509: call 0x5885a61a
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A50E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885A511: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A513: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885A516: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A51D: call 0x5885a537
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A522: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A524: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885A527: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A52E: pop ecx
        __asm _emit 0x59
        // 0x5885A52F: pop edi
        __asm _emit 0x5F
        // 0x5885A530: pop esi
        __asm _emit 0x5E
        // 0x5885A531: pop ebx
        __asm _emit 0x5B
        // 0x5885A532: leave
        __asm _emit 0xC9
        // 0x5885A533: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888D2D0 .. +0xB4 bytes.
// Source symbol alias: FUN_5888d2d0.
extern "C" __declspec(naked) void FUN_5888d2d0() {
    __asm {
        // 0x5888D2D0: push ecx
        __asm _emit 0x51
        // 0x5888D2D1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888D2D6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888D2D8: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5888D2DB: push ebx
        __asm _emit 0x53
        // 0x5888D2DC: push ebp
        __asm _emit 0x55
        // 0x5888D2DD: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888D2E1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5888D2E3: mov eax, dword ptr [ebx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D2E9: push edi
        __asm _emit 0x57
        // 0x5888D2EA: mov edi, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D2F0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888D2F2: jle 0x5888d32f
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x5888D2F4: push esi
        __asm _emit 0x56
        // 0x5888D2F5: lea esi, [edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0xFF
        // 0x5888D2F8: mov ecx, dword ptr [ebx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D2FE: push ebp
        __asm _emit 0x55
        // 0x5888D2FF: push esi
        __asm _emit 0x56
        // 0x5888D300: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xAD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D305: push eax
        __asm _emit 0x50
        // 0x5888D306: call dword ptr [0x5898c138]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D30C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D30E: jne 0x5888d328
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5888D310: mov ecx, dword ptr [ebx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D316: push esi
        __asm _emit 0x56
        // 0x5888D317: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D31C: mov ecx, dword ptr [ebx + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D322: push esi
        __asm _emit 0x56
        // 0x5888D323: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D328: dec edi
        __asm _emit 0x4F
        // 0x5888D329: dec esi
        __asm _emit 0x4E
        // 0x5888D32A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888D32C: jg 0x5888d2f8
        __asm _emit 0x7F
        __asm _emit 0xCA
        // 0x5888D32E: pop esi
        __asm _emit 0x5E
        // 0x5888D32F: cmp dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5888D334: jne 0x5888d346
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5888D336: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D33C: mov ecx, dword ptr [ecx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D342: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888D344: jmp 0x5888d354
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5888D346: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D34C: mov ecx, dword ptr [edx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D352: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5888D354: push ebp
        __asm _emit 0x55
        // 0x5888D355: call 0x588a5470
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5888D35A: mov eax, dword ptr [ebx + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D360: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D366: push ecx
        __asm _emit 0x51
        // 0x5888D367: mov ecx, dword ptr [ebx + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D36D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x9F
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D372: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5888D376: pop edi
        __asm _emit 0x5F
        // 0x5888D377: pop ebp
        __asm _emit 0x5D
        // 0x5888D378: pop ebx
        __asm _emit 0x5B
        // 0x5888D379: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5888D37B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xF8
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5888D380: pop ecx
        __asm _emit 0x59
        // 0x5888D381: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D2A8 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5885d2a8() {
    __asm {
        // 0x5885D2A8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D2AA: push ebp
        __asm _emit 0x55
        // 0x5885D2AB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D2AD: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5885D2B0: push esi
        __asm _emit 0x56
        // 0x5885D2B1: push edi
        __asm _emit 0x57
        // 0x5885D2B2: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D2B5: mov byte ptr [ebp - 1], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D2B9: push eax
        __asm _emit 0x50
        // 0x5885D2BA: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D2BD: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x5885D2C0: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5885D2C2: mov edx, esp
        __asm _emit 0x8B
        __asm _emit 0xD4
        // 0x5885D2C4: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885D2C7: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xF2
        __asm _emit 0x0F
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D2CC: push eax
        __asm _emit 0x50
        // 0x5885D2CD: push dword ptr [edi + 0x34]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x5885D2D0: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x5885D2D3: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885D2D6: push dword ptr [edi + 0x30]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x30
        // 0x5885D2D9: push eax
        __asm _emit 0x50
        // 0x5885D2DA: push edx
        __asm _emit 0x52
        // 0x5885D2DB: call 0x5885b8d2
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D2E0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885D2E3: push esi
        __asm _emit 0x56
        // 0x5885D2E4: call 0x5885ba8e
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D2E9: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5885D2EC: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D2F0: je 0x5885d30e
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5885D2F2: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885D2F5: je 0x5885d30e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5885D2F7: cmp byte ptr [edi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x5885D2FB: je 0x5885d301
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885D2FD: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D2FF: jmp 0x5885d310
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5885D301: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D304: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885D306: push eax
        __asm _emit 0x50
        // 0x5885D307: call 0x5885da0f
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D30C: jmp 0x5885d310
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885D30E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D310: pop edi
        __asm _emit 0x5F
        // 0x5885D311: pop esi
        __asm _emit 0x5E
        // 0x5885D312: leave
        __asm _emit 0xC9
        // 0x5885D313: ret
        __asm _emit 0xC3
    }
}

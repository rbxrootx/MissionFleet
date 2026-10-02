// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B97A .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5885b97a() {
    __asm {
        // 0x5885B97A: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B97C: push ebp
        __asm _emit 0x55
        // 0x5885B97D: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B97F: sub esp, 0x310
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B985: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885B98A: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5885B98C: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885B98F: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885B992: push esi
        __asm _emit 0x56
        // 0x5885B993: mov esi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885B996: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B998: je 0x5885b99e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885B99A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B99C: jne 0x5885b9c4
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5885B99E: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B9A3: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B9A9: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B9AE: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885B9B1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B9B3: je 0x5885b9bf
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885B9B5: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885B9B8: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885B9BB: jne 0x5885b9bf
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885B9BD: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885B9BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B9C1: inc eax
        __asm _emit 0x40
        // 0x5885B9C2: jmp 0x5885b9f7
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5885B9C4: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B9CA: push ecx
        __asm _emit 0x51
        // 0x5885B9CB: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885B9CE: push ecx
        __asm _emit 0x51
        // 0x5885B9CF: push eax
        __asm _emit 0x50
        // 0x5885B9D0: call 0x5885bb18
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B9D5: push esi
        __asm _emit 0x56
        // 0x5885B9D6: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B9DC: push ecx
        __asm _emit 0x51
        // 0x5885B9DD: push eax
        __asm _emit 0x50
        // 0x5885B9DE: call 0x5885c9a8
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B9E3: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x5885B9E6: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885B9E9: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B9EB: je 0x5885b9f7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885B9ED: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885B9F0: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885B9F3: jne 0x5885b9f7
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885B9F5: mov byte ptr [edx], cl
        __asm _emit 0x88
        __asm _emit 0x0A
        // 0x5885B9F7: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885B9FA: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5885B9FC: pop esi
        __asm _emit 0x5E
        // 0x5885B9FD: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885BA02: leave
        __asm _emit 0xC9
        // 0x5885BA03: ret
        __asm _emit 0xC3
    }
}

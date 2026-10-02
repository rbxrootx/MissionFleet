// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885796F .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_5885796f() {
    __asm {
        // 0x5885796F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58857971: push ebp
        __asm _emit 0x55
        // 0x58857972: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58857974: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58857976: push 0x58892d77
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x2D
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5885797B: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857981: push eax
        __asm _emit 0x50
        // 0x58857982: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58857985: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885798A: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5885798C: push eax
        __asm _emit 0x50
        // 0x5885798D: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58857990: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857996: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5885799A: jne 0x588579ae
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885799C: call 0x58857a5b
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588579A1: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588579A3: je 0x588579ae
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588579A5: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588579A8: call 0x58857a9d
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588579AD: pop ecx
        __asm _emit 0x59
        // 0x588579AE: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x588579B1: mov byte ptr [ebp - 0xd], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xF3
        __asm _emit 0x00
        // 0x588579B5: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x588579B8: lea eax, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x588579BB: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x588579BE: lea eax, [ebp - 0xd]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF3
        // 0x588579C1: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x588579C4: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x588579C8: lea ecx, [ebp - 0xe]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xF2
        // 0x588579CB: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588579CD: pop eax
        __asm _emit 0x58
        // 0x588579CE: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x588579D1: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x588579D4: lea eax, [ebp - 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x588579D7: push eax
        __asm _emit 0x50
        // 0x588579D8: lea eax, [ebp - 0x24]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x588579DB: push eax
        __asm _emit 0x50
        // 0x588579DC: lea eax, [ebp - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x588579DF: push eax
        __asm _emit 0x50
        // 0x588579E0: call 0x5885781f
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588579E5: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588579E9: jne 0x58857a0f
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588579EB: call 0x5886f1dc
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588579F0: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588579F3: jne 0x588579fb
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588579F5: mov byte ptr [ebp - 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xEC
        __asm _emit 0x00
        // 0x588579F9: jmp 0x58857a09
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588579FB: call 0x5886f17d
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58857A00: neg al
        __asm _emit 0xF6
        __asm _emit 0xD8
        // 0x58857A02: sbb al, al
        __asm _emit 0x1A
        __asm _emit 0xC0
        // 0x58857A04: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x58857A06: mov byte ptr [ebp - 0x14], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58857A09: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58857A0D: je 0x58857a1c
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58857A0F: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58857A12: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A19: pop ecx
        __asm _emit 0x59
        // 0x58857A1A: leave
        __asm _emit 0xC9
        // 0x58857A1B: ret
        __asm _emit 0xC3
        // 0x58857A1C: push dword ptr [ebp - 0x14]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58857A1F: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58857A22: call 0x58857a2d
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A27: int3
        __asm _emit 0xCC
    }
}

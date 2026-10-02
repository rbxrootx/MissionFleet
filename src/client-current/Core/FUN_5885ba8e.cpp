// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885BA8E .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5885ba8e() {
    __asm {
        // 0x5885BA8E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885BA90: push ebp
        __asm _emit 0x55
        // 0x5885BA91: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885BA93: sub esp, 0x310
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BA99: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885BA9E: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5885BAA0: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885BAA3: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885BAA6: push esi
        __asm _emit 0x56
        // 0x5885BAA7: mov esi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885BAAA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885BAAC: je 0x5885bab2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885BAAE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885BAB0: jne 0x5885bad8
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5885BAB2: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BAB7: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BABD: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BAC2: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885BAC5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885BAC7: je 0x5885bad3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885BAC9: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885BACC: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885BACF: jne 0x5885bad3
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885BAD1: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885BAD3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BAD5: inc eax
        __asm _emit 0x40
        // 0x5885BAD6: jmp 0x5885bb0b
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5885BAD8: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BADE: push ecx
        __asm _emit 0x51
        // 0x5885BADF: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885BAE2: push ecx
        __asm _emit 0x51
        // 0x5885BAE3: push eax
        __asm _emit 0x50
        // 0x5885BAE4: call 0x5885bf85
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BAE9: push esi
        __asm _emit 0x56
        // 0x5885BAEA: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BAF0: push ecx
        __asm _emit 0x51
        // 0x5885BAF1: push eax
        __asm _emit 0x50
        // 0x5885BAF2: call 0x5885c9a8
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BAF7: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x5885BAFA: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885BAFD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885BAFF: je 0x5885bb0b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885BB01: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885BB04: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885BB07: jne 0x5885bb0b
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885BB09: mov byte ptr [edx], cl
        __asm _emit 0x88
        __asm _emit 0x0A
        // 0x5885BB0B: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885BB0E: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5885BB10: pop esi
        __asm _emit 0x5E
        // 0x5885BB11: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885BB16: leave
        __asm _emit 0xC9
        // 0x5885BB17: ret
        __asm _emit 0xC3
    }
}

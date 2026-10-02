// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885BA04 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5885ba04() {
    __asm {
        // 0x5885BA04: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885BA06: push ebp
        __asm _emit 0x55
        // 0x5885BA07: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885BA09: sub esp, 0x310
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BA0F: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885BA14: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5885BA16: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885BA19: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885BA1C: push esi
        __asm _emit 0x56
        // 0x5885BA1D: mov esi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885BA20: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885BA22: je 0x5885ba28
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885BA24: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885BA26: jne 0x5885ba4e
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5885BA28: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x6A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BA2D: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BA33: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BA38: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885BA3B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885BA3D: je 0x5885ba49
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885BA3F: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885BA42: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885BA45: jne 0x5885ba49
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885BA47: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885BA49: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885BA4B: inc eax
        __asm _emit 0x40
        // 0x5885BA4C: jmp 0x5885ba81
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5885BA4E: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BA54: push ecx
        __asm _emit 0x51
        // 0x5885BA55: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885BA58: push ecx
        __asm _emit 0x51
        // 0x5885BA59: push eax
        __asm _emit 0x50
        // 0x5885BA5A: call 0x5885bf85
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BA5F: push esi
        __asm _emit 0x56
        // 0x5885BA60: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885BA66: push ecx
        __asm _emit 0x51
        // 0x5885BA67: push eax
        __asm _emit 0x50
        // 0x5885BA68: call 0x5885c860
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885BA6D: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x5885BA70: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885BA73: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885BA75: je 0x5885ba81
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885BA77: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885BA7A: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885BA7D: jne 0x5885ba81
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885BA7F: mov byte ptr [edx], cl
        __asm _emit 0x88
        __asm _emit 0x0A
        // 0x5885BA81: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885BA84: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5885BA86: pop esi
        __asm _emit 0x5E
        // 0x5885BA87: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885BA8C: leave
        __asm _emit 0xC9
        // 0x5885BA8D: ret
        __asm _emit 0xC3
    }
}

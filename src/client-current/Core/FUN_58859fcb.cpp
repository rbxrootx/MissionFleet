// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58859FCB .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_58859fcb() {
    __asm {
        // 0x58859FCB: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58859FCD: push ebp
        __asm _emit 0x55
        // 0x58859FCE: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58859FD0: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x58859FD3: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x58859FD6: push esi
        __asm _emit 0x56
        // 0x58859FD7: push edi
        __asm _emit 0x57
        // 0x58859FD8: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58859FDA: push esi
        __asm _emit 0x56
        // 0x58859FDB: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859FE0: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58859FE3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58859FE5: jne 0x58859ff2
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x58859FE7: push esi
        __asm _emit 0x56
        // 0x58859FE8: call 0x58859ec2
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859FED: pop ecx
        __asm _emit 0x59
        // 0x58859FEE: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58859FF0: jmp 0x5885a022
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x58859FF2: lea eax, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD8
        // 0x58859FF5: push eax
        __asm _emit 0x50
        // 0x58859FF6: push edi
        __asm _emit 0x57
        // 0x58859FF7: call 0x58859f62
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58859FFC: pop ecx
        __asm _emit 0x59
        // 0x58859FFD: pop ecx
        __asm _emit 0x59
        // 0x58859FFE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A000: jne 0x5885a01f
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5885A002: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5885A005: nop
        __asm _emit 0x90
        // 0x5885A006: shr eax, 0xb
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0B
        // 0x5885A009: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A00B: je 0x5885a022
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5885A00D: push edi
        __asm _emit 0x57
        // 0x5885A00E: call 0x5886cc56
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A013: push eax
        __asm _emit 0x50
        // 0x5885A014: call 0x5887031f
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A019: pop ecx
        __asm _emit 0x59
        // 0x5885A01A: pop ecx
        __asm _emit 0x59
        // 0x5885A01B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A01D: je 0x5885a022
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5885A01F: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCE
        __asm _emit 0xFF
        // 0x5885A022: lea ecx, [ebp - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5885A025: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A02A: pop edi
        __asm _emit 0x5F
        // 0x5885A02B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A02D: pop esi
        __asm _emit 0x5E
        // 0x5885A02E: leave
        __asm _emit 0xC9
        // 0x5885A02F: ret
        __asm _emit 0xC3
    }
}

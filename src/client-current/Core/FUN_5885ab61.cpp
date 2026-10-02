// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885AB61 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_5885ab61() {
    __asm {
        // 0x5885AB61: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885AB63: push ebp
        __asm _emit 0x55
        // 0x5885AB64: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885AB66: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x24
        // 0x5885AB69: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885AB6C: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF8
        // 0x5885AB6F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885AB71: jne 0x5885ab96
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5885AB73: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885AB76: push eax
        __asm _emit 0x50
        // 0x5885AB77: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885AB7B: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885AB82: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885AB84: push eax
        __asm _emit 0x50
        // 0x5885AB85: push eax
        __asm _emit 0x50
        // 0x5885AB86: push eax
        __asm _emit 0x50
        // 0x5885AB87: push eax
        __asm _emit 0x50
        // 0x5885AB88: push eax
        __asm _emit 0x50
        // 0x5885AB89: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AB8E: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885AB91: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885AB94: leave
        __asm _emit 0xC9
        // 0x5885AB95: ret
        __asm _emit 0xC3
        // 0x5885AB96: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885AB99: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5885AB9C: je 0x5885aba7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885AB9E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885ABA0: je 0x5885abb0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885ABA2: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x5885ABA5: jne 0x5885ab73
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5885ABA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885ABA9: je 0x5885abb0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885ABAB: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x5885ABAE: jne 0x5885abbd
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5885ABB0: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5885ABB3: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x5885ABB6: cmp eax, 0x7ffffffd
        __asm _emit 0x3D
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5885ABBB: ja 0x5885ab73
        __asm _emit 0x77
        __asm _emit 0xB6
        // 0x5885ABBD: lea eax, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5885ABC0: mov dword ptr [ebp - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885ABC3: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x5885ABC6: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885ABC9: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x5885ABCC: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885ABCF: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5885ABD2: lea eax, [ebp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885ABD5: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5885ABD8: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885ABDB: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5885ABDE: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885ABE1: push eax
        __asm _emit 0x50
        // 0x5885ABE2: lea eax, [ebp - 0x24]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x5885ABE5: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885ABE8: push eax
        __asm _emit 0x50
        // 0x5885ABE9: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885ABEC: push eax
        __asm _emit 0x50
        // 0x5885ABED: lea ecx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xFF
        // 0x5885ABF0: call 0x5885aa66
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885ABF5: leave
        __asm _emit 0xC9
        // 0x5885ABF6: ret
        __asm _emit 0xC3
    }
}

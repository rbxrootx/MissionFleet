// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F43F0 .. +0xD2 bytes.
// Source symbol alias: FUN_588f43f0.
extern "C" __declspec(naked) void FUN_588f43f0() {
    __asm {
        // 0x588F43F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F43F2: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F43F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F43FD: push eax
        __asm _emit 0x50
        // 0x588F43FE: push ecx
        __asm _emit 0x51
        // 0x588F43FF: push esi
        __asm _emit 0x56
        // 0x588F4400: push edi
        __asm _emit 0x57
        // 0x588F4401: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F4406: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F4408: push eax
        __asm _emit 0x50
        // 0x588F4409: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F440D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4413: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F4415: push 0x27c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F441A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F441F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F4422: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F4426: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F442E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F4430: je 0x588f4442
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588F4432: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F4436: push ecx
        __asm _emit 0x51
        // 0x588F4437: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F4439: call 0x5877cc30
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x87
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588F443E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588F4440: jmp 0x588f4444
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F4442: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588F4444: push esi
        __asm _emit 0x56
        // 0x588F4445: lea ecx, [edi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588F4448: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F4450: call 0x5877b130
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x6C
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588F4455: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F445B: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588F445E: je 0x588f4485
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588F4460: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588F4463: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F4465: je 0x588f447b
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588F4467: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x588F446A: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588F446D: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588F446F: je 0x588f44ad
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588F4471: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4477: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F4479: jne 0x588f4467
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588F447B: mov dword ptr [esi + 0xb8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F4485: cmp dword ptr [esi + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F448C: jne 0x588f4497
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588F448E: push esi
        __asm _emit 0x56
        // 0x588F448F: lea ecx, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x20
        // 0x588F4492: call 0x5877b130
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x6C
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588F4497: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F4499: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F449D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F44A4: pop ecx
        __asm _emit 0x59
        // 0x588F44A5: pop edi
        __asm _emit 0x5F
        // 0x588F44A6: pop esi
        __asm _emit 0x5E
        // 0x588F44A7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F44AA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F44AD: movzx eax, word ptr [esi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x5E
        // 0x588F44B1: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x588F44B4: mov dword ptr [ecx + eax*4 + 0x9a4], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F44BB: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F44C0: jmp 0x588f4485
        __asm _emit 0xEB
        __asm _emit 0xC3
    }
}

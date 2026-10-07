// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 146 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743360.

// Ghidra body range 0x58743360..0x587433F2; 146 mapped bytes.
extern "C" __declspec(naked) void FUN_58743360_segment_00() {
    __asm {
        // 0x58743360: push ebx
        __asm _emit 0x53
        // 0x58743361: push ebp
        __asm _emit 0x55
        // 0x58743362: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58743366: lea eax, [ebp*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xED
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874336D: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5874336F: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58743371: cmp dword ptr [ebx + eax*8 + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xC3
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58743376: push esi
        __asm _emit 0x56
        // 0x58743377: lea esi, [ebx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xC3
        // 0x5874337A: jne 0x587433dd
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x5874337C: cmp dword ptr [esi + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x58743380: jne 0x587433dd
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x58743382: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58743384: lea ecx, [ebp + 0x139]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874338A: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5874338D: push edi
        __asm _emit 0x57
        // 0x5874338E: mov edi, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x11
        // 0x58743391: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58743393: je 0x587433c8
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x58743395: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58743398: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874339A: je 0x587433c1
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5874339C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5874339F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587433A2: push ecx
        __asm _emit 0x51
        // 0x587433A3: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587433A6: push eax
        __asm _emit 0x50
        // 0x587433A7: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587433AA: push eax
        __asm _emit 0x50
        // 0x587433AB: push ecx
        __asm _emit 0x51
        // 0x587433AC: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587433B1: fcomp qword ptr [0x5898ceb0]
        __asm _emit 0xDC
        __asm _emit 0x1D
        __asm _emit 0xB0
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587433B7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587433BA: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587433BC: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x587433BF: jnp 0x587433e3
        __asm _emit 0x7B
        __asm _emit 0x22
        // 0x587433C1: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587433C4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587433C6: jne 0x58743395
        __asm _emit 0x75
        __asm _emit 0xCD
        // 0x587433C8: mov edx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x587433CB: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587433CE: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587433D0: push edx
        __asm _emit 0x52
        // 0x587433D1: push eax
        __asm _emit 0x50
        // 0x587433D2: push ebp
        __asm _emit 0x55
        // 0x587433D3: push ecx
        __asm _emit 0x51
        // 0x587433D4: call 0x587474f0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587433D9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587433DC: pop edi
        __asm _emit 0x5F
        // 0x587433DD: pop esi
        __asm _emit 0x5E
        // 0x587433DE: pop ebp
        __asm _emit 0x5D
        // 0x587433DF: pop ebx
        __asm _emit 0x5B
        // 0x587433E0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587433E3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587433E5: pop edi
        __asm _emit 0x5F
        // 0x587433E6: mov dword ptr [esi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587433E9: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587433EC: pop esi
        __asm _emit 0x5E
        // 0x587433ED: pop ebp
        __asm _emit 0x5D
        // 0x587433EE: pop ebx
        __asm _emit 0x5B
        // 0x587433EF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

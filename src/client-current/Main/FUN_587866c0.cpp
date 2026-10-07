// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 130 bytes in 1 exact ranges.
// Source symbol alias: FUN_587866c0.

// Ghidra body range 0x587866C0..0x58786742; 130 mapped bytes.
extern "C" __declspec(naked) void FUN_587866c0_segment_00() {
    __asm {
        // 0x587866C0: push ebx
        __asm _emit 0x53
        // 0x587866C1: push esi
        __asm _emit 0x56
        // 0x587866C2: push edi
        __asm _emit 0x57
        // 0x587866C3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587866C5: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587866C8: push 0x3c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587866CD: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587866CF: push ebx
        __asm _emit 0x53
        // 0x587866D0: push eax
        __asm _emit 0x50
        // 0x587866D1: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x65
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587866D6: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587866D9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587866DC: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587866DE: je 0x58786702
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587866E0: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587866E3: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587866E6: push edx
        __asm _emit 0x52
        // 0x587866E7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587866E9: call 0x58786680
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587866EE: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587866F1: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587866F4: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587866F7: mov dword ptr [edi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x587866FA: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587866FC: mov edi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587866FF: mov dword ptr [edi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x58786702: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786704: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58786706: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58786708: pop edi
        __asm _emit 0x5F
        // 0x58786709: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5878670C: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5878670F: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58786712: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58786715: mov dword ptr [esi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x58786718: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x5878671B: mov dword ptr [esi + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x5878671E: mov dword ptr [esi + 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x58786721: mov dword ptr [esi + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x2C
        // 0x58786724: mov dword ptr [esi + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x30
        // 0x58786727: mov word ptr [esi + 0x34], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5878672B: mov word ptr [esi + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x36
        // 0x5878672F: mov word ptr [esi + 0x38], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x38
        // 0x58786733: mov word ptr [esi + 0x3a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x3A
        // 0x58786737: mov word ptr [esi + 0x3c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5878673B: mov word ptr [esi + 0x3e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x3E
        // 0x5878673F: pop esi
        __asm _emit 0x5E
        // 0x58786740: pop ebx
        __asm _emit 0x5B
        // 0x58786741: ret
        __asm _emit 0xC3
    }
}

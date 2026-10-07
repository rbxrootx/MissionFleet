// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 143 bytes in 1 exact ranges.
// Source symbol alias: FUN_58748270.

// Ghidra body range 0x58748270..0x587482FF; 143 mapped bytes.
extern "C" __declspec(naked) void FUN_58748270_segment_00() {
    __asm {
        // 0x58748270: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58748273: push ebp
        __asm _emit 0x55
        // 0x58748274: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58748278: push esi
        __asm _emit 0x56
        // 0x58748279: push edi
        __asm _emit 0x57
        // 0x5874827A: push ebp
        __asm _emit 0x55
        // 0x5874827B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874827D: call 0x587ff2b0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x70
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58748282: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58748284: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748288: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5874828A: jne 0x58748291
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5874828C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x49
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58748291: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58748293: push ebx
        __asm _emit 0x53
        // 0x58748294: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58748297: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874829B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874829D: je 0x587482a3
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874829F: cmp eax, eax
        __asm _emit 0x3B
        __asm _emit 0xC0
        // 0x587482A1: je 0x587482a8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587482A3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x49
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587482A8: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587482AA: pop ebx
        __asm _emit 0x5B
        // 0x587482AB: je 0x587482d7
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587482AD: cmp dword ptr [edi + 0x24], 0x10
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587482B1: mov eax, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x587482B4: jb 0x587482bb
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587482B6: mov edi, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x587482B9: jmp 0x587482be
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587482BB: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x587482BE: push eax
        __asm _emit 0x50
        // 0x587482BF: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587482C2: push edi
        __asm _emit 0x57
        // 0x587482C3: push eax
        __asm _emit 0x50
        // 0x587482C4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587482C6: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587482C8: call 0x58748110
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587482CD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587482CF: jl 0x587482d7
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x587482D1: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587482D5: jmp 0x587482e8
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587482D7: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587482DA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587482DC: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587482E0: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587482E4: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587482E8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587482EA: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587482EE: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587482F1: pop edi
        __asm _emit 0x5F
        // 0x587482F2: pop esi
        __asm _emit 0x5E
        // 0x587482F3: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587482F5: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587482F8: pop ebp
        __asm _emit 0x5D
        // 0x587482F9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587482FC: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 125 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ff470.

// Ghidra body range 0x587FF470..0x587FF4ED; 125 mapped bytes.
extern "C" __declspec(naked) void FUN_587ff470_segment_00() {
    __asm {
        // 0x587FF470: push ebp
        __asm _emit 0x55
        // 0x587FF471: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587FF473: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587FF475: push 0x589826b1
        __asm _emit 0x68
        __asm _emit 0xB1
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587FF47A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF480: push eax
        __asm _emit 0x50
        // 0x587FF481: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587FF484: push ebx
        __asm _emit 0x53
        // 0x587FF485: push esi
        __asm _emit 0x56
        // 0x587FF486: push edi
        __asm _emit 0x57
        // 0x587FF487: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587FF48C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x587FF48E: push eax
        __asm _emit 0x50
        // 0x587FF48F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x587FF492: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF498: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x587FF49B: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587FF49D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xD7
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FF4A2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587FF4A4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587FF4A7: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587FF4AA: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF4B1: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x587FF4B4: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x587FF4B8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587FF4BA: je 0x587ff4d7
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587FF4BC: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587FF4BF: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587FF4C2: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x587FF4C5: push eax
        __asm _emit 0x50
        // 0x587FF4C6: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587FF4C9: push ecx
        __asm _emit 0x51
        // 0x587FF4CA: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587FF4CD: push edx
        __asm _emit 0x52
        // 0x587FF4CE: push eax
        __asm _emit 0x50
        // 0x587FF4CF: push ecx
        __asm _emit 0x51
        // 0x587FF4D0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587FF4D2: call 0x587485f0
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587FF4D7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587FF4D9: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x587FF4DC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF4E3: pop ecx
        __asm _emit 0x59
        // 0x587FF4E4: pop edi
        __asm _emit 0x5F
        // 0x587FF4E5: pop esi
        __asm _emit 0x5E
        // 0x587FF4E6: pop ebx
        __asm _emit 0x5B
        // 0x587FF4E7: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587FF4E9: pop ebp
        __asm _emit 0x5D
        // 0x587FF4EA: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

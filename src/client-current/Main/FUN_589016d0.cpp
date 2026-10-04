// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589016D0 .. +0x7A bytes.
// Source symbol alias: FUN_589016d0.
extern "C" __declspec(naked) void FUN_589016d0() {
    __asm {
        // 0x589016D0: push ecx
        __asm _emit 0x51
        // 0x589016D1: push ebx
        __asm _emit 0x53
        // 0x589016D2: push esi
        __asm _emit 0x56
        // 0x589016D3: push edi
        __asm _emit 0x57
        // 0x589016D4: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589016D8: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x589016DA: lea ecx, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x01
        // 0x589016DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x589016E0: mov al, byte ptr [ebx]
        __asm _emit 0x8A
        __asm _emit 0x03
        // 0x589016E2: inc ebx
        __asm _emit 0x43
        // 0x589016E3: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589016E5: jne 0x589016e0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x589016E7: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x589016E9: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589016EB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x589016ED: jle 0x58901743
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x589016EF: lea eax, [ebx + edi - 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x3B
        __asm _emit 0xFF
        // 0x589016F3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589016F7: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589016FC: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x589016FE: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58901702: push ebp
        __asm _emit 0x55
        // 0x58901703: mov al, byte ptr [esi + edi]
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x3E
        // 0x58901706: lea ebp, [esi + edi]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x3E
        // 0x58901709: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5890170B: je 0x58901742
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5890170D: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x5890170F: jne 0x58901742
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58901711: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58901713: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58901715: dec ecx
        __asm _emit 0x49
        // 0x58901716: push ecx
        __asm _emit 0x51
        // 0x58901717: lea edx, [esi + edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x3E
        __asm _emit 0x01
        // 0x5890171B: push edx
        __asm _emit 0x52
        // 0x5890171C: push edi
        __asm _emit 0x57
        // 0x5890171D: call 0x5897d186
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xBA
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901722: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58901726: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x58901728: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890172C: push eax
        __asm _emit 0x50
        // 0x5890172D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890172F: push ebp
        __asm _emit 0x55
        // 0x58901730: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xB5
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901735: inc esi
        __asm _emit 0x46
        // 0x58901736: dec ebp
        __asm _emit 0x4D
        // 0x58901737: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5890173A: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x5890173C: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58901740: jl 0x58901703
        __asm _emit 0x7C
        __asm _emit 0xC1
        // 0x58901742: pop ebp
        __asm _emit 0x5D
        // 0x58901743: pop edi
        __asm _emit 0x5F
        // 0x58901744: pop esi
        __asm _emit 0x5E
        // 0x58901745: pop ebx
        __asm _emit 0x5B
        // 0x58901746: pop ecx
        __asm _emit 0x59
        // 0x58901747: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

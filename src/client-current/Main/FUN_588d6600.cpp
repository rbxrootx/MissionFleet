// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6600 .. +0x6D bytes.
// Source symbol alias: FUN_588d6600.
extern "C" __declspec(naked) void FUN_588d6600() {
    __asm {
        // 0x588D6600: push esi
        __asm _emit 0x56
        // 0x588D6601: push edi
        __asm _emit 0x57
        // 0x588D6602: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D6604: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D6606: cmp dword ptr [esi + 0x141c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D660C: jle 0x588d6668
        __asm _emit 0x7E
        __asm _emit 0x5A
        // 0x588D660E: push ebx
        __asm _emit 0x53
        // 0x588D660F: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6613: push ebp
        __asm _emit 0x55
        // 0x588D6614: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6616: jmp 0x588d6620
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588D6618: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D661F: nop
        __asm _emit 0x90
        // 0x588D6620: mov ecx, dword ptr [esi + eax*4 + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6627: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D6629: je 0x588d665a
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588D662B: mov ebp, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6631: lea edx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC0
        // 0x588D6634: lea edx, [ebp + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0x00
        // 0x588D6638: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x588D663A: sub ebp, dword ptr [esi + eax*4 + 0x1c9c]
        __asm _emit 0x2B
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6641: mov eax, dword ptr [esi + edx*8 + 0x1d1c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6648: sub ebp, dword ptr [esi + edx*8 + 0x1d20]
        __asm _emit 0x2B
        __asm _emit 0xAC
        __asm _emit 0xD6
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D664F: add eax, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6653: push ebp
        __asm _emit 0x55
        // 0x588D6654: push eax
        __asm _emit 0x50
        // 0x588D6655: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D665A: inc edi
        __asm _emit 0x47
        // 0x588D665B: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x588D665E: cmp eax, dword ptr [esi + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6664: jl 0x588d6620
        __asm _emit 0x7C
        __asm _emit 0xBA
        // 0x588D6666: pop ebp
        __asm _emit 0x5D
        // 0x588D6667: pop ebx
        __asm _emit 0x5B
        // 0x588D6668: pop edi
        __asm _emit 0x5F
        // 0x588D6669: pop esi
        __asm _emit 0x5E
        // 0x588D666A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2640 bytes across two ranges.

// Ghidra range: 0x5896F3E0 .. +0x4B3 bytes.
extern "C" __declspec(naked) void FUN_5896f3e0_segment_00() {
    __asm {
        // 0x5896F3E0: push ebp
        __asm _emit 0x55
        // 0x5896F3E1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5896F3E3: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x58
        // 0x5896F3E6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896F3EB: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5896F3ED: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5896F3F0: push ebx
        __asm _emit 0x53
        // 0x5896F3F1: push esi
        __asm _emit 0x56
        // 0x5896F3F2: push edi
        __asm _emit 0x57
        // 0x5896F3F3: mov dword ptr [ebp - 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5896F3F6: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5896F3F9: call 0x587453a0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x5F
        __asm _emit 0xDD
        __asm _emit 0xFF
        // 0x5896F3FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896F400: je 0x5896fe22
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F406: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x5896F409: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5896F40C: cmp ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5896F40F: jge 0x5896fe22
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x0D
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F415: mov edx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xB0
        // 0x5896F418: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5896F41B: cmp eax, dword ptr [edx + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x20
        // 0x5896F41E: jge 0x5896fe22
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F424: cmp dword ptr [ebp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5896F428: jge 0x5896f43a
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5896F42A: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5896F42D: sub ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5896F430: mov dword ptr [ebp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5896F433: mov dword ptr [ebp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F43A: mov edx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xB0
        // 0x5896F43D: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5896F440: cmp eax, dword ptr [edx + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x5896F443: jle 0x5896f44e
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x5896F445: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5896F448: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5896F44B: mov dword ptr [ebp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x5896F44E: cmp dword ptr [ebp + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5896F452: jge 0x5896f464
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5896F454: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5896F457: sub eax, dword ptr [ebp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5896F45A: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5896F45D: mov dword ptr [ebp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F464: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5896F467: mov edx, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x5896F46A: cmp edx, dword ptr [ecx + 0x20]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x5896F46D: jle 0x5896f478
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x5896F46F: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x5896F472: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5896F475: mov dword ptr [ebp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5896F478: cmp dword ptr [ebp + 0x24], 0x100
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F47F: jne 0x5896f4f5
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x5896F481: cmp dword ptr [ebp + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5896F485: jne 0x5896f4f5
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x5896F487: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5896F48A: mov dword ptr [ebp - 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xC0
        // 0x5896F48D: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5896F490: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x5896F493: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5896F496: add ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5896F499: sub ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5896F49C: mov dword ptr [ebp - 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xC8
        // 0x5896F49F: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5896F4A2: add edx, dword ptr [ebp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x5896F4A5: sub edx, dword ptr [ebp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x5896F4A8: mov dword ptr [ebp - 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xCC
        // 0x5896F4AB: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5896F4AE: call 0x587453a0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x5E
        __asm _emit 0xDD
        __asm _emit 0xFF
        // 0x5896F4B3: mov dword ptr [ebp - 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xAC
        // 0x5896F4B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5896F4B8: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x5896F4BB: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5896F4BE: push ecx
        __asm _emit 0x51
        // 0x5896F4BF: lea edx, [ebp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5896F4C2: push edx
        __asm _emit 0x52
        // 0x5896F4C3: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xB0
        // 0x5896F4C6: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5896F4C9: push ecx
        __asm _emit 0x51
        // 0x5896F4CA: lea edx, [ebp - 0x40]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xC0
        // 0x5896F4CD: push edx
        __asm _emit 0x52
        // 0x5896F4CE: mov eax, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xAC
        // 0x5896F4D1: push eax
        __asm _emit 0x50
        // 0x5896F4D2: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xAC
        // 0x5896F4D5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5896F4D7: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5896F4DA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5896F4DC: mov dword ptr [ebp - 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xBC
        // 0x5896F4DF: cmp dword ptr [ebp - 0x44], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xBC
        __asm _emit 0x00
        // 0x5896F4E3: je 0x5896f4f0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5896F4E5: mov ecx, dword ptr [ebp - 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xBC
        // 0x5896F4E8: mov dword ptr [ebp - 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xA8
        // 0x5896F4EB: jmp 0x5896fe22
        __asm _emit 0xE9
        __asm _emit 0x32
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F4F0: jmp 0x5896fe22
        __asm _emit 0xE9
        __asm _emit 0x2D
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F4F5: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5896F4F8: call 0x5890c1c0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xCC
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5896F4FD: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5896F500: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5896F503: call 0x5890c1c0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5896F508: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x5896F50B: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xB0
        // 0x5896F50E: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xAA
        __asm _emit 0xE1
        __asm _emit 0xFF
        // 0x5896F513: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x5896F516: imul edx, dword ptr [ebp - 0x10]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5896F51A: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5896F51D: imul ecx, dword ptr [0x589cdffc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0xDF
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896F524: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5896F526: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5896F528: mov dword ptr [ebp - 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xB8
        // 0x5896F52B: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5896F52E: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xAA
        __asm _emit 0xE1
        __asm _emit 0xFF
        // 0x5896F533: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5896F536: imul edx, dword ptr [ebp - 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0xDC
        // 0x5896F53A: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5896F53D: imul ecx, dword ptr [0x589cdffc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0xDF
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896F544: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5896F546: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5896F548: mov dword ptr [ebp - 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xB4
        // 0x5896F54B: cmp dword ptr [ebp + 0x24], 0x100
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F552: jne 0x5896f898
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F558: mov esi, dword ptr [ebp - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x5896F55B: mov edi, dword ptr [ebp - 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xB4
        // 0x5896F55E: mov ebx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x5896F561: sub ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x5896F564: imul ebx, dword ptr [0x589cdffc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0xFC
        __asm _emit 0xDF
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896F56B: mov dword ptr [ebp - 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xD8
        // 0x5896F56E: sub dword ptr [ebp - 0x10], ebx
        __asm _emit 0x29
        __asm _emit 0x5D
        __asm _emit 0xF0
        // 0x5896F571: sub dword ptr [ebp - 0x24], ebx
        __asm _emit 0x29
        __asm _emit 0x5D
        __asm _emit 0xDC
        // 0x5896F574: mov edx, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x5896F577: sub edx, dword ptr [ebp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x5896F57A: mov dword ptr [ebp - 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE0
        // 0x5896F57D: cmp dword ptr [ebp + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5896F581: jg 0x5896f744
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F587: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F58C: add edx, dword ptr [ebp + 0x28]
        __asm _emit 0x03
        __asm _emit 0x55
        __asm _emit 0x28
        // 0x5896F58F: movd mm5, edx
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xEA
        // 0x5896F592: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896F595: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896F598: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F59F: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5A6: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5896F5A9: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F5AB: jae 0x5896f5c1
        __asm _emit 0x73
        __asm _emit 0x14
        // 0x5896F5AD: lodsb al, byte ptr [esi]
        __asm _emit 0xAC
        // 0x5896F5AE: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5B4: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5896F5B7: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F5BA: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5C0: stosb byte ptr es:[edi], al
        __asm _emit 0xAA
        // 0x5896F5C1: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F5C3: jae 0x5896f5f1
        __asm _emit 0x73
        __asm _emit 0x2C
        // 0x5896F5C5: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xAD
        // 0x5896F5C7: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F5C9: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5CF: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F5D2: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5896F5D5: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5DB: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5E1: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x5896F5E4: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F5E7: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5ED: or eax, ebx
        __asm _emit 0x0B
        __asm _emit 0xC3
        // 0x5896F5EF: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xAB
        // 0x5896F5F1: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F5F3: jae 0x5896f61f
        __asm _emit 0x73
        __asm _emit 0x2A
        // 0x5896F5F5: lodsd eax, dword ptr [esi]
        __asm _emit 0xAD
        // 0x5896F5F6: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F5F8: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F5FE: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F601: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5896F604: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F60A: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F610: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x5896F613: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F616: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F61C: or eax, ebx
        __asm _emit 0x0B
        __asm _emit 0xC3
        // 0x5896F61E: stosd dword ptr es:[edi], eax
        __asm _emit 0xAB
        // 0x5896F61F: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F621: jae 0x5896f649
        __asm _emit 0x73
        __asm _emit 0x26
        // 0x5896F623: movq mm0, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x06
        // 0x5896F626: movq mm1, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC1
        // 0x5896F629: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896F62D: pmullw mm0, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xC5
        // 0x5896F630: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896F633: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896F636: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896F639: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896F63D: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896F640: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896F643: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5896F646: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x5896F649: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F64B: jae 0x5896f697
        __asm _emit 0x73
        __asm _emit 0x4A
        // 0x5896F64D: movq mm0, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x06
        // 0x5896F650: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5896F654: movq mm1, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC1
        // 0x5896F657: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896F65B: pmullw mm0, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xC5
        // 0x5896F65E: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896F661: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896F664: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896F667: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896F66B: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896F66E: movq mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD1
        // 0x5896F671: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896F675: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896F678: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896F67B: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896F67E: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896F681: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896F685: por mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x5896F688: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896F68B: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5896F68F: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x5896F692: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x5896F695: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5896F697: je 0x5896f730
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F69D: movq mm0, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x06
        // 0x5896F6A0: movq mm2, qword ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5896F6A4: movq mm3, qword ptr [esi + 0x10]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5896F6A8: movq mm4, qword ptr [esi + 0x18]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x66
        __asm _emit 0x18
        // 0x5896F6AC: movq mm1, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC1
        // 0x5896F6AF: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896F6B3: pmullw mm0, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xC5
        // 0x5896F6B6: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896F6B9: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896F6BC: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896F6BF: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896F6C3: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896F6C6: movq mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD1
        // 0x5896F6C9: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896F6CD: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896F6D0: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896F6D3: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896F6D6: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896F6D9: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896F6DD: por mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x5896F6E0: movq mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xDA
        // 0x5896F6E3: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896F6E7: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896F6EA: pand mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD6
        // 0x5896F6ED: pand mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDF
        // 0x5896F6F0: pmullw mm3, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xDD
        // 0x5896F6F3: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896F6F7: por mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xD3
        // 0x5896F6FA: movq mm3, mm4
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xE3
        // 0x5896F6FD: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896F701: pmullw mm3, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xDD
        // 0x5896F704: pand mm3, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDE
        // 0x5896F707: pand mm4, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xE7
        // 0x5896F70A: pmullw mm4, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xE5
        // 0x5896F70D: psrlw mm4, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD4
        __asm _emit 0x08
        // 0x5896F711: por mm3, mm4
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xDC
        // 0x5896F714: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896F717: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5896F71B: movq qword ptr [edi + 0x10], mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5896F71F: movq qword ptr [edi + 0x18], mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x5F
        __asm _emit 0x18
        // 0x5896F723: add esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x20
        // 0x5896F726: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x5896F729: dec ecx
        __asm _emit 0x49
        // 0x5896F72A: jne 0x5896f69d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896F730: add esi, dword ptr [ebp - 0x10]
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5896F733: add edi, dword ptr [ebp - 0x24]
        __asm _emit 0x03
        __asm _emit 0x7D
        __asm _emit 0xDC
        // 0x5896F736: dec dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5896F739: jne 0x5896f5a6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896F73F: jmp 0x5896fe20
        __asm _emit 0xE9
        __asm _emit 0xDC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F744: movsx edx, byte ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x55
        __asm _emit 0x28
        // 0x5896F748: movd mm5, edx
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xEA
        // 0x5896F74B: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896F74E: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896F751: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F758: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F75F: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5896F762: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F764: jae 0x5896f780
        __asm _emit 0x73
        __asm _emit 0x1A
        // 0x5896F766: lodsb al, byte ptr [esi]
        __asm _emit 0xAC
        // 0x5896F767: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F769: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5896F76B: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F771: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5896F774: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F777: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F77D: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896F77F: stosb byte ptr es:[edi], al
        __asm _emit 0xAA
        // 0x5896F780: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F782: jae 0x5896f7b6
        __asm _emit 0x73
        __asm _emit 0x32
        // 0x5896F784: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xAD
        // 0x5896F786: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5896F788: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F78A: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F790: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F793: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5896F796: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F79C: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F7A2: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x5896F7A5: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F7A8: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F7AE: or eax, ebx
        __asm _emit 0x0B
        __asm _emit 0xC3
        // 0x5896F7B0: add ax, word ptr [esi - 2]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xFE
        // 0x5896F7B4: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xAB
        // 0x5896F7B6: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F7B8: jae 0x5896f7e9
        __asm _emit 0x73
        __asm _emit 0x2F
        // 0x5896F7BA: lodsd eax, dword ptr [esi]
        __asm _emit 0xAD
        // 0x5896F7BB: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5896F7BD: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F7BF: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F7C5: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F7C8: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5896F7CB: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F7D1: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F7D7: imul ebx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDA
        // 0x5896F7DA: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F7DD: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F7E3: or eax, ebx
        __asm _emit 0x0B
        __asm _emit 0xC3
        // 0x5896F7E5: add eax, dword ptr [esi - 4]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x5896F7E8: stosd dword ptr es:[edi], eax
        __asm _emit 0xAB
        // 0x5896F7E9: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F7EB: jae 0x5896f81e
        __asm _emit 0x73
        __asm _emit 0x31
        // 0x5896F7ED: movq mm0, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x06
        // 0x5896F7F0: movq mm1, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC1
        // 0x5896F7F3: pandn mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xCE
        // 0x5896F7F6: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896F7FA: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896F7FD: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896F800: movq mm2, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC2
        // 0x5896F803: pandn mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xD7
        // 0x5896F806: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896F809: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896F80D: por mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x5896F810: paddb mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xC1
        // 0x5896F813: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896F816: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5896F819: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x5896F81C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5896F81E: je 0x5896f87d
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x5896F820: movq mm0, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x06
        // 0x5896F823: movq mm1, qword ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5896F827: movq mm2, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC2
        // 0x5896F82A: pandn mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xD6
        // 0x5896F82D: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896F831: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896F834: pand mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD6
        // 0x5896F837: movq mm3, mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC3
        // 0x5896F83A: pandn mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xDF
        // 0x5896F83D: pmullw mm3, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xDD
        // 0x5896F840: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896F844: por mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xD3
        // 0x5896F847: paddb mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xC2
        // 0x5896F84A: movq mm2, mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xCA
        // 0x5896F84D: pandn mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xD6
        // 0x5896F850: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896F854: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896F857: pand mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD6
        // 0x5896F85A: movq mm3, mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xCB
        // 0x5896F85D: pandn mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xDF
        // 0x5896F860: pmullw mm3, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xDD
        // 0x5896F863: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896F867: por mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xD3
        // 0x5896F86A: paddb mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xCA
        // 0x5896F86D: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896F870: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5896F874: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x5896F877: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x5896F87A: dec ecx
        __asm _emit 0x49
        // 0x5896F87B: jne 0x5896f820
        __asm _emit 0x75
        __asm _emit 0xA3
        // 0x5896F87D: add esi, dword ptr [ebp - 0x10]
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5896F880: add edi, dword ptr [ebp - 0x24]
        __asm _emit 0x03
        __asm _emit 0x7D
        __asm _emit 0xDC
        // 0x5896F883: dec dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5896F886: jne 0x5896f75f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896F88C: emms
        __asm _emit 0x0F
        __asm _emit 0x77
        // 0x5896F88E: jmp 0x5896fe20
        __asm _emit 0xE9
        __asm _emit 0x8D
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra range: 0x5896F898 .. +0x59D bytes.
extern "C" __declspec(naked) void FUN_5896f3e0_segment_01() {
    __asm {
        // 0x5896F898: mov esi, dword ptr [ebp - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x5896F89B: mov edi, dword ptr [ebp - 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xB4
        // 0x5896F89E: mov ebx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x5896F8A1: sub ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x5896F8A4: imul ebx, dword ptr [0x589cdffc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x1D
        __asm _emit 0xFC
        __asm _emit 0xDF
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896F8AB: mov dword ptr [ebp - 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xD8
        // 0x5896F8AE: sub dword ptr [ebp - 0x10], ebx
        __asm _emit 0x29
        __asm _emit 0x5D
        __asm _emit 0xF0
        // 0x5896F8B1: sub dword ptr [ebp - 0x24], ebx
        __asm _emit 0x29
        __asm _emit 0x5D
        __asm _emit 0xDC
        // 0x5896F8B4: mov edx, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x5896F8B7: sub edx, dword ptr [ebp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x55
        __asm _emit 0x18
        // 0x5896F8BA: mov dword ptr [ebp - 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE0
        // 0x5896F8BD: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5896F8C0: mov ebx, 0x100
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F8C5: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x5896F8C7: mov dword ptr [ebp - 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE4
        // 0x5896F8CA: movd mm6, ebx
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xF3
        // 0x5896F8CD: punpcklwd mm6, mm6
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xF6
        // 0x5896F8D0: punpcklwd mm6, mm6
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xF6
        // 0x5896F8D3: movq qword ptr [ebp - 0x30], mm6
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5896F8D7: mov eax, dword ptr [ebp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5896F8DA: cmp eax, 0
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5896F8DD: jg 0x5896fafe
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x1B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F8E3: add eax, 0x100
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896F8E8: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5896F8EB: shr ecx, 8
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5896F8EE: mov dword ptr [ebp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5896F8F1: movd mm5, ecx
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xE9
        // 0x5896F8F4: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896F8F7: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896F8FA: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F901: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F908: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5896F90B: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F90D: jae 0x5896f93b
        __asm _emit 0x73
        __asm _emit 0x2C
        // 0x5896F90F: lodsb al, byte ptr [esi]
        __asm _emit 0xAC
        // 0x5896F910: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F916: imul eax, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5896F91A: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F91D: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F923: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x5896F925: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F92B: imul ebx, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0xE4
        // 0x5896F92F: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F932: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F938: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896F93A: stosb byte ptr es:[edi], al
        __asm _emit 0xAA
        // 0x5896F93B: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F93D: jae 0x5896f99b
        __asm _emit 0x73
        __asm _emit 0x5C
        // 0x5896F93F: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xAD
        // 0x5896F941: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F943: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F949: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F94C: imul eax, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5896F950: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F956: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F95C: imul ebx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0x24
        // 0x5896F960: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F963: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F969: or ebx, eax
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x5896F96B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5896F96D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896F96F: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F975: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F978: imul eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5896F97C: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F982: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F988: imul edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5896F98C: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5896F98F: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F995: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5896F997: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896F999: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xAB
        // 0x5896F99B: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F99D: jae 0x5896f9f9
        __asm _emit 0x73
        __asm _emit 0x5A
        // 0x5896F99F: lodsd eax, dword ptr [esi]
        __asm _emit 0xAD
        // 0x5896F9A0: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896F9A2: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9A8: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F9AB: imul eax, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5896F9AF: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9B5: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9BB: imul ebx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0x24
        // 0x5896F9BF: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896F9C2: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9C8: or ebx, eax
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x5896F9CA: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5896F9CC: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896F9CE: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9D4: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896F9D7: imul eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5896F9DB: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9E1: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9E7: imul edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5896F9EB: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5896F9EE: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896F9F4: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5896F9F6: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896F9F8: stosd dword ptr es:[edi], eax
        __asm _emit 0xAB
        // 0x5896F9F9: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896F9FB: jae 0x5896fa4a
        __asm _emit 0x73
        __asm _emit 0x4D
        // 0x5896F9FD: movq mm1, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x0E
        // 0x5896FA00: movq mm2, qword ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x17
        // 0x5896FA03: movq mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC8
        // 0x5896FA06: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896FA0A: pmullw mm0, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xC5
        // 0x5896FA0D: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FA10: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FA13: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896FA16: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FA1A: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896FA1D: movq mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD1
        // 0x5896FA20: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FA24: pmullw mm1, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5896FA28: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FA2B: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FA2E: pmullw mm2, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x5896FA32: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896FA36: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FA39: paddb mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xC1
        // 0x5896FA3C: paddb mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xC2
        // 0x5896FA3F: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896FA42: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5896FA45: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x5896FA48: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5896FA4A: je 0x5896faea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896FA50: movq mm1, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x0E
        // 0x5896FA53: movq mm2, qword ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x17
        // 0x5896FA56: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5896FA5A: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x67
        __asm _emit 0x08
        // 0x5896FA5E: movq mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xC8
        // 0x5896FA61: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896FA65: pmullw mm0, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xC5
        // 0x5896FA68: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FA6B: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FA6E: pmullw mm1, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xCD
        // 0x5896FA71: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FA75: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896FA78: movq mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD1
        // 0x5896FA7B: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FA7F: pmullw mm1, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5896FA83: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FA86: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FA89: pmullw mm2, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x5896FA8D: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896FA91: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FA94: paddb mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xC1
        // 0x5896FA97: paddb mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xC2
        // 0x5896FA9A: movq mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xDA
        // 0x5896FA9D: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896FAA1: pmullw mm2, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xD5
        // 0x5896FAA4: pand mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD6
        // 0x5896FAA7: pand mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDF
        // 0x5896FAAA: pmullw mm3, mm5
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0xDD
        // 0x5896FAAD: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896FAB1: por mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xD3
        // 0x5896FAB4: movq mm3, mm4
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xE3
        // 0x5896FAB7: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896FABB: pmullw mm3, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x5D
        __asm _emit 0xD0
        // 0x5896FABF: pand mm3, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDE
        // 0x5896FAC2: pand mm4, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xE7
        // 0x5896FAC5: pmullw mm4, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x65
        __asm _emit 0xD0
        // 0x5896FAC9: psrlw mm4, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD4
        __asm _emit 0x08
        // 0x5896FACD: pand mm4, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xE7
        // 0x5896FAD0: paddb mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xD3
        // 0x5896FAD3: paddb mm2, mm4
        __asm _emit 0x0F
        __asm _emit 0xFC
        __asm _emit 0xD4
        // 0x5896FAD6: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896FAD9: movq qword ptr [edi + 8], mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5896FADD: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x5896FAE0: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x5896FAE3: dec ecx
        __asm _emit 0x49
        // 0x5896FAE4: jne 0x5896fa50
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896FAEA: add esi, dword ptr [ebp - 0x10]
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5896FAED: add edi, dword ptr [ebp - 0x24]
        __asm _emit 0x03
        __asm _emit 0x7D
        __asm _emit 0xDC
        // 0x5896FAF0: dec dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5896FAF3: jne 0x5896f908
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896FAF9: jmp 0x5896fe20
        __asm _emit 0xE9
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896FAFE: movd mm5, ecx
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xE9
        // 0x5896FB01: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896FB04: punpcklwd mm5, mm5
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xED
        // 0x5896FB07: movd mm6, eax
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xF0
        // 0x5896FB0A: punpcklwd mm6, mm6
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xF6
        // 0x5896FB0D: punpcklwd mm6, mm6
        __asm _emit 0x0F
        __asm _emit 0x61
        __asm _emit 0xF6
        // 0x5896FB10: movq qword ptr [ebp - 0x18], mm6
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5896FB14: movq mm6, qword ptr [0x58a284e4]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x35
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB1B: movq mm7, qword ptr [0x58a284dc]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB22: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD8
        // 0x5896FB25: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896FB27: jae 0x5896fb6e
        __asm _emit 0x73
        __asm _emit 0x45
        // 0x5896FB29: lodsb al, byte ptr [esi]
        __asm _emit 0xAC
        // 0x5896FB2A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896FB2C: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5896FB2E: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB34: imul eax, dword ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5896FB38: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FB3B: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB41: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5896FB43: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB49: imul eax, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5896FB4D: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FB50: and eax, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB56: mov ebx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x1F
        // 0x5896FB58: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB5E: imul ebx, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0xE4
        // 0x5896FB62: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896FB65: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB6B: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896FB6D: stosb byte ptr es:[edi], al
        __asm _emit 0xAA
        // 0x5896FB6E: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896FB70: jae 0x5896fc00
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896FB76: lodsw ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xAD
        // 0x5896FB78: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896FB7A: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5896FB7C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896FB7E: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB84: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FB87: imul eax, dword ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5896FB8B: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB91: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5896FB93: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FB99: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FB9C: imul eax, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5896FBA0: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBA6: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBAC: imul ebx, dword ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0x28
        // 0x5896FBB0: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896FBB3: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBB9: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x5896FBBB: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBC1: imul ebx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0x24
        // 0x5896FBC5: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896FBC8: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBCE: or ebx, eax
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x5896FBD0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5896FBD2: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896FBD4: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBDA: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FBDD: imul eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5896FBE1: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBE7: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBED: imul edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5896FBF1: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5896FBF4: and edx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FBFA: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5896FBFC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896FBFE: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xAB
        // 0x5896FC00: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896FC02: jae 0x5896fc90
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896FC08: lodsd eax, dword ptr [esi]
        __asm _emit 0xAD
        // 0x5896FC09: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896FC0B: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5896FC0D: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5896FC0F: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC15: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FC18: imul eax, dword ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x5896FC1C: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC22: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5896FC24: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC2A: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FC2D: imul eax, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5896FC31: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC37: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC3D: imul ebx, dword ptr [ebp + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0x28
        // 0x5896FC41: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896FC44: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC4A: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x5896FC4C: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC52: imul ebx, dword ptr [ebp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0x24
        // 0x5896FC56: shr ebx, 8
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896FC59: and ebx, dword ptr [0x58a284dc]
        __asm _emit 0x23
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC5F: or ebx, eax
        __asm _emit 0x0B
        __asm _emit 0xD8
        // 0x5896FC61: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5896FC63: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5896FC65: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC6B: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5896FC6E: imul eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x5896FC72: and eax, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC78: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC7E: imul edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x5896FC82: shr edx, 8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5896FC85: and edx, dword ptr [0x58a284e4]
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0xE4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896FC8B: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5896FC8D: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5896FC8F: stosd dword ptr es:[edi], eax
        __asm _emit 0xAB
        // 0x5896FC90: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5896FC92: jae 0x5896fd11
        __asm _emit 0x73
        __asm _emit 0x7D
        // 0x5896FC94: movq mm2, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x16
        // 0x5896FC97: movq mm3, qword ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x1F
        // 0x5896FC9A: movq mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD0
        // 0x5896FC9D: pandn mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xC6
        // 0x5896FCA0: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896FCA4: pmullw mm0, qword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5896FCA8: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FCAB: paddw mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xC2
        // 0x5896FCAE: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FCB1: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896FCB5: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5896FCB9: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FCBC: movq mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD1
        // 0x5896FCBF: pandn mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xCF
        // 0x5896FCC2: pmullw mm1, qword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5896FCC6: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FCCA: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FCCD: paddw mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xCA
        // 0x5896FCD0: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FCD3: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5896FCD7: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FCDB: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FCDE: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896FCE1: movq mm1, mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD9
        // 0x5896FCE4: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FCE7: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FCEB: pmullw mm1, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5896FCEF: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FCF2: paddw mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xC1
        // 0x5896FCF5: pand mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDF
        // 0x5896FCF8: pmullw mm3, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x5D
        __asm _emit 0xD0
        // 0x5896FCFC: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896FD00: pand mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDF
        // 0x5896FD03: paddw mm0, mm3
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xC3
        // 0x5896FD06: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896FD09: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5896FD0C: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x5896FD0F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5896FD11: je 0x5896fe11
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896FD17: movq mm2, qword ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x16
        // 0x5896FD1A: movq mm3, qword ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x1F
        // 0x5896FD1D: movq mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD0
        // 0x5896FD20: pandn mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xC6
        // 0x5896FD23: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896FD27: pmullw mm0, qword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5896FD2B: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FD2E: paddw mm0, mm2
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xC2
        // 0x5896FD31: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FD34: psrlw mm0, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD0
        __asm _emit 0x08
        // 0x5896FD38: pmullw mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5896FD3C: pand mm0, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xC6
        // 0x5896FD3F: movq mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD1
        // 0x5896FD42: pandn mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xCF
        // 0x5896FD45: pmullw mm1, qword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5896FD49: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FD4D: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FD50: paddw mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xCA
        // 0x5896FD53: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FD56: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5896FD5A: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FD5E: pand mm1, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCF
        // 0x5896FD61: por mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5896FD64: movq mm1, mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD9
        // 0x5896FD67: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FD6A: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FD6E: pmullw mm1, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x5896FD72: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FD75: paddw mm0, mm1
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xC1
        // 0x5896FD78: pand mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDF
        // 0x5896FD7B: pmullw mm3, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x5D
        __asm _emit 0xD0
        // 0x5896FD7F: psrlw mm3, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD3
        __asm _emit 0x08
        // 0x5896FD83: pand mm3, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xDF
        // 0x5896FD86: paddw mm0, mm3
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xC3
        // 0x5896FD89: movq mm3, qword ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5896FD8D: movq mm4, qword ptr [edi + 8]
        __asm _emit 0x0F
        __asm _emit 0x6F
        __asm _emit 0x67
        __asm _emit 0x08
        // 0x5896FD91: movq mm1, mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xD9
        // 0x5896FD94: pandn mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xCE
        // 0x5896FD97: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FD9B: pmullw mm1, qword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x5896FD9F: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FDA2: paddw mm1, mm3
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xCB
        // 0x5896FDA5: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FDA8: psrlw mm1, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD1
        __asm _emit 0x08
        // 0x5896FDAC: pmullw mm1, qword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5896FDB0: pand mm1, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xCE
        // 0x5896FDB3: movq mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xDA
        // 0x5896FDB6: pandn mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDF
        __asm _emit 0xD7
        // 0x5896FDB9: pmullw mm2, qword ptr [ebp - 0x18]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5896FDBD: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896FDC1: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FDC4: paddw mm2, mm3
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xD3
        // 0x5896FDC7: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FDCA: pmullw mm2, qword ptr [ebp - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x55
        __asm _emit 0xF4
        // 0x5896FDCE: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896FDD2: pand mm2, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD7
        // 0x5896FDD5: por mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xEB
        __asm _emit 0xCA
        // 0x5896FDD8: movq mm2, mm4
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0xE2
        // 0x5896FDDB: pand mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD6
        // 0x5896FDDE: psrlw mm2, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD2
        __asm _emit 0x08
        // 0x5896FDE2: pmullw mm2, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x55
        __asm _emit 0xD0
        // 0x5896FDE6: pand mm2, mm6
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xD6
        // 0x5896FDE9: paddw mm1, mm2
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xCA
        // 0x5896FDEC: pand mm4, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xE7
        // 0x5896FDEF: pmullw mm4, qword ptr [ebp - 0x30]
        __asm _emit 0x0F
        __asm _emit 0xD5
        __asm _emit 0x65
        __asm _emit 0xD0
        // 0x5896FDF3: psrlw mm4, 8
        __asm _emit 0x0F
        __asm _emit 0x71
        __asm _emit 0xD4
        __asm _emit 0x08
        // 0x5896FDF7: pand mm4, mm7
        __asm _emit 0x0F
        __asm _emit 0xDB
        __asm _emit 0xE7
        // 0x5896FDFA: paddw mm1, mm4
        __asm _emit 0x0F
        __asm _emit 0xFD
        __asm _emit 0xCC
        // 0x5896FDFD: movq qword ptr [edi], mm0
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x5896FE00: movq qword ptr [edi + 8], mm1
        __asm _emit 0x0F
        __asm _emit 0x7F
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x5896FE04: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x5896FE07: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x5896FE0A: dec ecx
        __asm _emit 0x49
        // 0x5896FE0B: jne 0x5896fd17
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896FE11: add esi, dword ptr [ebp - 0x10]
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5896FE14: add edi, dword ptr [ebp - 0x24]
        __asm _emit 0x03
        __asm _emit 0x7D
        __asm _emit 0xDC
        // 0x5896FE17: dec dword ptr [ebp - 0x20]
        __asm _emit 0xFF
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x5896FE1A: jne 0x5896fb22
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896FE20: emms
        __asm _emit 0x0F
        __asm _emit 0x77
        // 0x5896FE22: pop edi
        __asm _emit 0x5F
        // 0x5896FE23: pop esi
        __asm _emit 0x5E
        // 0x5896FE24: pop ebx
        __asm _emit 0x5B
        // 0x5896FE25: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5896FE28: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5896FE2A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896FE2F: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5896FE31: pop ebp
        __asm _emit 0x5D
        // 0x5896FE32: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

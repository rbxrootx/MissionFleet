// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 188 bytes in 2 exact ranges.
// Source symbol alias: FUN_587445f0.

// Ghidra body range 0x587445F0..0x5874460D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587445f0_segment_00() {
    __asm {
        // 0x587445F0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587445F4: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x587445F7: push ebx
        __asm _emit 0x53
        // 0x587445F8: push edi
        __asm _emit 0x57
        // 0x587445F9: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587445FB: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587445FE: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58744601: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58744605: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58744607: jne 0x58744624
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58744609: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5874460B: jmp 0x58744610
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58744610..0x587446AF; 159 mapped bytes.
extern "C" __declspec(naked) void FUN_587445f0_segment_01() {
    __asm {
        // 0x58744610: cmp dword ptr [eax + 0x10], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x58744613: jae 0x5874461a
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58744615: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58744618: jmp 0x5874461e
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5874461A: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5874461C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5874461E: cmp byte ptr [eax + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58744622: je 0x58744610
        __asm _emit 0x74
        __asm _emit 0xEC
        // 0x58744624: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58744627: push esi
        __asm _emit 0x56
        // 0x58744628: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x5874462A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874462E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744630: je 0x58744636
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58744632: cmp esi, esi
        __asm _emit 0x3B
        __asm _emit 0xF6
        // 0x58744634: je 0x5874463f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744636: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x86
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874463B: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874463F: cmp ebx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58744643: je 0x5874464c
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58744645: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58744647: cmp ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x5874464A: jae 0x5874468c
        __asm _emit 0x73
        __asm _emit 0x40
        // 0x5874464C: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x5874464E: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x58744650: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744652: fstp qword ptr [esp + 0xc]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58744656: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874465A: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874465E: push eax
        __asm _emit 0x50
        // 0x5874465F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58744661: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744665: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58744669: push ebx
        __asm _emit 0x53
        // 0x5874466A: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874466E: push esi
        __asm _emit 0x56
        // 0x5874466F: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58744673: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58744677: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874467B: push ecx
        __asm _emit 0x51
        // 0x5874467C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874467E: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58744682: call 0x58744420
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744687: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x58744689: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5874468C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5874468E: jne 0x587446ab
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58744690: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744695: cmp ebx, dword ptr [esi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58744698: pop esi
        __asm _emit 0x5E
        // 0x58744699: jne 0x587446a0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5874469B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587446A0: pop edi
        __asm _emit 0x5F
        // 0x587446A1: lea eax, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587446A4: pop ebx
        __asm _emit 0x5B
        // 0x587446A5: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x587446A8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587446AB: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587446AD: jmp 0x58744695
        __asm _emit 0xEB
        __asm _emit 0xE6
    }
}

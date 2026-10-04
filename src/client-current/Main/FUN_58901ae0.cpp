// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x58901AE0 .. +0x24D bytes.
// Source symbol alias: FUN_58901ae0.
extern "C" __declspec(naked) void FUN_58901ae0() {
    __asm {
        // 0x58901AE0: push ebp
        __asm _emit 0x55
        // 0x58901AE1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58901AE3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58901AE5: push 0x5898a710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xA7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58901AEA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901AF0: push eax
        __asm _emit 0x50
        // 0x58901AF1: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58901AF4: push ebx
        __asm _emit 0x53
        // 0x58901AF5: push esi
        __asm _emit 0x56
        // 0x58901AF6: push edi
        __asm _emit 0x57
        // 0x58901AF7: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58901AFC: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58901AFE: push eax
        __asm _emit 0x50
        // 0x58901AFF: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58901B02: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901B08: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x58901B0B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58901B0D: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58901B10: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58901B12: jne 0x58901b18
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58901B14: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58901B16: jmp 0x58901b22
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58901B18: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58901B1B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58901B1D: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901B20: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58901B22: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58901B25: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58901B27: je 0x58901d19
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901B2D: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58901B30: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58901B32: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58901B34: sar eax, 3
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901B37: mov edx, 0x1fffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x1F
        // 0x58901B3C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58901B3E: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58901B40: jae 0x58901b47
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58901B42: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901B47: lea edx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x58901B4A: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58901B4C: jae 0x58901c4c
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901B52: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58901B54: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x58901B56: mov ebx, 0x1fffffff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x1F
        // 0x58901B5B: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x58901B5D: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x58901B5F: jae 0x58901b6d
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58901B61: mov dword ptr [ebp - 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901B68: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58901B6B: jmp 0x58901b72
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58901B6D: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58901B6F: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58901B72: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58901B74: jae 0x58901b7b
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58901B76: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x58901B79: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58901B7B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58901B7D: push ecx
        __asm _emit 0x51
        // 0x58901B7E: call 0x58901790
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901B83: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x58901B86: sub ebx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58901B89: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58901B8C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58901B8F: push ecx
        __asm _emit 0x51
        // 0x58901B90: sar ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x58901B93: push edi
        __asm _emit 0x57
        // 0x58901B94: lea edx, [eax + ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xD8
        // 0x58901B97: push edx
        __asm _emit 0x52
        // 0x58901B98: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58901B9A: mov dword ptr [ebp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58901B9D: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901BA4: call 0x5873efe0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xD4
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58901BA9: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58901BAC: mov byte ptr [ebp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58901BB0: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58901BB3: push edx
        __asm _emit 0x52
        // 0x58901BB4: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58901BB7: push edx
        __asm _emit 0x52
        // 0x58901BB8: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58901BBB: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58901BBE: push ecx
        __asm _emit 0x51
        // 0x58901BBF: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58901BC2: push ecx
        __asm _emit 0x51
        // 0x58901BC3: push edx
        __asm _emit 0x52
        // 0x58901BC4: push eax
        __asm _emit 0x50
        // 0x58901BC5: call 0x58901a10
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901BCA: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58901BCD: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58901BD0: mov byte ptr [ebp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58901BD4: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58901BD7: push edx
        __asm _emit 0x52
        // 0x58901BD8: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58901BDB: push edx
        __asm _emit 0x52
        // 0x58901BDC: lea ecx, [ebx + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x3B
        // 0x58901BDF: mov ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x58901BE2: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58901BE5: push edx
        __asm _emit 0x52
        // 0x58901BE6: lea ecx, [ebx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xCB
        // 0x58901BE9: push ecx
        __asm _emit 0x51
        // 0x58901BEA: push eax
        __asm _emit 0x50
        // 0x58901BEB: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58901BEE: push eax
        __asm _emit 0x50
        // 0x58901BEF: call 0x58901a10
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901BF4: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58901BF7: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58901BFA: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58901BFC: sar ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58901BFF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58901C02: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58901C04: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58901C06: je 0x58901c11
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58901C08: push eax
        __asm _emit 0x50
        // 0x58901C09: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901C0E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58901C11: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x58901C14: lea eax, [ebx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD3
        // 0x58901C17: lea ecx, [ebx + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFB
        // 0x58901C1A: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58901C1D: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58901C20: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58901C23: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58901C26: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901C2D: pop ecx
        __asm _emit 0x59
        // 0x58901C2E: pop edi
        __asm _emit 0x5F
        // 0x58901C2F: pop esi
        __asm _emit 0x5E
        // 0x58901C30: pop ebx
        __asm _emit 0x5B
        // 0x58901C31: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58901C33: pop ebp
        __asm _emit 0x5D
        // 0x58901C34: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58901C37: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58901C3A: push edx
        __asm _emit 0x52
        // 0x58901C3B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901C40: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58901C43: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58901C45: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58901C47: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xB0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901C4C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58901C4F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58901C51: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58901C53: sar ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58901C56: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58901C58: jae 0x58901ccf
        __asm _emit 0x73
        __asm _emit 0x75
        // 0x58901C5A: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58901C5D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58901C5F: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58901C62: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58901C65: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901C6C: mov dword ptr [ebp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58901C6F: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58901C71: push ecx
        __asm _emit 0x51
        // 0x58901C72: push ebx
        __asm _emit 0x53
        // 0x58901C73: push eax
        __asm _emit 0x50
        // 0x58901C74: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58901C76: mov dword ptr [ebp - 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x58901C79: call 0x58901ab0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901C7E: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58901C81: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58901C83: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58901C86: lea edx, [ebp - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x58901C89: sar ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58901C8C: push edx
        __asm _emit 0x52
        // 0x58901C8D: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58901C8F: push edi
        __asm _emit 0x57
        // 0x58901C90: push eax
        __asm _emit 0x50
        // 0x58901C91: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58901C93: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901C9A: call 0x5873efe0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xD3
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58901C9F: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58901CA2: add dword ptr [esi + 0x10], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58901CA5: mov esi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x58901CA8: lea edx, [ebp - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x58901CAB: push edx
        __asm _emit 0x52
        // 0x58901CAC: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x58901CAE: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58901CB1: push esi
        __asm _emit 0x56
        // 0x58901CB2: push eax
        __asm _emit 0x50
        // 0x58901CB3: call 0x5873c470
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xA7
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58901CB8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58901CBB: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58901CBE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901CC5: pop ecx
        __asm _emit 0x59
        // 0x58901CC6: pop edi
        __asm _emit 0x5F
        // 0x58901CC7: pop esi
        __asm _emit 0x5E
        // 0x58901CC8: pop ebx
        __asm _emit 0x5B
        // 0x58901CC9: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58901CCB: pop ebp
        __asm _emit 0x5D
        // 0x58901CCC: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58901CCF: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58901CD2: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58901CD4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58901CD7: lea eax, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901CDE: push ebx
        __asm _emit 0x53
        // 0x58901CDF: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x58901CE1: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x58901CE3: push ebx
        __asm _emit 0x53
        // 0x58901CE4: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x58901CE7: push edi
        __asm _emit 0x57
        // 0x58901CE8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58901CEA: mov dword ptr [ebp - 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x58901CED: mov dword ptr [ebp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58901CF0: call 0x58901ab0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901CF5: push ebx
        __asm _emit 0x53
        // 0x58901CF6: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58901CF9: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58901CFC: push edi
        __asm _emit 0x57
        // 0x58901CFD: push eax
        __asm _emit 0x50
        // 0x58901CFE: call 0x58901a40
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901D03: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58901D06: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58901D09: lea ecx, [ebp - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x58901D0C: push ecx
        __asm _emit 0x51
        // 0x58901D0D: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58901D0F: push edx
        __asm _emit 0x52
        // 0x58901D10: push eax
        __asm _emit 0x50
        // 0x58901D11: call 0x5873c470
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xA7
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x58901D16: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58901D19: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58901D1C: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901D23: pop ecx
        __asm _emit 0x59
        // 0x58901D24: pop edi
        __asm _emit 0x5F
        // 0x58901D25: pop esi
        __asm _emit 0x5E
        // 0x58901D26: pop ebx
        __asm _emit 0x5B
        // 0x58901D27: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58901D29: pop ebp
        __asm _emit 0x5D
        // 0x58901D2A: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

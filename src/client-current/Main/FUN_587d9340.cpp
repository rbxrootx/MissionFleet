// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 253 bytes in 2 exact ranges.
// Source symbol alias: FUN_587d9340.

// Ghidra body range 0x587D9340..0x587D938D; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_587d9340_segment_00() {
    __asm {
        // 0x587D9340: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587D9343: push ebx
        __asm _emit 0x53
        // 0x587D9344: mov ebx, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D934A: mov eax, dword ptr [ebx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9350: push ebp
        __asm _emit 0x55
        // 0x587D9351: movzx ebp, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x587D9355: push esi
        __asm _emit 0x56
        // 0x587D9356: shr ebp, 0xa
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x0A
        // 0x587D9359: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D935B: and ebp, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x1F
        // 0x587D935E: push edi
        __asm _emit 0x57
        // 0x587D935F: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D9363: jle 0x587d9427
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9369: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D936B: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9371: mov edx, dword ptr [eax + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9377: mov eax, dword ptr [eax + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D937D: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9381: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D9385: lea edi, [ebx + 0xb40]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D938B: jmp 0x587d9390
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587D9390..0x587D9440; 176 mapped bytes.
extern "C" __declspec(naked) void FUN_587d9340_segment_01() {
    __asm {
        // 0x587D9390: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9394: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9399: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587D939B: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D93A0: shl edx, cl
        __asm _emit 0xD3
        __asm _emit 0xE2
        // 0x587D93A2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x587D93A4: test dword ptr [esp + 0x14], edx
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D93A8: je 0x587d93b5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D93AA: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D93AC: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587D93AE: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D93B0: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x03
        // 0x587D93B3: jmp 0x587d93bc
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587D93B5: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D93B7: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587D93B9: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D93BB: inc eax
        __asm _emit 0x40
        // 0x587D93BC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D93BE: mov eax, dword ptr [ebx + eax*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D93C5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D93C7: jne 0x587d93f9
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587D93C9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D93CB: je 0x587d93fd
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587D93CD: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D93D2: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D93D6: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D93DC: push eax
        __asm _emit 0x50
        // 0x587D93DD: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587D93E2: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D93E8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D93EA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587D93ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D93EF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D93F1: pop edi
        __asm _emit 0x5F
        // 0x587D93F2: pop esi
        __asm _emit 0x5E
        // 0x587D93F3: pop ebp
        __asm _emit 0x5D
        // 0x587D93F4: pop ebx
        __asm _emit 0x5B
        // 0x587D93F5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587D93F8: ret
        __asm _emit 0xC3
        // 0x587D93F9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D93FB: je 0x587d93cd
        __asm _emit 0x74
        __asm _emit 0xD0
        // 0x587D93FD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D93FF: je 0x587d941b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587D9401: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D9403: je 0x587d941b
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587D9405: mov ecx, 0xaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D940A: xor cx, word ptr [edi - 0x80]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4F
        __asm _emit 0x80
        // 0x587D940E: jne 0x587d941b
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587D9410: mov edx, 0xaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9415: xor dx, word ptr [edi - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x57
        __asm _emit 0x82
        // 0x587D9419: je 0x587d93cd
        __asm _emit 0x74
        __asm _emit 0xB2
        // 0x587D941B: inc esi
        __asm _emit 0x46
        // 0x587D941C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D941F: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587D9421: jl 0x587d9390
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9427: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D942D: push 0x59
        __asm _emit 0x6A
        __asm _emit 0x59
        // 0x587D942F: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x587D9431: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x587D9433: call 0x588ebfa0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x2B
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587D9438: pop edi
        __asm _emit 0x5F
        // 0x587D9439: pop esi
        __asm _emit 0x5E
        // 0x587D943A: pop ebp
        __asm _emit 0x5D
        // 0x587D943B: pop ebx
        __asm _emit 0x5B
        // 0x587D943C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587D943F: ret
        __asm _emit 0xC3
    }
}

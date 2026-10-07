// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 575 bytes in 1 exact ranges.
// Source symbol alias: FUN_58746f70.

// Ghidra body range 0x58746F70..0x587471AF; 575 mapped bytes.
extern "C" __declspec(naked) void FUN_58746f70_segment_00() {
    __asm {
        // 0x58746F70: push ebp
        __asm _emit 0x55
        // 0x58746F71: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58746F73: and esp, 0xffffffc0
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xC0
        // 0x58746F76: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x58746F79: push ebx
        __asm _emit 0x53
        // 0x58746F7A: push ebp
        __asm _emit 0x55
        // 0x58746F7B: push esi
        __asm _emit 0x56
        // 0x58746F7C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58746F7E: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746F84: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x58746F87: push edi
        __asm _emit 0x57
        // 0x58746F88: jge 0x58746f9b
        __asm _emit 0x7D
        __asm _emit 0x11
        // 0x58746F8A: inc eax
        __asm _emit 0x40
        // 0x58746F8B: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746F91: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58746F93: pop edi
        __asm _emit 0x5F
        // 0x58746F94: pop esi
        __asm _emit 0x5E
        // 0x58746F95: pop ebp
        __asm _emit 0x5D
        // 0x58746F96: pop ebx
        __asm _emit 0x5B
        // 0x58746F97: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58746F99: pop ebp
        __asm _emit 0x5D
        // 0x58746F9A: ret
        __asm _emit 0xC3
        // 0x58746F9B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58746F9D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58746F9F: mov dword ptr [esi + 0x8c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746FA5: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58746FA8: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58746FAB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58746FAF: call 0x58746a10
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746FB4: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58746FB6: jne 0x587471a2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746FBC: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58746FC2: mov edi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x58746FC5: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58746FC7: je 0x58746ff9
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58746FC9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746FD0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58746FD2: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58746FD4: je 0x58746ff2
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58746FD6: push edi
        __asm _emit 0x57
        // 0x58746FD7: call 0x588d6b00
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xFB
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58746FDC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746FDE: je 0x58746ff2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58746FE0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58746FE2: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xF6
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58746FE7: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58746FEC: je 0x5874707d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746FF2: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x58746FF5: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58746FF7: jne 0x58746fd0
        __asm _emit 0x75
        __asm _emit 0xD7
        // 0x58746FF9: cmp dword ptr [esi + 0x90], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746FFF: jle 0x58747073
        __asm _emit 0x7E
        __asm _emit 0x72
        // 0x58747001: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x58747003: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58747005: fst qword ptr [esp + 0x20]
        __asm _emit 0xDD
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747009: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874700D: push ecx
        __asm _emit 0x51
        // 0x5874700E: fstp qword ptr [esp + 0x2c]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747012: fld qword ptr [0x5898ceb0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xB0
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58747018: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874701E: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747022: push edx
        __asm _emit 0x52
        // 0x58747023: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58747026: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x58747029: push ecx
        __asm _emit 0x51
        // 0x5874702A: fild dword ptr [eax + 8]
        __asm _emit 0xDB
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5874702D: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58747030: fstp qword ptr [esp + 8]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747034: fild dword ptr [eax + 4]
        __asm _emit 0xDB
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58747037: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5874703A: call 0x58747270
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874703F: fld qword ptr [esp + 0x4c]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58747043: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x58747046: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x5C
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874704B: fld qword ptr [esp + 0x20]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874704F: push eax
        __asm _emit 0x50
        // 0x58747050: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x5C
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747055: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58747057: push eax
        __asm _emit 0x50
        // 0x58747058: push edx
        __asm _emit 0x52
        // 0x58747059: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874705E: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58747061: mov dword ptr [esi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747067: mov dword ptr [esi + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874706D: mov dword ptr [esi + 0x94], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747073: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58747075: pop edi
        __asm _emit 0x5F
        // 0x58747076: pop esi
        __asm _emit 0x5E
        // 0x58747077: pop ebp
        __asm _emit 0x5D
        // 0x58747078: pop ebx
        __asm _emit 0x5B
        // 0x58747079: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5874707B: pop ebp
        __asm _emit 0x5D
        // 0x5874707C: ret
        __asm _emit 0xC3
        // 0x5874707D: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747083: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58747085: jne 0x5874709b
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58747087: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58747089: mov ecx, dword ptr [edx + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874708F: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747095: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874709B: inc eax
        __asm _emit 0x40
        // 0x5874709C: mov dword ptr [esi + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587470A2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587470A4: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587470A7: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587470AA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587470AE: sub eax, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587470B1: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x587470B3: sub edx, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587470B6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587470B8: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587470BB: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587470BF: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587470C3: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587470C7: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587470CB: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587470CF: fst qword ptr [esp + 0x30]
        __asm _emit 0xDD
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587470D3: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587470D7: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587470D9: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x587470DB: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x587470DD: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x5B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587470E2: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x587470E4: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x587470E6: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587470E8: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x587470EB: jp 0x58747115
        __asm _emit 0x7A
        __asm _emit 0x28
        // 0x587470ED: fld qword ptr [esp + 0x30]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587470F1: fdiv st(1)
        __asm _emit 0xD8
        __asm _emit 0xF1
        // 0x587470F3: fld qword ptr [0x5898cf50]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587470F9: fmul st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC9
        // 0x587470FB: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x587470FD: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x5B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747102: fild dword ptr [esp + 0x2c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747106: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58747108: fdivrp st(2)
        __asm _emit 0xDE
        __asm _emit 0xF2
        // 0x5874710A: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x5874710C: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x5B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747111: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58747113: jmp 0x58747168
        __asm _emit 0xEB
        __asm _emit 0x53
        // 0x58747115: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874711B: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x5874711D: mov ecx, dword ptr [edx + 0x10910]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58747123: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58747125: lea eax, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x58747128: mov ebx, dword ptr [0x58a24914]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874712E: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58747130: mov ebp, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58747136: mov edi, 0x84
        __asm _emit 0xBF
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874713B: mov eax, dword ptr [ebp + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x95
        __asm _emit 0x00
        // 0x5874713F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58747141: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x58747143: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58747147: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58747149: mov ecx, 0x84
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874714E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58747150: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58747152: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58747154: sub edi, 0x42
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x42
        // 0x58747157: mov eax, dword ptr [ebp + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x95
        __asm _emit 0x00
        // 0x5874715B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874715D: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5874715F: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747163: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x58747165: sub ebx, 0x42
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x58747168: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874716C: lea eax, [edx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x1A
        // 0x5874716F: push eax
        __asm _emit 0x50
        // 0x58747170: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x58747172: push ebp
        __asm _emit 0x55
        // 0x58747173: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747177: call 0x587476f0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874717C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874717F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58747181: jne 0x58747191
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58747183: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58747185: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58747188: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5874718B: sub ebp, edi
        __asm _emit 0x2B
        __asm _emit 0xEF
        // 0x5874718D: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5874718F: jmp 0x58747195
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58747191: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747195: push eax
        __asm _emit 0x50
        // 0x58747196: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58747198: push ebp
        __asm _emit 0x55
        // 0x58747199: push eax
        __asm _emit 0x50
        // 0x5874719A: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874719F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587471A2: pop edi
        __asm _emit 0x5F
        // 0x587471A3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587471A8: pop esi
        __asm _emit 0x5E
        // 0x587471A9: pop ebp
        __asm _emit 0x5D
        // 0x587471AA: pop ebx
        __asm _emit 0x5B
        // 0x587471AB: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587471AD: pop ebp
        __asm _emit 0x5D
        // 0x587471AE: ret
        __asm _emit 0xC3
    }
}

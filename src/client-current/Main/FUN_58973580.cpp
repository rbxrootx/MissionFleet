// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 500 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973580.

// Ghidra body range 0x58973580..0x58973774; 500 mapped bytes.
extern "C" __declspec(naked) void FUN_58973580_segment_00() {
    __asm {
        // 0x58973580: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x58973583: push ebx
        __asm _emit 0x53
        // 0x58973584: mov ebx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58973588: push ebp
        __asm _emit 0x55
        // 0x58973589: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5897358B: push ebx
        __asm _emit 0x53
        // 0x5897358C: call 0x58971e50
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973591: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58973593: je 0x5897359f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58973595: pop ebp
        __asm _emit 0x5D
        // 0x58973596: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973598: pop ebx
        __asm _emit 0x5B
        // 0x58973599: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x5897359C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5897359F: push esi
        __asm _emit 0x56
        // 0x589735A0: push edi
        __asm _emit 0x57
        // 0x589735A1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589735A3: mov word ptr [esp + 0x14], 0x4d42
        __asm _emit 0x66
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x4D
        // 0x589735AA: call 0x58972c20
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589735AF: add eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0E
        // 0x589735B2: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589735B4: mov dword ptr [esp + 0x16], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x589735B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589735BA: mov word ptr [esp + 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589735BF: mov word ptr [esp + 0x1a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x589735C4: lea esi, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x589735C7: call 0x58973780
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589735CC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x589735CE: lea edx, [eax + ecx + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x0E
        // 0x589735D2: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589735D6: push eax
        __asm _emit 0x50
        // 0x589735D7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589735D9: mov dword ptr [esp + 0x22], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x589735DD: call 0x58972620
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589735E2: mov ecx, dword ptr [esp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x589735E6: mov word ptr [esp + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589735EB: push ecx
        __asm _emit 0x51
        // 0x589735EC: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589735EE: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589735F3: mov edx, dword ptr [esp + 0x1e]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x589735F7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589735F9: push edx
        __asm _emit 0x52
        // 0x589735FA: mov dword ptr [esp + 0x1a], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x589735FE: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973603: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973605: mov dword ptr [esp + 0x1e], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x58973609: call 0x589725b0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897360E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58973610: jne 0x58973723
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973616: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973618: call 0x58973860
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897361D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897361F: je 0x58973723
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973625: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897362A: lea edi, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897362E: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58973630: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58973634: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58973638: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x5897363B: add eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x1F
        // 0x5897363E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58973640: cdq
        __asm _emit 0x99
        // 0x58973641: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58973644: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58973648: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5897364A: mov word ptr [esp + 0x32], 0x20
        __asm _emit 0x66
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x32
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58973651: sar eax, 5
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58973654: imul eax, dword ptr [esp + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58973659: shl eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x5897365C: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58973660: lea eax, [ecx + eax + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x0E
        // 0x58973664: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973666: push eax
        __asm _emit 0x50
        // 0x58973667: mov dword ptr [esp + 0x1a], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x5897366B: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973670: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58973674: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973676: push edx
        __asm _emit 0x52
        // 0x58973677: mov dword ptr [esp + 0x1a], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x5897367B: call 0x58972690
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973680: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58973682: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58973684: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58973688: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x5897368A: push ecx
        __asm _emit 0x51
        // 0x5897368B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897368D: call dword ptr [eax + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58973690: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58973692: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58973694: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58973698: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x5897369A: push eax
        __asm _emit 0x50
        // 0x5897369B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897369D: call dword ptr [edx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x589736A0: push esi
        __asm _emit 0x56
        // 0x589736A1: push esi
        __asm _emit 0x56
        // 0x589736A2: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589736A4: call 0x589738a0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589736A9: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x589736AD: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x589736B1: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x589736B3: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589736B7: jle 0x58973768
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589736BD: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589736C1: push ecx
        __asm _emit 0x51
        // 0x589736C2: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x589736C4: call 0x58972bc0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589736C9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x589736CB: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x589736CF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x589736D1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589736D3: jle 0x58973706
        __asm _emit 0x7E
        __asm _emit 0x31
        // 0x589736D5: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x589736D7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589736D9: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x589736DB: push esi
        __asm _emit 0x56
        // 0x589736DC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589736DE: call dword ptr [edx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x589736E1: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x589736E5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x589736E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589736E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589736EB: push ecx
        __asm _emit 0x51
        // 0x589736EC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589736EE: call dword ptr [eax + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x589736F1: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x589736F5: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x589736F9: add esi, 3
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x03
        // 0x589736FC: inc edx
        __asm _emit 0x42
        // 0x589736FD: inc edi
        __asm _emit 0x47
        // 0x589736FE: mov dword ptr [esp + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58973702: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58973704: jl 0x589736d5
        __asm _emit 0x7C
        __asm _emit 0xCF
        // 0x58973706: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897370A: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897370E: inc eax
        __asm _emit 0x40
        // 0x5897370F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58973711: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58973715: jl 0x589736bd
        __asm _emit 0x7C
        __asm _emit 0xA6
        // 0x58973717: pop edi
        __asm _emit 0x5F
        // 0x58973718: pop esi
        __asm _emit 0x5E
        // 0x58973719: pop ebp
        __asm _emit 0x5D
        // 0x5897371A: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5897371C: pop ebx
        __asm _emit 0x5B
        // 0x5897371D: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x58973720: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58973723: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58973725: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58973727: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897372B: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x5897372D: push eax
        __asm _emit 0x50
        // 0x5897372E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973730: call dword ptr [edx + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x58973733: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58973736: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897373B: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897373D: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x58973740: push ecx
        __asm _emit 0x51
        // 0x58973741: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973743: call 0x58972690
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973748: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x5897374A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897374C: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5897374E: call 0x58972c20
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973753: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58973756: push eax
        __asm _emit 0x50
        // 0x58973757: push edx
        __asm _emit 0x52
        // 0x58973758: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897375A: call dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x5897375D: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58973760: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58973762: push eax
        __asm _emit 0x50
        // 0x58973763: call 0x58972690
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973768: pop edi
        __asm _emit 0x5F
        // 0x58973769: pop esi
        __asm _emit 0x5E
        // 0x5897376A: pop ebp
        __asm _emit 0x5D
        // 0x5897376B: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5897376D: pop ebx
        __asm _emit 0x5B
        // 0x5897376E: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x58973771: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

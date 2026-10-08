// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1665 bytes in 1 exact ranges.
// Source symbol alias: FUN_588826f0.

// Ghidra body range 0x588826F0..0x58882D71; 1665 mapped bytes.
extern "C" __declspec(naked) void FUN_588826f0_segment_00() {
    __asm {
        // 0x588826F0: push ebx
        __asm _emit 0x53
        // 0x588826F1: push ebp
        __asm _emit 0x55
        // 0x588826F2: push esi
        __asm _emit 0x56
        // 0x588826F3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588826F5: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588826F9: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588826FE: push edi
        __asm _emit 0x57
        // 0x588826FF: test bl, al
        __asm _emit 0x84
        __asm _emit 0xC3
        // 0x58882701: je 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882707: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888270B: cmp dword ptr [ebp + 4], 0x100
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882712: jne 0x58882721
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58882714: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58882717: cmp eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x26
        // 0x5888271A: je 0x58882746
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5888271C: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x5888271F: je 0x58882746
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x58882721: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58882724: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882726: je 0x5888274f
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58882728: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5888272B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888272D: je 0x58882746
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5888272F: nop
        __asm _emit 0x90
        // 0x58882730: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58882732: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58882734: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58882737: push ebp
        __asm _emit 0x55
        // 0x58882738: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888273A: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5888273D: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58882740: je 0x5888274f
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58882742: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882744: jne 0x58882730
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58882746: pop edi
        __asm _emit 0x5F
        // 0x58882747: pop esi
        __asm _emit 0x5E
        // 0x58882748: pop ebp
        __asm _emit 0x5D
        // 0x58882749: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888274B: pop ebx
        __asm _emit 0x5B
        // 0x5888274C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888274F: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882754: cmp dword ptr [esi + 0x94], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888275A: je 0x58882746
        __asm _emit 0x74
        __asm _emit 0xEA
        // 0x5888275C: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5888275F: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882764: ja 0x58882bca
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888276A: je 0x58882b1a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882770: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882775: je 0x58882afd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888277B: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882780: jne 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882786: mov ebx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888278C: cmp dword ptr [ebx + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58882790: jne 0x58882885
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882796: mov edx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888279C: mov ebp, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588827A2: sub ebp, 0x12
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x12
        // 0x588827A5: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588827A7: jle 0x588828a1
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588827AD: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588827B0: lea edi, [eax + 0x5a]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x5A
        // 0x588827B3: lea ecx, [eax + 0x1b8]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588827B9: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588827BE: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588827C1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588827C3: jg 0x588827c8
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x588827C5: push edi
        __asm _emit 0x57
        // 0x588827C6: jmp 0x588827d0
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588827C8: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588827CA: jl 0x588827cf
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x588827CC: push ecx
        __asm _emit 0x51
        // 0x588827CD: jmp 0x588827d0
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588827CF: push eax
        __asm _emit 0x50
        // 0x588827D0: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588827D2: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x0B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588827D7: mov ecx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588827DD: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588827E0: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588827E2: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x588827E5: mov eax, 0x5d9f7391
        __asm _emit 0xB8
        __asm _emit 0x91
        __asm _emit 0x73
        __asm _emit 0x9F
        __asm _emit 0x5D
        // 0x588827EA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588827EC: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588827F2: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588827F5: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588827F7: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x588827FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x588827FC: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882801: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58882803: jle 0x5888283e
        __asm _emit 0x7E
        __asm _emit 0x39
        // 0x58882805: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888280B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5888280D: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882812: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882814: cdq
        __asm _emit 0x99
        // 0x58882815: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882817: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882819: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888281B: jle 0x5888283e
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x5888281D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58882820: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882822: call 0x5887a770
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x7F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882827: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888282D: inc ebx
        __asm _emit 0x43
        // 0x5888282E: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882833: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882835: cdq
        __asm _emit 0x99
        // 0x58882836: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882838: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5888283A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5888283C: jl 0x58882820
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x5888283E: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882844: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882849: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5888284B: jge 0x588828a1
        __asm _emit 0x7D
        __asm _emit 0x54
        // 0x5888284D: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882853: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58882855: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5888285A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5888285C: cdq
        __asm _emit 0x99
        // 0x5888285D: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5888285F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882861: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882863: jle 0x588828a1
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58882865: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882867: call 0x5887a810
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x7F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888286C: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882872: inc ebx
        __asm _emit 0x43
        // 0x58882873: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882878: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5888287A: cdq
        __asm _emit 0x99
        // 0x5888287B: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5888287D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5888287F: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58882881: jl 0x58882865
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x58882883: jmp 0x588828a1
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x58882885: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888288B: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5888288E: push edx
        __asm _emit 0x52
        // 0x5888288F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58882891: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xEC
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882896: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58882898: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5888289A: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5888289C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5888289E: mov dword ptr [ebx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x588828A1: mov ebx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828A7: cmp dword ptr [ebx + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588828AB: jne 0x588829a5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828B1: mov eax, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828B7: mov ebp, dword ptr [eax + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828BD: sub ebp, 4
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x04
        // 0x588828C0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588828C2: jle 0x588829c0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828C8: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588828CB: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588828D1: lea edi, [eax + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x588828D4: lea ecx, [eax + 0xaa]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828DA: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588828DD: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588828DF: jg 0x588828e4
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x588828E1: push edi
        __asm _emit 0x57
        // 0x588828E2: jmp 0x588828ec
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588828E4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588828E6: jl 0x588828eb
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x588828E8: push ecx
        __asm _emit 0x51
        // 0x588828E9: jmp 0x588828ec
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588828EB: push eax
        __asm _emit 0x50
        // 0x588828EC: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588828EE: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x0A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588828F3: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588828F9: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588828FC: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588828FE: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x58882901: mov eax, 0x63e7063f
        __asm _emit 0xB8
        __asm _emit 0x3F
        __asm _emit 0x06
        __asm _emit 0xE7
        __asm _emit 0x63
        // 0x58882906: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58882908: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888290E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58882911: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58882913: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58882916: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58882918: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5888291D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5888291F: jle 0x5888295e
        __asm _emit 0x7E
        __asm _emit 0x3D
        // 0x58882921: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882927: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58882929: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5888292E: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882930: cdq
        __asm _emit 0x99
        // 0x58882931: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882933: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882935: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882937: jle 0x5888295e
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x58882939: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882940: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882942: call 0x5887ad20
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882947: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888294D: inc ebx
        __asm _emit 0x43
        // 0x5888294E: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882953: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882955: cdq
        __asm _emit 0x99
        // 0x58882956: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882958: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5888295A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5888295C: jl 0x58882940
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x5888295E: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882964: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882969: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5888296B: jge 0x588829c0
        __asm _emit 0x7D
        __asm _emit 0x53
        // 0x5888296D: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882973: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58882975: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5888297A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5888297C: cdq
        __asm _emit 0x99
        // 0x5888297D: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5888297F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882981: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882983: jle 0x588829c0
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x58882985: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882987: call 0x5887adc0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888298C: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882992: inc ebx
        __asm _emit 0x43
        // 0x58882993: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882998: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5888299A: cdq
        __asm _emit 0x99
        // 0x5888299B: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5888299D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5888299F: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x588829A1: jl 0x58882985
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588829A3: jmp 0x588829c0
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588829A5: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588829AB: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588829AE: push ecx
        __asm _emit 0x51
        // 0x588829AF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588829B1: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xEB
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588829B6: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588829B8: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588829BA: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588829BC: inc eax
        __asm _emit 0x40
        // 0x588829BD: mov dword ptr [ebx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x588829C0: mov ebx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829C6: cmp dword ptr [ebx + 0x50], 3
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588829CA: jne 0x58882ad8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829D0: mov edx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829D6: mov ebp, dword ptr [edx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xAA
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829DC: sub ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x0A
        // 0x588829DF: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588829E1: jle 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829E7: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588829EA: lea edi, [eax + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829F0: lea ecx, [eax + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588829F6: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588829FB: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588829FE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58882A00: jg 0x58882a05
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58882A02: push edi
        __asm _emit 0x57
        // 0x58882A03: jmp 0x58882a0d
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58882A05: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58882A07: jl 0x58882a0c
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x58882A09: push ecx
        __asm _emit 0x51
        // 0x58882A0A: jmp 0x58882a0d
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58882A0C: push eax
        __asm _emit 0x50
        // 0x58882A0D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58882A0F: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882A14: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A1A: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x58882A1D: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58882A1F: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x58882A22: mov eax, 0xae4c415d
        __asm _emit 0xB8
        __asm _emit 0x5D
        __asm _emit 0x41
        __asm _emit 0x4C
        __asm _emit 0xAE
        // 0x58882A27: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58882A29: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58882A2B: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A31: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x58882A34: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58882A36: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58882A39: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58882A3B: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882A40: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58882A42: jle 0x58882a7e
        __asm _emit 0x7E
        __asm _emit 0x3A
        // 0x58882A44: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A4A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58882A4C: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882A51: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882A53: cdq
        __asm _emit 0x99
        // 0x58882A54: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882A56: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882A58: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882A5A: jle 0x58882a7e
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x58882A5C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58882A60: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882A62: call 0x5887be10
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x93
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882A67: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A6D: inc ebx
        __asm _emit 0x43
        // 0x58882A6E: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882A73: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882A75: cdq
        __asm _emit 0x99
        // 0x58882A76: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882A78: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882A7A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58882A7C: jl 0x58882a60
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x58882A7E: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A84: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882A89: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58882A8B: jge 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A91: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882A97: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58882A99: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882A9E: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882AA0: cdq
        __asm _emit 0x99
        // 0x58882AA1: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882AA3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882AA5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882AA7: jle 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882AAD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58882AB0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882AB2: call 0x5887bd30
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x92
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882AB7: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882ABD: inc ebx
        __asm _emit 0x43
        // 0x58882ABE: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x56
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58882AC3: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58882AC5: cdq
        __asm _emit 0x99
        // 0x58882AC6: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58882AC8: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58882ACA: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58882ACC: jl 0x58882ab0
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x58882ACE: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882AD1: pop edi
        __asm _emit 0x5F
        // 0x58882AD2: pop esi
        __asm _emit 0x5E
        // 0x58882AD3: pop ebp
        __asm _emit 0x5D
        // 0x58882AD4: pop ebx
        __asm _emit 0x5B
        // 0x58882AD5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882AD8: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58882ADE: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58882AE1: push edx
        __asm _emit 0x52
        // 0x58882AE2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58882AE4: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xEA
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882AE9: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58882AEB: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58882AED: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58882AEF: inc eax
        __asm _emit 0x40
        // 0x58882AF0: pop edi
        __asm _emit 0x5F
        // 0x58882AF1: mov dword ptr [ebx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x50
        // 0x58882AF4: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882AF7: pop esi
        __asm _emit 0x5E
        // 0x58882AF8: pop ebp
        __asm _emit 0x5D
        // 0x58882AF9: pop ebx
        __asm _emit 0x5B
        // 0x58882AFA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882AFD: cmp dword ptr [ebp + 8], 0x1b
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x1B
        // 0x58882B01: jne 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B07: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58882B09: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58882B0C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882B0E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58882B10: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882B13: pop edi
        __asm _emit 0x5F
        // 0x58882B14: pop esi
        __asm _emit 0x5E
        // 0x58882B15: pop ebp
        __asm _emit 0x5D
        // 0x58882B16: pop ebx
        __asm _emit 0x5B
        // 0x58882B17: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882B1A: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B20: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58882B24: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58882B28: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58882B2B: cmp cl, 5
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x58882B2E: je 0x58882b3d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58882B30: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B36: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58882B38: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58882B3B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58882B3D: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58882B40: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58882B46: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58882B49: lea edi, [eax + 0x153]
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B4F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58882B51: jle 0x58882b65
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58882B53: lea edi, [eax + 0x15d]
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B59: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58882B5B: jge 0x58882b65
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58882B5D: mov eax, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B63: jmp 0x58882bb0
        __asm _emit 0xEB
        __asm _emit 0x4B
        // 0x58882B65: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58882B68: add edi, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B6E: cmp dword ptr [edx + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x58882B71: jge 0x58882b8f
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x58882B73: lea edx, [eax + 0x31f]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x1F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B79: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58882B7B: jle 0x58882b8f
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58882B7D: lea edx, [eax + 0x329]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B83: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58882B85: jge 0x58882b8f
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58882B87: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B8D: jmp 0x58882bb0
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x58882B8F: lea edx, [eax + 0x31f]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x1F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B95: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58882B97: jle 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882B9D: add eax, 0x329
        __asm _emit 0x05
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BA2: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58882BA4: jge 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BAA: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BB0: cmp dword ptr [eax + 0x50], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58882BB3: jne 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BB9: pop edi
        __asm _emit 0x5F
        // 0x58882BBA: mov dword ptr [eax + 0x50], 3
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BC1: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882BC4: pop esi
        __asm _emit 0x5E
        // 0x58882BC5: pop ebp
        __asm _emit 0x5D
        // 0x58882BC6: pop ebx
        __asm _emit 0x5B
        // 0x58882BC7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882BCA: sub eax, 0x202
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BCF: je 0x58882cc4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BD5: sub eax, 8
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x58882BD8: jne 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BDE: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58882BE4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58882BE7: push edi
        __asm _emit 0x57
        // 0x58882BE8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882BEA: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882BEF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882BF1: je 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BF7: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882BFD: push edi
        __asm _emit 0x57
        // 0x58882BFE: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882C03: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882C05: je 0x58882c24
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58882C07: movzx eax, word ptr [ebp + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x0A
        // 0x58882C0B: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882C0E: jle 0x58882c19
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x58882C10: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882C12: call 0x5887a770
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882C17: jmp 0x58882c4f
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58882C19: jge 0x58882c4f
        __asm _emit 0x7D
        __asm _emit 0x34
        // 0x58882C1B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882C1D: call 0x5887a810
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882C22: jmp 0x58882c4f
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x58882C24: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882C2A: push edi
        __asm _emit 0x57
        // 0x58882C2B: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882C30: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882C32: je 0x58882c4f
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58882C34: movzx eax, word ptr [ebp + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x0A
        // 0x58882C38: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882C3B: jle 0x58882c46
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x58882C3D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882C3F: call 0x5887ad20
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x80
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882C44: jmp 0x58882c4f
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58882C46: jge 0x58882c4f
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58882C48: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882C4A: call 0x5887adc0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882C4F: cmp dword ptr [esi + 0x6c], 3
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x6C
        __asm _emit 0x03
        // 0x58882C53: jne 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882C59: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58882C5F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58882C61: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x58882C64: lea ebx, [esi + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882C6A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882C70: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58882C72: push ebp
        __asm _emit 0x55
        // 0x58882C73: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882C78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882C7A: jne 0x58882c8f
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58882C7C: inc edi
        __asm _emit 0x47
        // 0x58882C7D: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58882C80: cmp edi, 5
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x05
        // 0x58882C83: jl 0x58882c70
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x58882C85: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882C88: pop edi
        __asm _emit 0x5F
        // 0x58882C89: pop esi
        __asm _emit 0x5E
        // 0x58882C8A: pop ebp
        __asm _emit 0x5D
        // 0x58882C8B: pop ebx
        __asm _emit 0x5B
        // 0x58882C8C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882C8F: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58882C93: movzx eax, word ptr [eax + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0A
        // 0x58882C97: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882C9A: jle 0x58882cad
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58882C9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882C9E: call 0x5887be10
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x91
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882CA3: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882CA6: pop edi
        __asm _emit 0x5F
        // 0x58882CA7: pop esi
        __asm _emit 0x5E
        // 0x58882CA8: pop ebp
        __asm _emit 0x5D
        // 0x58882CA9: pop ebx
        __asm _emit 0x5B
        // 0x58882CAA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882CAD: jge 0x58882d67
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882CB3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882CB5: call 0x5887bd30
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882CBA: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882CBD: pop edi
        __asm _emit 0x5F
        // 0x58882CBE: pop esi
        __asm _emit 0x5E
        // 0x58882CBF: pop ebp
        __asm _emit 0x5D
        // 0x58882CC0: pop ebx
        __asm _emit 0x5B
        // 0x58882CC1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882CC4: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882CCA: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58882CCE: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58882CD2: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58882CD5: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58882CD8: je 0x58882ce7
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58882CDA: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882CE0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58882CE2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58882CE5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58882CE7: mov eax, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882CED: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x58882CF0: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882CF6: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x58882CF9: mov edx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882CFF: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x58882D02: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58882D08: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882D0E: lea edi, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x58882D11: push edi
        __asm _emit 0x57
        // 0x58882D12: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882D17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882D19: je 0x58882d2f
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58882D1B: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58882D1E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58882D20: push eax
        __asm _emit 0x50
        // 0x58882D21: push ecx
        __asm _emit 0x51
        // 0x58882D22: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882D24: call 0x58881c30
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882D29: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58882D2F: cmp dword ptr [esi + 0x6c], 3
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x6C
        __asm _emit 0x03
        // 0x58882D33: jne 0x58882d67
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58882D35: lea ebp, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x58882D38: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58882D3A: lea ebx, [esi + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58882D40: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58882D42: push ebp
        __asm _emit 0x55
        // 0x58882D43: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xE7
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x58882D48: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58882D4A: jne 0x58882d5f
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58882D4C: inc edi
        __asm _emit 0x47
        // 0x58882D4D: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58882D50: cmp edi, 5
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x05
        // 0x58882D53: jl 0x58882d40
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x58882D55: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882D58: pop edi
        __asm _emit 0x5F
        // 0x58882D59: pop esi
        __asm _emit 0x5E
        // 0x58882D5A: pop ebp
        __asm _emit 0x5D
        // 0x58882D5B: pop ebx
        __asm _emit 0x5B
        // 0x58882D5C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58882D5F: push edi
        __asm _emit 0x57
        // 0x58882D60: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58882D62: call 0x5887a980
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x7C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58882D67: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58882D6A: pop edi
        __asm _emit 0x5F
        // 0x58882D6B: pop esi
        __asm _emit 0x5E
        // 0x58882D6C: pop ebp
        __asm _emit 0x5D
        // 0x58882D6D: pop ebx
        __asm _emit 0x5B
        // 0x58882D6E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

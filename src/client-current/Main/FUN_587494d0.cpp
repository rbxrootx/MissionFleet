// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 780 bytes in 1 exact ranges.
// Source symbol alias: FUN_587494d0.

// Ghidra body range 0x587494D0..0x587497DC; 780 mapped bytes.
extern "C" __declspec(naked) void FUN_587494d0_segment_00() {
    __asm {
        // 0x587494D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587494D2: push 0x5897e37e
        __asm _emit 0x68
        __asm _emit 0x7E
        __asm _emit 0xE3
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587494D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587494DD: push eax
        __asm _emit 0x50
        // 0x587494DE: push ecx
        __asm _emit 0x51
        // 0x587494DF: push ebx
        __asm _emit 0x53
        // 0x587494E0: push ebp
        __asm _emit 0x55
        // 0x587494E1: push esi
        __asm _emit 0x56
        // 0x587494E2: push edi
        __asm _emit 0x57
        // 0x587494E3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587494E8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587494EA: push eax
        __asm _emit 0x50
        // 0x587494EB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587494EF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587494F5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587494F7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587494FB: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587494FF: mov edi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58749503: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58749507: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874950B: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874950F: push eax
        __asm _emit 0x50
        // 0x58749510: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58749514: push edi
        __asm _emit 0x57
        // 0x58749515: push ebp
        __asm _emit 0x55
        // 0x58749516: push ecx
        __asm _emit 0x51
        // 0x58749517: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5874951B: push edx
        __asm _emit 0x52
        // 0x5874951C: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58749520: push eax
        __asm _emit 0x50
        // 0x58749521: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58749525: push ecx
        __asm _emit 0x51
        // 0x58749526: push edx
        __asm _emit 0x52
        // 0x58749527: push eax
        __asm _emit 0x50
        // 0x58749528: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874952A: call 0x58731700
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874952F: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58749533: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58749535: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58749539: mov dword ptr [esi], 0x5898cf98
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874953F: mov dword ptr [esi + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x58749542: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58749545: mov dword ptr [esi + 0x90], 0x100
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874954F: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749555: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58749557: jne 0x58749570
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58749559: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874955E: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x7F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58749563: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749569: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874956C: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x5874956E: jmp 0x58749576
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58749570: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749576: mov edx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874957C: inc edx
        __asm _emit 0x42
        // 0x5874957D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874957F: push edx
        __asm _emit 0x52
        // 0x58749580: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749586: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874958C: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5874958F: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749595: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874959B: mov word ptr [esi + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495A2: mov dword ptr [esi + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495A8: mov dword ptr [esi + 0xec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495AE: mov dword ptr [esi + 0xf0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495B4: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495BA: mov dword ptr [esi + 0xf8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495C0: mov dword ptr [esi + 0xfc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495C6: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x7F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587495CB: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495D1: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495D7: inc eax
        __asm _emit 0x40
        // 0x587495D8: push eax
        __asm _emit 0x50
        // 0x587495D9: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x7F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587495DE: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495E4: mov edx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495EA: inc ecx
        __asm _emit 0x41
        // 0x587495EB: push ecx
        __asm _emit 0x51
        // 0x587495EC: push ebx
        __asm _emit 0x53
        // 0x587495ED: push edx
        __asm _emit 0x52
        // 0x587495EE: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495F4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x36
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587495F9: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587495FF: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749605: inc eax
        __asm _emit 0x40
        // 0x58749606: push eax
        __asm _emit 0x50
        // 0x58749607: push ebx
        __asm _emit 0x53
        // 0x58749608: push ecx
        __asm _emit 0x51
        // 0x58749609: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x36
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874960E: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58749610: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x36
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58749615: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58749617: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x5874961A: mov dword ptr [esp + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5874961E: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x58749623: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58749625: je 0x5874964d
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58749627: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874962B: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5874962F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58749631: push ebx
        __asm _emit 0x53
        // 0x58749632: push ebx
        __asm _emit 0x53
        // 0x58749633: push edx
        __asm _emit 0x52
        // 0x58749634: push eax
        __asm _emit 0x50
        // 0x58749635: push esi
        __asm _emit 0x56
        // 0x58749636: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58749638: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x9B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874963D: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58749643: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58749646: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58749649: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5874964B: jmp 0x5874964f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874964D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874964F: push 0xffffff38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58749654: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58749658: mov dword ptr [esi + 0xac], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874965E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x96
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58749663: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749669: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874966E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58749672: mov byte ptr [esi + 0xa8], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749678: call dword ptr [0x5898c19c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874967E: mov word ptr [0x589cfc50], ax
        __asm _emit 0x66
        __asm _emit 0xA3
        __asm _emit 0x50
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58749684: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x58749687: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58749689: cmp eax, 0x412
        __asm _emit 0x3D
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874968E: jg 0x587496d7
        __asm _emit 0x7F
        __asm _emit 0x47
        // 0x58749690: je 0x587496c8
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58749692: sub eax, 0x404
        __asm _emit 0x2D
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749697: cmp eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x5874969A: ja 0x58749735
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496A0: movzx edx, byte ptr [eax + 0x587497ec]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0xEC
        __asm _emit 0x97
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x587496A7: jmp dword ptr [edx*4 + 0x587497dc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0x97
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x587496AE: push ebx
        __asm _emit 0x53
        // 0x587496AF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496B1: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496B3: push ebx
        __asm _emit 0x53
        // 0x587496B4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587496B6: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496BB: jmp 0x58749720
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x587496BD: push ebx
        __asm _emit 0x53
        // 0x587496BE: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496C0: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496C2: push ebx
        __asm _emit 0x53
        // 0x587496C3: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587496C5: push ebx
        __asm _emit 0x53
        // 0x587496C6: jmp 0x58749720
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x587496C8: push ebx
        __asm _emit 0x53
        // 0x587496C9: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496CB: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496CD: push ebx
        __asm _emit 0x53
        // 0x587496CE: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587496D0: push 0x81
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496D5: jmp 0x58749720
        __asm _emit 0xEB
        __asm _emit 0x49
        // 0x587496D7: cmp eax, 0x1004
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496DC: jg 0x5874970c
        __asm _emit 0x7F
        __asm _emit 0x2E
        // 0x587496DE: je 0x587496ee
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587496E0: cmp eax, 0x804
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496E5: je 0x587496fd
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587496E7: cmp eax, 0xc04
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496EC: jne 0x58749735
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x587496EE: push ebx
        __asm _emit 0x53
        // 0x587496EF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496F1: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587496F3: push ebx
        __asm _emit 0x53
        // 0x587496F4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587496F6: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587496FB: jmp 0x58749720
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x587496FD: push ebx
        __asm _emit 0x53
        // 0x587496FE: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58749700: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58749702: push ebx
        __asm _emit 0x53
        // 0x58749703: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58749705: push 0x86
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874970A: jmp 0x58749720
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5874970C: cmp eax, 0x1042
        __asm _emit 0x3D
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749711: jne 0x58749735
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58749713: push ebx
        __asm _emit 0x53
        // 0x58749714: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58749716: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58749718: push ebx
        __asm _emit 0x53
        // 0x58749719: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874971B: push 0xcc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749720: push ebx
        __asm _emit 0x53
        // 0x58749721: push ebx
        __asm _emit 0x53
        // 0x58749722: push ebx
        __asm _emit 0x53
        // 0x58749723: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749728: push ebx
        __asm _emit 0x53
        // 0x58749729: push ebx
        __asm _emit 0x53
        // 0x5874972A: push ebx
        __asm _emit 0x53
        // 0x5874972B: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5874972D: call dword ptr [0x5898c08c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58749733: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58749735: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874973B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5874973D: je 0x58749768
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5874973F: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58749741: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x35
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58749746: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58749749: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5874974D: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58749752: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58749754: je 0x58749760
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58749756: push edi
        __asm _emit 0x57
        // 0x58749757: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58749759: call 0x58903470
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x9D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874975E: jmp 0x58749762
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58749760: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58749762: mov dword ptr [esi + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749768: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874976A: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749770: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749776: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874977C: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749782: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749788: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874978E: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749794: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874979A: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497A0: mov dword ptr [esi + 0xd4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497A6: mov dword ptr [esi + 0xd8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497AC: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497B2: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497B8: mov dword ptr [esi + 0xe4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497BE: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497C4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587497C6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587497CA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587497D1: pop ecx
        __asm _emit 0x59
        // 0x587497D2: pop edi
        __asm _emit 0x5F
        // 0x587497D3: pop esi
        __asm _emit 0x5E
        // 0x587497D4: pop ebp
        __asm _emit 0x5D
        // 0x587497D5: pop ebx
        __asm _emit 0x5B
        // 0x587497D6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587497D9: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}

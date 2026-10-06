// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58857020 .. +0x82B bytes.
// Source symbol alias: FUN_58857020.
extern "C" __declspec(naked) void FUN_58857020() {
    __asm {
        // 0x58857020: sub esp, 0xf8
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857026: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5885702B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5885702D: mov dword ptr [esp + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857034: push ebx
        __asm _emit 0x53
        // 0x58857035: push ebp
        __asm _emit 0x55
        // 0x58857036: push esi
        __asm _emit 0x56
        // 0x58857037: push edi
        __asm _emit 0x57
        // 0x58857038: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885703A: call 0x588536c0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885703F: mov eax, dword ptr [esp + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857046: mov dword ptr [esi + 0x2c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885704C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885704E: mov dword ptr [esi + 0x2f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857054: mov dword ptr [esi + 0x2ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885705A: mov byte ptr [esi + 0x2fc], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857060: mov dword ptr [esi + 0x300], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857066: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885706C: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5885706F: mov edx, dword ptr [eax + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857075: mov ecx, dword ptr [eax + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885707B: push edx
        __asm _emit 0x52
        // 0x5885707C: mov edx, dword ptr [eax + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857082: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58857088: push ecx
        __asm _emit 0x51
        // 0x58857089: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885708F: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58857095: push edx
        __asm _emit 0x52
        // 0x58857096: call 0x588955a0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xE5
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5885709B: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588570A0: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588570A3: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588570A9: movzx edi, word ptr [edx + 0xd6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBA
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588570B0: mov eax, dword ptr [ecx + 0x1014]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588570B6: movzx eax, word ptr [eax + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x1E
        // 0x588570BA: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588570BC: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588570BF: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588570C1: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588570C3: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588570C5: cdq
        __asm _emit 0x99
        // 0x588570C6: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588570C8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588570CA: mov eax, dword ptr [ecx + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588570D0: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588570D6: add edx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x28
        // 0x588570D9: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588570DE: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x588570E1: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588570E6: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588570E8: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588570EB: push edx
        __asm _emit 0x52
        // 0x588570EC: call 0x58895520
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588570F1: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588570F7: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588570FA: mov edx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857100: mov dx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x58857104: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58857107: mov edi, 0x7c00
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885710C: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5885710F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58857111: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58857115: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58857118: jae 0x588572ce
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885711E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58857120: movzx edi, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58857125: mov eax, dword ptr [eax + edi*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885712C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885712E: je 0x58857135
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58857130: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x58857133: jmp 0x58857137
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58857135: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58857137: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5885713A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885713C: movzx ebp, byte ptr [eax + edi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xAC
        __asm _emit 0x38
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857144: movzx ebx, byte ptr [eax + edi + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x9C
        __asm _emit 0x38
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885714C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5885714E: lea edi, [ebx + ebp*2]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x6B
        // 0x58857151: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58857153: je 0x58857289
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857159: cmp edx, 0xd
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x5885715C: je 0x58857289
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857162: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x58857165: je 0x588571ed
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885716B: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5885716E: jne 0x58857253
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857174: mov ecx, dword ptr [esi + edi*8 + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xFE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885717B: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x5885717D: push ebp
        __asm _emit 0x55
        // 0x5885717E: push ebx
        __asm _emit 0x53
        // 0x5885717F: push edi
        __asm _emit 0x57
        // 0x58857180: call 0x58857ec0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857185: inc dword ptr [esi + edi*8 + 0xdc]
        __asm _emit 0xFF
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885718C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5885718E: jne 0x588571bf
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58857190: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58857192: jne 0x588571a5
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58857194: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857199: or byte ptr [eax + 0xb4], 0x10
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588571A0: jmp 0x58857253
        __asm _emit 0xE9
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588571A5: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588571A8: jne 0x58857253
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588571AE: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588571B3: or byte ptr [eax + 0xb4], 0x20
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588571BA: jmp 0x58857253
        __asm _emit 0xE9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588571BF: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x588571C2: jne 0x58857253
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588571C8: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588571CA: jne 0x588571da
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588571CC: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588571D1: or byte ptr [eax + 0xb4], 0x40
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588571D8: jmp 0x58857253
        __asm _emit 0xEB
        __asm _emit 0x79
        // 0x588571DA: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588571DD: jne 0x58857253
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x588571DF: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588571E4: or byte ptr [eax + 0xb4], 0x80
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588571EB: jmp 0x58857253
        __asm _emit 0xEB
        __asm _emit 0x66
        // 0x588571ED: mov ecx, dword ptr [esi + edi*8 + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0x7C
        // 0x588571F1: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x588571F3: push ebp
        __asm _emit 0x55
        // 0x588571F4: push ebx
        __asm _emit 0x53
        // 0x588571F5: push edi
        __asm _emit 0x57
        // 0x588571F6: call 0x58857ec0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588571FB: inc dword ptr [esi + edi*8 + 0xd8]
        __asm _emit 0xFF
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857202: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58857204: jne 0x5885722b
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58857206: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58857208: jne 0x58857218
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885720A: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885720F: or byte ptr [eax + 0xb4], 1
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58857216: jmp 0x58857253
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x58857218: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x5885721B: jne 0x58857253
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x5885721D: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857222: or byte ptr [eax + 0xb4], 2
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58857229: jmp 0x58857253
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5885722B: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x5885722E: jne 0x58857253
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58857230: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58857232: jne 0x58857242
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58857234: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857239: or byte ptr [eax + 0xb4], 4
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58857240: jmp 0x58857253
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58857242: cmp ebx, 1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x58857245: jne 0x58857253
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58857247: mov eax, dword ptr [0x58a245c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885724C: or byte ptr [eax + 0xb4], 8
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x58857253: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58857255: imul edi, edi, 0x36
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x36
        // 0x58857258: cdq
        __asm _emit 0x99
        // 0x58857259: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5885725B: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5885725D: imul eax, eax, 0x2d
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x2D
        // 0x58857260: lea ecx, [eax + edi + 0x5d]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x38
        __asm _emit 0x5D
        // 0x58857264: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58857269: push ecx
        __asm _emit 0x51
        // 0x5885726A: mov ecx, dword ptr [esi + eax*4 + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857271: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xC0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857276: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885727B: mov eax, dword ptr [esi + eax*4 + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857282: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58857287: jmp 0x5885729e
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58857289: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885728E: mov eax, dword ptr [esi + eax*4 + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857295: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885729A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885729E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588572A4: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588572A7: mov edi, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572AD: mov di, word ptr [edi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x588572B1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588572B5: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588572B8: shr di, 0xa
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x0A
        // 0x588572BC: inc edx
        __asm _emit 0x42
        // 0x588572BD: and di, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x1F
        // 0x588572C1: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588572C5: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588572C8: jb 0x58857120
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588572CE: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572D4: call 0x588587c0
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572D9: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572DF: call 0x5885ee90
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572E4: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588572E9: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588572EC: mov ecx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572F2: movzx edx, word ptr [ecx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588572F6: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588572FC: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58857300: mov edx, dword ptr [ecx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857306: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58857308: mov ebp, 0xa0
        __asm _emit 0xBD
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885730D: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58857311: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58857315: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58857319: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5885731D: mov dword ptr [esp + 0x18], 0x9b8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857325: mov dword ptr [esp + 0x28], 0x1b
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885732D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58857330: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58857333: movzx cx, byte ptr [ecx + ebp + 0x86a]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0x6A
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885733C: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x5885733F: lea edx, [ecx - 0xb]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0xF5
        // 0x58857342: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58857346: ja 0x588574f4
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885734C: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857352: mov edx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x30
        // 0x58857355: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58857359: mov edx, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x17
        // 0x5885735C: movzx ebx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD9
        // 0x5885735F: lea ecx, [ebx + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x11
        // 0x58857362: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58857366: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58857368: je 0x58857376
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5885736A: mov edi, dword ptr [edx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857370: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58857374: jmp 0x5885737e
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58857376: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885737E: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58857382: shl edi, cl
        __asm _emit 0xD3
        __asm _emit 0xE7
        // 0x58857384: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58857386: jns 0x5885752e
        __asm _emit 0x0F
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885738C: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885738F: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58857393: mov edi, dword ptr [ecx + edi*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885739A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885739C: je 0x5885752e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588573A2: movzx eax, word ptr [edi + 6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x06
        // 0x588573A6: push eax
        __asm _emit 0x50
        // 0x588573A7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588573A9: call 0x58779c30
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588573AE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588573B0: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588573B5: je 0x588573cd
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588573B7: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588573BA: movzx dx, byte ptr [ecx + ebp + 0x46b]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x6B
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588573C3: cmp dx, word ptr [edi + 6]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x57
        __asm _emit 0x06
        // 0x588573C7: jne 0x5885752e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588573CD: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588573D0: movzx edx, byte ptr [ecx + ebp + 0x469]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588573D8: xor edx, 0x2a
        __asm _emit 0x83
        __asm _emit 0xF2
        __asm _emit 0x2A
        // 0x588573DB: and edx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x7F
        // 0x588573DE: cmp edx, dword ptr [edi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x57
        __asm _emit 0x28
        // 0x588573E1: jb 0x5885752e
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588573E7: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588573EB: test dword ptr [edi + 0x68], ecx
        __asm _emit 0x85
        __asm _emit 0x4F
        __asm _emit 0x68
        // 0x588573EE: je 0x5885752e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588573F4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588573F7: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588573FB: movzx eax, word ptr [edx + eax*4 + 0xe0c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857403: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58857405: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885740B: movzx edi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF9
        // 0x5885740E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58857412: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x58857415: push edx
        __asm _emit 0x52
        // 0x58857416: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x58857419: push eax
        __asm _emit 0x50
        // 0x5885741A: push ecx
        __asm _emit 0x51
        // 0x5885741B: lea edx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5885741F: push 0x5899e9c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58857424: push edx
        __asm _emit 0x52
        // 0x58857425: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885742B: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885742E: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58857432: push eax
        __asm _emit 0x50
        // 0x58857433: call dword ptr [0x5898c178]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58857439: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885743C: jbe 0x588574ef
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857442: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857448: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885744B: mov eax, dword ptr [eax + ebp + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857452: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58857454: xor edi, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x5885745A: xor eax, 0x2a800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885745F: shr edi, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x14
        // 0x58857462: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x58857465: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885746A: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857470: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58857472: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58857476: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58857478: lea ecx, [ebx - 0xb]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0xF5
        // 0x5885747B: mov dword ptr [esp + ecx*4 + 0x34], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8C
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857483: jge 0x58857487
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58857485: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58857487: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58857489: jne 0x58857490
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5885748B: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857490: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58857493: mov edx, dword ptr [ebp + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857499: mov al, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885749C: mov edx, dword ptr [ebp + ebx*4 + 0xed0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x9D
        __asm _emit 0xD0
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574A3: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588574A7: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588574A9: push edx
        __asm _emit 0x52
        // 0x588574AA: push ecx
        __asm _emit 0x51
        // 0x588574AB: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x588574AD: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588574B1: push eax
        __asm _emit 0x50
        // 0x588574B2: push ebx
        __asm _emit 0x53
        // 0x588574B3: jne 0x588574cf
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588574B5: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574BB: call 0x5885f910
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574C0: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574C6: push edi
        __asm _emit 0x57
        // 0x588574C7: push ebx
        __asm _emit 0x53
        // 0x588574C8: call 0x5885ead0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574CD: jmp 0x588574e7
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x588574CF: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574D5: call 0x58858690
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574DA: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574E0: push edi
        __asm _emit 0x57
        // 0x588574E1: push ebx
        __asm _emit 0x53
        // 0x588574E2: call 0x58858450
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574E7: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588574EB: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588574EF: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588574F4: add dword ptr [esp + 0x18], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x588574F9: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588574FE: add dword ptr [esp + 0x1c], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58857502: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x20
        // 0x58857505: sub dword ptr [esp + 0x28], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58857509: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5885750D: jne 0x58857330
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857513: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58857516: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885751C: mov cl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5885751F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58857522: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58857524: lea ebx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58857527: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x5885752A: jne 0x58857595
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x5885752C: jmp 0x58857545
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5885752E: mov dword ptr [esp + ebx*4 + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x9C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857536: jmp 0x588574f4
        __asm _emit 0xEB
        __asm _emit 0xBC
        // 0x58857538: jmp 0x58857540
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5885753A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857540: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857545: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58857548: movzx eax, word ptr [edx + edi*4 + 0xe7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xBA
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857550: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857556: push eax
        __asm _emit 0x50
        // 0x58857557: push edi
        __asm _emit 0x57
        // 0x58857558: call 0x5885eaf0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885755D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857563: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58857566: movzx eax, word ptr [edx + edi*4 + 0xe7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0xBA
        __asm _emit 0x7E
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885756E: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857574: push eax
        __asm _emit 0x50
        // 0x58857575: push edi
        __asm _emit 0x57
        // 0x58857576: call 0x5885eb30
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885757B: inc edi
        __asm _emit 0x47
        // 0x5885757C: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5885757F: jne 0x58857540
        __asm _emit 0x75
        __asm _emit 0xBF
        // 0x58857581: jmp 0x588575d0
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x58857583: jmp 0x58857590
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58857585: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885758C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58857590: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857595: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58857598: movzx edx, word ptr [ecx + edi*4 + 0xe7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575A0: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575A6: push edx
        __asm _emit 0x52
        // 0x588575A7: push edi
        __asm _emit 0x57
        // 0x588575A8: call 0x58858360
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575AD: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588575B2: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588575B5: movzx edx, word ptr [ecx + edi*4 + 0xe7e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0xB9
        __asm _emit 0x7E
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575BD: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575C3: push edx
        __asm _emit 0x52
        // 0x588575C4: push edi
        __asm _emit 0x57
        // 0x588575C5: call 0x588583a0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575CA: inc edi
        __asm _emit 0x47
        // 0x588575CB: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588575CE: jne 0x58857590
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x588575D0: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x588575D2: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588575D4: lea eax, [esp + 0x89]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575DB: push ebx
        __asm _emit 0x53
        // 0x588575DC: push eax
        __asm _emit 0x50
        // 0x588575DD: mov byte ptr [esp + 0x90], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575E5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588575EA: push 0x5899e9b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588575EF: lea ecx, [esp + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575F6: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588575FB: push ecx
        __asm _emit 0x51
        // 0x588575FC: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x44
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58857601: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857607: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885760A: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857610: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58857613: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857619: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5885761C: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885761F: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x58857622: jne 0x5885768a
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x58857624: push 0x1c7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857629: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885762E: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857634: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857639: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885763E: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857644: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857649: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885764E: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857654: mov ecx, dword ptr [eax + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885765A: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885765F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857664: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885766A: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885766F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857674: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885767A: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885767E: mov dword ptr [ecx + 0x78], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857685: jmp 0x588577d6
        __asm _emit 0xE9
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885768A: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885768F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857694: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58857698: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885769E: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588576A0: je 0x588576f3
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588576A2: push 0x1c7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576A7: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588576AC: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576B2: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576B7: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588576BC: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576C2: mov ecx, dword ptr [edx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576C8: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576CD: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588576D2: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576D8: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576DD: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588576E2: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588576E7: mov dword ptr [eax + 0x78], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576EE: jmp 0x588577d6
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576F3: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588576F8: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588576FD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857703: cmp byte ptr [ecx + 0x74], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x58857707: jne 0x58857797
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885770D: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857713: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58857716: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885771C: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58857720: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x58857724: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857729: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5885772C: ja 0x58857779
        __asm _emit 0x77
        __asm _emit 0x4B
        // 0x5885772E: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58857732: ja 0x58857779
        __asm _emit 0x77
        __asm _emit 0x45
        // 0x58857734: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885773A: push 0x1ae
        __asm _emit 0x68
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885773F: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857744: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885774A: mov ecx, dword ptr [eax + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857750: push 0x2e2
        __asm _emit 0x68
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857755: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885775A: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857760: push 0x1b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857765: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885776A: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857770: mov dword ptr [ecx + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857777: jmp 0x588577cd
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x58857779: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885777F: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857784: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857789: mov edx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885778F: mov ecx, dword ptr [edx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857795: jmp 0x588577b3
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x58857797: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885779D: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577A2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588577A7: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577AD: mov ecx, dword ptr [eax + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577B3: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577B8: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588577BD: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577C3: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577C8: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588577CD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588577D3: mov dword ptr [ecx + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x78
        // 0x588577D6: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577DC: push edi
        __asm _emit 0x57
        // 0x588577DD: call 0x588597f0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577E2: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588577E8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588577EB: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588577F1: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588577F4: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588577F7: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588577FA: jne 0x58857808
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588577FC: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857802: push edi
        __asm _emit 0x57
        // 0x58857803: call 0x58862460
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857808: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885780E: push ebx
        __asm _emit 0x53
        // 0x5885780F: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58857811: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58857813: call 0x588804f0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58857818: mov ecx, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885781E: push eax
        __asm _emit 0x50
        // 0x5885781F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857824: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885782B: pop edi
        __asm _emit 0x5F
        // 0x5885782C: mov dword ptr [esi + 0x2cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857832: mov dword ptr [esi + 0x2d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857838: pop esi
        __asm _emit 0x5E
        // 0x58857839: pop ebp
        __asm _emit 0x5D
        // 0x5885783A: pop ebx
        __asm _emit 0x5B
        // 0x5885783B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5885783D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x53
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58857842: add esp, 0xf8
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857848: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

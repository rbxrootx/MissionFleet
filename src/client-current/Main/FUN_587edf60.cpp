// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 727 bytes in 1 exact ranges.
// Source symbol alias: FUN_587edf60.

// Ghidra body range 0x587EDF60..0x587EE237; 727 mapped bytes.
extern "C" __declspec(naked) void FUN_587edf60_segment_00() {
    __asm {
        // 0x587EDF60: push ebp
        __asm _emit 0x55
        // 0x587EDF61: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587EDF63: and esp, 0xffffffc0
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xC0
        // 0x587EDF66: sub esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x74
        // 0x587EDF69: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EDF6E: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587EDF70: mov dword ptr [esp + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587EDF74: push ebx
        __asm _emit 0x53
        // 0x587EDF75: push esi
        __asm _emit 0x56
        // 0x587EDF76: push edi
        __asm _emit 0x57
        // 0x587EDF77: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x587EDF79: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EDF7D: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587EDF7F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EDF81: push eax
        __asm _emit 0x50
        // 0x587EDF82: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587EDF86: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDF8B: mov ecx, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EDF91: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDF97: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587EDF9A: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x587EDF9D: mov esi, 0x32
        __asm _emit 0xBE
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDFA2: lea ecx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587EDFA6: lea edx, [esi + 0x7fffffcc]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587EDFAC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EDFAE: je 0x587edfc1
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587EDFB0: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587EDFB2: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587EDFB4: je 0x587edfc1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EDFB6: mov byte ptr [ecx], dl
        __asm _emit 0x88
        __asm _emit 0x11
        // 0x587EDFB8: inc ecx
        __asm _emit 0x41
        // 0x587EDFB9: inc eax
        __asm _emit 0x40
        // 0x587EDFBA: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587EDFBD: jne 0x587edfa6
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587EDFBF: jmp 0x587edfc5
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587EDFC1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EDFC3: jne 0x587edfc6
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587EDFC5: dec ecx
        __asm _emit 0x49
        // 0x587EDFC6: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587EDFCA: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x587EDFCC: push eax
        __asm _emit 0x50
        // 0x587EDFCD: mov byte ptr [ecx], 0
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EDFD0: call 0x5897cff6
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EDFD5: mov esi, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EDFDB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587EDFDE: push 0x5899c158
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EDFE3: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EDFE7: push ecx
        __asm _emit 0x51
        // 0x587EDFE8: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EDFEA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EDFEC: je 0x587ee205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EDFF2: push 0x5899c150
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EDFF7: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EDFFB: push edx
        __asm _emit 0x52
        // 0x587EDFFC: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EDFFE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE000: je 0x587ee205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE006: push 0x5899c148
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE00B: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE00F: push eax
        __asm _emit 0x50
        // 0x587EE010: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE012: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE014: je 0x587ee205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE01A: push 0x5899c144
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE01F: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE023: push ecx
        __asm _emit 0x51
        // 0x587EE024: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE026: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE028: je 0x587ee205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE02E: push 0x5899c140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE033: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE037: push edx
        __asm _emit 0x52
        // 0x587EE038: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE03A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE03C: je 0x587ee1f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE042: push 0x5899c130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE047: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE04B: push eax
        __asm _emit 0x50
        // 0x587EE04C: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE04E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE050: je 0x587ee1f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE056: push 0x5899c128
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE05B: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE05F: push ecx
        __asm _emit 0x51
        // 0x587EE060: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE062: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE064: je 0x587ee1f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE06A: push 0x5899c11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE06F: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE073: push edx
        __asm _emit 0x52
        // 0x587EE074: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE076: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE078: je 0x587ee1f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE07E: push 0x5899c114
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE083: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE087: push eax
        __asm _emit 0x50
        // 0x587EE088: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE08A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE08C: je 0x587ee1f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE092: push 0x5899c110
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE097: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE09B: push ecx
        __asm _emit 0x51
        // 0x587EE09C: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE09E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE0A0: je 0x587ee1e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE0A6: push 0x5899c104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xC1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE0AB: lea edx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE0AF: push edx
        __asm _emit 0x52
        // 0x587EE0B0: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE0B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE0B4: je 0x587ee1e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE0BA: push 0x5899c0fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE0BF: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE0C3: push eax
        __asm _emit 0x50
        // 0x587EE0C4: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE0C6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE0C8: je 0x587ee1e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE0CE: push 0x5899c0f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE0D3: lea ecx, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE0D7: push ecx
        __asm _emit 0x51
        // 0x587EE0D8: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587EE0DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587EE0DC: je 0x587ee1e3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE0E2: mov edx, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE0E8: mov ecx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE0EE: lea esi, [ecx + 6]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x06
        // 0x587EE0F1: mov cl, byte ptr [esi]
        __asm _emit 0x8A
        __asm _emit 0x0E
        // 0x587EE0F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EE0F5: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587EE0F7: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EE0FB: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x587EE0FE: je 0x587ee122
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587EE100: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587EE102: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587EE104: je 0x587ee122
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587EE106: cmp cl, 0x30
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x587EE109: jl 0x587ee1c2
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE10F: cmp cl, 0x39
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x39
        // 0x587EE112: jg 0x587ee1c2
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE118: mov cl, byte ptr [edx + 1]
        __asm _emit 0x8A
        __asm _emit 0x4A
        __asm _emit 0x01
        // 0x587EE11B: inc edx
        __asm _emit 0x42
        // 0x587EE11C: inc ebx
        __asm _emit 0x43
        // 0x587EE11D: cmp cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x587EE120: jne 0x587ee102
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587EE122: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587EE126: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587EE128: jle 0x587ee17f
        __asm _emit 0x7E
        __asm _emit 0x55
        // 0x587EE12A: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x587EE12C: lea esi, [ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0xFF
        // 0x587EE12F: fld qword ptr [0x5898cb38]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE135: push esi
        __asm _emit 0x56
        // 0x587EE136: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587EE139: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x587EE13C: call 0x5873a730
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xC5
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x587EE141: movsx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x07
        // 0x587EE144: sub eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x30
        // 0x587EE147: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587EE14B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587EE14E: fild dword ptr [esp + 0x2c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587EE152: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x587EE154: fiadd dword ptr [esp + 0x28]
        __asm _emit 0xDA
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EE158: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xEB
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EE15D: cmp eax, 0xffff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE162: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EE166: jg 0x587ee216
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE16C: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587EE170: inc ecx
        __asm _emit 0x41
        // 0x587EE171: dec esi
        __asm _emit 0x4E
        // 0x587EE172: inc edi
        __asm _emit 0x47
        // 0x587EE173: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587EE175: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587EE179: jl 0x587ee12f
        __asm _emit 0x7C
        __asm _emit 0xB4
        // 0x587EE17B: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EE17F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587EE181: push eax
        __asm _emit 0x50
        // 0x587EE182: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE187: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587EE18B: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587EE18F: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587EE193: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587EE197: mov dword ptr [esp + 0x48], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587EE19B: mov dword ptr [esp + 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587EE19F: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587EE1A3: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587EE1A5: push ecx
        __asm _emit 0x51
        // 0x587EE1A6: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xD8
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587EE1AB: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE1B1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EE1B4: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587EE1B8: push edx
        __asm _emit 0x52
        // 0x587EE1B9: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587EE1BB: call 0x587b7700
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x95
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EE1C0: jmp 0x587ee21a
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x587EE1C2: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587EE1C7: push 0x5899a17c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EE1CC: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EE1D2: mov ecx, dword ptr [edi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE1D8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EE1DB: push eax
        __asm _emit 0x50
        // 0x587EE1DC: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xDB
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587EE1E1: jmp 0x587ee21a
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587EE1E3: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE1E9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EE1EB: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587EE1ED: call 0x587b7700
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x95
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EE1F2: jmp 0x587ee21a
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x587EE1F4: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE1FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EE1FC: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587EE1FE: call 0x587b7700
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x94
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EE203: jmp 0x587ee21a
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587EE205: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EE20B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EE20D: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587EE20F: call 0x587b7700
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x94
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587EE214: jmp 0x587ee21a
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587EE216: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EE21A: mov ecx, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EE220: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x17
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587EE225: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x587EE229: pop edi
        __asm _emit 0x5F
        // 0x587EE22A: pop esi
        __asm _emit 0x5E
        // 0x587EE22B: pop ebx
        __asm _emit 0x5B
        // 0x587EE22C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587EE22E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xE9
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EE233: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587EE235: pop ebp
        __asm _emit 0x5D
        // 0x587EE236: ret
        __asm _emit 0xC3
    }
}

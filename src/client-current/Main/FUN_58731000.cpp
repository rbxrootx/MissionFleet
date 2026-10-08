// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 547 bytes in 1 exact ranges.
// Source symbol alias: FUN_58731000.

// Ghidra body range 0x58731000..0x58731223; 547 mapped bytes.
extern "C" __declspec(naked) void FUN_58731000_segment_00() {
    __asm {
        // 0x58731000: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58731002: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58731007: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873100D: push eax
        __asm _emit 0x50
        // 0x5873100E: push ecx
        __asm _emit 0x51
        // 0x5873100F: push ebx
        __asm _emit 0x53
        // 0x58731010: push ebp
        __asm _emit 0x55
        // 0x58731011: push esi
        __asm _emit 0x56
        // 0x58731012: push edi
        __asm _emit 0x57
        // 0x58731013: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58731018: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873101A: push eax
        __asm _emit 0x50
        // 0x5873101B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873101F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731025: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58731027: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873102B: mov dword ptr [esi], 0x5898c4e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58731031: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731037: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58731039: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873103D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873103F: je 0x5873104f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731041: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58731043: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58731045: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731047: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58731049: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873104F: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731055: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731057: je 0x58731067
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731059: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873105B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873105D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873105F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58731061: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731067: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873106D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873106F: je 0x5873107f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731071: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58731073: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58731075: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731077: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58731079: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873107F: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731085: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731087: je 0x58731097
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731089: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873108B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873108D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873108F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58731091: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731097: lea edi, [esi + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5873109A: mov ebp, 0xb
        __asm _emit 0xBD
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873109F: nop
        __asm _emit 0x90
        // 0x587310A0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587310A2: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587310A4: je 0x587310b0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587310A6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587310A8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587310AA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587310AC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587310AE: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x587310B0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587310B3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587310B6: jne 0x587310a0
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x587310B8: lea edi, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587310BE: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587310C3: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x587310C6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587310C8: je 0x587310d5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587310CA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587310CC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587310CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587310D0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587310D2: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x587310D5: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587310D7: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587310D9: je 0x587310e5
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587310DB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587310DD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587310DF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587310E1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587310E3: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x587310E5: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x587310E8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587310EA: je 0x587310f7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587310EC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587310EE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587310F0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587310F2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587310F4: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x587310F7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587310FA: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587310FD: jne 0x587310c3
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x587310FF: lea edi, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731105: mov ebp, 0xa
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873110A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731110: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58731112: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731114: je 0x58731120
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58731116: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58731118: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873111A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873111C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873111E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58731120: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58731123: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58731126: jne 0x58731110
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58731128: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873112E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731130: je 0x58731140
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731132: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58731134: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58731136: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731138: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873113A: mov dword ptr [esi + 0xe8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731140: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731146: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731148: je 0x58731158
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873114A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873114C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873114E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731150: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58731152: mov dword ptr [esi + 0xf8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731158: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873115E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731160: je 0x58731170
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731162: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58731164: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58731166: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731168: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873116A: mov dword ptr [esi + 0xfc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731170: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731176: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731178: je 0x58731188
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873117A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873117C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873117E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731180: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58731182: mov dword ptr [esi + 0x100], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731188: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873118E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58731190: je 0x587311a0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58731192: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58731194: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58731196: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58731198: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873119A: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311A0: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311A6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587311A8: je 0x587311b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587311AA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587311AC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587311AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587311B0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587311B2: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311B8: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311BE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587311C0: je 0x587311d0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587311C2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587311C4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587311C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587311C8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587311CA: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311D0: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311D6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587311D8: je 0x587311e8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587311DA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587311DC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587311DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587311E0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587311E2: mov dword ptr [esi + 0x104], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311E8: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587311EE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587311F0: je 0x58731200
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587311F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587311F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587311F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587311F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587311FA: mov dword ptr [esi + 0xf4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731200: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58731202: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873120A: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x1A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x5873120F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58731213: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873121A: pop ecx
        __asm _emit 0x59
        // 0x5873121B: pop edi
        __asm _emit 0x5F
        // 0x5873121C: pop esi
        __asm _emit 0x5E
        // 0x5873121D: pop ebp
        __asm _emit 0x5D
        // 0x5873121E: pop ebx
        __asm _emit 0x5B
        // 0x5873121F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58731222: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1219 bytes in 3 exact ranges.
// Source symbol alias: FUN_58881150.

// Ghidra body range 0x58881150..0x588814AD; 861 mapped bytes.
extern "C" __declspec(naked) void FUN_58881150_segment_00() {
    __asm {
        // 0x58881150: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58881152: push 0x589867e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x67
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58881157: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888115D: push eax
        __asm _emit 0x50
        // 0x5888115E: push ecx
        __asm _emit 0x51
        // 0x5888115F: push ebx
        __asm _emit 0x53
        // 0x58881160: push ebp
        __asm _emit 0x55
        // 0x58881161: push esi
        __asm _emit 0x56
        // 0x58881162: push edi
        __asm _emit 0x57
        // 0x58881163: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58881168: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888116A: push eax
        __asm _emit 0x50
        // 0x5888116B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888116F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881175: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58881177: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888117B: mov dword ptr [esi], 0x5899f918
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0xF9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58881181: mov ecx, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881187: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58881189: mov dword ptr [esp + 0x20], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881191: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881193: je 0x588811a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881195: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881197: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881199: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888119B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888119D: mov dword ptr [esi + 0xd4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811A3: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811A9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588811AB: je 0x588811bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588811AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588811AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588811B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588811B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588811B5: mov dword ptr [esi + 0xd8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811BB: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811C1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588811C3: je 0x588811d3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588811C5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588811C7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588811C9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588811CB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588811CD: mov dword ptr [esi + 0xdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811D3: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811D9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588811DB: je 0x588811eb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588811DD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588811DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588811E1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588811E3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588811E5: mov dword ptr [esi + 0xe0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811EB: lea edi, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811F1: mov ebp, 9
        __asm _emit 0xBD
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588811F6: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588811F8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588811FA: je 0x58881206
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588811FC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588811FE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881200: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881202: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881204: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58881206: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58881209: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888120C: jne 0x588811f6
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5888120E: lea edi, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881214: mov ebp, 6
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881219: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881220: mov ecx, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x48
        // 0x58881223: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881225: je 0x58881232
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58881227: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881229: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888122B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888122D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888122F: mov dword ptr [edi + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x48
        // 0x58881232: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58881234: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881236: je 0x58881242
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58881238: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888123A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888123C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888123E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881240: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58881242: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58881245: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881247: je 0x58881254
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58881249: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888124B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888124D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888124F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881251: mov dword ptr [edi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x18
        // 0x58881254: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x58881257: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881259: je 0x58881266
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888125B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888125D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888125F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881261: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881263: mov dword ptr [edi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x60
        // 0x58881266: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x58881269: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888126B: je 0x58881278
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888126D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888126F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881271: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881273: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881275: mov dword ptr [edi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x78
        // 0x58881278: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888127B: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888127E: jne 0x58881220
        __asm _emit 0x75
        __asm _emit 0xA0
        // 0x58881280: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881286: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881288: je 0x58881298
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888128A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888128C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888128E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881290: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881292: mov dword ptr [esi + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881298: mov ecx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888129E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588812A0: je 0x588812b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588812A2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588812A4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588812A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588812A8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588812AA: mov dword ptr [esi + 0x1b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588812B0: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588812B6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588812B8: je 0x588812c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588812BA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588812BC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588812BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588812C0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588812C2: mov dword ptr [esi + 0x1b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588812C8: lea edi, [esi + 0x1c8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588812CE: mov ebp, 0xb
        __asm _emit 0xBD
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588812D3: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588812D5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588812D7: je 0x588812e3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588812D9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588812DB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588812DD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588812DF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588812E1: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588812E3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588812E6: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588812E9: jne 0x588812d3
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588812EB: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588812EE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588812F0: je 0x588812fd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588812F2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588812F4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588812F6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588812F8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588812FA: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588812FD: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58881300: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881302: je 0x5888130f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58881304: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881306: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881308: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888130A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888130C: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x5888130F: lea edi, [esi + 0x13c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881315: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888131A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881320: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58881323: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881325: je 0x58881332
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58881327: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881329: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888132B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888132D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888132F: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x58881332: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58881334: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881336: je 0x58881342
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58881338: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888133A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888133C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888133E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881340: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58881342: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58881345: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58881348: jne 0x58881320
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x5888134A: mov ecx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881350: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881352: je 0x58881362
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881354: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881356: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881358: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888135A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888135C: mov dword ptr [esi + 0x1a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881362: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881368: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888136A: je 0x5888137a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888136C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888136E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881370: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881372: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881374: mov dword ptr [esi + 0x1ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888137A: mov ecx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881380: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881382: je 0x58881392
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881384: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881386: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881388: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888138A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888138C: mov dword ptr [esi + 0x1b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881392: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881398: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888139A: je 0x588813aa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888139C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888139E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588813A0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588813A2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588813A4: mov dword ptr [esi + 0x238], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813AA: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813B0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588813B2: je 0x588813c2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588813B4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588813B6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588813B8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588813BA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588813BC: mov dword ptr [esi + 0x240], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813C2: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813C8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588813CA: je 0x588813da
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588813CC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588813CE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588813D0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588813D2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588813D4: mov dword ptr [esi + 0x23c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813DA: mov ecx, dword ptr [esi + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813E0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588813E2: je 0x588813f2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588813E4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588813E6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588813E8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588813EA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588813EC: mov dword ptr [esi + 0x19c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813F2: mov ecx, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588813F8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588813FA: je 0x5888140a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588813FC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588813FE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881400: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881402: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881404: mov dword ptr [esi + 0x1a0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888140A: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881410: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881412: je 0x58881422
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881414: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881416: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881418: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888141A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888141C: mov dword ptr [esi + 0x1a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881422: lea edi, [esi + 0x244]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881428: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888142D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58881430: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58881432: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881434: je 0x58881440
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58881436: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881438: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888143A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888143C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888143E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58881440: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58881443: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58881446: jne 0x58881430
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58881448: lea edi, [esi + 0x270]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888144E: mov ebp, 0xa
        __asm _emit 0xBD
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881453: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58881455: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881457: je 0x58881463
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58881459: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888145B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888145D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888145F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881461: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58881463: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58881466: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58881469: jne 0x58881453
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5888146B: lea edi, [esi + 0x200]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881471: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881476: mov ecx, dword ptr [edi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xF4
        // 0x58881479: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888147B: je 0x58881488
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888147D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888147F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881481: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881483: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881485: mov dword ptr [edi - 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0xF4
        // 0x58881488: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888148A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5888148C: je 0x58881498
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5888148E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881490: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881492: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881494: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881496: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58881498: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888149B: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5888149E: jne 0x58881476
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x588814A0: lea edi, [esi + 0x20c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814A6: mov ebp, 9
        __asm _emit 0xBD
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814AB: jmp 0x588814b0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588814B0..0x588815F8; 328 mapped bytes.
extern "C" __declspec(naked) void FUN_58881150_segment_01() {
    __asm {
        // 0x588814B0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588814B2: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588814B4: je 0x588814c0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588814B6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588814B8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588814BA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588814BC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588814BE: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588814C0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588814C3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588814C6: jne 0x588814b0
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588814C8: mov ecx, dword ptr [esi + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814CE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588814D0: je 0x588814e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588814D2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588814D4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588814D6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588814D8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588814DA: mov dword ptr [esi + 0x234], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814E0: mov ecx, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814E6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588814E8: je 0x588814f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588814EA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588814EC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588814EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588814F0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588814F2: mov dword ptr [esi + 0x1bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814F8: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588814FE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881500: je 0x58881510
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881502: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881504: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881506: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881508: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888150A: mov dword ptr [esi + 0x1c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881510: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881516: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881518: je 0x58881528
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888151A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888151C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888151E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881520: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881522: mov dword ptr [esi + 0x1c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881528: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888152E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881530: je 0x58881540
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881532: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881534: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881536: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881538: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888153A: mov dword ptr [esi + 0x258], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881540: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881546: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881548: je 0x58881558
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888154A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888154C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888154E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881550: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881552: mov dword ptr [esi + 0x25c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881558: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888155E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881560: je 0x58881570
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881562: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881564: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881566: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881568: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888156A: mov dword ptr [esi + 0x260], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881570: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881576: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881578: je 0x58881588
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888157A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888157C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888157E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881580: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881582: mov dword ptr [esi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881588: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888158E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58881590: je 0x588815a0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881592: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881594: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58881596: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58881598: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5888159A: mov dword ptr [esi + 0x264], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815A0: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815A6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588815A8: je 0x588815b8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588815AA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588815AC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588815AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588815B0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588815B2: mov dword ptr [esi + 0x268], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815B8: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815BE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588815C0: je 0x588815d0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588815C2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588815C4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588815C6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588815C8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588815CA: mov dword ptr [esi + 0x26c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815D0: mov ecx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815D6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588815D8: je 0x588815e8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588815DA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588815DC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588815DE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588815E0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588815E2: mov dword ptr [esi + 0x298], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815E8: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588815EE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588815F0: je 0x588815fb
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588815F2: push eax
        __asm _emit 0x50
        // 0x588815F3: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xB6
        __asm _emit 0x0F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588815FB..0x58881619; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_58881150_segment_02() {
    __asm {
        // 0x588815FB: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881601: push eax
        __asm _emit 0x50
        // 0x58881602: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881608: mov dword ptr [esi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888160E: mov dword ptr [esi + 0xc4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881614: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xB6
        __asm _emit 0x0F
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1107 bytes in 2 exact ranges.
// Source symbol alias: FUN_588092f0.

// Ghidra body range 0x588092F0..0x5880947D; 397 mapped bytes.
extern "C" __declspec(naked) void FUN_588092f0_segment_00() {
    __asm {
        // 0x588092F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588092F2: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588092F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588092FD: push eax
        __asm _emit 0x50
        // 0x588092FE: push ecx
        __asm _emit 0x51
        // 0x588092FF: push ebx
        __asm _emit 0x53
        // 0x58809300: push ebp
        __asm _emit 0x55
        // 0x58809301: push esi
        __asm _emit 0x56
        // 0x58809302: push edi
        __asm _emit 0x57
        // 0x58809303: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58809308: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880930A: push eax
        __asm _emit 0x50
        // 0x5880930B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880930F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809315: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58809317: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880931B: mov dword ptr [esi], 0x5899d5f4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0xD5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58809321: mov ecx, dword ptr [esi + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809327: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58809329: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880932D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5880932F: je 0x5880933f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809331: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809333: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58809335: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809337: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58809339: mov dword ptr [esi + 0x3fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880933F: mov ecx, dword ptr [esi + 0x400]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809345: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809347: je 0x58809357
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809349: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880934B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880934D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880934F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58809351: mov dword ptr [esi + 0x400], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809357: mov ecx, dword ptr [esi + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880935D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5880935F: je 0x5880936f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809361: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809363: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58809365: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809367: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58809369: mov dword ptr [esi + 0x404], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880936F: lea edi, [esi + 0x408]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809375: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880937A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809380: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58809382: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809384: je 0x58809390
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58809386: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809388: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880938A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880938C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880938E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58809390: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58809393: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58809396: jne 0x58809380
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58809398: mov ecx, dword ptr [esi + 0x428]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880939E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588093A0: je 0x588093b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588093A2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588093A4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588093A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588093A8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588093AA: mov dword ptr [esi + 0x428], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093B0: mov ecx, dword ptr [esi + 0x3ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093B6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588093B8: je 0x588093c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588093BA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588093BC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588093BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588093C0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588093C2: mov dword ptr [esi + 0x3ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093C8: mov ecx, dword ptr [esi + 0x3a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093CE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588093D0: je 0x588093e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588093D2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588093D4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588093D6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588093D8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588093DA: mov dword ptr [esi + 0x3a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093E0: mov ecx, dword ptr [esi + 0x3b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093E6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588093E8: je 0x588093f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588093EA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588093EC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588093EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588093F0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588093F2: mov dword ptr [esi + 0x3b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093F8: mov ecx, dword ptr [esi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588093FE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809400: je 0x58809410
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809402: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809404: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58809406: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809408: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880940A: mov dword ptr [esi + 0x42c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809410: mov ecx, dword ptr [esi + 0x430]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809416: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809418: je 0x58809428
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880941A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880941C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880941E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809420: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58809422: mov dword ptr [esi + 0x430], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809428: mov ecx, dword ptr [esi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880942E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809430: je 0x58809440
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809432: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809434: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58809436: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809438: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880943A: mov dword ptr [esi + 0x394], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809440: mov ecx, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809446: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809448: je 0x58809458
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880944A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880944C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880944E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809450: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58809452: mov dword ptr [esi + 0x398], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809458: mov ecx, dword ptr [esi + 0x39c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880945E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809460: je 0x58809470
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809462: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809464: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58809466: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809468: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880946A: mov dword ptr [esi + 0x39c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809470: lea edi, [esi + 0x374]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809476: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880947B: jmp 0x58809480
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58809480..0x58809746; 710 mapped bytes.
extern "C" __declspec(naked) void FUN_588092f0_segment_01() {
    __asm {
        // 0x58809480: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58809482: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809484: je 0x58809490
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58809486: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58809488: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880948A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880948C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880948E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58809490: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58809493: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58809496: jne 0x58809480
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58809498: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5880949A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5880949C: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5880949F: shr eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588094A2: lea edi, [ecx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x81
        // 0x588094A5: mov ecx, dword ptr [esi + edi*4 + 0x3b8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094AC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588094AE: je 0x588094bf
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588094B0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588094B2: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588094B4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588094B6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588094B8: mov dword ptr [esi + edi*4 + 0x3b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094BF: mov ecx, dword ptr [esi + edi*4 + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094C6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588094C8: je 0x588094d9
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588094CA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588094CC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588094CE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588094D0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588094D2: mov dword ptr [esi + edi*4 + 0x3d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094D9: inc ebp
        __asm _emit 0x45
        // 0x588094DA: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x588094DD: jl 0x58809498
        __asm _emit 0x7C
        __asm _emit 0xB9
        // 0x588094DF: lea edi, [esi + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094E5: mov ebp, 0x20
        __asm _emit 0xBD
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588094F0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588094F2: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588094F4: je 0x58809500
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588094F6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588094F8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588094FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588094FC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588094FE: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58809500: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58809503: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58809506: jne 0x588094f0
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58809508: mov ecx, dword ptr [esi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880950E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809510: je 0x58809520
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809512: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809514: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809516: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809518: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880951A: mov dword ptr [esi + 0x904], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809520: mov ecx, dword ptr [esi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809526: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809528: je 0x58809538
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880952A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880952C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880952E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809530: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809532: mov dword ptr [esi + 0x908], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809538: mov ecx, dword ptr [esi + 0x8f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880953E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809540: je 0x58809550
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809542: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809544: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809546: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809548: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880954A: mov dword ptr [esi + 0x8f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809550: mov ecx, dword ptr [esi + 0x8f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809556: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809558: je 0x58809568
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880955A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880955C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880955E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809560: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809562: mov dword ptr [esi + 0x8f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809568: mov ecx, dword ptr [esi + 0x8fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880956E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809570: je 0x58809580
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809572: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809574: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809576: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809578: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880957A: mov dword ptr [esi + 0x8fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809580: mov ecx, dword ptr [esi + 0x900]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809586: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809588: je 0x58809598
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880958A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880958C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880958E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809590: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809592: mov dword ptr [esi + 0x900], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809598: mov ecx, dword ptr [esi + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880959E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588095A0: je 0x588095b0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588095A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588095A4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588095A6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588095A8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588095AA: mov dword ptr [esi + 0x410], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095B0: mov ecx, dword ptr [esi + 0x414]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095B6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588095B8: je 0x588095c8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588095BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588095BC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588095BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588095C0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588095C2: mov dword ptr [esi + 0x414], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095C8: mov ecx, dword ptr [esi + 0x418]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095CE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588095D0: je 0x588095e0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588095D2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588095D4: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588095D6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588095D8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588095DA: mov dword ptr [esi + 0x418], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095E0: mov ecx, dword ptr [esi + 0x420]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095E6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588095E8: je 0x588095f8
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588095EA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588095EC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588095EE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588095F0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588095F2: mov dword ptr [esi + 0x420], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095F8: mov ecx, dword ptr [esi + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588095FE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809600: je 0x58809610
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809602: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809604: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809606: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809608: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880960A: mov dword ptr [esi + 0x424], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809610: mov ecx, dword ptr [esi + 0x41c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809616: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809618: je 0x58809628
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880961A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880961C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880961E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809620: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809622: mov dword ptr [esi + 0x41c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809628: mov ecx, dword ptr [esi + 0x8b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880962E: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809630: je 0x58809640
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809632: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809634: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809636: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809638: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880963A: mov dword ptr [esi + 0x8b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809640: mov ecx, dword ptr [esi + 0x8b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809646: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809648: je 0x58809658
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880964A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880964C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880964E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809650: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809652: mov dword ptr [esi + 0x8b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809658: lea edi, [esi + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880965E: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809663: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58809665: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809667: je 0x58809673
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58809669: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880966B: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5880966D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880966F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809671: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58809673: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58809676: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58809679: jne 0x58809663
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5880967B: mov ecx, dword ptr [esi + 0x8c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809681: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809683: je 0x58809693
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809685: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809687: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809689: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880968B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880968D: mov dword ptr [esi + 0x8c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809693: mov ecx, dword ptr [esi + 0x8c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809699: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5880969B: je 0x588096ab
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880969D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880969F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588096A1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588096A3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588096A5: mov dword ptr [esi + 0x8c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096AB: mov ecx, dword ptr [esi + 0x8cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096B1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588096B3: je 0x588096c3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588096B5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588096B7: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588096B9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588096BB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588096BD: mov dword ptr [esi + 0x8cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096C3: mov ecx, dword ptr [esi + 0x8d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096C9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588096CB: je 0x588096db
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588096CD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588096CF: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588096D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588096D3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588096D5: mov dword ptr [esi + 0x8d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096DB: mov ecx, dword ptr [esi + 0x8d4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096E1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588096E3: je 0x588096f3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588096E5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588096E7: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588096E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588096EB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588096ED: mov dword ptr [esi + 0x8d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096F3: mov ecx, dword ptr [esi + 0x434]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588096F9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588096FB: je 0x5880970b
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588096FD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588096FF: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809701: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58809703: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58809705: mov dword ptr [esi + 0x434], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880970B: mov ecx, dword ptr [esi + 0x438]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809711: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58809713: je 0x58809723
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58809715: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58809717: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58809719: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5880971B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880971D: mov dword ptr [esi + 0x438], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809723: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58809725: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880972D: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58809732: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58809736: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880973D: pop ecx
        __asm _emit 0x59
        // 0x5880973E: pop edi
        __asm _emit 0x5F
        // 0x5880973F: pop esi
        __asm _emit 0x5E
        // 0x58809740: pop ebp
        __asm _emit 0x5D
        // 0x58809741: pop ebx
        __asm _emit 0x5B
        // 0x58809742: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58809745: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1351 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973020.

// Ghidra body range 0x58973020..0x58973567; 1351 mapped bytes.
extern "C" __declspec(naked) void FUN_58973020_segment_00() {
    __asm {
        // 0x58973020: push ebp
        __asm _emit 0x55
        // 0x58973021: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58973023: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58973025: push 0x5898add8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xAD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897302A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973030: push eax
        __asm _emit 0x50
        // 0x58973031: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973038: sub esp, 0x294
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897303E: push ebx
        __asm _emit 0x53
        // 0x5897303F: push esi
        __asm _emit 0x56
        // 0x58973040: push edi
        __asm _emit 0x57
        // 0x58973041: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58973044: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58973046: push edi
        __asm _emit 0x57
        // 0x58973047: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x5897304A: call 0x58971e50
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897304F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58973051: je 0x58973068
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58973053: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973055: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58973058: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897305F: pop edi
        __asm _emit 0x5F
        // 0x58973060: pop esi
        __asm _emit 0x5E
        // 0x58973061: pop ebx
        __asm _emit 0x5B
        // 0x58973062: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58973064: pop ebp
        __asm _emit 0x5D
        // 0x58973065: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58973068: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5897306B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5897306D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5897306F: je 0x589730b6
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58973071: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58973073: call 0x58973810
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973078: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897307A: jne 0x589730b6
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x5897307C: mov edi, 0x589ce694
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58973081: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973084: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973086: lea edx, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x44
        // 0x58973089: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897308B: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897308D: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897308F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973091: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973093: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973095: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973098: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897309A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5897309C: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897309F: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x589730A1: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x589730A3: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x589730A6: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589730AD: pop edi
        __asm _emit 0x5F
        // 0x589730AE: pop esi
        __asm _emit 0x5E
        // 0x589730AF: pop ebx
        __asm _emit 0x5B
        // 0x589730B0: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x589730B2: pop ebp
        __asm _emit 0x5D
        // 0x589730B3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x589730B6: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x589730B8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589730BA: call dword ptr [edx + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x589730BD: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE4
        // 0x589730C0: lea eax, [ebp - 0x2a0]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589730C6: add esi, 0x44
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x44
        // 0x589730C9: push eax
        __asm _emit 0x50
        // 0x589730CA: mov dword ptr [ebp - 0x1dc], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x24
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589730D0: call 0x58975050
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589730D5: mov dword ptr [ebp - 0x1d8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589730DB: mov dword ptr [ebp - 0x2a0], 0x58972ff0
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xF0
        __asm _emit 0x2F
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589730E5: lea ecx, [ebp - 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xE4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589730EB: push 0x589b6e48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x6E
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x589730F0: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x589730F3: push edx
        __asm _emit 0x52
        // 0x589730F4: push 0x5897d5dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xD5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589730F9: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x589730FB: push ecx
        __asm _emit 0x51
        // 0x589730FC: call 0x5897d5d6
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973101: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58973104: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58973106: je 0x58973155
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58973108: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5897310B: mov edi, dword ptr [ebp - 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x24
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973111: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58973114: lea edx, [eax + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x44
        // 0x58973117: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58973119: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x5897311B: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x5897311D: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x5897311F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58973121: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58973123: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58973125: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58973128: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897312A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5897312C: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897312F: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973131: lea ecx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973137: push ecx
        __asm _emit 0x51
        // 0x58973138: call 0x589752e0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897313D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58973140: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58973142: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58973145: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897314C: pop edi
        __asm _emit 0x5F
        // 0x5897314D: pop esi
        __asm _emit 0x5E
        // 0x5897314E: pop ebx
        __asm _emit 0x5B
        // 0x5897314F: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58973151: pop ebp
        __asm _emit 0x5D
        // 0x58973152: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58973155: push 0x168
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897315A: lea edx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973160: push 0x3e
        __asm _emit 0x6A
        __asm _emit 0x3E
        // 0x58973162: push edx
        __asm _emit 0x52
        // 0x58973163: call 0x58975210
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973168: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5897316B: push 0x1000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973170: mov dword ptr [ebp - 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xC0
        // 0x58973173: mov dword ptr [ebp - 0x68], 0x58972dc0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x98
        __asm _emit 0xC0
        __asm _emit 0x2D
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897317A: mov dword ptr [ebp - 0x64], 0x58972de0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x9C
        __asm _emit 0xE0
        __asm _emit 0x2D
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58973181: mov dword ptr [ebp - 0x60], 0x58972e30
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xA0
        __asm _emit 0x30
        __asm _emit 0x2E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58973188: mov dword ptr [ebp - 0x54], 0x58972e90
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xAC
        __asm _emit 0x90
        __asm _emit 0x2E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897318F: mov dword ptr [ebp - 0x50], 0x58972eb0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xB0
        __asm _emit 0xB0
        __asm _emit 0x2E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58973196: mov dword ptr [ebp - 0x4c], 0x58972f30
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xB4
        __asm _emit 0x30
        __asm _emit 0x2F
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5897319D: mov dword ptr [ebp - 0x48], 0x58974e40
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xB8
        __asm _emit 0x40
        __asm _emit 0x4E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589731A4: mov dword ptr [ebp - 0x44], 0x5897b780
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xBC
        __asm _emit 0x80
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x589731AB: mov dword ptr [ebp - 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xA4
        // 0x589731AE: mov dword ptr [ebp - 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xA8
        // 0x589731B1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589731B6: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x589731B9: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xC4
        // 0x589731BC: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x589731BF: mov ebx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xE8
        // 0x589731C2: lea eax, [ebp - 0x70]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x90
        // 0x589731C5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589731C7: mov dword ptr [ebp - 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589731CD: call 0x58972590
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589731D2: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589731D4: mov dword ptr [ebp - 0x1bc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589731DA: call 0x58972580
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589731DF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589731E1: mov dword ptr [ebp - 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589731E7: call 0x58973810
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589731EC: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x589731EE: je 0x58973203
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x589731F0: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589731F5: mov dword ptr [ebp - 0x1b4], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589731FB: mov dword ptr [ebp - 0x1b0], esi
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x50
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973201: jmp 0x5897321c
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58973203: mov dword ptr [ebp - 0x1b4], 3
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897320D: mov dword ptr [ebp - 0x1b0], 2
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973217: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897321C: lea ecx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973222: push ecx
        __asm _emit 0x51
        // 0x58973223: call 0x58975720
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973228: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897322B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897322D: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5897322F: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973234: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x58973236: je 0x5897323f
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58973238: mov byte ptr [ebp - 0x127], 1
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0xD9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5897323F: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58973241: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973243: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973248: test al, 8
        __asm _emit 0xA8
        __asm _emit 0x08
        // 0x5897324A: je 0x58973253
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5897324C: mov byte ptr [ebp - 0x126], 1
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x58973253: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58973255: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973257: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897325C: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5897325E: je 0x58973270
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58973260: lea edx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973266: push esi
        __asm _emit 0x56
        // 0x58973267: push edx
        __asm _emit 0x52
        // 0x58973268: call 0x589759a0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897326D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58973270: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58973272: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973274: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973279: test al, 0x40
        __asm _emit 0xA8
        __asm _emit 0x40
        // 0x5897327B: je 0x58973289
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5897327D: mov eax, dword ptr [ebx + 0x680]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973283: mov dword ptr [ebp - 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973289: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5897328B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897328D: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973292: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58973294: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973296: push eax
        __asm _emit 0x50
        // 0x58973297: call 0x589725f0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897329C: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589732A1: lea ecx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732A7: push eax
        __asm _emit 0x50
        // 0x589732A8: push ecx
        __asm _emit 0x51
        // 0x589732A9: call 0x58975700
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589732AE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589732B1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589732B3: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x589732B5: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732BA: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x589732BC: je 0x589732cd
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x589732BE: lea edx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732C4: push edx
        __asm _emit 0x52
        // 0x589732C5: call 0x58975ca0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589732CA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589732CD: mov ecx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732D3: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589732D8: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x589732DA: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x589732DD: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732E3: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x589732E6: mov eax, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732EC: mov dword ptr [eax + 0x5c], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x5C
        // 0x589732EF: mov ecx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732F5: mov dword ptr [ecx + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x589732F8: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589732FE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973300: mov dword ptr [edx + 0xb0], esi
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973306: mov eax, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897330C: mov dword ptr [eax + 0xb4], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973312: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973317: test ah, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5897331A: je 0x5897335c
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5897331C: mov ecx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973322: mov dword ptr [ecx + 8], 2
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973329: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897332F: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58973332: mov eax, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973338: mov dword ptr [eax + 0x5c], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x5C
        // 0x5897333B: mov ecx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973341: mov dword ptr [ecx + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x58973344: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897334A: mov dword ptr [edx + 0xb0], esi
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973350: mov eax, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973356: mov dword ptr [eax + 0xb4], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897335C: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5897335E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973360: call 0x58972550
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973365: test ah, 0x20
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58973368: je 0x589733a6
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5897336A: mov ecx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973370: mov dword ptr [ecx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58973373: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973379: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x5897337C: mov eax, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973382: mov dword ptr [eax + 0x5c], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x5C
        // 0x58973385: mov ecx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897338B: mov dword ptr [ecx + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x5897338E: mov edx, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973394: mov dword ptr [edx + 0xb0], esi
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897339A: mov eax, dword ptr [ebp - 0x194]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733A0: mov dword ptr [eax + 0xb4], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589733A6: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589733A8: mov byte ptr [ebp - 0x111], 1
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x589733AF: call 0x58972490
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733B4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589733B6: mov word ptr [ebp - 0x110], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733BD: call 0x589724a0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733C2: lea ecx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733C8: push esi
        __asm _emit 0x56
        // 0x589733C9: push ecx
        __asm _emit 0x51
        // 0x589733CA: mov word ptr [ebp - 0x10e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xF2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733D1: call 0x58975450
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589733D6: mov eax, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x589733D9: push esi
        __asm _emit 0x56
        // 0x589733DA: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x589733DD: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x589733E0: push eax
        __asm _emit 0x50
        // 0x589733E1: mov eax, dword ptr [ebp - 0x1d4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733E7: lea edx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589733ED: push esi
        __asm _emit 0x56
        // 0x589733EE: push edx
        __asm _emit 0x52
        // 0x589733EF: call dword ptr [eax + 8]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x589733F2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x589733F4: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x589733F7: cmp ebx, esi
        __asm _emit 0x3B
        __asm _emit 0xDE
        // 0x589733F9: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x589733FC: mov dword ptr [ebp - 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE0
        // 0x589733FF: je 0x5897340c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58973401: push esi
        __asm _emit 0x56
        // 0x58973402: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973404: call 0x58972bc0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973409: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xDC
        // 0x5897340C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897340E: mov dword ptr [ebp - 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x58973411: mov dword ptr [ebp - 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x58973414: mov dword ptr [ebp - 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x58973417: mov dword ptr [ebp - 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5897341A: call 0x58972580
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897341F: dec eax
        __asm _emit 0x48
        // 0x58973420: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973422: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x58973425: call 0x58972580
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897342A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5897342C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897342E: dec esi
        __asm _emit 0x4E
        // 0x5897342F: call 0x589725a0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973434: imul esi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF0
        // 0x58973437: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58973439: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897343B: call 0x58972bc0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973440: mov ecx, dword ptr [ebp - 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973446: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58973448: mov eax, dword ptr [ebp - 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897344E: mov dword ptr [ebp - 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x58973451: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58973453: jae 0x589734f0
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973459: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x5897345C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5897345E: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x58973460: je 0x58973497
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58973462: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58973464: je 0x58973497
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58973466: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58973469: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897346B: jle 0x58973497
        __asm _emit 0x7E
        __asm _emit 0x2A
        // 0x5897346D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897346F: call 0x589725a0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973474: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58973477: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58973479: jge 0x5897347f
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5897347B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5897347D: jmp 0x58973486
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5897347F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58973481: call 0x589725a0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973486: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58973488: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x5897348B: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897348D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5897348F: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58973492: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58973494: mov esi, dword ptr [ebp - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x58973497: mov eax, dword ptr [ebx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x28
        // 0x5897349A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897349C: jne 0x589734af
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5897349E: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x589734A1: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x589734A4: push ecx
        __asm _emit 0x51
        // 0x589734A5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589734A7: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x589734A9: push eax
        __asm _emit 0x50
        // 0x589734AA: call 0x589737b0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589734AF: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x589734B2: dec eax
        __asm _emit 0x48
        // 0x589734B3: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x589734B6: js 0x589734c4
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x589734B8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589734BA: call 0x589725a0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589734BF: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x589734C1: mov dword ptr [ebp - 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x589734C4: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x589734C7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589734C9: lea edx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589734CF: push ecx
        __asm _emit 0x51
        // 0x589734D0: push edx
        __asm _emit 0x52
        // 0x589734D1: call 0x589754d0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589734D6: mov eax, dword ptr [ebp - 0x108]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589734DC: mov ecx, dword ptr [ebp - 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589734E2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589734E5: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x589734E7: jb 0x58973459
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589734ED: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x589734F0: lea ecx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589734F6: push ecx
        __asm _emit 0x51
        // 0x589734F7: call 0x58975340
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589734FC: lea edx, [ebp - 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973502: push edx
        __asm _emit 0x52
        // 0x58973503: call 0x589752e0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973508: mov ecx, dword ptr [ebx + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897350E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58973511: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58973513: je 0x58973557
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58973515: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58973517: mov dl, byte ptr [eax + 0x4b4]
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897351D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5897351F: je 0x58973557
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58973521: call 0x58974cf0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973526: mov esi, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58973529: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5897352B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5897352D: push esi
        __asm _emit 0x56
        // 0x5897352E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58973530: call dword ptr [edx + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x10
        // 0x58973533: mov ecx, dword ptr [ebx + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973539: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5897353B: push edi
        __asm _emit 0x57
        // 0x5897353C: call 0x58973980
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973541: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58973543: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58973545: push esi
        __asm _emit 0x56
        // 0x58973546: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58973548: call dword ptr [eax + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5897354B: mov ecx, dword ptr [ebx + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973551: push edi
        __asm _emit 0x57
        // 0x58973552: call 0x58974c00
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973557: mov ecx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xC4
        // 0x5897355A: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973561: push ecx
        __asm _emit 0x51
        // 0x58973562: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

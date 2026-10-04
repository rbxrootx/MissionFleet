// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DD1B0 .. +0xED bytes.
// Source symbol alias: FUN_588dd1b0.
extern "C" __declspec(naked) void FUN_588dd1b0() {
    __asm {
        // 0x588DD1B0: cmp dword ptr [esp + 4], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x588DD1B5: push ebx
        __asm _emit 0x53
        // 0x588DD1B6: push ebp
        __asm _emit 0x55
        // 0x588DD1B7: push esi
        __asm _emit 0x56
        // 0x588DD1B8: push edi
        __asm _emit 0x57
        // 0x588DD1B9: jne 0x588dd243
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD1BF: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD1C4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DD1C7: mov al, byte ptr [edx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD1CD: cmp al, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD1D3: je 0x588dd294
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD1D9: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD1DF: mov eax, dword ptr [edx + 0x20d58]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x58
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DD1E5: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588DD1E8: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588DD1EA: je 0x588dd294
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD1F0: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x588DD1F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DD1F5: je 0x588dd227
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588DD1F7: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DD1FA: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588DD1FD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DD200: mov edi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588DD203: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588DD205: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588DD207: jl 0x588dd227
        __asm _emit 0x7C
        __asm _emit 0x1E
        // 0x588DD209: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588DD20C: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588DD20E: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588DD210: jge 0x588dd227
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x588DD212: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DD215: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x588DD218: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588DD21A: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x588DD21C: jl 0x588dd227
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x588DD21E: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588DD221: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DD223: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588DD225: jl 0x588dd237
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x588DD227: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x588DD22A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588DD22C: jne 0x588dd1f0
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x588DD22E: pop edi
        __asm _emit 0x5F
        // 0x588DD22F: pop esi
        __asm _emit 0x5E
        // 0x588DD230: pop ebp
        __asm _emit 0x5D
        // 0x588DD231: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DD233: pop ebx
        __asm _emit 0x5B
        // 0x588DD234: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DD237: pop edi
        __asm _emit 0x5F
        // 0x588DD238: pop esi
        __asm _emit 0x5E
        // 0x588DD239: pop ebp
        __asm _emit 0x5D
        // 0x588DD23A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD23F: pop ebx
        __asm _emit 0x5B
        // 0x588DD240: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DD243: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD249: mov eax, dword ptr [edx + 0x20d58]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x58
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DD24F: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588DD252: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588DD254: je 0x588dd294
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588DD256: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x588DD259: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DD25B: je 0x588dd28d
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588DD25D: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DD260: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588DD263: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DD266: mov edi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x588DD269: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588DD26B: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588DD26D: jl 0x588dd28d
        __asm _emit 0x7C
        __asm _emit 0x1E
        // 0x588DD26F: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588DD272: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588DD274: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588DD276: jge 0x588dd28d
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x588DD278: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DD27B: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x588DD27E: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588DD280: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x588DD282: jl 0x588dd28d
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x588DD284: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588DD287: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DD289: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588DD28B: jl 0x588dd237
        __asm _emit 0x7C
        __asm _emit 0xAA
        // 0x588DD28D: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x588DD290: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588DD292: jne 0x588dd256
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x588DD294: pop edi
        __asm _emit 0x5F
        // 0x588DD295: pop esi
        __asm _emit 0x5E
        // 0x588DD296: pop ebp
        __asm _emit 0x5D
        // 0x588DD297: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DD299: pop ebx
        __asm _emit 0x5B
        // 0x588DD29A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

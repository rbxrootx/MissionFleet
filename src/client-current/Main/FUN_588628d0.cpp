// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588628D0 .. +0x471 bytes.
// Source symbol alias: FUN_588628d0.
extern "C" __declspec(naked) void FUN_588628d0() {
    __asm {
        // 0x588628D0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588628D3: push ebx
        __asm _emit 0x53
        // 0x588628D4: push ebp
        __asm _emit 0x55
        // 0x588628D5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588628D7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588628D9: cmp dword ptr [ebx + 0x118], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588628DF: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588628E3: mov dword ptr [esp + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588628E7: jle 0x58862958
        __asm _emit 0x7E
        __asm _emit 0x6F
        // 0x588628E9: push esi
        __asm _emit 0x56
        // 0x588628EA: lea eax, [ebx + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588628F0: push edi
        __asm _emit 0x57
        // 0x588628F1: lea esi, [ebx + 0x15c]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588628F7: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588628FB: lea edi, [ebx + 0x120]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862901: cmp dword ptr [edi + 0x28], 2
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x28
        __asm _emit 0x02
        // 0x58862905: jne 0x58862c43
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886290B: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862911: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58862914: cmp word ptr [edx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886291C: je 0x5886295e
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5886291E: cmp ebp, dword ptr [ebx + 0x11c]
        __asm _emit 0x3B
        __asm _emit 0xAB
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862924: jne 0x58862d1a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886292A: mov ecx, dword ptr [ebx + ebp*8 + 0x658]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xEB
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862931: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58862936: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58862938: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5886293B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5886293D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58862940: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58862942: cdq
        __asm _emit 0x99
        // 0x58862943: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862948: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5886294A: mov ecx, dword ptr [ebx + 0x764]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862950: push edx
        __asm _emit 0x52
        // 0x58862951: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xBD
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58862956: pop edi
        __asm _emit 0x5F
        // 0x58862957: pop esi
        __asm _emit 0x5E
        // 0x58862958: pop ebp
        __asm _emit 0x5D
        // 0x58862959: pop ebx
        __asm _emit 0x5B
        // 0x5886295A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5886295D: ret
        __asm _emit 0xC3
        // 0x5886295E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58862960: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862966: push eax
        __asm _emit 0x50
        // 0x58862967: push edi
        __asm _emit 0x57
        // 0x58862968: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xEC
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5886296D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5886296F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862971: jle 0x58862ba5
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x2E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862977: cmp dword ptr [0x58a24508], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5886297E: je 0x58862987
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58862980: mov dword ptr [edi + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862987: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5886298A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886298C: jle 0x58862997
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x5886298E: dec ecx
        __asm _emit 0x49
        // 0x5886298F: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58862992: jmp 0x58862ad1
        __asm _emit 0xE9
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862997: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5886299B: dec eax
        __asm _emit 0x48
        // 0x5886299C: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x5886299E: movzx ecx, word ptr [ebp + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588629A2: push eax
        __asm _emit 0x50
        // 0x588629A3: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588629A6: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588629AC: push edi
        __asm _emit 0x57
        // 0x588629AD: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xEC
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588629B2: movzx ebp, word ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x588629B6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588629B8: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588629BB: dec ebp
        __asm _emit 0x4D
        // 0x588629BC: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588629C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588629C2: jle 0x58862a5f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588629C8: mov edx, dword ptr [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588629CF: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588629D5: lea ebx, [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8D
        __asm _emit 0x9C
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588629DC: push edx
        __asm _emit 0x52
        // 0x588629DD: push ebx
        __asm _emit 0x53
        // 0x588629DE: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xEC
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588629E3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588629E7: mov ecx, dword ptr [eax + ebp*4 + 0x604]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588629EE: lea ebp, [eax + ebp*4 + 0x604]
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588629F5: push ecx
        __asm _emit 0x51
        // 0x588629F6: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588629FC: push ebp
        __asm _emit 0x55
        // 0x588629FD: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xEC
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862A02: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58862A04: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A09: inc eax
        __asm _emit 0x40
        // 0x58862A0A: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A0F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58862A11: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A17: inc edx
        __asm _emit 0x42
        // 0x58862A18: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A1E: push eax
        __asm _emit 0x50
        // 0x58862A1F: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x58862A21: mov dword ptr [ebp], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58862A24: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862A2A: push ebx
        __asm _emit 0x53
        // 0x58862A2B: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862A30: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58862A33: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862A39: push eax
        __asm _emit 0x50
        // 0x58862A3A: push ebp
        __asm _emit 0x55
        // 0x58862A3B: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862A40: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58862A43: dec dword ptr [esi]
        __asm _emit 0xFF
        __asm _emit 0x0E
        // 0x58862A45: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58862A49: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58862A4D: xor ecx, 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x58862A53: dec ecx
        __asm _emit 0x49
        // 0x58862A54: xor ecx, 0xa0e6b2d0
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x58862A5A: mov dword ptr [esi + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58862A5D: jmp 0x58862ab7
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x58862A5F: jge 0x58862ab7
        __asm _emit 0x7D
        __asm _emit 0x56
        // 0x58862A61: mov edx, dword ptr [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A68: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862A6E: lea eax, [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A75: push edx
        __asm _emit 0x52
        // 0x58862A76: push eax
        __asm _emit 0x50
        // 0x58862A77: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862A7C: mov eax, dword ptr [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A83: lea ecx, [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A8A: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A8F: dec eax
        __asm _emit 0x48
        // 0x58862A90: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862A95: push eax
        __asm _emit 0x50
        // 0x58862A96: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58862A98: push ecx
        __asm _emit 0x51
        // 0x58862A99: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862A9F: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862AA4: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x58862AA7: inc dword ptr [esi]
        __asm _emit 0xFF
        __asm _emit 0x06
        // 0x58862AA9: xor eax, 0xa0e6b2d0
        __asm _emit 0x35
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x58862AAE: inc eax
        __asm _emit 0x40
        // 0x58862AAF: xor eax, 0xa0e6b2d0
        __asm _emit 0x35
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x58862AB4: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x58862AB7: mov ecx, dword ptr [ebx + ebp*4 + 0x5e4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862ABE: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862AC4: push ecx
        __asm _emit 0x51
        // 0x58862AC5: mov ecx, dword ptr [ebx + ebp*4 + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862ACC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58862AD1: mov eax, dword ptr [esi + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862AD7: mov edx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862ADD: lea ecx, [edx + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x58862AE0: mov dword ptr [esi + 0x4fc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862AE6: mov edx, dword ptr [ebx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862AEC: mov eax, dword ptr [ebx + edx*4 + 0x6c0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0xC0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862AF3: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x58862AF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862AF8: je 0x58862b00
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58862AFA: movzx ebp, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x58862AFE: jmp 0x58862b02
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58862B00: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58862B02: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58862B07: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58862B09: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58862B0C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58862B0E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58862B11: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58862B13: cdq
        __asm _emit 0x99
        // 0x58862B14: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x58862B16: mov eax, dword ptr [edi + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B1C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58862B20: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x58862B23: cmp ecx, dword ptr [ebx + 0x11c]
        __asm _emit 0x3B
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B29: jne 0x58862b56
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58862B2B: mov ecx, dword ptr [esi + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B31: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58862B36: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58862B38: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58862B3B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58862B3D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58862B40: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58862B42: cdq
        __asm _emit 0x99
        // 0x58862B43: mov ecx, 0x3c
        __asm _emit 0xB9
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B48: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58862B4A: mov ecx, dword ptr [ebx + 0x764]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B50: push edx
        __asm _emit 0x52
        // 0x58862B51: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xBB
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58862B56: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58862B5A: mov edx, dword ptr [ebx + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B60: mov ecx, dword ptr [ebx + edx*8 + 0x658]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xD3
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B67: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58862B6C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58862B6E: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58862B71: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58862B73: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58862B76: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58862B78: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x58862B7B: jle 0x58862c43
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B81: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862B86: cmp dword ptr [eax + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x58862B8D: jle 0x58862c0c
        __asm _emit 0x7E
        __asm _emit 0x7D
        // 0x58862B8F: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B96: je 0x58862c0c
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x58862B98: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862B9E: add eax, 0x580
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BA3: jmp 0x58862c0e
        __asm _emit 0xEB
        __asm _emit 0x69
        // 0x58862BA5: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58862BA8: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x58862BAB: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58862BAD: mov dword ptr [esi + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58862BB0: mov dword ptr [esi + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x58862BB3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862BB5: je 0x58862bf1
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58862BB7: mov eax, dword ptr [edi + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BBD: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BC2: mov dword ptr [edi + 0x578], 1
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BCC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58862BD0: mov ecx, dword ptr [edi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BD6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58862BD8: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x11
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862BDD: push ebp
        __asm _emit 0x55
        // 0x58862BDE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58862BE0: mov dword ptr [edi + 0x28], 4
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BE7: call 0x58861f40
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862BEC: jmp 0x58862b5a
        __asm _emit 0xE9
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862BF1: mov eax, dword ptr [edi + 0x55c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BF7: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862BFC: mov dword ptr [edi + 0x28], 1
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C03: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58862C07: jmp 0x58862b5a
        __asm _emit 0xE9
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862C0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58862C0E: mov ecx, dword ptr [ebx + 0x72c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C14: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x58862C17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862C19: je 0x58862c43
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58862C1B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58862C1E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58862C21: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x58862C24: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58862C27: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58862C2A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58862C2C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58862C2F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58862C31: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58862C34: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58862C37: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58862C3A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58862C3D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58862C40: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58862C43: cmp dword ptr [edi + 0x578], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C4A: je 0x58862d1a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C50: mov ecx, dword ptr [edi + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C56: call 0x58793e10
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x11
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862C5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862C5D: jne 0x58862d1a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C63: cmp dword ptr [edi + 0x28], 4
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x28
        __asm _emit 0x04
        // 0x58862C67: mov dword ptr [edi + 0x578], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C6D: jne 0x58862d05
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C73: mov eax, dword ptr [edi + 0x55c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x5C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C79: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58862C7E: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862C84: push 0x57
        __asm _emit 0x6A
        __asm _emit 0x57
        // 0x58862C86: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58862C88: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x58862C8A: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x92
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58862C8F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862C91: jne 0x58862d10
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x58862C93: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862C98: mov ebp, 0x1a
        __asm _emit 0xBD
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862C9D: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862CA3: jle 0x58862cb9
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58862CA5: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862CAC: je 0x58862cb9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58862CAE: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862CB4: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x58862CB7: jmp 0x58862cbb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58862CB9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58862CBB: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862CC1: push edx
        __asm _emit 0x52
        // 0x58862CC2: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58862CC7: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862CCC: cmp dword ptr [eax + 0x170], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862CD2: jle 0x58862cf5
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x58862CD4: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862CDB: je 0x58862cf5
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58862CDD: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862CE3: mov ecx, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x68
        // 0x58862CE6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58862CE8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58862CEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58862CED: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58862CEF: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58862CF3: jmp 0x58862d10
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58862CF5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58862CF7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58862CF9: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58862CFC: push ecx
        __asm _emit 0x51
        // 0x58862CFD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58862CFF: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58862D03: jmp 0x58862d10
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58862D05: mov eax, dword ptr [edi + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862D0B: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58862D10: mov dword ptr [esi + 0x4fc], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862D1A: add dword ptr [esp + 0x14], 0xd4
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862D22: inc ebp
        __asm _emit 0x45
        // 0x58862D23: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58862D26: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58862D29: cmp ebp, dword ptr [ebx + 0x118]
        __asm _emit 0x3B
        __asm _emit 0xAB
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862D2F: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58862D33: jl 0x58862901
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xC8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862D39: pop edi
        __asm _emit 0x5F
        // 0x58862D3A: pop esi
        __asm _emit 0x5E
        // 0x58862D3B: pop ebp
        __asm _emit 0x5D
        // 0x58862D3C: pop ebx
        __asm _emit 0x5B
        // 0x58862D3D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58862D40: ret
        __asm _emit 0xC3
    }
}

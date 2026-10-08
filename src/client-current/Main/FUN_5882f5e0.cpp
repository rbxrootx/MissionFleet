// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1653 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f5e0.

// Ghidra body range 0x5882F5E0..0x5882FC55; 1653 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f5e0_segment_00() {
    __asm {
        // 0x5882F5E0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5882F5E4: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5882F5E7: push ebx
        __asm _emit 0x53
        // 0x5882F5E8: push esi
        __asm _emit 0x56
        // 0x5882F5E9: push edi
        __asm _emit 0x57
        // 0x5882F5EA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882F5EC: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5882F5EF: jne 0x5882fa8f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F5F5: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882F5F9: cmp eax, dword ptr [esi + 0xac]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F5FF: jne 0x5882f630
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5882F601: mov al, byte ptr [esi + 0x21c]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F607: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5882F609: jbe 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x3B
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F60F: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5882F612: mov ecx, dword ptr [esi + eax*4 + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F619: push ecx
        __asm _emit 0x51
        // 0x5882F61A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F620: call 0x587b9e10
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xA7
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882F625: pop edi
        __asm _emit 0x5F
        // 0x5882F626: pop esi
        __asm _emit 0x5E
        // 0x5882F627: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F629: pop ebx
        __asm _emit 0x5B
        // 0x5882F62A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F62D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F630: cmp eax, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F636: jne 0x5882f667
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x5882F638: mov al, byte ptr [esi + 0x21c]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F63E: cmp al, 9
        __asm _emit 0x3C
        __asm _emit 0x09
        // 0x5882F640: jae 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F646: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F64C: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5882F64F: mov eax, dword ptr [esi + edx*4 + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F656: push eax
        __asm _emit 0x50
        // 0x5882F657: call 0x587b9e10
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xA7
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882F65C: pop edi
        __asm _emit 0x5F
        // 0x5882F65D: pop esi
        __asm _emit 0x5E
        // 0x5882F65E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F660: pop ebx
        __asm _emit 0x5B
        // 0x5882F661: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F664: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F667: cmp eax, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F66D: jne 0x5882f6ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F673: cmp dword ptr [esi + 0x220], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F67A: mov byte ptr [esi + 0x21d], 3
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5882F681: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F687: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F68A: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x6E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F68F: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F695: jne 0x5882f763
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F69B: mov ecx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F6A1: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F6A7: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882F6AD: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5882F6AF: jae 0x5882f6d3
        __asm _emit 0x73
        __asm _emit 0x22
        // 0x5882F6B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F6B3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F6B5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F6B7: push 0x460
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F6BC: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xC4
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F6C1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882F6C3: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x56
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F6C8: pop edi
        __asm _emit 0x5F
        // 0x5882F6C9: pop esi
        __asm _emit 0x5E
        // 0x5882F6CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F6CC: pop ebx
        __asm _emit 0x5B
        // 0x5882F6CD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F6D0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F6D3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882F6D5: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6F
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F6DB: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F6E1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5882F6E3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5882F6E6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882F6E8: mov ecx, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F6EE: push esi
        __asm _emit 0x56
        // 0x5882F6EF: call 0x587b0900
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x12
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882F6F4: pop edi
        __asm _emit 0x5F
        // 0x5882F6F5: pop esi
        __asm _emit 0x5E
        // 0x5882F6F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F6F8: pop ebx
        __asm _emit 0x5B
        // 0x5882F6F9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F6FC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F6FF: cmp eax, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F705: jne 0x5882f785
        __asm _emit 0x75
        __asm _emit 0x7E
        // 0x5882F707: cmp dword ptr [esi + 0x220], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F70E: mov byte ptr [esi + 0x21d], 4
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5882F715: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2F
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F71B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F71E: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x6D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F723: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F729: jne 0x5882f763
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5882F72B: mov ecx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F731: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F737: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882F73D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5882F73F: jae 0x5882f6d3
        __asm _emit 0x73
        __asm _emit 0x92
        // 0x5882F741: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F743: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F745: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F747: push 0x460
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F74C: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xC3
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F751: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882F753: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x55
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F758: pop edi
        __asm _emit 0x5F
        // 0x5882F759: pop esi
        __asm _emit 0x5E
        // 0x5882F75A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F75C: pop ebx
        __asm _emit 0x5B
        // 0x5882F75D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F760: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F763: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F765: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F767: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F769: push 0x475
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F76E: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xC3
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F773: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882F775: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x55
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F77A: pop edi
        __asm _emit 0x5F
        // 0x5882F77B: pop esi
        __asm _emit 0x5E
        // 0x5882F77C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F77E: pop ebx
        __asm _emit 0x5B
        // 0x5882F77F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F782: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F785: cmp eax, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F78B: jne 0x5882f84e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F791: mov byte ptr [esi + 0x21d], 2
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5882F798: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F79E: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F7A4: jne 0x5882f82c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F7AA: cmp dword ptr [esi + 0x220], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F7B1: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F7B7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F7BA: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x6C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F7BF: mov edi, 6
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F7C4: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F7CA: jne 0x5882f7d9
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5882F7CC: cmp word ptr [0x58a0b4a8], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F7D3: je 0x5882f6db
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F7D9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F7DC: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x6C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F7E1: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F7E7: jne 0x5882f7f6
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5882F7E9: cmp word ptr [0x58a0b4a8], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F7F0: jne 0x5882f763
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F7F6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F7F9: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x6C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F7FE: cmp eax, dword ptr [0x58a0b4a0]
        __asm _emit 0x3B
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F804: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F80A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F80C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F80E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F810: push 0x471
        __asm _emit 0x68
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F815: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xC2
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F81A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882F81C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x55
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F821: pop edi
        __asm _emit 0x5F
        // 0x5882F822: pop esi
        __asm _emit 0x5E
        // 0x5882F823: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F825: pop ebx
        __asm _emit 0x5B
        // 0x5882F826: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F829: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F82C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F82E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F830: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882F832: push 0x483
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F837: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xC2
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F83C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5882F83E: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x54
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882F843: pop edi
        __asm _emit 0x5F
        // 0x5882F844: pop esi
        __asm _emit 0x5E
        // 0x5882F845: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F847: pop ebx
        __asm _emit 0x5B
        // 0x5882F848: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F84B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F84E: cmp eax, dword ptr [esi + 0x98]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F854: jne 0x5882f896
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5882F856: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F859: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882F85B: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F861: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882F868: je 0x5882f80a
        __asm _emit 0x74
        __asm _emit 0xA0
        // 0x5882F86A: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x6C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F86F: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F875: jne 0x5882f80a
        __asm _emit 0x75
        __asm _emit 0x93
        // 0x5882F877: inc dword ptr [esi + 0xcc]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F87D: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F883: push eax
        __asm _emit 0x50
        // 0x5882F884: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F886: call 0x5882f270
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F88B: pop edi
        __asm _emit 0x5F
        // 0x5882F88C: pop esi
        __asm _emit 0x5E
        // 0x5882F88D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F88F: pop ebx
        __asm _emit 0x5B
        // 0x5882F890: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F893: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F896: cmp eax, dword ptr [esi + 0x9c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F89C: jne 0x5882f8f3
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x5882F89E: cmp dword ptr [esi + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F8A5: jbe 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x9F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F8AB: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F8AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882F8B0: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F8B6: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882F8BD: je 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F8C3: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x6B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F8C8: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F8CE: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F8D4: dec dword ptr [esi + 0xcc]
        __asm _emit 0xFF
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F8DA: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F8E0: push eax
        __asm _emit 0x50
        // 0x5882F8E1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F8E3: call 0x5882f270
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F8E8: pop edi
        __asm _emit 0x5F
        // 0x5882F8E9: pop esi
        __asm _emit 0x5E
        // 0x5882F8EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F8EC: pop ebx
        __asm _emit 0x5B
        // 0x5882F8ED: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F8F0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F8F3: cmp eax, dword ptr [esi + 0xa0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F8F9: jne 0x5882f943
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x5882F8FB: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F8FE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882F900: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F906: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882F90D: je 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F913: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x6B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F918: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F91E: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F924: inc dword ptr [esi + 0xd0]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F92A: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F930: push eax
        __asm _emit 0x50
        // 0x5882F931: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F933: call 0x5882f350
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F938: pop edi
        __asm _emit 0x5F
        // 0x5882F939: pop esi
        __asm _emit 0x5E
        // 0x5882F93A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F93C: pop ebx
        __asm _emit 0x5B
        // 0x5882F93D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F940: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F943: cmp eax, dword ptr [esi + 0xa4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F949: jne 0x5882f9a0
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x5882F94B: cmp dword ptr [esi + 0xd0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F952: jbe 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xF2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F958: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F95B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882F95D: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F963: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882F96A: je 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F970: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x6B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F975: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F97B: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F981: dec dword ptr [esi + 0xd0]
        __asm _emit 0xFF
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F987: mov eax, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F98D: push eax
        __asm _emit 0x50
        // 0x5882F98E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882F990: call 0x5882f350
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F995: pop edi
        __asm _emit 0x5F
        // 0x5882F996: pop esi
        __asm _emit 0x5E
        // 0x5882F997: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F999: pop ebx
        __asm _emit 0x5B
        // 0x5882F99A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882F99D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882F9A0: cmp eax, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F9A6: jne 0x5882f9fd
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x5882F9A8: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882F9AF: je 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F9B5: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F9B8: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x6A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F9BD: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F9C3: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882F9C9: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5882F9CC: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5882F9CF: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F9D4: add ecx, 0x1cc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F9DA: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882F9DE: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F9E4: add edx, 0x5a
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x5A
        // 0x5882F9E7: push eax
        __asm _emit 0x50
        // 0x5882F9E8: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882F9EC: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x87
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5882F9F1: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882F9F5: push ecx
        __asm _emit 0x51
        // 0x5882F9F6: push 0x5899e038
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882F9FB: jmp 0x5882fa5c
        __asm _emit 0xEB
        __asm _emit 0x5F
        // 0x5882F9FD: cmp eax, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA03: jne 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA09: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5882FA10: je 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FA16: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FA19: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x6A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FA1E: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882FA24: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FA2A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5882FA2D: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5882FA30: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882FA35: add ecx, 0x1cc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA3B: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882FA3F: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA45: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x5882FA48: push eax
        __asm _emit 0x50
        // 0x5882FA49: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882FA4D: call 0x587c8190
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x87
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5882FA52: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882FA56: push ecx
        __asm _emit 0x51
        // 0x5882FA57: push 0x5899e01c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FA5C: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882FA62: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA68: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FA6B: push eax
        __asm _emit 0x50
        // 0x5882FA6C: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA71: push esi
        __asm _emit 0x56
        // 0x5882FA72: call 0x587c8910
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x8E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5882FA77: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA7D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5882FA7F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5882FA82: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5882FA84: pop edi
        __asm _emit 0x5F
        // 0x5882FA85: pop esi
        __asm _emit 0x5E
        // 0x5882FA86: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FA88: pop ebx
        __asm _emit 0x5B
        // 0x5882FA89: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FA8C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882FA8F: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA94: jne 0x5882fb5e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FA9A: cmp dword ptr [esi + 0x220], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FAA1: je 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FAA7: mov al, byte ptr [esi + 0x21d]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FAAD: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5882FAAF: jne 0x5882fac8
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5882FAB1: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882FAB5: push ecx
        __asm _emit 0x51
        // 0x5882FAB6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882FAB8: call 0x5882f050
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FABD: pop edi
        __asm _emit 0x5F
        // 0x5882FABE: pop esi
        __asm _emit 0x5E
        // 0x5882FABF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FAC1: pop ebx
        __asm _emit 0x5B
        // 0x5882FAC2: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FAC5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882FAC8: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5882FACA: jne 0x5882fb11
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x5882FACC: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FACF: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x69
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FAD4: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882FADA: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FAE0: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FAE6: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882FAEA: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FAF0: push ecx
        __asm _emit 0x51
        // 0x5882FAF1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FAF4: push eax
        __asm _emit 0x50
        // 0x5882FAF5: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x69
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FAFA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882FB00: push eax
        __asm _emit 0x50
        // 0x5882FB01: call 0x587b9e30
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xA3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882FB06: pop edi
        __asm _emit 0x5F
        // 0x5882FB07: pop esi
        __asm _emit 0x5E
        // 0x5882FB08: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FB0A: pop ebx
        __asm _emit 0x5B
        // 0x5882FB0B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FB0E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882FB11: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5882FB13: jne 0x5882fc4a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB19: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FB1C: call 0x58786490
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x69
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FB21: cmp dword ptr [0x58a0b4a0], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882FB27: jne 0x5882f80a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FB2D: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB33: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882FB37: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB3D: push ecx
        __asm _emit 0x51
        // 0x5882FB3E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FB41: push eax
        __asm _emit 0x50
        // 0x5882FB42: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x69
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FB47: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882FB4D: push eax
        __asm _emit 0x50
        // 0x5882FB4E: call 0x587b9e60
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xA3
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882FB53: pop edi
        __asm _emit 0x5F
        // 0x5882FB54: pop esi
        __asm _emit 0x5E
        // 0x5882FB55: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FB57: pop ebx
        __asm _emit 0x5B
        // 0x5882FB58: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FB5B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882FB5E: cmp eax, 0xf235
        __asm _emit 0x3D
        __asm _emit 0x35
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB63: jne 0x5882fbe9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB69: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB6F: call 0x587c8850
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x8C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5882FB74: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882FB7A: push eax
        __asm _emit 0x50
        // 0x5882FB7B: push 0x5899e038
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FB80: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882FB82: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882FB88: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FB8B: push eax
        __asm _emit 0x50
        // 0x5882FB8C: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882FB8E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882FB90: jne 0x5882fbaf
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5882FB92: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882FB96: push eax
        __asm _emit 0x50
        // 0x5882FB97: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882FB99: mov dword ptr [esi + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FB9F: call 0x5882f270
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FBA4: pop edi
        __asm _emit 0x5F
        // 0x5882FBA5: pop esi
        __asm _emit 0x5E
        // 0x5882FBA6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FBA8: pop ebx
        __asm _emit 0x5B
        // 0x5882FBA9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FBAC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882FBAF: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FBB5: call 0x587c8850
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5882FBBA: push eax
        __asm _emit 0x50
        // 0x5882FBBB: push 0x5899e01c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FBC0: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882FBC2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FBC5: push eax
        __asm _emit 0x50
        // 0x5882FBC6: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882FBC8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882FBCA: jne 0x5882fc4a
        __asm _emit 0x75
        __asm _emit 0x7E
        // 0x5882FBCC: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5882FBD0: push eax
        __asm _emit 0x50
        // 0x5882FBD1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882FBD3: mov dword ptr [esi + 0xd0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FBD9: call 0x5882f350
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882FBDE: pop edi
        __asm _emit 0x5F
        // 0x5882FBDF: pop esi
        __asm _emit 0x5E
        // 0x5882FBE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FBE2: pop ebx
        __asm _emit 0x5B
        // 0x5882FBE3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FBE6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882FBE9: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5882FBEC: jne 0x5882fc4a
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5882FBEE: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882FBF2: cmp edi, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FBF8: jne 0x5882fc0e
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5882FBFA: mov edx, dword ptr [0x58a0b468]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882FC00: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882FC06: cmp edx, dword ptr [esi + 0xc4]
        __asm _emit 0x3B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC0C: jmp 0x5882fc26
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5882FC0E: cmp edi, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC14: jne 0x5882fc4a
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5882FC16: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882FC1B: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882FC20: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC26: jae 0x5882fc4a
        __asm _emit 0x73
        __asm _emit 0x22
        // 0x5882FC28: push 0x58990cd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x0C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FC2D: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882FC33: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882FC39: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FC3C: push eax
        __asm _emit 0x50
        // 0x5882FC3D: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x5882FC3F: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC44: push edi
        __asm _emit 0x57
        // 0x5882FC45: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x2A
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5882FC4A: pop edi
        __asm _emit 0x5F
        // 0x5882FC4B: pop esi
        __asm _emit 0x5E
        // 0x5882FC4C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FC4E: pop ebx
        __asm _emit 0x5B
        // 0x5882FC4F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5882FC52: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

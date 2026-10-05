// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DBF10 .. +0x1BC bytes.
// Source symbol alias: FUN_588dbf10.
// Behavior and evidence notes: docs/current-main-ship-map-route-child-update-588dbf10.md.
// The +0x609C phase drives child-record/frame updates; +0x146C is moved every call.
extern "C" __declspec(naked) void FUN_588dbf10() {
    __asm {
        // 0x588DBF10: push esi
        __asm _emit 0x56
        // 0x588DBF11: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DBF13: mov eax, dword ptr [esi + 0x609c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DBF1B: jne 0x588dbfad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF21: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF27: cmp dword ptr [eax + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x588DBF2B: je 0x588dc070
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF31: mov eax, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x588DBF34: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBF3A: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF40: jle 0x588dbf5a
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588DBF42: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DBF44: jl 0x588dbf5a
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588DBF46: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF4D: je 0x588dbf5a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588DBF4F: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588DBF52: add eax, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF58: jmp 0x588dbf5c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBF5A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBF5C: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF62: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBF65: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DBF67: je 0x588dbf91
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588DBF69: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588DBF6C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588DBF6F: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588DBF72: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588DBF75: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588DBF78: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588DBF7A: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588DBF7D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588DBF7F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588DBF82: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588DBF85: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588DBF88: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588DBF8B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBF8E: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588DBF91: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF97: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBF9E: mov dword ptr [esi + 0x609c], 0x50000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        // 0x588DBFA8: jmp 0x588dc070
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBFAD: cmp eax, 0x50000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x50
        // 0x588DBFB2: jne 0x588dc01d
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x588DBFB4: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBFBA: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588DBFBD: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x588DBFC0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DBFC2: je 0x588dbfca
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588DBFC4: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588DBFC8: jmp 0x588dbfcc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DBFCA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DBFCC: lea eax, [eax + eax*2 - 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x40
        __asm _emit 0xFF
        // 0x588DBFD0: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588DBFD2: jne 0x588dc018
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x588DBFD4: mov edx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBFDA: mov eax, dword ptr [edx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x68
        // 0x588DBFDD: mov edx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DBFE3: inc eax
        __asm _emit 0x40
        // 0x588DBFE4: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBFEA: jle 0x588dc004
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588DBFEC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DBFEE: jl 0x588dc004
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588DBFF0: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DBFF7: je 0x588dc004
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588DBFF9: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588DBFFC: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC002: jmp 0x588dc006
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DC004: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DC006: push eax
        __asm _emit 0x50
        // 0x588DC007: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x89
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DC00C: mov dword ptr [esi + 0x609c], 0x70000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x70
        // 0x588DC016: jmp 0x588dc070
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x588DC018: inc dword ptr [ecx + 0x50]
        __asm _emit 0xFF
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588DC01B: jmp 0x588dc070
        __asm _emit 0xEB
        __asm _emit 0x53
        // 0x588DC01D: cmp eax, 0x70000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x70
        // 0x588DC022: jne 0x588dc099
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x588DC024: mov eax, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC02A: cmp dword ptr [eax + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x588DC02E: jne 0x588dc067
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588DC030: mov eax, dword ptr [eax + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x68
        // 0x588DC033: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC039: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x588DC03C: push eax
        __asm _emit 0x50
        // 0x588DC03D: call 0x587317e0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x57
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DC042: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC048: push eax
        __asm _emit 0x50
        // 0x588DC049: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x88
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588DC04E: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC054: mov dword ptr [esi + 0x609c], 0x60000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        // 0x588DC05E: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC065: jmp 0x588dc070
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588DC067: mov eax, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC06D: inc dword ptr [eax + 0x50]
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x588DC070: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC076: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588DC079: sub edx, dword ptr [esi + eax*8 + 0x17c0]
        __asm _emit 0x2B
        __asm _emit 0x94
        __asm _emit 0xC6
        __asm _emit 0xC0
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC080: mov eax, dword ptr [esi + eax*8 + 0x17bc]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0xBC
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC087: add eax, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588DC08A: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC090: push edx
        __asm _emit 0x52
        // 0x588DC091: push eax
        __asm _emit 0x50
        // 0x588DC092: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DC097: pop esi
        __asm _emit 0x5E
        // 0x588DC098: ret
        __asm _emit 0xC3
        // 0x588DC099: cmp eax, 0x60000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x60
        // 0x588DC09E: jne 0x588dc070
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x588DC0A0: mov eax, dword ptr [esi + 0x146c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC0A6: mov ecx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588DC0A9: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588DC0AC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DC0AE: je 0x588dc0b6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588DC0B0: movzx ecx, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x588DC0B4: jmp 0x588dc0b8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588DC0B6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588DC0B8: lea ecx, [ecx + ecx*2 - 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x49
        __asm _emit 0xFF
        // 0x588DC0BC: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588DC0BE: jne 0x588dc06d
        __asm _emit 0x75
        __asm _emit 0xAD
        // 0x588DC0C0: mov dword ptr [esi + 0x609c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC0CA: jmp 0x588dc070
        __asm _emit 0xEB
        __asm _emit 0xA4
    }
}

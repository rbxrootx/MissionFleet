// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Audited mapped extent: 0x587DA120 .. +0x522 bytes.
// Source symbol alias: FUN_587da120.
// Callers: 0x587E0090 and 0x587E3080.
// Walks records linked at +0xCE4, formats/copies bounded strings, and checks a
// stack cookie before returning. Field/string/API semantics remain unknown.
// The original 0x515-byte inventory extent cut through xor ecx,esp at +0x514;
// this complete body includes the cookie-check call and ret before padding.
// See docs/current-main-linked-record-text-walk.md.
extern "C" __declspec(naked) void FUN_587da120() {
    __asm {
        // 0x587DA120: sub esp, 0x49c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA126: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587DA12B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587DA12D: mov dword ptr [esp + 0x498], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA134: push ebp
        __asm _emit 0x55
        // 0x587DA135: push esi
        __asm _emit 0x56
        // 0x587DA136: push edi
        __asm _emit 0x57
        // 0x587DA137: push 0x1ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA13C: lea eax, [esp + 0x1a5]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA143: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA145: push eax
        __asm _emit 0x50
        // 0x587DA146: mov byte ptr [esp + 0x1ac], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA14E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x2A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA153: push 0x7f
        __asm _emit 0x6A
        __asm _emit 0x7F
        // 0x587DA155: lea ecx, [esp + 0x131]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA15C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA15E: push ecx
        __asm _emit 0x51
        // 0x587DA15F: mov byte ptr [esp + 0x138], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA167: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x2A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA16C: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DA172: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587DA175: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587DA178: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587DA17A: je 0x587da28d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA180: push ebx
        __asm _emit 0x53
        // 0x587DA181: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA187: jmp 0x587da190
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587DA189: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA190: movzx eax, word ptr [ebp + 0x6e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x6E
        // 0x587DA194: push eax
        __asm _emit 0x50
        // 0x587DA195: lea ecx, [esp + 0x128]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA19C: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA1A1: push ecx
        __asm _emit 0x51
        // 0x587DA1A2: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587DA1A4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587DA1A7: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA1AC: lea ecx, [esp + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA1B3: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA1B6: je 0x587da1c0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA1B8: inc ecx
        __asm _emit 0x41
        // 0x587DA1B9: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA1BC: jne 0x587da1b3
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA1BE: jmp 0x587da20e
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x587DA1C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA1C2: je 0x587da20e
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x587DA1C4: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA1C9: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA1CB: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA1D0: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA1D2: lea eax, [esp + edx + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA1D9: je 0x587da20a
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587DA1DB: lea edi, [esp + 0x124]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA1E2: lea esi, [ecx + edx + 0x7ffffdff]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA1E9: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA1EB: jmp 0x587da1f0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587DA1ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587DA1F0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA1F2: je 0x587da206
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA1F4: mov dl, byte ptr [eax + edi]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x587DA1F7: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA1F9: je 0x587da206
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA1FB: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA1FD: dec ecx
        __asm _emit 0x49
        // 0x587DA1FE: inc eax
        __asm _emit 0x40
        // 0x587DA1FF: dec esi
        __asm _emit 0x4E
        // 0x587DA200: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA202: jne 0x587da1f0
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA204: jmp 0x587da20a
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA206: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA208: jne 0x587da20b
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA20A: dec eax
        __asm _emit 0x48
        // 0x587DA20B: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA20E: cmp dword ptr [ebp + 0xce4], 0
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA215: je 0x587da27e
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x587DA217: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA21C: lea ecx, [esp + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA223: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA226: je 0x587da230
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA228: inc ecx
        __asm _emit 0x41
        // 0x587DA229: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA22C: jne 0x587da223
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA22E: jmp 0x587da27e
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x587DA230: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA232: je 0x587da27e
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x587DA234: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA239: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA23B: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA240: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA242: lea eax, [esp + edx + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA249: je 0x587da27a
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587DA24B: mov edi, 0x5899aae4
        __asm _emit 0xBF
        __asm _emit 0xE4
        __asm _emit 0xAA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA250: lea esi, [ecx + edx + 0x7ffffdff]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA257: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA259: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA260: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA262: je 0x587da276
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA264: mov dl, byte ptr [eax + edi]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x587DA267: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA269: je 0x587da276
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA26B: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA26D: dec ecx
        __asm _emit 0x49
        // 0x587DA26E: inc eax
        __asm _emit 0x40
        // 0x587DA26F: dec esi
        __asm _emit 0x4E
        // 0x587DA270: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA272: jne 0x587da260
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA274: jmp 0x587da27a
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA276: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA278: jne 0x587da27b
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA27A: dec eax
        __asm _emit 0x48
        // 0x587DA27B: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA27E: mov ebp, dword ptr [ebp + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0xAD
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA284: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587DA286: jne 0x587da190
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA28C: pop ebx
        __asm _emit 0x5B
        // 0x587DA28D: lea eax, [esp + 0x1a0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA294: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587DA296: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x587DA299: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA2A0: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587DA2A2: inc eax
        __asm _emit 0x40
        // 0x587DA2A3: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA2A5: jne 0x587da2a0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587DA2A7: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587DA2A9: je 0x587da2d0
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587DA2AB: jmp 0x587da2b0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587DA2AD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587DA2B0: xor byte ptr [esp + ecx + 0x1a0], 0xaa
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0C
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        // 0x587DA2B8: lea eax, [esp + 0x1a0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA2BF: inc ecx
        __asm _emit 0x41
        // 0x587DA2C0: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x587DA2C3: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587DA2C5: inc eax
        __asm _emit 0x40
        // 0x587DA2C6: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA2C8: jne 0x587da2c3
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587DA2CA: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587DA2CC: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587DA2CE: jb 0x587da2b0
        __asm _emit 0x72
        __asm _emit 0xE0
        // 0x587DA2D0: push 0x103
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA2D5: lea edx, [esp + 0x3a5]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA2DC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA2DE: push edx
        __asm _emit 0x52
        // 0x587DA2DF: mov byte ptr [esp + 0x3ac], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA2E7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x29
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA2EC: push 0x103
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA2F1: lea eax, [esp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2D
        // 0x587DA2F5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA2F7: push eax
        __asm _emit 0x50
        // 0x587DA2F8: mov dword ptr [esp + 0x28], 0x104
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA300: mov byte ptr [esp + 0x34], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x587DA305: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x29
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA30A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587DA30D: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DA311: push ecx
        __asm _emit 0x51
        // 0x587DA312: push 0x20019
        __asm _emit 0x68
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587DA317: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA319: push 0x5899ab48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xAB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA31E: push 0x80000001
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587DA323: mov dword ptr [esp + 0x2c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA32B: call dword ptr [0x5898c008]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA331: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DA335: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DA339: push edx
        __asm _emit 0x52
        // 0x587DA33A: lea eax, [esp + 0x3a4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA341: push eax
        __asm _emit 0x50
        // 0x587DA342: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA344: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA346: push 0x5899ab3c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0xAB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA34B: push ecx
        __asm _emit 0x51
        // 0x587DA34C: call dword ptr [0x5898c004]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA352: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DA356: push edx
        __asm _emit 0x52
        // 0x587DA357: call dword ptr [0x5898c000]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA35D: lea eax, [esp + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA364: push 0x5899ab2c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xAB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA369: push eax
        __asm _emit 0x50
        // 0x587DA36A: call 0x5897cee6
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x2B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA36F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587DA372: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA374: je 0x587da5ca
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA37A: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587DA37E: push ecx
        __asm _emit 0x51
        // 0x587DA37F: lea edx, [esp + 0x3a4]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA386: push 0x5899ab28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xAB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA38B: push edx
        __asm _emit 0x52
        // 0x587DA38C: call 0x5897cebc
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x2B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA391: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DA395: push eax
        __asm _emit 0x50
        // 0x587DA396: push 0x5899ab28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xAB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA39B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA39D: call 0x5897cebc
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x2B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA3A2: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587DA3A5: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA3AA: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DA3AE: push ecx
        __asm _emit 0x51
        // 0x587DA3AF: push 0x5899ab1c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xAB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA3B4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587DA3B6: call dword ptr [0x5898c110]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA3BC: mov eax, 0x104
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA3C1: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DA3C5: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA3C8: je 0x587da3d2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA3CA: inc ecx
        __asm _emit 0x41
        // 0x587DA3CB: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA3CE: jne 0x587da3c5
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA3D0: jmp 0x587da411
        __asm _emit 0xEB
        __asm _emit 0x3F
        // 0x587DA3D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA3D4: je 0x587da411
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x587DA3D6: mov edx, 0x104
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA3DB: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA3DD: mov ecx, 0x104
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA3E2: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA3E4: lea eax, [esp + edx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x1C
        // 0x587DA3E8: je 0x587da40d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587DA3EA: lea esi, [ecx + edx + 0x7ffffefb]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA3F1: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA3F3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA3F5: je 0x587da409
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA3F7: mov dl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x07
        // 0x587DA3FA: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA3FC: je 0x587da409
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA3FE: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA400: dec ecx
        __asm _emit 0x49
        // 0x587DA401: inc eax
        __asm _emit 0x40
        // 0x587DA402: dec esi
        __asm _emit 0x4E
        // 0x587DA403: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA405: jne 0x587da3f3
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA407: jmp 0x587da40d
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA409: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA40B: jne 0x587da40e
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA40D: dec eax
        __asm _emit 0x48
        // 0x587DA40E: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA411: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DA415: push edx
        __asm _emit 0x52
        // 0x587DA416: call dword ptr [0x5898c114]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA41C: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DA41F: je 0x587da5ca
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA425: mov eax, 0x104
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA42A: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DA42E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587DA430: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA433: je 0x587da43d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA435: inc ecx
        __asm _emit 0x41
        // 0x587DA436: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA439: jne 0x587da430
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA43B: jmp 0x587da481
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x587DA43D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA43F: je 0x587da481
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587DA441: mov edx, 0x104
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA446: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA448: mov ecx, 0x104
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA44D: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA44F: lea eax, [esp + edx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x1C
        // 0x587DA453: je 0x587da47d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DA455: mov edi, 0x5899ba60
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA45A: lea esi, [ecx + edx + 0x7ffffefb]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA461: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA463: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA465: je 0x587da479
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA467: mov dl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x07
        // 0x587DA46A: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA46C: je 0x587da479
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA46E: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA470: dec ecx
        __asm _emit 0x49
        // 0x587DA471: inc eax
        __asm _emit 0x40
        // 0x587DA472: dec esi
        __asm _emit 0x4E
        // 0x587DA473: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA475: jne 0x587da463
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA477: jmp 0x587da47d
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA479: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA47B: jne 0x587da47e
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA47D: dec eax
        __asm _emit 0x48
        // 0x587DA47E: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA481: mov ebp, dword ptr [0x5898c148]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x48
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA487: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA489: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DA48D: push eax
        __asm _emit 0x50
        // 0x587DA48E: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587DA490: mov eax, 0x104
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA495: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DA499: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA4A0: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA4A3: je 0x587da4ad
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA4A5: inc ecx
        __asm _emit 0x41
        // 0x587DA4A6: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA4A9: jne 0x587da4a0
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA4AB: jmp 0x587da4f1
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x587DA4AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA4AF: je 0x587da4f1
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587DA4B1: mov edx, 0x104
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA4B6: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA4B8: mov ecx, 0x104
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA4BD: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA4BF: lea eax, [esp + edx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x1C
        // 0x587DA4C3: je 0x587da4ed
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DA4C5: mov edi, 0x5899ba54
        __asm _emit 0xBF
        __asm _emit 0x54
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA4CA: lea esi, [ecx + edx + 0x7ffffefb]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA4D1: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA4D3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA4D5: je 0x587da4e9
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA4D7: mov dl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x07
        // 0x587DA4DA: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA4DC: je 0x587da4e9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA4DE: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA4E0: dec ecx
        __asm _emit 0x49
        // 0x587DA4E1: inc eax
        __asm _emit 0x40
        // 0x587DA4E2: dec esi
        __asm _emit 0x4E
        // 0x587DA4E3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA4E5: jne 0x587da4d3
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA4E7: jmp 0x587da4ed
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA4E9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA4EB: jne 0x587da4ee
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA4ED: dec eax
        __asm _emit 0x48
        // 0x587DA4EE: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA4F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA4F3: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DA4F7: push ecx
        __asm _emit 0x51
        // 0x587DA4F8: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x587DA4FA: mov eax, 0x104
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA4FF: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DA503: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA506: je 0x587da510
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA508: inc ecx
        __asm _emit 0x41
        // 0x587DA509: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA50C: jne 0x587da503
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA50E: jmp 0x587da554
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x587DA510: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA512: je 0x587da554
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587DA514: mov edx, 0x104
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA519: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA51B: mov ecx, 0x104
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA520: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA522: lea eax, [esp + edx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x1C
        // 0x587DA526: je 0x587da550
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DA528: mov edi, 0x58a0b450
        __asm _emit 0xBF
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587DA52D: lea esi, [ecx + edx + 0x7ffffefb]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA534: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA536: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA538: je 0x587da54c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA53A: mov dl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x07
        // 0x587DA53D: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA53F: je 0x587da54c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA541: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA543: dec ecx
        __asm _emit 0x49
        // 0x587DA544: inc eax
        __asm _emit 0x40
        // 0x587DA545: dec esi
        __asm _emit 0x4E
        // 0x587DA546: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA548: jne 0x587da536
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA54A: jmp 0x587da550
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA54C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA54E: jne 0x587da551
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA550: dec eax
        __asm _emit 0x48
        // 0x587DA551: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA554: mov eax, 0x104
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA559: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587DA55D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587DA560: cmp byte ptr [ecx], 0
        __asm _emit 0x80
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x587DA563: je 0x587da56d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587DA565: inc ecx
        __asm _emit 0x41
        // 0x587DA566: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587DA569: jne 0x587da560
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x587DA56B: jmp 0x587da5b1
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x587DA56D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA56F: je 0x587da5b1
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587DA571: mov edx, 0x104
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA576: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587DA578: mov ecx, 0x104
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA57D: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587DA57F: lea eax, [esp + edx + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x1C
        // 0x587DA583: je 0x587da5ad
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587DA585: mov edi, 0x5899aafc
        __asm _emit 0xBF
        __asm _emit 0xFC
        __asm _emit 0xAA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA58A: lea esi, [ecx + edx + 0x7ffffefb]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587DA591: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587DA593: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA595: je 0x587da5a9
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587DA597: mov dl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x07
        // 0x587DA59A: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587DA59C: je 0x587da5a9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587DA59E: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587DA5A0: dec ecx
        __asm _emit 0x49
        // 0x587DA5A1: inc eax
        __asm _emit 0x40
        // 0x587DA5A2: dec esi
        __asm _emit 0x4E
        // 0x587DA5A3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA5A5: jne 0x587da593
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587DA5A7: jmp 0x587da5ad
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587DA5A9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA5AB: jne 0x587da5ae
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587DA5AD: dec eax
        __asm _emit 0x48
        // 0x587DA5AE: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA5B1: push 0x5899ba50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA5B6: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587DA5BA: push edx
        __asm _emit 0x52
        // 0x587DA5BB: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DA5BF: push eax
        __asm _emit 0x50
        // 0x587DA5C0: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA5C5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587DA5C8: jmp 0x587da607
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x587DA5CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA5CC: push 0x5899ba44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA5D1: call dword ptr [0x5898c148]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587DA5D7: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587DA5DC: push 0x5899aae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA5E1: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DA5E5: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA5EA: push ecx
        __asm _emit 0x51
        // 0x587DA5EB: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587DA5F0: push 0x5899ba50
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xBA
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587DA5F5: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587DA5F9: push edx
        __asm _emit 0x52
        // 0x587DA5FA: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587DA5FE: push eax
        __asm _emit 0x50
        // 0x587DA5FF: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA604: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587DA607: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DA609: jne 0x587da62a
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587DA60B: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DA60F: lea ecx, [esp + 0x1a0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA616: push ecx
        __asm _emit 0x51
        // 0x587DA617: push edx
        __asm _emit 0x52
        // 0x587DA618: call 0x5897ce44
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x28
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA61D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587DA621: push eax
        __asm _emit 0x50
        // 0x587DA622: call 0x5897ce3e
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x28
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA627: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587DA62A: mov ecx, dword ptr [esp + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA631: pop edi
        __asm _emit 0x5F
        // 0x587DA632: pop esi
        __asm _emit 0x5E
        // 0x587DA633: pop ebp
        __asm _emit 0x5D
        // 0x587DA634: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587DA636: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x25
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587DA63B: add esp, 0x49c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA641: ret
        __asm _emit 0xC3
    }
}

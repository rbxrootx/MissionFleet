// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 935 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f7000.

// Ghidra body range 0x587F7000..0x587F723A; 570 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7000_segment_00() {
    __asm {
        // 0x587F7000: sub esp, 0x81c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7006: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F700B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F700D: mov dword ptr [esp + 0x818], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7014: push ebp
        __asm _emit 0x55
        // 0x587F7015: push esi
        __asm _emit 0x56
        // 0x587F7016: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F7018: mov eax, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F701E: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7024: push edi
        __asm _emit 0x57
        // 0x587F7025: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F7027: cmp byte ptr [eax + 2], 0x6e
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x6E
        // 0x587F702B: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F702F: jne 0x587f7036
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587F7031: lea ebp, [edi + 7]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x07
        // 0x587F7034: jmp 0x587f7056
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x587F7036: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x587F7039: cmp cl, 0xa4
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0xA4
        // 0x587F703C: jne 0x587f7045
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F703E: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7043: jmp 0x587f7056
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587F7045: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F7047: cmp cl, 0xc0
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0xC0
        // 0x587F704A: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x587F704D: dec edx
        __asm _emit 0x4A
        // 0x587F704E: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587F7051: add edx, 3
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x03
        // 0x587F7054: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587F7056: mov dl, byte ptr [eax + ebp]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x28
        // 0x587F7059: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587F705B: cmp dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587F705E: je 0x587f7395
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7064: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F7066: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F7068: je 0x587f7395
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F706E: mov al, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x01
        // 0x587F7070: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F7072: je 0x587f70b4
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587F7074: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F7076: je 0x587f70b4
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x587F7078: cmp al, 0x30
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x587F707A: jl 0x587f7395
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7080: cmp al, 0x39
        __asm _emit 0x3C
        __asm _emit 0x39
        // 0x587F7082: jg 0x587f7395
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7088: mov eax, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F708E: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7094: inc ecx
        __asm _emit 0x41
        // 0x587F7095: inc edi
        __asm _emit 0x47
        // 0x587F7096: cmp byte ptr [eax + ebp], 0x20
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x28
        __asm _emit 0x20
        // 0x587F709A: jne 0x587f7066
        __asm _emit 0x75
        __asm _emit 0xCA
        // 0x587F709C: pop edi
        __asm _emit 0x5F
        // 0x587F709D: pop esi
        __asm _emit 0x5E
        // 0x587F709E: pop ebp
        __asm _emit 0x5D
        // 0x587F709F: mov ecx, dword ptr [esp + 0x818]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F70A6: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F70A8: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x5B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F70AD: add esp, 0x81c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F70B3: ret
        __asm _emit 0xC3
        // 0x587F70B4: push ebx
        __asm _emit 0x53
        // 0x587F70B5: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F70BA: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F70BE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F70C0: push ecx
        __asm _emit 0x51
        // 0x587F70C1: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F70C5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x5B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F70CA: mov edx, dword ptr [esi + 0x21d1c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F70D0: lea edi, [esi + 0x21d04]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F70D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F70D8: lea ebx, [esi + 0x21d1c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F70DE: mov dword ptr [esi + 0x21d20], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F70E4: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F70EA: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587F70EC: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587F70EF: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587F70F2: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x587F70F5: add esi, 0x21cec
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F70FB: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x587F70FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F7100: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F7103: mov dword ptr [edi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x587F7106: mov dword ptr [esp + 0x14], 0x18
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F710E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F7110: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587F7112: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F7116: add edx, 0x7fffffe6
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F711C: je 0x587f7131
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587F711E: mov dl, byte ptr [ecx + eax]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587F7121: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F7123: je 0x587f7131
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587F7125: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587F7127: inc eax
        __asm _emit 0x40
        // 0x587F7128: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x587F712D: jne 0x587f7112
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x587F712F: jmp 0x587f7138
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587F7131: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587F7136: jne 0x587f7139
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F7138: dec eax
        __asm _emit 0x48
        // 0x587F7139: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F713D: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7140: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7148: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F714A: jle 0x587f71dd
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7150: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F7154: fld qword ptr [0x5898cb38]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F715A: mov edx, dword ptr [eax + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7160: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x587F7162: dec ecx
        __asm _emit 0x49
        // 0x587F7163: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F7167: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F716B: jmp 0x587f7171
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F716D: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F7171: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F7175: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F7177: mov edx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F717D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587F717F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F7181: jge 0x587f7185
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587F7183: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587F7185: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F7187: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587F7189: je 0x587f718d
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x587F718B: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x587F718D: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587F718F: je 0x587f7197
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587F7191: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x587F7193: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x587F7195: jmp 0x587f7187
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x587F7197: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x587F7199: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F719B: jge 0x587f719f
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587F719D: fdivr st(1)
        __asm _emit 0xD8
        __asm _emit 0xF9
        // 0x587F719F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F71A3: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587F71A5: movsx edx, byte ptr [edx + ebp]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x2A
        // 0x587F71A9: sub edx, 0x30
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x30
        // 0x587F71AC: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F71B0: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F71B4: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x587F71B6: fiadd dword ptr [ebx]
        __asm _emit 0xDA
        __asm _emit 0x03
        // 0x587F71B8: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x5A
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F71BD: cmp eax, 0xffff
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F71C2: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x587F71C4: jg 0x587f71d9
        __asm _emit 0x7F
        __asm _emit 0x13
        // 0x587F71C6: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F71CA: dec dword ptr [esp + 0x20]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F71CE: inc eax
        __asm _emit 0x40
        // 0x587F71CF: cmp eax, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F71D3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F71D7: jl 0x587f716d
        __asm _emit 0x7C
        __asm _emit 0x94
        // 0x587F71D9: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587F71DB: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587F71DD: cmp dword ptr [ebx], 0xffff
        __asm _emit 0x81
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F71E3: jg 0x587f7217
        __asm _emit 0x7F
        __asm _emit 0x32
        // 0x587F71E5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F71E7: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587F71E9: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587F71EC: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587F71EF: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587F71F2: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587F71F5: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587F71F8: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587F71FA: push eax
        __asm _emit 0x50
        // 0x587F71FB: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7200: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587F7202: push esi
        __asm _emit 0x56
        // 0x587F7203: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x48
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F7208: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F720E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F7211: push esi
        __asm _emit 0x56
        // 0x587F7212: call 0x587ee9c0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x77
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7217: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F721B: mov ecx, dword ptr [edx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7221: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7227: cmp byte ptr [eax + ebp], 0x20
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x28
        __asm _emit 0x20
        // 0x587F722B: jne 0x587f725b
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587F722D: inc ebp
        __asm _emit 0x45
        // 0x587F722E: cmp byte ptr [eax + ebp], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x587F7232: je 0x587f725b
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587F7234: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F7238: jmp 0x587f7240
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x587F7240..0x587F73AD; 365 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7000_segment_01() {
    __asm {
        // 0x587F7240: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7246: mov dl, byte ptr [edx + ebp]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x2A
        // 0x587F7249: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587F724B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587F724D: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7253: inc ebp
        __asm _emit 0x45
        // 0x587F7254: inc eax
        __asm _emit 0x40
        // 0x587F7255: cmp byte ptr [edx + ebp], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x2A
        __asm _emit 0x00
        // 0x587F7259: jne 0x587f7240
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x587F725B: cmp dword ptr [ebx], 0xffff
        __asm _emit 0x81
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7261: jg 0x587f72be
        __asm _emit 0x7F
        __asm _emit 0x5B
        // 0x587F7263: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F7265: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587F7267: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587F726A: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587F726D: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587F7270: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587F7273: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587F7276: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587F7278: push eax
        __asm _emit 0x50
        // 0x587F7279: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F727E: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587F7280: push esi
        __asm _emit 0x56
        // 0x587F7281: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x47
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F7286: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F728A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F728D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F7290: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F7292: inc eax
        __asm _emit 0x40
        // 0x587F7293: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F7295: jne 0x587f7290
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F7297: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F7299: jne 0x587f729e
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587F729B: push eax
        __asm _emit 0x50
        // 0x587F729C: jmp 0x587f72a3
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587F729E: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F72A2: push ecx
        __asm _emit 0x51
        // 0x587F72A3: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F72A9: push esi
        __asm _emit 0x56
        // 0x587F72AA: call 0x587b7e70
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x0B
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F72AF: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F72B3: mov ecx, dword ptr [edx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F72B9: jmp 0x587f738f
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F72BE: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F72C4: push esi
        __asm _emit 0x56
        // 0x587F72C5: call 0x587b78d0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x06
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F72CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F72CC: je 0x587f732d
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x587F72CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F72D0: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587F72D2: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587F72D5: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587F72D8: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587F72DB: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587F72DE: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587F72E1: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F72E6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F72E8: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x587F72EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F72F0: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587F72F6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587F72F8: je 0x587f730b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587F72FA: mov cl, byte ptr [edi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x587F72FD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F72FF: je 0x587f730b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587F7301: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587F7303: inc eax
        __asm _emit 0x40
        // 0x587F7304: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587F7307: jne 0x587f72f0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587F7309: jmp 0x587f730f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587F730B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587F730D: jne 0x587f7310
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587F730F: dec eax
        __asm _emit 0x48
        // 0x587F7310: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F7314: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7317: mov eax, dword ptr [edx + 0x21d20]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F731D: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x587F731F: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7325: push esi
        __asm _emit 0x56
        // 0x587F7326: call 0x587ee9c0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F732B: jmp 0x587f7394
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x587F732D: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7332: lea ecx, [esp + 0x42c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7339: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F733B: push ecx
        __asm _emit 0x51
        // 0x587F733C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F7341: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F7344: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7349: push 0x5899c6ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F734E: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7354: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F7357: push eax
        __asm _emit 0x50
        // 0x587F7358: lea edx, [esp + 0x430]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F735F: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7364: push edx
        __asm _emit 0x52
        // 0x587F7365: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x46
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587F736A: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F736E: mov ecx, dword ptr [esi + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7374: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587F7377: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F737C: lea eax, [esp + 0x42c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7383: push eax
        __asm _emit 0x50
        // 0x587F7384: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x4A
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F7389: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F738F: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F7394: pop ebx
        __asm _emit 0x5B
        // 0x587F7395: mov ecx, dword ptr [esp + 0x824]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F739C: pop edi
        __asm _emit 0x5F
        // 0x587F739D: pop esi
        __asm _emit 0x5E
        // 0x587F739E: pop ebp
        __asm _emit 0x5D
        // 0x587F739F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F73A1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x58
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F73A6: add esp, 0x81c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F73AC: ret
        __asm _emit 0xC3
    }
}

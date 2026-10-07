// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 902 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e7160.

// Ghidra body range 0x587E7160..0x587E74E6; 902 mapped bytes.
extern "C" __declspec(naked) void FUN_587e7160_segment_00() {
    __asm {
        // 0x587E7160: push ecx
        __asm _emit 0x51
        // 0x587E7161: push ebx
        __asm _emit 0x53
        // 0x587E7162: push ebp
        __asm _emit 0x55
        // 0x587E7163: push esi
        __asm _emit 0x56
        // 0x587E7164: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E7168: push edi
        __asm _emit 0x57
        // 0x587E7169: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587E716B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E716D: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E7171: call 0x587b07b0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x96
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587E7176: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E717A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E717F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E7182: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E7184: je 0x587e71a6
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587E7186: mov eax, dword ptr [eax + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E718C: cmp word ptr [eax + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x587E7191: jne 0x587e71a6
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587E7193: cmp word ptr [eax + 0x22], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x0D
        // 0x587E7198: jne 0x587e71a6
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587E719A: mov ecx, dword ptr [esi + 0x180]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71A0: mov dword ptr [edi + 0x21ef0], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E71A6: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E71AC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E71AF: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71B5: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E71B9: mov dx, word ptr [ecx + ebx*4 + 0x168]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x99
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71C1: mov edi, dword ptr [esi + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71C7: add dx, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x5A
        // 0x587E71CB: imul dx, dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x0A
        // 0x587E71CF: add dx, di
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587E71D2: movsx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC2
        // 0x587E71D5: cdq
        __asm _emit 0x99
        // 0x587E71D6: mov ebp, 0xe10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71DB: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587E71DD: mov ax, word ptr [ecx + ebx*4 + 0x16a]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71E5: add ax, 0x5a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x5A
        // 0x587E71E9: imul ax, ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x587E71ED: add ax, di
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x587E71F0: cwde
        __asm _emit 0x98
        // 0x587E71F1: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E71F6: movzx ebp, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xEA
        // 0x587E71F9: cdq
        __asm _emit 0x99
        // 0x587E71FA: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587E71FC: cmp dword ptr [esi + 0xc8], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587E7203: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587E7206: jne 0x587e7211
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587E7208: movzx eax, bp
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC5
        // 0x587E720B: movzx ebp, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xEA
        // 0x587E720E: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x587E7211: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E7215: mov eax, dword ptr [ebx + 0x21ef0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E721B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E721D: sub ecx, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E7221: cmp dword ptr [esp + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587E7226: jne 0x587e7290
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x587E7228: movsx edi, dx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xFA
        // 0x587E722B: movsx edx, bp
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xD5
        // 0x587E722E: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587E7230: sub ebp, edi
        __asm _emit 0x2B
        __asm _emit 0xEF
        // 0x587E7232: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E7234: jle 0x587e725c
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x587E7236: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E7238: jge 0x587e723e
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587E723A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E723C: jg 0x587e7264
        __asm _emit 0x7F
        __asm _emit 0x26
        // 0x587E723E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587E7240: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587E7242: jns 0x587e724a
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587E7244: add ebp, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E724A: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587E724C: jns 0x587e7254
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587E724E: add edi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7254: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x587E7256: jge 0x587e7284
        __asm _emit 0x7D
        __asm _emit 0x2C
        // 0x587E7258: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587E725A: jmp 0x587e72a6
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x587E725C: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E725E: jle 0x587e7264
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587E7260: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E7262: jl 0x587e723e
        __asm _emit 0x7C
        __asm _emit 0xDA
        // 0x587E7264: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587E7266: sub edi, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E726A: jns 0x587e7272
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587E726C: add edi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7272: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587E7274: jns 0x587e727c
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587E7276: add edx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E727C: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587E727E: jge 0x587e7284
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587E7280: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587E7282: jmp 0x587e72a6
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587E7284: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587E7286: jle 0x587e72ae
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x587E7288: sub ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E728E: jmp 0x587e72ae
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x587E7290: cmp ecx, 0x708
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7296: jle 0x587e72a0
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587E7298: sub ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E729E: jmp 0x587e72ae
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587E72A0: cmp ecx, 0xfffff8f8
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xF8
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E72A6: jge 0x587e72ae
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587E72A8: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E72AE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E72B0: cdq
        __asm _emit 0x99
        // 0x587E72B1: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E72B3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E72B5: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E72B8: mov ebp, 0x40000000
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587E72BD: jle 0x587e7363
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E72C3: mov edx, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E72C9: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E72CD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E72CF: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x587E72D2: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E72D4: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x587E72D7: dec ecx
        __asm _emit 0x49
        // 0x587E72D8: and ecx, ebp
        __asm _emit 0x23
        __asm _emit 0xCD
        // 0x587E72DA: cmp dword ptr [esi + 0xb4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E72E1: mov dword ptr [esi + 0x118], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E72E7: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587E72EB: jne 0x587e7339
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x587E72ED: cmp dword ptr [esi + 0xb0], 0xe10
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E72F7: jne 0x587e7339
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587E72F9: mov ecx, dword ptr [ebx + 0x21ef0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E72FF: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E7303: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E7305: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587E7307: cdq
        __asm _emit 0x99
        // 0x587E7308: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E730A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E730C: cmp eax, 0x708
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7311: mov dword ptr [esi + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7317: jge 0x587e7329
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x587E7319: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587E731B: jle 0x587e732d
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587E731D: mov dword ptr [esi + 0x124], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7327: jmp 0x587e7371
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x587E7329: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587E732B: jle 0x587e731d
        __asm _emit 0x7E
        __asm _emit 0xF0
        // 0x587E732D: mov dword ptr [esi + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E7337: jmp 0x587e7371
        __asm _emit 0xEB
        __asm _emit 0x38
        // 0x587E7339: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587E733B: jle 0x587e734f
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x587E733D: mov dword ptr [esi + 0x124], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7347: mov dword ptr [esi + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E734D: jmp 0x587e7371
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587E734F: jge 0x587e7371
        __asm _emit 0x7D
        __asm _emit 0x20
        // 0x587E7351: mov dword ptr [esi + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E735B: mov dword ptr [esi + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7361: jmp 0x587e7371
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587E7363: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E7365: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E736B: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7371: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E7375: lea eax, [edi + 0x9b0]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E737B: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7382: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587E7384: cmp word ptr [ebx + ecx*8], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xCB
        __asm _emit 0x02
        // 0x587E7389: jne 0x587e7406
        __asm _emit 0x75
        __asm _emit 0x7B
        // 0x587E738B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587E738E: sub ecx, dword ptr [ebx + 0x21c70]
        __asm _emit 0x2B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7394: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587E7397: sub eax, dword ptr [ebx + 0x21c74]
        __asm _emit 0x2B
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E739D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587E739F: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587E73A2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E73A4: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587E73A7: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587E73A9: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E73AD: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E73B1: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E73B6: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E73BB: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x587E73BE: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587E73C0: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x587E73C5: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E73C7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587E73C9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587E73CC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587E73CE: mov edi, 0x384
        __asm _emit 0xBF
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E73D3: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587E73D5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587E73D9: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E73E0: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587E73E2: mov eax, dword ptr [ebx + ecx*8 + 0x21e88]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x88
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E73E9: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587E73EB: jle 0x587e73ef
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587E73ED: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E73EF: cmp edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x64
        // 0x587E73F2: jge 0x587e73f9
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587E73F4: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E73F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E73FB: call 0x587b07f0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x93
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587E7400: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587E7402: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E7404: jmp 0x587e7476
        __asm _emit 0xEB
        __asm _emit 0x70
        // 0x587E7406: mov eax, dword ptr [ebx + 0x21ef0]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E740C: cmp eax, 0x1c2
        __asm _emit 0x3D
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7411: jl 0x587e741a
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x587E7413: cmp eax, 0x546
        __asm _emit 0x3D
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7418: jle 0x587e7428
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587E741A: cmp eax, 0x8ca
        __asm _emit 0x3D
        __asm _emit 0xCA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E741F: jl 0x587e745c
        __asm _emit 0x7C
        __asm _emit 0x3B
        // 0x587E7421: cmp eax, 0xc4e
        __asm _emit 0x3D
        __asm _emit 0x4E
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7426: jg 0x587e745c
        __asm _emit 0x7F
        __asm _emit 0x34
        // 0x587E7428: lea edx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E742F: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587E7431: movzx edi, word ptr [ebx + edx*8 + 0x21eb4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0xD3
        __asm _emit 0xB4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7439: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E743B: call 0x587b07f0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x93
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587E7440: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587E7442: lea ecx, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x7F
        // 0x587E7445: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587E744A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587E744C: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587E744F: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587E7451: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587E7454: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587E7456: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587E7458: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x587E745A: jmp 0x587e7476
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x587E745C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E745E: call 0x587b07f0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587E7463: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E746A: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x587E746C: movzx ecx, word ptr [ebx + ecx*8 + 0x21eb4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0xCB
        __asm _emit 0xB4
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7474: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587E7476: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E7478: cdq
        __asm _emit 0x99
        // 0x587E7479: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587E747B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587E747D: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587E7480: jge 0x587e748f
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x587E7482: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E7485: jle 0x587e748f
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587E7487: mov dword ptr [esi + 0x11c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E748D: jmp 0x587e7499
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587E748F: mov dword ptr [esi + 0x11c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7499: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E749C: jle 0x587e74d4
        __asm _emit 0x7E
        __asm _emit 0x36
        // 0x587E749E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587E74A0: jle 0x587e74ba
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587E74A2: pop edi
        __asm _emit 0x5F
        // 0x587E74A3: mov dword ptr [esi + 0x10c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E74A9: mov dword ptr [esi + 0x128], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E74B3: pop esi
        __asm _emit 0x5E
        // 0x587E74B4: pop ebp
        __asm _emit 0x5D
        // 0x587E74B5: pop ebx
        __asm _emit 0x5B
        // 0x587E74B6: pop ecx
        __asm _emit 0x59
        // 0x587E74B7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E74BA: jge 0x587e74de
        __asm _emit 0x7D
        __asm _emit 0x22
        // 0x587E74BC: pop edi
        __asm _emit 0x5F
        // 0x587E74BD: mov dword ptr [esi + 0x10c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E74C3: mov dword ptr [esi + 0x128], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E74CD: pop esi
        __asm _emit 0x5E
        // 0x587E74CE: pop ebp
        __asm _emit 0x5D
        // 0x587E74CF: pop ebx
        __asm _emit 0x5B
        // 0x587E74D0: pop ecx
        __asm _emit 0x59
        // 0x587E74D1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E74D4: mov dword ptr [esi + 0x10c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E74DE: pop edi
        __asm _emit 0x5F
        // 0x587E74DF: pop esi
        __asm _emit 0x5E
        // 0x587E74E0: pop ebp
        __asm _emit 0x5D
        // 0x587E74E1: pop ebx
        __asm _emit 0x5B
        // 0x587E74E2: pop ecx
        __asm _emit 0x59
        // 0x587E74E3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

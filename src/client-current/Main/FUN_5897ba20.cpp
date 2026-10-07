// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 941 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897ba20.

// Ghidra body range 0x5897BA20..0x5897BDCD; 941 mapped bytes.
extern "C" __declspec(naked) void FUN_5897ba20_segment_00() {
    __asm {
        // 0x5897BA20: sub esp, 0xa2c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x2C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA26: push ebx
        __asm _emit 0x53
        // 0x5897BA27: push ebp
        __asm _emit 0x55
        // 0x5897BA28: push esi
        __asm _emit 0x56
        // 0x5897BA29: mov esi, dword ptr [esp + 0xa3c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA30: push edi
        __asm _emit 0x57
        // 0x5897BA31: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA37: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BA39: jg 0x5897ba55
        __asm _emit 0x7F
        __asm _emit 0x1A
        // 0x5897BA3B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BA3D: push esi
        __asm _emit 0x56
        // 0x5897BA3E: mov dword ptr [eax + 0x14], 0x13
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA45: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BA47: mov dword ptr [ecx + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA4E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BA50: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897BA52: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BA55: mov ebp, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA5B: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897BA5F: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5897BA62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BA64: jne 0x5897ba90
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x5897BA66: cmp dword ptr [ebp + 0x18], 0x3f
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x18
        __asm _emit 0x3F
        // 0x5897BA6A: jne 0x5897ba90
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5897BA6C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897BA6F: mov byte ptr [esi + 0xd4], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BA76: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897BA78: jle 0x5897bab0
        __asm _emit 0x7E
        __asm _emit 0x36
        // 0x5897BA7A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5897BA7C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5897BA7E: lea edi, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5897BA82: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x5897BA85: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x5897BA87: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5897BA89: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897BA8C: rep stosb byte ptr es:[edi], al
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x5897BA8E: jmp 0x5897bab0
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x5897BA90: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5897BA93: mov byte ptr [esi + 0xd4], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5897BA9A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897BA9C: jle 0x5897bab0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5897BA9E: and ecx, 0xffffff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5897BAA4: lea edi, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5897BAA8: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x5897BAAB: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5897BAAE: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x5897BAB0: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BAB6: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BABB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897BABD: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BAC1: jl 0x5897bd50
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BAC7: jmp 0x5897bacd
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5897BAC9: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897BACD: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5897BAD0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5897BAD2: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897BAD6: jle 0x5897badd
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5897BAD8: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x5897BADB: jle 0x5897bafc
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5897BADD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BADF: push esi
        __asm _emit 0x56
        // 0x5897BAE0: mov dword ptr [eax + 0x14], 0x1a
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x1A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BAE7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BAE9: mov dword ptr [ecx + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x18
        // 0x5897BAEC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BAEE: mov dword ptr [edx + 0x1c], 4
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x1C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BAF5: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BAF7: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897BAF9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BAFC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5897BAFE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5897BB00: jle 0x5897bb5d
        __asm _emit 0x7E
        __asm _emit 0x5B
        // 0x5897BB02: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5897BB05: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5897BB07: jl 0x5897bb0e
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5897BB09: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5897BB0C: jl 0x5897bb28
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x5897BB0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BB10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BB14: push esi
        __asm _emit 0x56
        // 0x5897BB15: mov dword ptr [ecx + 0x14], 0x13
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BB1C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BB1E: mov dword ptr [edx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5897BB21: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BB23: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897BB25: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BB28: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5897BB2A: jle 0x5897bb4b
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5897BB2C: cmp edi, dword ptr [ebp]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5897BB2F: jg 0x5897bb4b
        __asm _emit 0x7F
        __asm _emit 0x1A
        // 0x5897BB31: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BB33: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BB37: push esi
        __asm _emit 0x56
        // 0x5897BB38: mov dword ptr [edx + 0x14], 0x13
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BB3F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BB41: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5897BB44: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BB46: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897BB48: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BB4B: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897BB4F: inc ebx
        __asm _emit 0x43
        // 0x5897BB50: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5897BB53: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5897BB55: jl 0x5897bb02
        __asm _emit 0x7C
        __asm _emit 0xAB
        // 0x5897BB57: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897BB5B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5897BB5D: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897BB61: mov ebp, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x14
        // 0x5897BB64: cmp byte ptr [esi + 0xd4], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BB6B: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5897BB6F: mov eax, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x5897BB72: mov ecx, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x1C
        // 0x5897BB75: mov edx, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x20
        // 0x5897BB78: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897BB7C: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897BB80: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897BB84: je 0x5897bcc8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BB8A: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5897BB8C: jl 0x5897bbae
        __asm _emit 0x7C
        __asm _emit 0x20
        // 0x5897BB8E: cmp ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x40
        // 0x5897BB91: jge 0x5897bbae
        __asm _emit 0x7D
        __asm _emit 0x1B
        // 0x5897BB93: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5897BB95: jl 0x5897bbae
        __asm _emit 0x7C
        __asm _emit 0x17
        // 0x5897BB97: cmp eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x40
        // 0x5897BB9A: jge 0x5897bbae
        __asm _emit 0x7D
        __asm _emit 0x12
        // 0x5897BB9C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897BB9E: jl 0x5897bbae
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5897BBA0: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5897BBA3: jg 0x5897bbae
        __asm _emit 0x7F
        __asm _emit 0x09
        // 0x5897BBA5: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897BBA7: jl 0x5897bbae
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5897BBA9: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x5897BBAC: jle 0x5897bbcc
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5897BBAE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BBB0: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BBB4: push esi
        __asm _emit 0x56
        // 0x5897BBB5: mov dword ptr [eax + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BBBC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BBBE: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5897BBC1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BBC3: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897BBC5: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897BBC9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BBCC: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5897BBCE: jne 0x5897bbed
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5897BBD0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BBD2: je 0x5897bc0c
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5897BBD4: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BBD6: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BBDA: push esi
        __asm _emit 0x56
        // 0x5897BBDB: mov dword ptr [ecx + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BBE2: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BBE4: mov dword ptr [edx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5897BBE7: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BBE9: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897BBEB: jmp 0x5897bc09
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x5897BBED: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5897BBF0: je 0x5897bc0c
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5897BBF2: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BBF4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BBF8: push esi
        __asm _emit 0x56
        // 0x5897BBF9: mov dword ptr [edx + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BC00: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BC02: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5897BC05: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BC07: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897BC09: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BC0C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5897BC0E: jle 0x5897bd32
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x1E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BC14: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5897BC17: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897BC1B: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5897BC1F: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5897BC21: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x5897BC24: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5897BC26: lea edi, [esp + eax + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x3C
        // 0x5897BC2A: je 0x5897bc4d
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5897BC2C: cmp dword ptr [edi], 0
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x5897BC2F: jge 0x5897bc4d
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x5897BC31: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BC33: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BC37: push esi
        __asm _emit 0x56
        // 0x5897BC38: mov dword ptr [ecx + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BC3F: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BC41: mov dword ptr [edx + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x18
        // 0x5897BC44: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BC46: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897BC48: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BC4B: jmp 0x5897bc51
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5897BC4D: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BC51: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897BC55: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5897BC57: jg 0x5897bcac
        __asm _emit 0x7F
        __asm _emit 0x53
        // 0x5897BC59: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5897BC5D: lea edi, [edi + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xAF
        // 0x5897BC60: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5897BC62: sub ebp, ecx
        __asm _emit 0x2B
        __asm _emit 0xE9
        // 0x5897BC64: inc ebp
        __asm _emit 0x45
        // 0x5897BC65: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5897BC67: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BC69: jge 0x5897bc75
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x5897BC6B: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897BC6F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BC71: je 0x5897bc9c
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5897BC73: jmp 0x5897bc86
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5897BC75: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897BC79: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897BC7B: jne 0x5897bc86
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5897BC7D: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897BC81: dec ecx
        __asm _emit 0x49
        // 0x5897BC82: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897BC84: je 0x5897bc9c
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5897BC86: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BC88: push esi
        __asm _emit 0x56
        // 0x5897BC89: mov dword ptr [ecx + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BC90: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BC92: mov dword ptr [edx + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x18
        // 0x5897BC95: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BC97: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897BC99: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BC9C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897BCA0: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x5897BCA2: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5897BCA5: dec ebp
        __asm _emit 0x4D
        // 0x5897BCA6: jne 0x5897bc65
        __asm _emit 0x75
        __asm _emit 0xBD
        // 0x5897BCA8: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5897BCAC: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5897BCB0: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897BCB4: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5897BCB7: dec eax
        __asm _emit 0x48
        // 0x5897BCB8: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5897BCBC: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897BCC0: jne 0x5897bc1f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897BCC6: jmp 0x5897bd2e
        __asm _emit 0xEB
        __asm _emit 0x66
        // 0x5897BCC8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5897BCCA: jne 0x5897bcd9
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5897BCCC: cmp eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x3F
        // 0x5897BCCF: jne 0x5897bcd9
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897BCD1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897BCD3: jne 0x5897bcd9
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5897BCD5: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897BCD7: je 0x5897bcf3
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5897BCD9: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BCDB: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BCDF: push esi
        __asm _emit 0x56
        // 0x5897BCE0: mov dword ptr [edx + 0x14], 0x11
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BCE7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BCE9: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5897BCEC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BCEE: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897BCF0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BCF3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5897BCF5: jle 0x5897bd32
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x5897BCF7: lea ebp, [ebx + 4]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x5897BCFA: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x5897BCFC: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5897BCFF: lea edi, [esp + eax + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x5897BD03: mov al, byte ptr [esp + eax + 0x30]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x5897BD07: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897BD09: je 0x5897bd25
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5897BD0B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BD0D: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BD11: push esi
        __asm _emit 0x56
        // 0x5897BD12: mov dword ptr [eax + 0x14], 0x13
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BD19: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BD1B: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5897BD1E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BD20: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x5897BD22: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BD25: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5897BD28: dec ebx
        __asm _emit 0x4B
        // 0x5897BD29: mov byte ptr [edi], 1
        __asm _emit 0xC6
        __asm _emit 0x07
        __asm _emit 0x01
        // 0x5897BD2C: jne 0x5897bcfc
        __asm _emit 0x75
        __asm _emit 0xCE
        // 0x5897BD2E: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897BD32: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BD36: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BD3C: add ebx, 0x24
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x24
        // 0x5897BD3F: inc eax
        __asm _emit 0x40
        // 0x5897BD40: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897BD42: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897BD46: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897BD4A: jle 0x5897bac9
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x79
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897BD50: mov al, byte ptr [esi + 0xd4]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BD56: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897BD58: je 0x5897bd97
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x5897BD5A: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897BD5D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5897BD5F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BD61: jle 0x5897bdc2
        __asm _emit 0x7E
        __asm _emit 0x5F
        // 0x5897BD63: lea ebx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5897BD67: mov ebp, 0x2d
        __asm _emit 0xBD
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BD6C: cmp dword ptr [ebx], 0
        __asm _emit 0x83
        __asm _emit 0x3B
        __asm _emit 0x00
        // 0x5897BD6F: jge 0x5897bd7e
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x5897BD71: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BD73: push esi
        __asm _emit 0x56
        // 0x5897BD74: mov dword ptr [ecx + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x14
        // 0x5897BD77: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5897BD79: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x5897BD7B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BD7E: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897BD81: inc edi
        __asm _emit 0x47
        // 0x5897BD82: add ebx, 0x100
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BD88: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5897BD8A: jl 0x5897bd6c
        __asm _emit 0x7C
        __asm _emit 0xE0
        // 0x5897BD8C: pop edi
        __asm _emit 0x5F
        // 0x5897BD8D: pop esi
        __asm _emit 0x5E
        // 0x5897BD8E: pop ebp
        __asm _emit 0x5D
        // 0x5897BD8F: pop ebx
        __asm _emit 0x5B
        // 0x5897BD90: add esp, 0xa2c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x2C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BD96: ret
        __asm _emit 0xC3
        // 0x5897BD97: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897BD9A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5897BD9C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897BD9E: jle 0x5897bdc2
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x5897BDA0: mov ebp, 0x2d
        __asm _emit 0xBD
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BDA5: mov al, byte ptr [esp + edi + 0x30]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x3C
        __asm _emit 0x30
        // 0x5897BDA9: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897BDAB: jne 0x5897bdba
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5897BDAD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897BDAF: push esi
        __asm _emit 0x56
        // 0x5897BDB0: mov dword ptr [eax + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x5897BDB3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5897BDB5: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897BDB7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897BDBA: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5897BDBD: inc edi
        __asm _emit 0x47
        // 0x5897BDBE: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5897BDC0: jl 0x5897bda5
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x5897BDC2: pop edi
        __asm _emit 0x5F
        // 0x5897BDC3: pop esi
        __asm _emit 0x5E
        // 0x5897BDC4: pop ebp
        __asm _emit 0x5D
        // 0x5897BDC5: pop ebx
        __asm _emit 0x5B
        // 0x5897BDC6: add esp, 0xa2c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x2C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897BDCC: ret
        __asm _emit 0xC3
    }
}

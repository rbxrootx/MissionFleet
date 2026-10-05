// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra body: 0x588D84D0..0x588D8D51 (2178 bytes). The mapped epilogue at
// 0x588D8D52..0x588D8D57 adds mov esp,ebp; pop ebp; ret 8, for 2184 callable
// bytes; the following eight bytes are INT3 padding. The verified
// CShip_MapObjectScreen constructor FUN_588e05c0 calls this at 0x588E0978
// after FUN_588d8d60 and pushes two values read from its own stack frame.
// The body clears receiver-relative tables, processes map-derived records,
// calls the observed 0x587B* helpers, and stores a 0x74-byte helper result at
// receiver +0x23C. Field roles, coordinate units, and visual effects remain
// unresolved; the raw instruction stream is kept intact.
// Source symbol alias: FUN_588d84d0.
extern "C" __declspec(naked) void FUN_588d84d0() {
    __asm {
        // 0x588D84D0: push ebp
        __asm _emit 0x55
        // 0x588D84D1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588D84D3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x588D84D6: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D84D8: push 0x5898943a
        __asm _emit 0x68
        __asm _emit 0x3A
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D84DD: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D84E3: push eax
        __asm _emit 0x50
        // 0x588D84E4: sub esp, 0x1c8
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D84EA: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D84EF: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D84F1: mov dword ptr [esp + 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D84F8: push ebx
        __asm _emit 0x53
        // 0x588D84F9: push esi
        __asm _emit 0x56
        // 0x588D84FA: push edi
        __asm _emit 0x57
        // 0x588D84FB: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D8500: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D8502: push eax
        __asm _emit 0x50
        // 0x588D8503: lea eax, [esp + 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D850A: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8510: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588D8512: lea esi, [ebx + 0x240]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8518: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D851A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D851C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D851E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D8520: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588D8522: and edi, 7
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x07
        // 0x588D8525: mov dword ptr [ebx + edi*4 + 0x60dc], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xBB
        __asm _emit 0xDC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D852C: mov dword ptr [eax - 0xc4], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8532: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588D8534: mov dword ptr [eax + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D853A: inc ecx
        __asm _emit 0x41
        // 0x588D853B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588D853E: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x588D8541: jl 0x588d8520
        __asm _emit 0x7C
        __asm _emit 0xDD
        // 0x588D8543: mov dword ptr [esp + 0x24], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D854B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D854D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588D8550: mov ecx, 0x384
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8555: mov word ptr [esp + eax*4 + 0x1c8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D855D: mov word ptr [esp + eax*4 + 0x1ca], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8565: inc eax
        __asm _emit 0x40
        // 0x588D8566: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588D8569: jl 0x588d8550
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x588D856B: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8570: push edx
        __asm _emit 0x52
        // 0x588D8571: lea edx, [ebx + 0x6548]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8577: push edx
        __asm _emit 0x52
        // 0x588D8578: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x46
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D857D: lea edx, [ebx + 0x654c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x4C
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8583: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D8587: mov edx, 0x900
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D858C: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588D858E: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588D8592: mov edx, 0xfffffde4
        __asm _emit 0xBA
        __asm _emit 0xE4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8597: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588D859A: lea ecx, [ebx + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85A0: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D85A2: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588D85A4: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D85A8: mov dword ptr [esp + 0x1c], 0x8e
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85B0: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D85B4: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D85B8: jmp 0x588d85c4
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588D85BA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85C0: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D85C4: movzx edx, byte ptr [ecx - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0xE0
        // 0x588D85C8: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x588D85CB: lea edx, [ecx + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x51
        // 0x588D85CE: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x588D85D1: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588D85D3: lea esi, [edx + 0x888]
        __asm _emit 0x8D
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85D9: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85DE: lea edi, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588D85E2: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588D85E4: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D85E8: lea esi, [eax + ecx]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x08
        // 0x588D85EB: mov ecx, dword ptr [ebx + esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x33
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85F2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D85F4: je 0x588d8907
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0D
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D85FA: movzx ecx, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x09
        // 0x588D85FD: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x588D8601: jne 0x588d8907
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8607: mov esi, dword ptr [eax + 0xc4c]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x4C
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D860D: mov eax, dword ptr [ebx + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8613: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8618: lea edi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x588D861C: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588D861E: movzx ecx, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8625: mov dl, byte ptr [edx + 0x489]
        __asm _emit 0x8A
        __asm _emit 0x92
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D862B: movsx eax, word ptr [esp + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8633: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D8636: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588D8638: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588D863C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588D863E: xor dl, 0x2a
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0x2A
        // 0x588D8641: imul esi, esi, 0x64
        __asm _emit 0x6B
        __asm _emit 0xF6
        __asm _emit 0x64
        // 0x588D8644: and dl, 0x7f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x7F
        // 0x588D8647: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x588D864A: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588D864D: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x588D8650: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8654: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D8658: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D865C: mov dword ptr [edi - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x588D865F: fnstcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8663: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8668: fmul qword ptr [0x5898d780]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D866E: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8673: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D8677: fldcw word ptr [esp + 0x2c]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D867B: fistp qword ptr [esp + 0x2c]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D867F: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D8683: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x588D8686: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D868A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588D868C: mov eax, 0x60606061
        __asm _emit 0xB8
        __asm _emit 0x61
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x60
        // 0x588D8691: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D8693: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D8696: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D8698: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D869B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D869D: lea edx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x76
        // 0x588D86A0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D86A2: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588D86A4: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588D86A6: jle 0x588d86aa
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x588D86A8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D86AA: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x588D86AC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D86B1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D86B3: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D86B6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D86B8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D86BB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D86BD: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D86C1: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D86C6: movzx eax, word ptr [eax + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D86CD: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588D86D1: je 0x588d8776
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D86D7: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x588D86DB: je 0x588d8776
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D86E1: movzx esi, word ptr [esp + 0x102]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D86E9: lea ecx, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB6
        // 0x588D86EC: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588D86F1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D86F3: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588D86F6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D86F8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D86FB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D86FD: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588D8700: mov eax, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588D8704: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x588D8707: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D870B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588D870D: je 0x588d8724
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588D870F: mov eax, 0xae147ae1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0xAE
        // 0x588D8714: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D8716: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D8719: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D871B: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D871E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D8720: add dword ptr [esp + 0x14], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8724: movzx ecx, word ptr [esp + 0x54]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588D8729: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588D872C: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8731: cdq
        __asm _emit 0x99
        // 0x588D8732: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D8734: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D8736: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x588D8739: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D873E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D8740: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D8743: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D8745: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D8748: lea ecx, [edx + eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x588D874C: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D874F: imul ecx, ecx, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x0D
        // 0x588D8752: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588D8757: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D8759: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D875D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588D8760: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D8762: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D8765: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D8767: mov word ptr [esp + 0x102], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D876F: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588D8772: jbe 0x588d87ae
        __asm _emit 0x76
        __asm _emit 0x3A
        // 0x588D8774: jmp 0x588d87a6
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x588D8776: movzx ecx, word ptr [esp + 0x54]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588D877B: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588D877E: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8783: cdq
        __asm _emit 0x99
        // 0x588D8784: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D8786: movzx edx, word ptr [esp + 0x102]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D878E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D8790: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x588D8793: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D8798: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D879A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D879D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D879F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D87A2: lea ecx, [edx + eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x588D87A6: mov word ptr [esp + 0x102], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D87AE: mov eax, dword ptr [edi - 0x563c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xC4
        __asm _emit 0xA9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D87B4: mov edx, dword ptr [edi - 0x5640]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xC0
        __asm _emit 0xA9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D87BA: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588D87BE: mov eax, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D87C5: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x588D87C8: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D87CC: cmp word ptr [esp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D87D1: jbe 0x588d87da
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x588D87D3: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x588D87D6: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D87DA: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D87DE: movzx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x07
        // 0x588D87E1: movzx edx, byte ptr [edi - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0xE0
        // 0x588D87E5: lea ecx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x588D87E8: mov eax, dword ptr [esp + 0xfe]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D87EF: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588D87F2: lea ecx, [esp + ecx*2 + 0x1c8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x4C
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D87F9: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x588D87FC: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x588D87FF: jbe 0x588d8804
        __asm _emit 0x76
        __asm _emit 0x03
        // 0x588D8801: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x588D8804: push 0x243ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D8809: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D880E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D8811: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8815: mov dword ptr [esp + 0x1e0], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8820: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D8822: je 0x588d887d
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588D8824: movzx edx, word ptr [esp + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x588D8829: mov esi, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D882F: cmp dword ptr [esi + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8835: mov ecx, dword ptr [ebx + 0x1010]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D883B: jle 0x588d8855
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588D883D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D883F: jl 0x588d8855
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588D8841: cmp dword ptr [esi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8848: je 0x588d8855
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D884A: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588D884D: add edx, dword ptr [esi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8853: jmp 0x588d8857
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D8855: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D8857: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D885B: mov cx, word ptr [esi + ecx]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x0E
        // 0x588D885F: add cx, word ptr [ebx + 0x42ac]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8866: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D8869: push ecx
        __asm _emit 0x51
        // 0x588D886A: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x588D886D: push ecx
        __asm _emit 0x51
        // 0x588D886E: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588D8871: push ecx
        __asm _emit 0x51
        // 0x588D8872: push edx
        __asm _emit 0x52
        // 0x588D8873: push ebx
        __asm _emit 0x53
        // 0x588D8874: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D8876: call 0x587b3090
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D887B: jmp 0x588d887f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D887D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D887F: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8883: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588D8885: mov edx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D888B: push edx
        __asm _emit 0x52
        // 0x588D888C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D888E: mov dword ptr [esp + 0x1e4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8899: call 0x587b0bb0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D889E: movzx eax, word ptr [ebx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D88A5: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D88A9: push eax
        __asm _emit 0x50
        // 0x588D88AA: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x588D88AC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D88AE: push edi
        __asm _emit 0x57
        // 0x588D88AF: lea edx, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x588D88B3: push edx
        __asm _emit 0x52
        // 0x588D88B4: call 0x587b2a40
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xA1
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D88B9: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D88BB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588D88BD: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D88C1: mov eax, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x30
        // 0x588D88C4: push edx
        __asm _emit 0x52
        // 0x588D88C5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D88C7: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588D88CB: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D88CF: push ecx
        __asm _emit 0x51
        // 0x588D88D0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D88D2: push edx
        __asm _emit 0x52
        // 0x588D88D3: call 0x587b1f90
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x96
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D88D8: movzx eax, word ptr [esi + 0xbce]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D88DF: movzx ecx, word ptr [esi + 0xbcc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D88E6: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588D88E9: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D88EC: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D88F1: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D88F7: push eax
        __asm _emit 0x50
        // 0x588D88F8: push ecx
        __asm _emit 0x51
        // 0x588D88F9: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D88FB: call 0x587b21f0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x98
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8900: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588D8902: jmp 0x588d8b53
        __asm _emit 0xE9
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8907: mov esi, dword ptr [ebx + esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x33
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D890E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D8910: je 0x588d8b5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8916: movzx ecx, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x0E
        // 0x588D8919: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x588D891D: jne 0x588d8b5d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8923: mov eax, dword ptr [eax + 0xc4c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x4C
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8929: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D892F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588D8931: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D8935: mov ecx, 0x2a
        __asm _emit 0xB9
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D893A: lea edi, [esp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8941: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588D8943: mov ecx, dword ptr [eax - 0x5640]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0xA9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8949: movzx eax, word ptr [edx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8950: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D8954: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x588D8958: je 0x588d8a0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D895E: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x588D8962: je 0x588d8a0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8968: movzx ecx, word ptr [esp + 0x1bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8970: lea esi, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x89
        // 0x588D8973: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588D8978: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588D897A: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588D897D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D897F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D8982: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D8984: test byte ptr [esp + 0x5d], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5D
        __asm _emit 0x01
        // 0x588D8989: movzx edi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF8
        // 0x588D898C: je 0x588d89a1
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588D898E: mov eax, 0xae147ae1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0xAE
        // 0x588D8993: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588D8995: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D8998: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D899A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D899D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D899F: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x588D89A1: movzx esi, word ptr [esp + 0x56]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x56
        // 0x588D89A6: imul ecx, ecx, 0x96
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D89AC: add esi, 0x64
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x64
        // 0x588D89AF: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D89B4: cdq
        __asm _emit 0x99
        // 0x588D89B5: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588D89B7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588D89B9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D89BE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D89C0: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D89C3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D89C5: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D89C8: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D89CA: imul esi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF1
        // 0x588D89CD: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D89D2: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588D89D4: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D89D7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D89D9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D89DC: lea ecx, [edx + eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x588D89E0: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D89E3: imul ecx, ecx, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x0D
        // 0x588D89E6: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588D89EB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D89ED: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588D89F0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D89F2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D89F5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D89F7: mov word ptr [esp + 0x1bc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D89FF: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588D8A02: jbe 0x588d8a5d
        __asm _emit 0x76
        __asm _emit 0x59
        // 0x588D8A04: mov word ptr [esp + 0x1bc], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A0C: jmp 0x588d8a5d
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x588D8A0E: movzx ecx, word ptr [esp + 0x56]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x56
        // 0x588D8A13: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588D8A16: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A1B: cdq
        __asm _emit 0x99
        // 0x588D8A1C: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D8A1E: movzx ecx, word ptr [esp + 0x1bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A26: imul ecx, ecx, 0x96
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A2C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588D8A2E: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D8A33: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D8A35: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D8A38: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D8A3A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D8A3D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D8A3F: imul esi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF0
        // 0x588D8A42: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D8A47: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588D8A49: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D8A4C: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D8A4E: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D8A51: lea edx, [edx + ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x01
        // 0x588D8A55: mov word ptr [esp + 0x1bc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A5D: mov eax, dword ptr [esp + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A64: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588D8A67: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x588D8A6A: cmp word ptr [esp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D8A6F: jbe 0x588d8a78
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x588D8A71: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x588D8A74: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D8A78: push 0x3910
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A7D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x41
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D8A82: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D8A85: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D8A89: mov dword ptr [esp + 0x1e0], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8A94: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D8A96: je 0x588d8af7
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x588D8A98: movzx edx, word ptr [esp + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8AA0: mov esi, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D8AA6: mov ecx, dword ptr [ebx + 0x1010]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8AAC: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x588D8AAF: cmp dword ptr [esi + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8AB5: jle 0x588d8acf
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588D8AB7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D8AB9: jl 0x588d8acf
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588D8ABB: cmp dword ptr [esi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8AC2: je 0x588d8acf
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D8AC4: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x588D8AC7: add edx, dword ptr [esi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8ACD: jmp 0x588d8ad1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D8ACF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D8AD1: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D8AD5: mov cx, word ptr [esi + ecx]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x0E
        // 0x588D8AD9: add cx, word ptr [ebx + 0x42ac]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8AE0: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D8AE3: push ecx
        __asm _emit 0x51
        // 0x588D8AE4: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x588D8AE7: push ecx
        __asm _emit 0x51
        // 0x588D8AE8: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x588D8AEB: push ecx
        __asm _emit 0x51
        // 0x588D8AEC: push edx
        __asm _emit 0x52
        // 0x588D8AED: push ebx
        __asm _emit 0x53
        // 0x588D8AEE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D8AF0: call 0x587b4060
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xB5
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8AF5: jmp 0x588d8af9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D8AF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D8AF9: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8AFD: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B03: movzx ecx, word ptr [esi + 0xbcc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B0A: movzx edi, word ptr [ebx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBB
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B11: mov edx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B17: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x588D8B1A: push edi
        __asm _emit 0x57
        // 0x588D8B1B: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D8B1F: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B25: push ecx
        __asm _emit 0x51
        // 0x588D8B26: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D8B2A: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588D8B2C: push ecx
        __asm _emit 0x51
        // 0x588D8B2D: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D8B31: push ecx
        __asm _emit 0x51
        // 0x588D8B32: lea ecx, [esp + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B39: push ecx
        __asm _emit 0x51
        // 0x588D8B3A: push edx
        __asm _emit 0x52
        // 0x588D8B3B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D8B3D: mov dword ptr [esp + 0x1f8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8B48: call 0x587b4a30
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xBE
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8B4D: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B53: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8B57: mov dword ptr [esi - 0xc4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8B5D: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D8B61: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D8B65: add dword ptr [esp + 0x1c], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x588D8B6A: add dword ptr [esp + 0x18], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        // 0x588D8B6F: inc ecx
        __asm _emit 0x41
        // 0x588D8B70: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D8B74: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588D8B77: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D8B79: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x588D8B7C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8B80: jl 0x588d85c0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3A
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8B86: lea eax, [ebx + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8B8C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D8B8E: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8B92: mov eax, 0xffffffec
        __asm _emit 0xB8
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8B97: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x588D8B99: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D8B9D: mov eax, 0x6c
        __asm _emit 0xB8
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BA2: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x588D8BA4: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D8BA8: mov eax, 0xfffffe84
        __asm _emit 0xB8
        __asm _emit 0x84
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8BAD: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x588D8BAF: mov dword ptr [esp + 0x18], 0x128
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BB7: lea esi, [ebx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BBD: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D8BC1: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588D8BC4: je 0x588d8ce2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BCA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8BCC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588D8BCE: mov edx, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x34
        // 0x588D8BD1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588D8BD3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8BD5: push ebx
        __asm _emit 0x53
        // 0x588D8BD6: call 0x587b1310
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x87
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8BDB: movzx eax, byte ptr [edi - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0xE0
        // 0x588D8BDF: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8BE1: mov dword ptr [ecx + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BE7: movzx ecx, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D8BEC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D8BEE: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x588D8BF1: jb 0x588d8bf8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588D8BF3: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BF8: mov dword ptr [eax + 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8BFE: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D8C02: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C08: lea edi, [ecx + esi]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x31
        // 0x588D8C0B: movsx edx, word ptr [eax + edi + 0x16a]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0x38
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C13: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D8C17: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588D8C19: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8C1B: push edx
        __asm _emit 0x52
        // 0x588D8C1C: movsx edx, word ptr [eax + esi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x30
        // 0x588D8C20: push edx
        __asm _emit 0x52
        // 0x588D8C21: call 0x587b0830
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x7C
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8C26: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C2C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D8C30: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x588D8C34: movsx ecx, word ptr [eax + edi + 0x1ea]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x38
        __asm _emit 0xEA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C3C: push edx
        __asm _emit 0x52
        // 0x588D8C3D: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D8C41: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D8C43: movsx eax, word ptr [eax + esi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x30
        // 0x588D8C47: push ecx
        __asm _emit 0x51
        // 0x588D8C48: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8C4A: push eax
        __asm _emit 0x50
        // 0x588D8C4B: call 0x587b0860
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x7C
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8C50: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D8C54: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8C58: mov edx, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C5E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588D8C60: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588D8C62: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C67: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588D8C69: shr edi, 4
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x04
        // 0x588D8C6C: mov eax, dword ptr [edx + edi*4 + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBA
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8C73: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x588D8C75: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x588D8C77: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8C79: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x588D8C7C: push eax
        __asm _emit 0x50
        // 0x588D8C7D: call 0x587b0910
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8C82: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8C84: cmp dword ptr [ecx + 0x100], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D8C8E: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8C92: jne 0x588d8cac
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588D8C94: movzx eax, byte ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x07
        // 0x588D8C97: movzx edx, byte ptr [edi - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0xE0
        // 0x588D8C9B: lea edx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x50
        // 0x588D8C9E: movzx eax, word ptr [esp + edx*2 + 0x1c8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8CA6: push eax
        __asm _emit 0x50
        // 0x588D8CA7: call 0x587b08c0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x7C
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8CAC: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8CB2: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D8CB6: movsx eax, word ptr [eax + ecx]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x588D8CBA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588D8CBC: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x588D8CBF: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588D8CC1: push eax
        __asm _emit 0x50
        // 0x588D8CC2: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8CC8: call 0x587b0630
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x79
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8CCD: cmp byte ptr [edi], 0
        __asm _emit 0x80
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x588D8CD0: je 0x588d8cdb
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588D8CD2: or byte ptr [ebx + 0x60ad], 0x20
        __asm _emit 0x80
        __asm _emit 0x8B
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588D8CD9: jmp 0x588d8ce2
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588D8CDB: or byte ptr [ebx + 0x60ad], 0x10
        __asm _emit 0x80
        __asm _emit 0x8B
        __asm _emit 0xAD
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588D8CE2: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8CE6: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D8CEA: add dword ptr [esp + 0x18], 2
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        // 0x588D8CEF: inc edi
        __asm _emit 0x47
        // 0x588D8CF0: lea eax, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588D8CF3: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D8CF6: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588D8CF9: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D8CFD: jl 0x588d8bc1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8D03: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x588D8D05: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x3F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D8D0A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D8D0D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D8D11: mov dword ptr [esp + 0x1e0], 2
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8D1C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D8D1E: je 0x588d8d2a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D8D20: push ebx
        __asm _emit 0x53
        // 0x588D8D21: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D8D23: call 0x587b04b0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x77
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588D8D28: jmp 0x588d8d2c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D8D2A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D8D2C: mov dword ptr [ebx + 0x23c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8D32: mov ecx, dword ptr [esp + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8D39: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8D40: pop ecx
        __asm _emit 0x59
        // 0x588D8D41: pop edi
        __asm _emit 0x5F
        // 0x588D8D42: pop esi
        __asm _emit 0x5E
        // 0x588D8D43: pop ebx
        __asm _emit 0x5B
        // 0x588D8D44: mov ecx, dword ptr [esp + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8D4B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588D8D4D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x3E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D8D52: mov esp, ebp (mapped epilogue omitted by Ghidra extent)
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x588D8D54: pop ebp
        __asm _emit 0x5D
        // 0x588D8D55: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

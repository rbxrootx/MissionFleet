// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1632 bytes in 2 exact ranges.
// Source symbol alias: FUN_58758870.

// Ghidra body range 0x58758870..0x58758957; 231 mapped bytes.
extern "C" __declspec(naked) void FUN_58758870_segment_00() {
    __asm {
        // 0x58758870: push ebp
        __asm _emit 0x55
        // 0x58758871: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58758873: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58758876: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58758878: push 0x5897e9ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xE9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875887D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758883: push eax
        __asm _emit 0x50
        // 0x58758884: sub esp, 0x1c8
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875888A: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875888F: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58758891: mov dword ptr [esp + 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758898: push ebx
        __asm _emit 0x53
        // 0x58758899: push esi
        __asm _emit 0x56
        // 0x5875889A: push edi
        __asm _emit 0x57
        // 0x5875889B: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587588A0: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587588A2: push eax
        __asm _emit 0x50
        // 0x587588A3: lea eax, [esp + 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588AA: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588B0: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587588B2: lea esi, [ebx + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588B8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587588BA: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588BF: nop
        __asm _emit 0x90
        // 0x587588C0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587588C2: mov dword ptr [eax - 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x80
        // 0x587588C5: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587588C7: mov dword ptr [eax + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588CD: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587588D0: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x587588D3: jne 0x587588c0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587588D5: mov dword ptr [esp + 0x1c], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588DD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587588DF: nop
        __asm _emit 0x90
        // 0x587588E0: mov ecx, 0x384
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588E5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587588E7: mov word ptr [esp + eax*4 + 0x1c8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588EF: mov word ptr [esp + eax*4 + 0x1ca], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x84
        __asm _emit 0xCA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587588F7: inc eax
        __asm _emit 0x40
        // 0x587588F8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587588FB: jl 0x587588e0
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x587588FD: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758902: lea eax, [ebx + 0x1d4]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758908: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875890A: push eax
        __asm _emit 0x50
        // 0x5875890B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58758910: mov ecx, 0xab4
        __asm _emit 0xB9
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758915: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58758917: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5875891B: mov ecx, 0xa34
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758920: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58758922: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58758926: mov ecx, 0xffffff74
        __asm _emit 0xB9
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875892B: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x5875892D: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58758931: mov ecx, 0xfffffe54
        __asm _emit 0xB9
        __asm _emit 0x54
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758936: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58758939: lea eax, [ebx + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875893F: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58758941: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758945: mov dword ptr [esp + 0x18], 0xbc0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875894D: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758951: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58758955: jmp 0x58758964
        __asm _emit 0xEB
        __asm _emit 0x0D
    }
}

// Ghidra body range 0x58758960..0x58758ED9; 1401 mapped bytes.
extern "C" __declspec(naked) void FUN_58758870_segment_01() {
    __asm {
        // 0x58758960: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758964: movzx ecx, byte ptr [eax - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0xE0
        // 0x58758968: movzx edx, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x10
        // 0x5875896B: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5875896E: lea edx, [edx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x4A
        // 0x58758971: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x58758974: lea esi, [eax + edx + 0x53c]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x10
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875897B: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758980: lea edi, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58758984: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58758986: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875898A: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875898E: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58758990: mov esi, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58758993: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58758995: je 0x58758be8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875899B: movzx esi, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x36
        // 0x5875899E: cmp si, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x05
        // 0x587589A2: jne 0x58758be8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587589A8: mov eax, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x587589AB: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587589AD: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587589B2: lea edi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587589B6: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587589B8: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x587589BB: mov eax, dword ptr [edi + 0xccc]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587589C1: movzx eax, word ptr [eax + 0x98]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587589C8: mov dl, byte ptr [edi + edx + 0x13d]
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587589CF: movsx ecx, word ptr [esp + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587589D7: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587589D9: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587589DD: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587589DF: xor dl, 0x2a
        __asm _emit 0x80
        __asm _emit 0xF2
        __asm _emit 0x2A
        // 0x587589E2: imul esi, esi, 0x64
        __asm _emit 0x6B
        __asm _emit 0xF6
        __asm _emit 0x64
        // 0x587589E5: and dl, 0x7f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x7F
        // 0x587589E8: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x587589EB: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587589EE: movzx eax, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC2
        // 0x587589F1: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587589F5: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587589F9: fnstcw word ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587589FD: movzx eax, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58758A02: fmul qword ptr [0x5898d780]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58758A08: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758A0D: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758A11: fldcw word ptr [esp + 0x24]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758A15: fistp qword ptr [esp + 0x24]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758A19: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758A1D: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x58758A20: fldcw word ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58758A24: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58758A26: mov eax, 0x60606061
        __asm _emit 0xB8
        __asm _emit 0x61
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x60
        // 0x58758A2B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58758A2D: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58758A30: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58758A32: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58758A35: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58758A37: lea edx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x76
        // 0x58758A3A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58758A3C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58758A3E: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58758A42: mov dword ptr [ebx + edx - 0x9ec], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x14
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758A49: mov dword ptr [ebx + edx - 0x9e8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758A50: jle 0x58758a54
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x58758A52: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758A54: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58758A56: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758A5B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58758A5D: movzx ecx, word ptr [esp + 0x54]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58758A62: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58758A65: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58758A67: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58758A6A: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58758A6C: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x58758A6F: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758A74: cdq
        __asm _emit 0x99
        // 0x58758A75: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58758A77: movzx edx, word ptr [esp + 0x102]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758A7F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758A81: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x58758A84: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758A89: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58758A8B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58758A8E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58758A90: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58758A93: lea ecx, [edx + eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x58758A97: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58758A9A: mov word ptr [esp + 0x102], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758AA2: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58758AA6: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58758AA9: mov eax, dword ptr [ecx + eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x04
        // 0x58758AAD: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58758AB1: mov eax, dword ptr [esp + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758AB8: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58758ABB: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58758ABF: cmp word ptr [esp + 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758AC4: jbe 0x58758acd
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x58758AC6: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x58758AC9: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758ACD: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758AD1: movzx edx, byte ptr [eax - 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0xE0
        // 0x58758AD5: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x58758AD8: lea ecx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x58758ADB: mov eax, dword ptr [esp + 0xfe]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758AE2: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58758AE5: lea ecx, [esp + ecx*2 + 0x1c8]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x4C
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758AEC: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58758AEF: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x58758AF2: jbe 0x58758af7
        __asm _emit 0x76
        __asm _emit 0x03
        // 0x58758AF4: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58758AF7: push 0x243ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58758AFC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x41
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58758B01: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58758B04: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758B08: mov dword ptr [esp + 0x1e0], 0
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
        // 0x58758B13: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58758B15: je 0x58758b56
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x58758B17: movzx edx, word ptr [esp + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58758B1C: mov esi, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758B22: cmp dword ptr [esi + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758B28: jle 0x58758b42
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58758B2A: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58758B2C: jl 0x58758b42
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58758B2E: cmp dword ptr [esi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758B35: je 0x58758b42
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58758B37: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x58758B3A: add edx, dword ptr [esi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758B40: jmp 0x58758b44
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58758B42: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58758B44: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58758B46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58758B48: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58758B4A: push edx
        __asm _emit 0x52
        // 0x58758B4B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58758B4D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758B4F: call 0x587b3090
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xA5
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758B54: jmp 0x58758b58
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58758B56: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58758B58: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758B5C: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58758B5E: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758B64: push ecx
        __asm _emit 0x51
        // 0x58758B65: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758B67: mov dword ptr [esp + 0x1e4], 0xffffffff
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
        // 0x58758B72: call 0x587b0bb0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758B77: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58758B7A: movzx eax, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58758B7E: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758B82: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58758B86: push eax
        __asm _emit 0x50
        // 0x58758B87: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58758B89: push ecx
        __asm _emit 0x51
        // 0x58758B8A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758B8C: lea eax, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58758B90: push eax
        __asm _emit 0x50
        // 0x58758B91: call 0x587b2a40
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x9E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758B96: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758B98: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58758B9A: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x30
        // 0x58758B9D: push edi
        __asm _emit 0x57
        // 0x58758B9E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58758BA0: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58758BA4: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58758BA8: push ecx
        __asm _emit 0x51
        // 0x58758BA9: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758BAB: push edx
        __asm _emit 0x52
        // 0x58758BAC: call 0x587b1f90
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758BB1: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58758BB4: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58758BB8: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58758BBA: movzx edx, word ptr [ecx + eax + 0xac2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0xC2
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758BC2: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58758BC6: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758BCC: push edx
        __asm _emit 0x52
        // 0x58758BCD: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58758BCF: movzx edx, word ptr [ecx + eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58758BD3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758BD5: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758BDB: push edx
        __asm _emit 0x52
        // 0x58758BDC: call 0x587b21f0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758BE1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58758BE3: jmp 0x58758d2e
        __asm _emit 0xE9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758BE8: mov edx, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58758BEB: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58758BED: je 0x58758d31
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758BF3: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x58758BF6: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58758BFA: jne 0x58758d31
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C00: mov esi, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x08
        // 0x58758C03: mov ecx, 0x2a
        __asm _emit 0xB9
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C08: lea edi, [esp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C0F: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58758C11: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58758C15: mov edx, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58758C18: movzx ecx, word ptr [esp + 0x54]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x58758C1D: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758C21: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x58758C24: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C29: cdq
        __asm _emit 0x99
        // 0x58758C2A: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58758C2C: movzx edx, word ptr [esp + 0x1bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C34: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758C36: imul ecx, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCA
        // 0x58758C39: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58758C3E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58758C40: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58758C43: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58758C45: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58758C48: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58758C4A: mov word ptr [esp + 0x1bc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C52: mov eax, dword ptr [esp + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C59: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58758C5C: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58758C5F: cmp word ptr [esp + 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758C64: jbe 0x58758c6d
        __asm _emit 0x76
        __asm _emit 0x07
        // 0x58758C66: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x58758C69: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758C6D: push 0x3910
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C72: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x3F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58758C77: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58758C7A: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58758C7E: mov dword ptr [esp + 0x1e0], 1
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
        // 0x58758C89: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58758C8B: je 0x58758cd2
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58758C8D: movzx edx, word ptr [esp + 0x120]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758C95: mov esi, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58758C9B: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x58758C9E: cmp dword ptr [esi + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758CA4: jle 0x58758cbe
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58758CA6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58758CA8: jl 0x58758cbe
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58758CAA: cmp dword ptr [esi + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758CB1: je 0x58758cbe
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58758CB3: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x58758CB6: add edx, dword ptr [esi + 0x190]
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758CBC: jmp 0x58758cc0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58758CBE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58758CC0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58758CC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58758CC4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58758CC6: push edx
        __asm _emit 0x52
        // 0x58758CC7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58758CC9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758CCB: call 0x587b4060
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xB3
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758CD0: jmp 0x58758cd4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58758CD2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58758CD4: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758CD8: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758CDC: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758CE2: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58758CE5: movzx ecx, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58758CE9: push ecx
        __asm _emit 0x51
        // 0x58758CEA: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58758CEE: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x58758CF0: movzx ecx, word ptr [ecx + edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0C
        __asm _emit 0x11
        // 0x58758CF4: mov edx, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758CFA: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D00: push ecx
        __asm _emit 0x51
        // 0x58758D01: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58758D05: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58758D07: push ecx
        __asm _emit 0x51
        // 0x58758D08: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58758D0C: push ecx
        __asm _emit 0x51
        // 0x58758D0D: lea ecx, [esp + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D14: push ecx
        __asm _emit 0x51
        // 0x58758D15: push edx
        __asm _emit 0x52
        // 0x58758D16: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58758D18: mov dword ptr [esp + 0x1f8], 0xffffffff
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
        // 0x58758D23: call 0x587b4a30
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758D28: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D2E: mov dword ptr [esi - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x80
        // 0x58758D31: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758D35: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58758D39: add dword ptr [esp + 0x18], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        // 0x58758D3E: add dword ptr [esp + 0x14], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        // 0x58758D43: inc eax
        __asm _emit 0x40
        // 0x58758D44: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x58758D46: cmp ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x20
        // 0x58758D49: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758D4D: jl 0x58758960
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758D53: mov edx, 0x15c
        __asm _emit 0xBA
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D58: mov eax, 0x1dc
        __asm _emit 0xB8
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D5D: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x58758D5F: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58758D61: mov edi, 0xfffffff4
        __asm _emit 0xBF
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758D66: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x58758D68: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D70: mov dword ptr [esp + 0x14], 0x128
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D78: lea esi, [ebx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58758D7B: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58758D7F: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58758D83: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758D87: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x58758D8A: je 0x58758e98
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D90: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758D94: movzx ecx, byte ptr [ebx + eax + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x03
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758D9C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58758D9E: mov dword ptr [eax + 0x120], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DA4: movzx ecx, word ptr [esp + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58758DA9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58758DAB: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x58758DAE: jb 0x58758db5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58758DB0: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DB5: mov dword ptr [eax + 0xcc], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DBB: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x58758DBE: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DC4: add edi, esi
        __asm _emit 0x03
        __asm _emit 0xFE
        // 0x58758DC6: movsx ecx, word ptr [edi + eax + 0x16a]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DCE: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58758DD0: movsx edx, word ptr [edx + esi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x32
        // 0x58758DD4: push ecx
        __asm _emit 0x51
        // 0x58758DD5: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758DD7: push edx
        __asm _emit 0x52
        // 0x58758DD8: call 0x587b0830
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x7A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758DDD: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58758DE0: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DE6: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758DEA: movsx edx, word ptr [eax + ecx]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x58758DEE: movsx ecx, word ptr [edi + eax + 0x1ea]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x07
        __asm _emit 0xEA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758DF6: push edx
        __asm _emit 0x52
        // 0x58758DF7: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58758DFB: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58758DFD: movsx eax, word ptr [edx + esi]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x32
        // 0x58758E01: push ecx
        __asm _emit 0x51
        // 0x58758E02: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758E04: push eax
        __asm _emit 0x50
        // 0x58758E05: call 0x587b0860
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x7A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758E0A: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58758E0D: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758E11: mov eax, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E17: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x58758E1A: mov edx, dword ptr [eax + edx*4 + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x90
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E21: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E26: sub ecx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758E2A: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x58758E2C: shr edx, cl
        __asm _emit 0xD3
        __asm _emit 0xEA
        // 0x58758E2E: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758E30: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58758E33: push edx
        __asm _emit 0x52
        // 0x58758E34: call 0x587b0910
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x7A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758E39: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758E3B: cmp dword ptr [ecx + 0x100], 0x40000000
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
        // 0x58758E45: jne 0x58758e6c
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58758E47: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758E4B: movzx edx, byte ptr [ebx + eax + 0x1ac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E53: movzx eax, byte ptr [ebx + eax + 0x18c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E5B: lea edx, [edx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x42
        // 0x58758E5E: movzx eax, word ptr [esp + edx*2 + 0x1c8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E66: push eax
        __asm _emit 0x50
        // 0x58758E67: call 0x587b08c0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x7A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758E6C: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58758E6F: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E75: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758E79: movsx eax, word ptr [eax + edx]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x10
        // 0x58758E7D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58758E7F: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58758E82: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58758E84: push eax
        __asm _emit 0x50
        // 0x58758E85: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758E8B: call 0x587b0630
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58758E90: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58758E94: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58758E98: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758E9C: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58758EA0: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58758EA3: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58758EA6: cmp eax, 0x168
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758EAB: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58758EAF: jl 0x58758d87
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58758EB5: mov ecx, dword ptr [esp + 0x1d8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758EBC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758EC3: pop ecx
        __asm _emit 0x59
        // 0x58758EC4: pop edi
        __asm _emit 0x5F
        // 0x58758EC5: pop esi
        __asm _emit 0x5E
        // 0x58758EC6: pop ebx
        __asm _emit 0x5B
        // 0x58758EC7: mov ecx, dword ptr [esp + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58758ECE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58758ED0: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x3D
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58758ED5: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58758ED7: pop ebp
        __asm _emit 0x5D
        // 0x58758ED8: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 650 bytes in 2 exact ranges.
// Source symbol alias: FUN_588e92b0.

// Ghidra body range 0x588E92B0..0x588E943D; 397 mapped bytes.
extern "C" __declspec(naked) void FUN_588e92b0_segment_00() {
    __asm {
        // 0x588E92B0: sub esp, 0x218
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92B6: fld qword ptr [0x5898cae0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E92BC: push ebx
        __asm _emit 0x53
        // 0x588E92BD: push ebp
        __asm _emit 0x55
        // 0x588E92BE: mov ebp, dword ptr [esp + 0x228]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92C5: push esi
        __asm _emit 0x56
        // 0x588E92C6: lea ebx, [ecx + 0x130]
        __asm _emit 0x8D
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92CC: push edi
        __asm _emit 0x57
        // 0x588E92CD: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E92D1: mov ecx, dword ptr [esp + 0x234]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92D8: lea edi, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588E92DC: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E92E0: mov dword ptr [esp + 0x1c], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92E8: cmp byte ptr [ebx - 0x12], 0
        __asm _emit 0x80
        __asm _emit 0x7B
        __asm _emit 0xEE
        __asm _emit 0x00
        // 0x588E92EC: je 0x588e9412
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92F2: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x588E92F4: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588E92F6: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E92FB: mov dword ptr [edi - 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x588E92FE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588E9300: shr eax, 0x14
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x14
        // 0x588E9303: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9308: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588E930A: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588E930D: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588E9310: mov eax, dword ptr [ebx - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0xF0
        // 0x588E9313: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9319: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588E931C: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9321: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x588E9323: mov edx, dword ptr [esp + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E932A: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E932E: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E9332: fild dword ptr [esp + 0x22c]
        __asm _emit 0xDB
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9339: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588E933B: jge 0x588e9343
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E933D: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E9343: fdiv st(2)
        __asm _emit 0xD8
        __asm _emit 0xF2
        // 0x588E9345: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E9349: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x588E934B: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E9350: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9355: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9359: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588E935B: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E935F: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9363: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9367: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E936D: shl edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x588E9370: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E9374: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9378: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E937C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E937E: jge 0x588e9386
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E9380: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E9386: fdiv st(2)
        __asm _emit 0xD8
        __asm _emit 0xF2
        // 0x588E9388: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E938C: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x588E938E: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E9393: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9398: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E939C: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93A0: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93A4: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93A8: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E93AD: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x588E93AF: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E93B3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588E93B5: shl edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x588E93B8: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93BC: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E93C2: jge 0x588e93ca
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E93C4: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E93CA: fdiv st(2)
        __asm _emit 0xD8
        __asm _emit 0xF2
        // 0x588E93CC: and esi, 0xc0000000
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x588E93D2: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E93D6: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x588E93D8: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E93DD: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E93E2: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93E6: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93EA: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93EE: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E93F2: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E93F7: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x588E93F9: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E93FD: or edx, esi
        __asm _emit 0x0B
        __asm _emit 0xD6
        // 0x588E93FF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588E9401: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9406: xor eax, 0x2a800
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E940B: xor eax, 0xaa00000
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x588E9410: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x588E9412: add edi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x10
        // 0x588E9415: add ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x20
        // 0x588E9418: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x588E941D: jne 0x588e92e8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9423: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E9427: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x588E9429: call 0x588e7c10
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E942E: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E9432: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588E9436: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E943B: jmp 0x588e9440
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588E9440..0x588E953D; 253 mapped bytes.
extern "C" __declspec(naked) void FUN_588e92b0_segment_01() {
    __asm {
        // 0x588E9440: cmp byte ptr [ecx - 0x12], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0xEE
        __asm _emit 0x00
        // 0x588E9444: je 0x588e9476
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588E9446: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588E9449: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588E944B: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9451: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9457: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E945A: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E945C: mov edi, dword ptr [eax - 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0xFC
        // 0x588E945F: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9465: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E9468: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E946A: mov edi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x39
        // 0x588E946C: and edi, 0xc0000000
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x588E9472: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E9474: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x588E9476: cmp byte ptr [ecx + 0xe], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x588E947A: je 0x588e94af
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588E947C: mov esi, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x588E947F: mov edi, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x588E9482: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9488: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E948E: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E9491: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E9493: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x588E9496: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E949C: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E949F: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E94A1: mov edi, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x20
        // 0x588E94A4: and edi, 0xc0000000
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x588E94AA: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E94AC: mov dword ptr [ecx + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x20
        // 0x588E94AF: cmp byte ptr [ecx + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x588E94B3: je 0x588e94e8
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588E94B5: mov esi, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588E94B8: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x20
        // 0x588E94BB: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E94C1: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E94C7: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E94CA: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E94CC: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x588E94CF: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E94D5: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E94D8: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E94DA: mov edi, dword ptr [ecx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x40
        // 0x588E94DD: and edi, 0xc0000000
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x588E94E3: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E94E5: mov dword ptr [ecx + 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x40
        // 0x588E94E8: cmp byte ptr [ecx + 0x4e], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x4E
        __asm _emit 0x00
        // 0x588E94EC: je 0x588e9521
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588E94EE: mov esi, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x34
        // 0x588E94F1: mov edi, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x30
        // 0x588E94F4: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E94FA: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9500: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E9503: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E9505: mov edi, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x2C
        // 0x588E9508: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E950E: shl esi, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x0A
        // 0x588E9511: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E9513: mov edi, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x60
        // 0x588E9516: and edi, 0xc0000000
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x588E951C: or esi, edi
        __asm _emit 0x0B
        __asm _emit 0xF7
        // 0x588E951E: mov dword ptr [ecx + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x588E9521: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x588E9524: sub ecx, -0x80
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x80
        // 0x588E9527: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588E952A: jne 0x588e9440
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9530: pop edi
        __asm _emit 0x5F
        // 0x588E9531: pop esi
        __asm _emit 0x5E
        // 0x588E9532: pop ebp
        __asm _emit 0x5D
        // 0x588E9533: pop ebx
        __asm _emit 0x5B
        // 0x588E9534: add esp, 0x218
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E953A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

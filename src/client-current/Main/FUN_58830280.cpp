// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 617 bytes in 1 exact ranges.
// Source symbol alias: FUN_58830280.

// Ghidra body range 0x58830280..0x588304E9; 617 mapped bytes.
extern "C" __declspec(naked) void FUN_58830280_segment_00() {
    __asm {
        // 0x58830280: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830286: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883028B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883028D: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830294: mov eax, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883029B: push ebx
        __asm _emit 0x53
        // 0x5883029C: push esi
        __asm _emit 0x56
        // 0x5883029D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883029F: movzx ecx, byte ptr [esi + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588302A6: cmp dword ptr [esi + ecx*4 + 0x120], eax
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588302AD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588302B0: push edi
        __asm _emit 0x57
        // 0x588302B1: jne 0x588303b1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588302B7: call 0x58785fc0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588302BC: mov edi, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588302C3: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x588302C5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588302C7: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588302CB: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588302CF: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588302D1: jge 0x588302d9
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588302D3: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588302D9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588302DC: fstp qword ptr [esp + 0x14]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588302E0: call 0x587862c0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x5F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588302E5: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588302E9: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588302ED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588302EF: jge 0x588302f7
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588302F1: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588302F7: fdivr qword ptr [esp + 0x14]
        __asm _emit 0xDC
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588302FB: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588302FE: fnstcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830302: movzx eax, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830307: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883030C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830310: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830314: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58830318: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883031C: fldcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830320: call 0x58785f00
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830325: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830328: push edi
        __asm _emit 0x57
        // 0x58830329: call 0x58785fa0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x5C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883032E: mov edi, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830335: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830338: push edi
        __asm _emit 0x57
        // 0x58830339: call 0x58785ee0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883033E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830341: call 0x58785f60
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x5C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830346: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830349: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5883034B: push eax
        __asm _emit 0x50
        // 0x5883034C: call 0x58785f40
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830351: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830357: push edi
        __asm _emit 0x57
        // 0x58830358: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883035D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830360: call 0x58785f60
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830365: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883036B: push eax
        __asm _emit 0x50
        // 0x5883036C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x6F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58830371: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830374: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58830379: call 0x58785fc0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x5C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883037E: push eax
        __asm _emit 0x50
        // 0x5883037F: push 0x5899e054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58830384: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883038A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883038D: push eax
        __asm _emit 0x50
        // 0x5883038E: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58830392: push eax
        __asm _emit 0x50
        // 0x58830393: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58830399: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5883039C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588303A0: push ecx
        __asm _emit 0x51
        // 0x588303A1: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588303A7: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x19
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588303AC: jmp 0x5883046b
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588303B1: push eax
        __asm _emit 0x50
        // 0x588303B2: call 0x587867e0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x64
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588303B7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588303BA: call 0x58785fc0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x5C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588303BF: mov edi, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588303C6: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x588303C8: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588303CA: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588303CE: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588303D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588303D4: jge 0x588303dc
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588303D6: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588303DC: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588303DF: fstp qword ptr [esp + 0x14]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588303E3: call 0x587862c0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588303E8: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588303EC: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588303F0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588303F2: jge 0x588303fa
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588303F4: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588303FA: fdivr qword ptr [esp + 0x14]
        __asm _emit 0xDC
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588303FE: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830401: fnstcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830405: movzx eax, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5883040A: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883040F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830413: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830417: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883041B: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883041F: fldcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830423: call 0x58785f00
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x5A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830428: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883042B: push edi
        __asm _emit 0x57
        // 0x5883042C: call 0x58785fa0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830431: mov eax, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830438: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883043B: push eax
        __asm _emit 0x50
        // 0x5883043C: call 0x58785ee0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x5A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830441: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830444: call 0x58785f60
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830449: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883044C: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x5883044E: push eax
        __asm _emit 0x50
        // 0x5883044F: call 0x58785f40
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x5A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830454: movzx ecx, byte ptr [esi + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883045B: mov edx, dword ptr [esi + ecx*4 + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830462: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830465: push edx
        __asm _emit 0x52
        // 0x58830466: call 0x587867e0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x63
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883046B: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830471: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58830473: push edi
        __asm _emit 0x57
        // 0x58830474: mov dword ptr [esi + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883047A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x6E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883047F: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830485: push edi
        __asm _emit 0x57
        // 0x58830486: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883048B: mov dword ptr [esi + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830491: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58830496: cmp dword ptr [eax + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5883049D: jle 0x588304b4
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5883049F: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304A5: je 0x588304b4
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588304A7: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304AD: add eax, 0x8c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304B2: jmp 0x588304b6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588304B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588304B6: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304BC: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304C2: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304C8: mov ecx, dword ptr [esp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304CF: pop edi
        __asm _emit 0x5F
        // 0x588304D0: pop esi
        __asm _emit 0x5E
        // 0x588304D1: pop ebx
        __asm _emit 0x5B
        // 0x588304D2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588304D4: mov dword ptr [edx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588304DB: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xC6
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588304E0: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588304E6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

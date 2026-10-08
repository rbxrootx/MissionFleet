// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 617 bytes in 1 exact ranges.
// Source symbol alias: FUN_58830010.

// Ghidra body range 0x58830010..0x58830279; 617 mapped bytes.
extern "C" __declspec(naked) void FUN_58830010_segment_00() {
    __asm {
        // 0x58830010: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830016: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5883001B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883001D: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830024: mov eax, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883002B: push ebx
        __asm _emit 0x53
        // 0x5883002C: push esi
        __asm _emit 0x56
        // 0x5883002D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883002F: movzx ecx, byte ptr [esi + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830036: cmp dword ptr [esi + ecx*4 + 0x120], eax
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883003D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830040: push edi
        __asm _emit 0x57
        // 0x58830041: jne 0x58830141
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830047: call 0x58785f90
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x5F
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883004C: mov edi, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830053: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58830055: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58830057: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883005B: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883005F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58830061: jge 0x58830069
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58830063: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58830069: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883006C: fstp qword ptr [esp + 0x14]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58830070: call 0x58786260
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x61
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830075: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830079: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883007D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5883007F: jge 0x58830087
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58830081: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58830087: fdivr qword ptr [esp + 0x14]
        __asm _emit 0xDC
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883008B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883008E: fnstcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830092: movzx eax, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830097: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883009C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588300A0: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588300A4: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588300A8: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588300AC: fldcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x588300B0: call 0x58785ed0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588300B5: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588300B8: push edi
        __asm _emit 0x57
        // 0x588300B9: call 0x58785f70
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588300BE: mov edi, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588300C5: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588300C8: push edi
        __asm _emit 0x57
        // 0x588300C9: call 0x58785eb0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588300CE: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588300D1: call 0x58785f30
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588300D6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588300D9: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588300DB: push eax
        __asm _emit 0x50
        // 0x588300DC: call 0x58785f10
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588300E1: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588300E7: push edi
        __asm _emit 0x57
        // 0x588300E8: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x72
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588300ED: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588300F0: call 0x58785f30
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588300F5: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588300FB: push eax
        __asm _emit 0x50
        // 0x588300FC: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x72
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58830101: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830104: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58830109: call 0x58785f90
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883010E: push eax
        __asm _emit 0x50
        // 0x5883010F: push 0x5899e054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58830114: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883011A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883011D: push eax
        __asm _emit 0x50
        // 0x5883011E: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58830122: push eax
        __asm _emit 0x50
        // 0x58830123: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58830129: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5883012C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58830130: push ecx
        __asm _emit 0x51
        // 0x58830131: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830137: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x1B
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5883013C: jmp 0x588301fb
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830141: push eax
        __asm _emit 0x50
        // 0x58830142: call 0x587867e0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x66
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830147: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883014A: call 0x58785f90
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x5E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5883014F: mov edi, dword ptr [esp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830156: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x58830158: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5883015A: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883015E: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830162: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58830164: jge 0x5883016c
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58830166: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883016C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883016F: fstp qword ptr [esp + 0x14]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58830173: call 0x58786260
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58830178: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883017C: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58830180: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58830182: jge 0x5883018a
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58830184: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883018A: fdivr qword ptr [esp + 0x14]
        __asm _emit 0xDC
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883018E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58830191: fnstcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58830195: movzx eax, word ptr [esp + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5883019A: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883019F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588301A3: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588301A7: fistp qword ptr [esp + 0x14]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588301AB: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588301AF: fldcw word ptr [esp + 0xe]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x588301B3: call 0x58785ed0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588301B8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588301BB: push edi
        __asm _emit 0x57
        // 0x588301BC: call 0x58785f70
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588301C1: mov eax, dword ptr [esp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588301C8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588301CB: push eax
        __asm _emit 0x50
        // 0x588301CC: call 0x58785eb0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x5C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588301D1: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588301D4: call 0x58785f30
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588301D9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588301DC: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588301DE: push eax
        __asm _emit 0x50
        // 0x588301DF: call 0x58785f10
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x5D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588301E4: movzx ecx, byte ptr [esi + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588301EB: mov edx, dword ptr [esi + ecx*4 + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588301F2: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588301F5: push edx
        __asm _emit 0x52
        // 0x588301F6: call 0x587867e0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x65
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588301FB: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830201: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58830203: push edi
        __asm _emit 0x57
        // 0x58830204: mov dword ptr [esi + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883020A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x71
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883020F: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830215: push edi
        __asm _emit 0x57
        // 0x58830216: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xBA
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883021B: mov dword ptr [esi + 0xc4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830221: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58830226: cmp dword ptr [eax + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5883022D: jle 0x58830244
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5883022F: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830235: je 0x58830244
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58830237: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883023D: add eax, 0x8c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830242: jmp 0x58830246
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58830244: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58830246: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883024C: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830252: mov edx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830258: mov ecx, dword ptr [esp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883025F: pop edi
        __asm _emit 0x5F
        // 0x58830260: pop esi
        __asm _emit 0x5E
        // 0x58830261: pop ebx
        __asm _emit 0x5B
        // 0x58830262: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58830264: mov dword ptr [edx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883026B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xC9
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58830270: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830276: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

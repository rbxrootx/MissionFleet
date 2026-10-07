// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1738 bytes in 1 exact ranges.
// Source symbol alias: FUN_5880b810.

// Ghidra body range 0x5880B810..0x5880BEDA; 1738 mapped bytes.
extern "C" __declspec(naked) void FUN_5880b810_segment_00() {
    __asm {
        // 0x5880B810: push ebp
        __asm _emit 0x55
        // 0x5880B811: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5880B813: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5880B816: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5880B819: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B81E: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x5880B820: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880B823: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B827: mov ecx, dword ptr [edx + 0x6504]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x04
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B82D: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880B833: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B837: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B83B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880B83D: jge 0x5880b845
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B83F: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B845: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B84B: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880B851: movzx ecx, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880B858: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B85C: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B861: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B866: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B86A: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B86E: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B872: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B876: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B87A: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x5880B87E: je 0x5880b89e
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5880B880: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5880B884: je 0x5880b89e
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5880B886: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5880B88A: je 0x5880b89e
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5880B88C: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x5880B890: je 0x5880b89e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5880B892: cmp cx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x5880B896: je 0x5880b89e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880B898: cmp cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0F
        // 0x5880B89C: jne 0x5880b8a8
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5880B89E: fld dword ptr [0x5899d644]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880B8A4: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B8A8: mov edx, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B8AE: movzx edx, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5880B8B2: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5880B8B5: dec edx
        __asm _emit 0x4A
        // 0x5880B8B6: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5880B8B9: ja 0x5880bed6
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B8BF: jmp dword ptr [edx*4 + 0x5880bedc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x5880B8C6: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B8CA: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B8CE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B8D0: jge 0x5880b8d8
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B8D2: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B8D8: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B8DC: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B8E0: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B8E5: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B8EA: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B8EE: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B8F2: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B8F6: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B8FA: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B8FE: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880B900: pop ebp
        __asm _emit 0x5D
        // 0x5880B901: ret
        __asm _emit 0xC3
        // 0x5880B902: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B906: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B90A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B90C: jge 0x5880b914
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B90E: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B914: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B918: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B91C: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B921: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B926: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B92A: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B92E: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B932: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B936: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B93A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880B93C: pop ebp
        __asm _emit 0x5D
        // 0x5880B93D: ret
        __asm _emit 0xC3
        // 0x5880B93E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B942: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B946: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B948: jge 0x5880b950
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B94A: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B950: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B954: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B958: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B95D: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B962: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B966: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B96A: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B96E: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B972: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B976: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880B978: pop ebp
        __asm _emit 0x5D
        // 0x5880B979: ret
        __asm _emit 0xC3
        // 0x5880B97A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B97E: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B982: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B984: jge 0x5880b98c
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B986: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B98C: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B990: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B994: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B999: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B99E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9A2: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9A6: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9AA: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9AE: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B9B2: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880B9B4: pop ebp
        __asm _emit 0x5D
        // 0x5880B9B5: ret
        __asm _emit 0xC3
        // 0x5880B9B6: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9BA: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B9C0: jge 0x5880b9c8
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B9C2: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880B9C8: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880B9CC: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B9D0: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B9D5: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880B9DA: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9DE: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9E2: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9E6: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9EA: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880B9EE: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880B9F0: pop ebp
        __asm _emit 0x5D
        // 0x5880B9F1: ret
        __asm _emit 0xC3
        // 0x5880B9F2: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9F6: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880B9FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880B9FC: jge 0x5880ba04
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880B9FE: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BA04: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BA08: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA0C: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA11: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BA16: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA1A: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA1E: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA22: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA26: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA2A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BA2C: pop ebp
        __asm _emit 0x5D
        // 0x5880BA2D: ret
        __asm _emit 0xC3
        // 0x5880BA2E: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5880BA32: jne 0x5880ba70
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BA34: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA38: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BA3E: jge 0x5880ba46
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BA40: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BA46: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BA4A: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA4E: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA53: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BA58: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA5C: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA60: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA64: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA68: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA6C: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BA6E: pop ebp
        __asm _emit 0x5D
        // 0x5880BA6F: ret
        __asm _emit 0xC3
        // 0x5880BA70: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5880BA74: jne 0x5880bab2
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BA76: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA7A: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA7E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BA80: jge 0x5880ba88
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BA82: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BA88: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BA8C: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA90: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BA95: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BA9A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BA9E: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAA2: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAA6: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAAA: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BAAE: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BAB0: pop ebp
        __asm _emit 0x5D
        // 0x5880BAB1: ret
        __asm _emit 0xC3
        // 0x5880BAB2: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x5880BAB6: jne 0x5880baf4
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BAB8: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BABC: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAC0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BAC2: jge 0x5880baca
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BAC4: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BACA: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BACE: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BAD2: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BAD7: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BADC: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAE0: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAE4: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAE8: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAEC: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BAF0: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BAF2: pop ebp
        __asm _emit 0x5D
        // 0x5880BAF3: ret
        __asm _emit 0xC3
        // 0x5880BAF4: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x5880BAF8: jne 0x5880bb36
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BAFA: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BAFE: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB02: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BB04: jge 0x5880bb0c
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BB06: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BB0C: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BB10: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB14: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB19: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BB1E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB22: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB26: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB2A: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB2E: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB32: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BB34: pop ebp
        __asm _emit 0x5D
        // 0x5880BB35: ret
        __asm _emit 0xC3
        // 0x5880BB36: cmp cx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x5880BB3A: jne 0x5880bb78
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BB3C: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB40: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BB46: jge 0x5880bb4e
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BB48: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BB4E: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BB52: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB56: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB5B: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BB60: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB64: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB68: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB6C: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB70: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB74: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BB76: pop ebp
        __asm _emit 0x5D
        // 0x5880BB77: ret
        __asm _emit 0xC3
        // 0x5880BB78: cmp cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0F
        // 0x5880BB7C: jne 0x5880bed6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BB82: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB86: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BB8A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BB8C: jge 0x5880bb94
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BB8E: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BB94: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BB98: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BB9C: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BBA1: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BBA6: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBAA: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBAE: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBB2: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBB6: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BBBA: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BBBC: pop ebp
        __asm _emit 0x5D
        // 0x5880BBBD: ret
        __asm _emit 0xC3
        // 0x5880BBBE: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5880BBC2: jne 0x5880bc00
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BBC4: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBC8: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBCC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BBCE: jge 0x5880bbd6
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BBD0: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BBD6: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BBDA: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BBDE: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BBE3: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BBE8: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBEC: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBF0: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBF4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BBF8: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BBFC: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BBFE: pop ebp
        __asm _emit 0x5D
        // 0x5880BBFF: ret
        __asm _emit 0xC3
        // 0x5880BC00: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5880BC04: jne 0x5880bc42
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BC06: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC0A: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC0E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BC10: jge 0x5880bc18
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BC12: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BC18: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BC1C: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BC20: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BC25: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BC2A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC2E: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC32: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC36: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC3A: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BC3E: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BC40: pop ebp
        __asm _emit 0x5D
        // 0x5880BC41: ret
        __asm _emit 0xC3
        // 0x5880BC42: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x5880BC46: jne 0x5880bc84
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BC48: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC4C: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC50: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BC52: jge 0x5880bc5a
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BC54: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BC5A: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BC5E: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BC62: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BC67: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BC6C: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC70: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC74: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC78: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC7C: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BC80: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BC82: pop ebp
        __asm _emit 0x5D
        // 0x5880BC83: ret
        __asm _emit 0xC3
        // 0x5880BC84: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x5880BC88: jne 0x5880bcc6
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BC8A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC8E: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BC92: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BC94: jge 0x5880bc9c
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BC96: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BC9C: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BCA0: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BCA4: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BCA9: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BCAE: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCB2: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCB6: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCBA: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCBE: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BCC2: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BCC4: pop ebp
        __asm _emit 0x5D
        // 0x5880BCC5: ret
        __asm _emit 0xC3
        // 0x5880BCC6: cmp cx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x5880BCCA: jne 0x5880bd08
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BCCC: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCD0: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCD4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BCD6: jge 0x5880bcde
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BCD8: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BCDE: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BCE2: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BCE6: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BCEB: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BCF0: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCF4: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCF8: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BCFC: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD00: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD04: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BD06: pop ebp
        __asm _emit 0x5D
        // 0x5880BD07: ret
        __asm _emit 0xC3
        // 0x5880BD08: cmp cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0F
        // 0x5880BD0C: jne 0x5880bed6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BD12: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD16: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD1A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BD1C: jge 0x5880bd24
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BD1E: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BD24: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BD28: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD2C: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD31: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BD36: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD3A: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD3E: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD42: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD46: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD4A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BD4C: pop ebp
        __asm _emit 0x5D
        // 0x5880BD4D: ret
        __asm _emit 0xC3
        // 0x5880BD4E: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5880BD52: jne 0x5880bd90
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BD54: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD58: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD5C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BD5E: jge 0x5880bd66
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BD60: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BD66: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BD6A: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD6E: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD73: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BD78: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD7C: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD80: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD84: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD88: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BD8C: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BD8E: pop ebp
        __asm _emit 0x5D
        // 0x5880BD8F: ret
        __asm _emit 0xC3
        // 0x5880BD90: cmp cx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x5880BD94: jne 0x5880bdd2
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BD96: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD9A: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BD9E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BDA0: jge 0x5880bda8
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BDA2: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BDA8: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BDAC: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BDB0: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BDB5: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BDBA: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BDBE: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BDC2: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BDC6: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BDCA: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BDCE: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BDD0: pop ebp
        __asm _emit 0x5D
        // 0x5880BDD1: ret
        __asm _emit 0xC3
        // 0x5880BDD2: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x5880BDD6: jne 0x5880be14
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BDD8: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BDDC: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BDE0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BDE2: jge 0x5880bdea
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BDE4: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BDEA: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BDEE: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BDF2: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BDF7: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BDFC: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE00: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE04: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE0C: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE10: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BE12: pop ebp
        __asm _emit 0x5D
        // 0x5880BE13: ret
        __asm _emit 0xC3
        // 0x5880BE14: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x5880BE18: jne 0x5880be56
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BE1A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE1E: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE22: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BE24: jge 0x5880be2c
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BE26: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BE2C: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BE30: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE34: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE39: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BE3E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE42: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE46: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE4A: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE4E: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE52: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BE54: pop ebp
        __asm _emit 0x5D
        // 0x5880BE55: ret
        __asm _emit 0xC3
        // 0x5880BE56: cmp cx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x5880BE5A: jne 0x5880be98
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5880BE5C: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE60: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE64: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BE66: jge 0x5880be6e
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BE68: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BE6E: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BE72: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE76: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE7B: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BE80: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE84: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE88: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE8C: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BE90: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BE94: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BE96: pop ebp
        __asm _emit 0x5D
        // 0x5880BE97: ret
        __asm _emit 0xC3
        // 0x5880BE98: cmp cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0F
        // 0x5880BE9C: jne 0x5880bed6
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5880BE9E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BEA2: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BEA6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880BEA8: jge 0x5880beb0
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880BEAA: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880BEB0: fmul dword ptr [esp + 4]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880BEB4: fnstcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BEB8: movzx eax, word ptr [esp + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BEBD: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880BEC2: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BEC6: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BECA: fistp qword ptr [esp + 8]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BECE: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5880BED2: fldcw word ptr [esp + 2]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880BED6: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5880BED8: pop ebp
        __asm _emit 0x5D
        // 0x5880BED9: ret
        __asm _emit 0xC3
    }
}

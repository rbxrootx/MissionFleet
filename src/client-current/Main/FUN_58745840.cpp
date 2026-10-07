// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 262 bytes in 2 exact ranges.
// Source symbol alias: FUN_58745840.

// Ghidra body range 0x58745840..0x58745930; 240 mapped bytes.
extern "C" __declspec(naked) void FUN_58745840_segment_00() {
    __asm {
        // 0x58745840: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58745842: push 0x5897e1a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xE1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58745847: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874584D: push eax
        __asm _emit 0x50
        // 0x5874584E: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58745851: push ebx
        __asm _emit 0x53
        // 0x58745852: push ebp
        __asm _emit 0x55
        // 0x58745853: push esi
        __asm _emit 0x56
        // 0x58745854: push edi
        __asm _emit 0x57
        // 0x58745855: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874585A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874585C: push eax
        __asm _emit 0x50
        // 0x5874585D: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58745861: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745867: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874586B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5874586D: push eax
        __asm _emit 0x50
        // 0x5874586E: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745872: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58745874: push ecx
        __asm _emit 0x51
        // 0x58745875: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x58745878: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874587C: call 0x58747c50
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745881: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58745884: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58745888: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874588C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5874588E: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58745891: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58745893: mov dword ptr [esp + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58745897: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58745899: jbe 0x58745926
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874589F: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x587458A1: jb 0x587458ac
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x587458A3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x73
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587458A8: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587458AC: mov esi, dword ptr [ecx + ebp*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xA9
        // 0x587458AF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587458B1: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x0E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587458B6: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587458BB: jne 0x58745912
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x587458BD: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587458C1: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587458C3: mov al, byte ptr [edx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587458C9: cmp al, byte ptr [esi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587458CF: je 0x58745912
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587458D1: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587458D4: sub ecx, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587458D7: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587458DA: sub eax, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587458DD: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587458DF: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x587458E2: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587458E5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587458E7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587458E9: jae 0x587458fb
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587458EB: mov edi, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587458F1: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587458F3: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587458F9: jmp 0x5874590e
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587458FB: jne 0x58745912
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587458FD: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745903: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x58745908: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5874590A: jle 0x58745912
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x5874590C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874590E: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58745912: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58745916: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874591A: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5874591C: inc ebp
        __asm _emit 0x45
        // 0x5874591D: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58745920: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58745922: jb 0x587458ac
        __asm _emit 0x72
        __asm _emit 0x88
        // 0x58745924: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58745926: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58745928: je 0x58745933
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874592A: push ecx
        __asm _emit 0x51
        // 0x5874592B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x73
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58745933..0x58745949; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58745840_segment_01() {
    __asm {
        // 0x58745933: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58745937: push eax
        __asm _emit 0x50
        // 0x58745938: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874593C: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58745940: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58745944: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x72
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

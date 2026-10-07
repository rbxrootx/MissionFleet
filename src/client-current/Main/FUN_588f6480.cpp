// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 197 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6480.

// Ghidra body range 0x588F6480..0x588F6545; 197 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6480_segment_00() {
    __asm {
        // 0x588F6480: sub esp, 0xcc
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6486: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F648B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F648D: mov dword ptr [esp + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6494: push esi
        __asm _emit 0x56
        // 0x588F6495: mov esi, dword ptr [esp + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F649C: push edi
        __asm _emit 0x57
        // 0x588F649D: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F649F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588F64A1: je 0x588f652c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F64A7: push 0xc7
        __asm _emit 0x68
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F64AC: lea eax, [esp + 0xd]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x588F64B0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F64B2: push eax
        __asm _emit 0x50
        // 0x588F64B3: mov byte ptr [esp + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588F64B8: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F64BD: movzx ecx, word ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F64C1: movzx edx, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x0E
        // 0x588F64C5: movzx eax, word ptr [esi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x0A
        // 0x588F64C9: push ecx
        __asm _emit 0x51
        // 0x588F64CA: movzx ecx, word ptr [esi + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x12
        // 0x588F64CE: push edx
        __asm _emit 0x52
        // 0x588F64CF: movzx edx, word ptr [esi + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588F64D3: push eax
        __asm _emit 0x50
        // 0x588F64D4: push ecx
        __asm _emit 0x51
        // 0x588F64D5: push edx
        __asm _emit 0x52
        // 0x588F64D6: push 0x589a19ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x19
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F64DB: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F64DF: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F64E4: push eax
        __asm _emit 0x50
        // 0x588F64E5: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x55
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588F64EA: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x588F64ED: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F64F1: push ecx
        __asm _emit 0x51
        // 0x588F64F2: mov ecx, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x588F64F5: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xB7
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F64FA: mov edi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x64
        // 0x588F64FD: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6503: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x588F6506: push esi
        __asm _emit 0x56
        // 0x588F6507: push edx
        __asm _emit 0x52
        // 0x588F6508: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F650E: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6514: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x588F6517: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588F6519: inc eax
        __asm _emit 0x40
        // 0x588F651A: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F651C: jne 0x588f6517
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588F651E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F6520: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6526: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F652C: mov ecx, dword ptr [esp + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6533: pop edi
        __asm _emit 0x5F
        // 0x588F6534: pop esi
        __asm _emit 0x5E
        // 0x588F6535: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F6537: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F653C: add esp, 0xcc
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6542: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

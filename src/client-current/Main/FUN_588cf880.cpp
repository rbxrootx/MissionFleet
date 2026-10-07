// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 171 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cf880.

// Ghidra body range 0x588CF880..0x588CF92B; 171 mapped bytes.
extern "C" __declspec(naked) void FUN_588cf880_segment_00() {
    __asm {
        // 0x588CF880: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588CF882: push 0x589890a3
        __asm _emit 0x68
        __asm _emit 0xA3
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588CF887: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF88D: push eax
        __asm _emit 0x50
        // 0x588CF88E: push ecx
        __asm _emit 0x51
        // 0x588CF88F: push ebx
        __asm _emit 0x53
        // 0x588CF890: push esi
        __asm _emit 0x56
        // 0x588CF891: push edi
        __asm _emit 0x57
        // 0x588CF892: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588CF897: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588CF899: push eax
        __asm _emit 0x50
        // 0x588CF89A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CF89E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF8A4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CF8A6: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CF8AA: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CF8AE: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588CF8B2: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588CF8B6: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588CF8BA: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588CF8BE: push eax
        __asm _emit 0x50
        // 0x588CF8BF: push ecx
        __asm _emit 0x51
        // 0x588CF8C0: push edi
        __asm _emit 0x57
        // 0x588CF8C1: push ebx
        __asm _emit 0x53
        // 0x588CF8C2: push edx
        __asm _emit 0x52
        // 0x588CF8C3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CF8C5: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF8CA: push 0x1b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF8CF: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF8D7: mov dword ptr [esi], 0x589a0e20
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CF8DD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xD3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588CF8E2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588CF8E5: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588CF8E9: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x588CF8EE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CF8F0: je 0x588cf90f
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588CF8F2: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x588CF8F4: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588CF8F6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF8F8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588CF8FA: add edi, 0xbd
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF900: push edi
        __asm _emit 0x57
        // 0x588CF901: add ebx, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x2C
        // 0x588CF904: push ebx
        __asm _emit 0x53
        // 0x588CF905: push esi
        __asm _emit 0x56
        // 0x588CF906: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588CF908: call 0x58897930
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x80
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588CF90D: jmp 0x588cf911
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CF90F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CF911: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588CF914: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CF916: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CF91A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CF921: pop ecx
        __asm _emit 0x59
        // 0x588CF922: pop edi
        __asm _emit 0x5F
        // 0x588CF923: pop esi
        __asm _emit 0x5E
        // 0x588CF924: pop ebx
        __asm _emit 0x5B
        // 0x588CF925: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588CF928: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

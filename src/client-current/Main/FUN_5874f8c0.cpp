// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 163 bytes in 1 exact ranges.
// Source symbol alias: FUN_5874f8c0.

// Ghidra body range 0x5874F8C0..0x5874F963; 163 mapped bytes.
extern "C" __declspec(naked) void FUN_5874f8c0_segment_00() {
    __asm {
        // 0x5874F8C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5874F8C2: push 0x5897e66e
        __asm _emit 0x68
        __asm _emit 0x6E
        __asm _emit 0xE6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874F8C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F8CD: push eax
        __asm _emit 0x50
        // 0x5874F8CE: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F8D3: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874F8D5: push eax
        __asm _emit 0x50
        // 0x5874F8D6: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F8DA: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F8E0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F8E5: test byte ptr [0x589cfc4c], al
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x4C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F8EB: jne 0x5874f920
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x5874F8ED: or dword ptr [0x589cfc4c], eax
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x4C
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F8F3: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874F8F5: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F8FD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xD3
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874F902: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874F905: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874F907: je 0x5874f911
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5874F909: mov dword ptr [eax], 0x5898d5c0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874F90F: jmp 0x5874f913
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874F911: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874F913: mov dword ptr [0x589cfc48], eax
        __asm _emit 0xA3
        __asm _emit 0x48
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F918: mov dword ptr [esp + 0xc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F920: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5874F924: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874F928: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F92C: push eax
        __asm _emit 0x50
        // 0x5874F92D: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F931: push ecx
        __asm _emit 0x51
        // 0x5874F932: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F936: push edx
        __asm _emit 0x52
        // 0x5874F937: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F93B: push eax
        __asm _emit 0x50
        // 0x5874F93C: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F940: push ecx
        __asm _emit 0x51
        // 0x5874F941: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874F945: push edx
        __asm _emit 0x52
        // 0x5874F946: push eax
        __asm _emit 0x50
        // 0x5874F947: push ecx
        __asm _emit 0x51
        // 0x5874F948: mov ecx, dword ptr [0x589cfc48]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5874F94E: call 0x5874f1f0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F953: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874F957: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874F95E: pop ecx
        __asm _emit 0x59
        // 0x5874F95F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874F962: ret
        __asm _emit 0xC3
    }
}

// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fb850.

// Ghidra body range 0x588FB850..0x588FB89F; 79 mapped bytes.
extern "C" __declspec(naked) void FUN_588fb850_segment_00() {
    __asm {
        // 0x588FB850: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588FB853: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FB858: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FB85A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FB85E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FB862: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB866: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FB868: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FB86A: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FB86E: push edx
        __asm _emit 0x52
        // 0x588FB86F: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB873: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FB877: push eax
        __asm _emit 0x50
        // 0x588FB878: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FB87A: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB87E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FB884: push 0x80015102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FB889: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FB88E: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FB892: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FB894: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x13
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB899: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588FB89C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

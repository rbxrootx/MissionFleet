// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849980 .. +0x5C bytes.
// Source symbol alias: FUN_58849980.
extern "C" __declspec(naked) void FUN_58849980() {
    __asm {
        // 0x58849980: push esi
        __asm _emit 0x56
        // 0x58849981: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58849983: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58849987: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5884998A: lea edx, [ecx + 4]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884998D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884998F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58849992: push edi
        __asm _emit 0x57
        // 0x58849993: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58849995: jle 0x588499ab
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58849997: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58849999: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5884999B: push eax
        __asm _emit 0x50
        // 0x5884999C: push edx
        __asm _emit 0x52
        // 0x5884999D: push eax
        __asm _emit 0x50
        // 0x5884999E: push ecx
        __asm _emit 0x51
        // 0x5884999F: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588499A4: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588499A8: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588499AB: add dword ptr [esi + 0x10], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xFC
        // 0x588499AF: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588499B3: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588499B6: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588499BC: cmp dword ptr [esi + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588499BF: ja 0x588499c5
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x588499C1: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588499C3: jbe 0x588499ce
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x588499C5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588499CA: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588499CE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588499D0: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x588499D2: mov dword ptr [edi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588499D5: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588499D7: pop edi
        __asm _emit 0x5F
        // 0x588499D8: pop esi
        __asm _emit 0x5E
        // 0x588499D9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

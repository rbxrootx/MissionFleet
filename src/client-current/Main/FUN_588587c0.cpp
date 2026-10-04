// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588587C0 .. +0x2E5 bytes.
// Source symbol alias: FUN_588587c0.
extern "C" __declspec(naked) void FUN_588587c0() {
    __asm {
        // 0x588587C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588587C2: push ebx
        __asm _emit 0x53
        // 0x588587C3: push ebp
        __asm _emit 0x55
        // 0x588587C4: push esi
        __asm _emit 0x56
        // 0x588587C5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588587C7: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587CD: mov dword ptr [esi + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587D3: mov dword ptr [esi + 0x140], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587D9: mov dword ptr [esi + 0x144], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587DF: mov dword ptr [esi + 0x148], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587E5: mov dword ptr [esi + 0x14c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587EB: mov dword ptr [esi + 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587F1: mov dword ptr [esi + 0x154], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587F7: mov dword ptr [esi + 0x90c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588587FD: mov dword ptr [esi + 0x910], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858803: mov dword ptr [esi + 0x914], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858809: mov dword ptr [esi + 0x918], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885880F: mov dword ptr [esi + 0x91c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858815: mov dword ptr [esi + 0x920], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885881B: mov dword ptr [esi + 0x924], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858821: mov dword ptr [esi + 0x928], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858827: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58858829: mov dword ptr [esi + 0x908], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885882F: mov dword ptr [esi + 0xf0], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858835: mov dword ptr [esi + 0xf4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885883B: mov dword ptr [esi + 0x9a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858841: mov dword ptr [esi + 0x9a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858847: mov dword ptr [esi + 0x9a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885884D: mov dword ptr [esi + 0x9ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858853: mov dword ptr [esi + 0x9b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858859: mov dword ptr [esi + 0x9b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885885F: mov dword ptr [esi + 0x9b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858865: mov dword ptr [esi + 0x9bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885886B: mov dword ptr [esi + 0x8a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858871: mov dword ptr [esi + 0x8ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858877: mov dword ptr [esi + 0x8b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885887D: mov dword ptr [esi + 0x8b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858883: mov dword ptr [esi + 0x878], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858889: mov dword ptr [esi + 0x87c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885888F: mov dword ptr [esi + 0x880], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858895: mov dword ptr [esi + 0x884], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885889B: mov dword ptr [esi + 0x888], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588A1: mov dword ptr [esi + 0x88c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588A7: mov dword ptr [esi + 0x890], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588AD: mov dword ptr [esi + 0x894], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588B3: mov dword ptr [esi + 0x8c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588B9: mov dword ptr [esi + 0x8cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588BF: mov dword ptr [esi + 0x8d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588C5: mov dword ptr [esi + 0x8d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588CB: mov dword ptr [esi + 0x8d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588D1: mov dword ptr [esi + 0x8dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588D7: mov dword ptr [esi + 0x8e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588DD: mov dword ptr [esi + 0x8e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588E3: lea eax, [esi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588588E9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588588EB: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588588ED: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588588F0: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588588F3: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588588F6: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x588588F9: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588588FC: push edi
        __asm _emit 0x57
        // 0x588588FD: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x58858900: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x58858903: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58858905: lea ebx, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x58858908: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885890E: push ebp
        __asm _emit 0x55
        // 0x5885890F: push edi
        __asm _emit 0x57
        // 0x58858910: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x8C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58858915: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58858918: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5885891B: jne 0x58858908
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5885891D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885891F: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858925: mov dword ptr [esi + 0x11c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885892B: mov dword ptr [esi + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858931: mov dword ptr [esi + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858937: mov dword ptr [esi + 0x128], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885893D: mov dword ptr [esi + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858943: mov dword ptr [esi + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858949: mov dword ptr [esi + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885894F: mov dword ptr [esi + 0x8e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858955: mov dword ptr [esi + 0x8ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885895B: mov dword ptr [esi + 0x8f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858961: mov dword ptr [esi + 0x8f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858967: mov dword ptr [esi + 0x8f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885896D: mov dword ptr [esi + 0x8fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858973: mov dword ptr [esi + 0x900], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858979: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5885897B: mov dword ptr [esi + 0x904], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858981: lea eax, [esi + 0x158]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858987: push ebp
        __asm _emit 0x55
        // 0x58858988: push eax
        __asm _emit 0x50
        // 0x58858989: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885898E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58858990: lea ecx, [esi + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858996: push ebp
        __asm _emit 0x55
        // 0x58858997: push ecx
        __asm _emit 0x51
        // 0x58858998: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885899D: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588589A0: lea eax, [esi + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589A6: lea ecx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x588589A9: mov edx, 0x3a9e2b0d
        __asm _emit 0xBA
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x588589AE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588589B0: mov dword ptr [eax - 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x588589B3: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588589B5: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588589B8: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588589BB: jne 0x588589b0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x588589BD: push 0x6a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589C2: lea edx, [esi + 0x1d8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589C8: push ebp
        __asm _emit 0x55
        // 0x588589C9: push edx
        __asm _emit 0x52
        // 0x588589CA: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588589CF: mov ecx, dword ptr [esi + 0xa50]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589D5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588589D8: push ebp
        __asm _emit 0x55
        // 0x588589D9: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588589DE: mov ecx, dword ptr [esi + 0xa54]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589E4: push ebp
        __asm _emit 0x55
        // 0x588589E5: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588589EA: mov ecx, dword ptr [esi + 0xa58]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589F0: push ebp
        __asm _emit 0x55
        // 0x588589F1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588589F6: mov ecx, dword ptr [esi + 0xa5c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588589FC: push ebp
        __asm _emit 0x55
        // 0x588589FD: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58858A02: mov ecx, dword ptr [esi + 0xa48]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A08: push ebp
        __asm _emit 0x55
        // 0x58858A09: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58858A0E: lea edi, [esi + 0x9c0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A14: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A19: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A20: mov eax, dword ptr [edi - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xB8
        // 0x58858A23: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A28: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58858A2C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58858A2E: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xB3
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58858A33: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58858A36: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58858A39: jne 0x58858a20
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x58858A3B: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A40: mov dword ptr [esi + 0x898], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A46: mov dword ptr [esi + 0x89c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A4C: mov dword ptr [esi + 0x8a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A52: mov dword ptr [esi + 0x8a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A58: mov edx, dword ptr [esi + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A5E: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58858A61: mov eax, dword ptr [esi + 0x9e4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A67: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58858A6A: mov ecx, dword ptr [esi + 0x9e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A70: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x58858A73: mov edx, dword ptr [esi + 0x9ec]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xEC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A79: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58858A7C: mov eax, dword ptr [esi + 0x9f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A82: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58858A85: mov ecx, dword ptr [esi + 0x9f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A8B: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x58858A8E: mov edx, dword ptr [esi + 0x9f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A94: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58858A97: mov eax, dword ptr [esi + 0x9fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858A9D: pop edi
        __asm _emit 0x5F
        // 0x58858A9E: pop esi
        __asm _emit 0x5E
        // 0x58858A9F: mov dword ptr [eax + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x50
        // 0x58858AA2: pop ebp
        __asm _emit 0x5D
        // 0x58858AA3: pop ebx
        __asm _emit 0x5B
        // 0x58858AA4: ret
        __asm _emit 0xC3
    }
}

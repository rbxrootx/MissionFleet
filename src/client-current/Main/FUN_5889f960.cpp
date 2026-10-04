// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889F960 .. +0x339 bytes.
// Source symbol alias: FUN_5889f960.
extern "C" __declspec(naked) void FUN_5889f960() {
    __asm {
        // 0x5889F960: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889F963: push esi
        __asm _emit 0x56
        // 0x5889F964: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889F968: push eax
        __asm _emit 0x50
        // 0x5889F969: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889F96E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889F970: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F975: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5889F97A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889F97C: call dword ptr [0x5898c008]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889F982: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889F984: je 0x5889f9b0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5889F986: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889F98A: push ecx
        __asm _emit 0x51
        // 0x5889F98B: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889F98F: push edx
        __asm _emit 0x52
        // 0x5889F990: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889F992: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889F997: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889F999: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889F99E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889F9A0: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9A5: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5889F9AA: call dword ptr [0x5898c010]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889F9B0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889F9B4: push 0x589c9038
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F9B9: push 0x589a03b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9BE: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9C3: push eax
        __asm _emit 0x50
        // 0x5889F9C4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889F9C6: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F9CB: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889F9CF: push 0x589c903c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F9D4: push 0x589a03ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9D9: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9DE: push ecx
        __asm _emit 0x51
        // 0x5889F9DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889F9E1: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889F9E6: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889F9EA: push 0x589c9040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889F9EF: push 0x589a03a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9F4: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889F9F9: push edx
        __asm _emit 0x52
        // 0x5889F9FA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889F9FC: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FA01: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FA05: push 0x58a244fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FA0A: push 0x589a03a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA0F: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA14: push eax
        __asm _emit 0x50
        // 0x5889FA15: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FA17: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FA1C: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FA20: push 0x589c9044
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FA25: push 0x589a0390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA2A: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA2F: push ecx
        __asm _emit 0x51
        // 0x5889FA30: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FA32: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FA37: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FA3B: push 0x589c9048
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FA40: push 0x589a0380
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA45: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA4A: push edx
        __asm _emit 0x52
        // 0x5889FA4B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FA4D: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FA52: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FA56: push 0x589c904c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FA5B: push 0x589a0374
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA60: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA65: push eax
        __asm _emit 0x50
        // 0x5889FA66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FA68: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FA6D: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FA71: push 0x589c9050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FA76: push 0x589a036c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA7B: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA80: push ecx
        __asm _emit 0x51
        // 0x5889FA81: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FA83: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FA88: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FA8C: push 0x589c9054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FA91: push 0x589a035c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA96: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FA9B: push edx
        __asm _emit 0x52
        // 0x5889FA9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FA9E: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FAA3: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FAA7: push 0x589c9058
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FAAC: push 0x589a034c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FAB1: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FAB6: push eax
        __asm _emit 0x50
        // 0x5889FAB7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FAB9: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FABE: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FAC2: push 0x589c906c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FAC7: push 0x589a033c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FACC: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FAD1: push ecx
        __asm _emit 0x51
        // 0x5889FAD2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FAD4: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FAD9: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FADD: push 0x589c905c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FAE2: push 0x589a0330
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FAE7: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FAEC: push edx
        __asm _emit 0x52
        // 0x5889FAED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FAEF: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FAF4: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FAF8: push 0x589c9060
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FAFD: push 0x589a031c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB02: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB07: push eax
        __asm _emit 0x50
        // 0x5889FB08: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FB0A: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FB0F: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FB13: push 0x58a248f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FB18: push 0x589a0310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB1D: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB22: push ecx
        __asm _emit 0x51
        // 0x5889FB23: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FB25: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FB2A: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FB2E: push 0x589c9068
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FB33: push 0x589a0300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB38: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB3D: push edx
        __asm _emit 0x52
        // 0x5889FB3E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FB40: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FB45: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FB49: push 0x58a248f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FB4E: push 0x589a02f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB53: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB58: push eax
        __asm _emit 0x50
        // 0x5889FB59: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FB5B: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FB60: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FB64: push 0x589c9070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FB69: push 0x589a02e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB6E: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB73: push ecx
        __asm _emit 0x51
        // 0x5889FB74: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FB76: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FB7B: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FB7F: push 0x58a248d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FB84: push 0x589a02dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB89: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FB8E: push edx
        __asm _emit 0x52
        // 0x5889FB8F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FB91: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FB96: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FB9A: push 0x58a248f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FB9F: push 0x589a02cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBA4: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBA9: push eax
        __asm _emit 0x50
        // 0x5889FBAA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FBAC: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FBB1: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FBB5: push 0x58a248fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FBBA: push 0x589a02c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBBF: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBC4: push ecx
        __asm _emit 0x51
        // 0x5889FBC5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FBC7: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FBCC: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FBD0: push 0x589c9074
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FBD5: push 0x589a02b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBDA: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBDF: push edx
        __asm _emit 0x52
        // 0x5889FBE0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FBE2: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FBE7: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FBEB: push 0x58a248e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FBF0: push 0x589a029c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBF5: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FBFA: push eax
        __asm _emit 0x50
        // 0x5889FBFB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FBFD: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FC02: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FC06: push 0x58a248e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FC0B: push 0x589a0288
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC10: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC15: push ecx
        __asm _emit 0x51
        // 0x5889FC16: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FC18: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FC1D: push 0x58a248e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FC22: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889FC26: push 0x589a0274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC2B: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC30: push edx
        __asm _emit 0x52
        // 0x5889FC31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FC33: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FC38: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FC3C: push 0x58a248ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FC41: push 0x589a025c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC46: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC4B: push eax
        __asm _emit 0x50
        // 0x5889FC4C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FC4E: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FC53: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FC57: push 0x589c9064
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FC5C: push 0x589a0250
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC61: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC66: push ecx
        __asm _emit 0x51
        // 0x5889FC67: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FC69: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FC6E: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FC72: push 0x58a248dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FC77: push 0x589a0244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC7C: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FC81: push edx
        __asm _emit 0x52
        // 0x5889FC82: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FC84: call 0x5889e8a0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FC89: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FC8D: push eax
        __asm _emit 0x50
        // 0x5889FC8E: call dword ptr [0x5898c000]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889FC94: pop esi
        __asm _emit 0x5E
        // 0x5889FC95: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889FC98: ret
        __asm _emit 0xC3
    }
}

// Shared status-message and conditional state-transition helper. ECX is the
// context/root object; stack arguments are the subject object and mode. Modes
// 0-6 select recovered MESSAGESTRING keys before notification calls and gated
// state writes. The message text, field schemas, and callback contracts remain
// unresolved; see docs/current-main-status-message-transition.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E8750 .. +0x2D2 bytes.
// Source symbol alias: FUN_587e8750.
extern "C" __declspec(naked) void FUN_587e8750() {
    __asm {
        // 0x587E8750: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8756: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587E875B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587E875D: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8764: push ebx
        __asm _emit 0x53
        // 0x587E8765: push esi
        __asm _emit 0x56
        // 0x587E8766: mov esi, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E876D: cmp dword ptr [esi + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8774: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587E8776: je 0x587e8a09
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E877C: push ebp
        __asm _emit 0x55
        // 0x587E877D: mov ebp, dword ptr [esp + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8784: cmp ebp, 6
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x06
        // 0x587E8787: ja 0x587e88aa
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E878D: jmp dword ptr [ebp*4 + 0x587e8a24]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0xAD
        __asm _emit 0x24
        __asm _emit 0x8A
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587E8794: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E879A: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587E879D: push eax
        __asm _emit 0x50
        // 0x587E879E: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87A4: push ecx
        __asm _emit 0x51
        // 0x587E87A5: push 0x5899be6c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E87AA: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E87B0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E87B3: push eax
        __asm _emit 0x50
        // 0x587E87B4: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E87B8: push edx
        __asm _emit 0x52
        // 0x587E87B9: jmp 0x587e88a1
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87BE: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87C4: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587E87C7: push eax
        __asm _emit 0x50
        // 0x587E87C8: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87CE: push ecx
        __asm _emit 0x51
        // 0x587E87CF: push 0x5899be40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E87D4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E87DA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E87DD: push eax
        __asm _emit 0x50
        // 0x587E87DE: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E87E2: push edx
        __asm _emit 0x52
        // 0x587E87E3: jmp 0x587e88a1
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87E8: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87EE: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587E87F1: push eax
        __asm _emit 0x50
        // 0x587E87F2: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E87F8: push ecx
        __asm _emit 0x51
        // 0x587E87F9: push 0x5899be20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xBE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E87FE: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8804: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8807: push eax
        __asm _emit 0x50
        // 0x587E8808: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E880C: push edx
        __asm _emit 0x52
        // 0x587E880D: jmp 0x587e88a1
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8812: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8818: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587E881B: push eax
        __asm _emit 0x50
        // 0x587E881C: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8822: push ecx
        __asm _emit 0x51
        // 0x587E8823: push 0x5899bdfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xBD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8828: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E882E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8831: push eax
        __asm _emit 0x50
        // 0x587E8832: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E8836: push edx
        __asm _emit 0x52
        // 0x587E8837: jmp 0x587e88a1
        __asm _emit 0xEB
        __asm _emit 0x68
        // 0x587E8839: mov eax, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E883F: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587E8842: push eax
        __asm _emit 0x50
        // 0x587E8843: lea ecx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8849: push ecx
        __asm _emit 0x51
        // 0x587E884A: push 0x5899bddc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xBD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E884F: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8855: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E8858: push eax
        __asm _emit 0x50
        // 0x587E8859: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E885D: push edx
        __asm _emit 0x52
        // 0x587E885E: jmp 0x587e88a1
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x587E8860: push 0x5899bdbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0xBD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8865: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E886B: push eax
        __asm _emit 0x50
        // 0x587E886C: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E8870: push eax
        __asm _emit 0x50
        // 0x587E8871: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8877: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587E887A: jmp 0x587e88aa
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x587E887C: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8882: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x587E8885: push eax
        __asm _emit 0x50
        // 0x587E8886: lea edx, [esi + 0x3a0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E888C: push edx
        __asm _emit 0x52
        // 0x587E888D: push 0x5899bd94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0xBD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587E8892: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8898: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E889B: push eax
        __asm _emit 0x50
        // 0x587E889C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587E88A0: push eax
        __asm _emit 0x50
        // 0x587E88A1: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E88A7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587E88AA: cmp dword ptr [esi + 0x1258], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E88B1: je 0x587e88c5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587E88B3: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E88B7: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587E88BC: push ecx
        __asm _emit 0x51
        // 0x587E88BD: mov ecx, dword ptr [ebx + 0x20d38]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E88C3: jmp 0x587e88d5
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587E88C5: mov ecx, dword ptr [ebx + 0x20d3c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E88CB: push 0xffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E88D0: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E88D4: push edx
        __asm _emit 0x52
        // 0x587E88D5: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x34
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587E88DA: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E88DF: cmp dword ptr [eax + 0x170], 0x1d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1D
        // 0x587E88E6: jle 0x587e88fc
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587E88E8: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E88EF: je 0x587e88fc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E88F1: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E88F7: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x587E88FA: jmp 0x587e88fe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E88FC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E88FE: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E8904: push edx
        __asm _emit 0x52
        // 0x587E8905: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E890A: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E890F: cmp dword ptr [eax + 0x170], 0x1d
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1D
        // 0x587E8916: jle 0x587e892c
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587E8918: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E891F: je 0x587e892c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587E8921: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8927: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x74
        // 0x587E892A: jmp 0x587e892e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587E892C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E892E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E8930: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E8933: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E8935: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E8937: cmp word ptr [ebx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587E893F: jne 0x587e8a08
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8945: cmp dword ptr [esi + 0x6648], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E894C: je 0x587e8968
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x587E894E: mov ecx, dword ptr [ebx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E8954: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E8956: jne 0x587e8961
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587E8958: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E895A: call 0x587cc700
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x3D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587E895F: jmp 0x587e896c
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587E8961: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587E8963: call 0x587cc700
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x3D
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587E8968: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587E896A: jne 0x587e89b8
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x587E896C: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8972: mov ax, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587E8976: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587E897A: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587E897E: jne 0x587e898d
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587E8980: mov eax, 0x4b
        __asm _emit 0xB8
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8985: mov dword ptr [esi + 0x664c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E898B: jmp 0x587e8a08
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x587E898D: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E8991: jne 0x587e89a0
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587E8993: mov eax, 0x7d
        __asm _emit 0xB8
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8998: mov dword ptr [esi + 0x664c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E899E: jmp 0x587e8a08
        __asm _emit 0xEB
        __asm _emit 0x68
        // 0x587E89A0: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587E89A4: mov eax, 0xc8
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E89A9: je 0x587e89b0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587E89AB: mov eax, 0xfa
        __asm _emit 0xB8
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E89B0: mov dword ptr [esi + 0x664c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E89B6: jmp 0x587e8a08
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x587E89B8: mov dword ptr [esi + 0x664c], 0x2710
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E89C2: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E89C8: cmp esi, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587E89CB: jne 0x587e8a08
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587E89CD: mov eax, dword ptr [0x58a245a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E89D2: mov dword ptr [eax + 0x8d8], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E89DC: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x587E89DF: je 0x587e89f8
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587E89E1: cmp ebp, 4
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x04
        // 0x587E89E4: je 0x587e89f8
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587E89E6: mov ecx, dword ptr [ebx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E89EC: mov dword ptr [ecx + 0xac], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E89F6: jmp 0x587e8a08
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587E89F8: mov edx, dword ptr [ebx + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E89FE: mov dword ptr [edx + 0xac], 1
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8A08: pop ebp
        __asm _emit 0x5D
        // 0x587E8A09: mov ecx, dword ptr [esp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8A10: pop esi
        __asm _emit 0x5E
        // 0x587E8A11: pop ebx
        __asm _emit 0x5B
        // 0x587E8A12: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587E8A14: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x41
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E8A19: add esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8A1F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

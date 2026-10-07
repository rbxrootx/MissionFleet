// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889FCA0 .. +0x339 bytes.
// Source symbol alias: FUN_5889fca0.
extern "C" __declspec(naked) void FUN_5889fca0() {
    __asm {
        // 0x5889FCA0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889FCA3: push esi
        __asm _emit 0x56
        // 0x5889FCA4: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FCA8: push eax
        __asm _emit 0x50
        // 0x5889FCA9: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889FCAE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889FCB0: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FCB5: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5889FCBA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889FCBC: call dword ptr [0x5898c008]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889FCC2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889FCC4: je 0x5889fcf0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5889FCC6: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889FCCA: push ecx
        __asm _emit 0x51
        // 0x5889FCCB: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889FCCF: push edx
        __asm _emit 0x52
        // 0x5889FCD0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889FCD2: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889FCD7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889FCD9: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889FCDE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889FCE0: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FCE5: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5889FCEA: call dword ptr [0x5898c010]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889FCF0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FCF4: push 0x589c9038
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FCF9: push 0x589a03b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FCFE: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD03: push eax
        __asm _emit 0x50
        // 0x5889FD04: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FD06: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FD0B: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FD0F: push 0x589c903c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FD14: push 0x589a03ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD19: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD1E: push ecx
        __asm _emit 0x51
        // 0x5889FD1F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FD21: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FD26: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FD2A: push 0x589c9040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FD2F: push 0x589a03a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD34: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD39: push edx
        __asm _emit 0x52
        // 0x5889FD3A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FD3C: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FD41: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FD45: push 0x58a244fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FD4A: push 0x589a03a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD4F: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD54: push eax
        __asm _emit 0x50
        // 0x5889FD55: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FD57: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FD5C: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FD60: push 0x589c9044
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FD65: push 0x589a0390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD6A: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD6F: push ecx
        __asm _emit 0x51
        // 0x5889FD70: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FD72: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FD77: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FD7B: push 0x589c9048
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FD80: push 0x589a0380
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD85: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FD8A: push edx
        __asm _emit 0x52
        // 0x5889FD8B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FD8D: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FD92: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FD96: push 0x589c904c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FD9B: push 0x589a0374
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDA0: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDA5: push eax
        __asm _emit 0x50
        // 0x5889FDA6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FDA8: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FDAD: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FDB1: push 0x589c9050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FDB6: push 0x589a036c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDBB: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDC0: push ecx
        __asm _emit 0x51
        // 0x5889FDC1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FDC3: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FDC8: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FDCC: push 0x589c9054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FDD1: push 0x589a035c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDD6: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDDB: push edx
        __asm _emit 0x52
        // 0x5889FDDC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FDDE: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FDE3: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FDE7: push 0x589c9058
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FDEC: push 0x589a034c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDF1: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FDF6: push eax
        __asm _emit 0x50
        // 0x5889FDF7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FDF9: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FDFE: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FE02: push 0x589c906c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FE07: push 0x589a033c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE0C: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE11: push ecx
        __asm _emit 0x51
        // 0x5889FE12: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FE14: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FE19: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FE1D: push 0x589c905c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FE22: push 0x589a0330
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE27: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE2C: push edx
        __asm _emit 0x52
        // 0x5889FE2D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FE2F: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FE34: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FE38: push 0x589c9060
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FE3D: push 0x589a031c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE42: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE47: push eax
        __asm _emit 0x50
        // 0x5889FE48: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FE4A: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FE4F: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FE53: push 0x58a248f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FE58: push 0x589a0310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE5D: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE62: push ecx
        __asm _emit 0x51
        // 0x5889FE63: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FE65: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FE6A: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FE6E: push 0x589c9068
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FE73: push 0x589a0300
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE78: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE7D: push edx
        __asm _emit 0x52
        // 0x5889FE7E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FE80: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FE85: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FE89: push 0x58a248f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FE8E: push 0x589a02f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE93: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FE98: push eax
        __asm _emit 0x50
        // 0x5889FE99: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FE9B: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FEA0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FEA4: push 0x589c9070
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FEA9: push 0x589a02e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FEAE: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FEB3: push ecx
        __asm _emit 0x51
        // 0x5889FEB4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FEB6: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FEBB: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FEBF: push 0x58a248d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FEC4: push 0x589a02dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FEC9: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FECE: push edx
        __asm _emit 0x52
        // 0x5889FECF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FED1: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FED6: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FEDA: push 0x58a248f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FEDF: push 0x589a02cc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FEE4: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FEE9: push eax
        __asm _emit 0x50
        // 0x5889FEEA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FEEC: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FEF1: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FEF5: push 0x58a248fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FEFA: push 0x589a02c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FEFF: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF04: push ecx
        __asm _emit 0x51
        // 0x5889FF05: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FF07: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FF0C: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FF10: push 0x589c9074
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FF15: push 0x589a02b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF1A: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF1F: push edx
        __asm _emit 0x52
        // 0x5889FF20: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FF22: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FF27: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FF2B: push 0x58a248e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FF30: push 0x589a029c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF35: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF3A: push eax
        __asm _emit 0x50
        // 0x5889FF3B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FF3D: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FF42: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FF46: push 0x58a248e4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FF4B: push 0x589a0288
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF50: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF55: push ecx
        __asm _emit 0x51
        // 0x5889FF56: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FF58: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FF5D: push 0x58a248e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FF62: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889FF66: push 0x589a0274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF6B: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF70: push edx
        __asm _emit 0x52
        // 0x5889FF71: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FF73: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FF78: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FF7C: push 0x58a248ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FF81: push 0x589a025c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF86: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FF8B: push eax
        __asm _emit 0x50
        // 0x5889FF8C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FF8E: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FF93: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FF97: push 0x589c9064
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5889FF9C: push 0x589a0250
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FFA1: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FFA6: push ecx
        __asm _emit 0x51
        // 0x5889FFA7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FFA9: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FFAE: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FFB2: push 0x58a248dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889FFB7: push 0x589a0244
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FFBC: push 0x589a03c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889FFC1: push edx
        __asm _emit 0x52
        // 0x5889FFC2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889FFC4: call 0x5889e910
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889FFC9: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889FFCD: push eax
        __asm _emit 0x50
        // 0x5889FFCE: call dword ptr [0x5898c000]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889FFD4: pop esi
        __asm _emit 0x5E
        // 0x5889FFD5: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889FFD8: ret
        __asm _emit 0xC3
    }
}

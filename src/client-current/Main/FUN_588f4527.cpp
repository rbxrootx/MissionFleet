// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 236 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f4527.

// Ghidra body range 0x588F4527..0x588F4613; 236 mapped bytes.
extern "C" __declspec(naked) void FUN_588f4527_segment_00() {
    __asm {
        // 0x588F4527: push ebx
        __asm _emit 0x53
        // 0x588F4528: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588F452A: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F452F: cmp dword ptr [eax + 0x60], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x60
        // 0x588F4532: jne 0x588f453b
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588F4534: mov dword ptr [eax + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F453B: mov eax, dword ptr [ebx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4541: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588F4544: jne 0x588f4598
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x588F4546: mov ecx, dword ptr [edi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588F4549: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F454B: je 0x588f45d8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F4551: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588F4554: cmp dword ptr [eax + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588F4557: je 0x588f4562
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F4559: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588F455C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F455E: jne 0x588f4551
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588F4560: jmp 0x588f45d8
        __asm _emit 0xEB
        __asm _emit 0x76
        // 0x588F4562: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F4565: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588F4568: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F456A: je 0x588f4571
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588F456C: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588F456F: jmp 0x588f4574
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588F4571: mov dword ptr [edi + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588F4574: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F4576: je 0x588f4588
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588F4578: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588F457B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F457D: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588F457F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F4581: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F4583: dec dword ptr [edi + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x4F
        __asm _emit 0x2C
        // 0x588F4586: jmp 0x588f45d8
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x588F4588: mov dword ptr [edi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x28
        // 0x588F458B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F458D: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588F458F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F4591: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F4593: dec dword ptr [edi + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x4F
        __asm _emit 0x2C
        // 0x588F4596: jmp 0x588f45d8
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588F4598: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588F459B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F459D: je 0x588f45d8
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588F459F: nop
        __asm _emit 0x90
        // 0x588F45A0: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x588F45A3: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588F45A6: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588F45A8: je 0x588f45b6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F45AA: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F45B0: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F45B2: jne 0x588f45a0
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x588F45B4: jmp 0x588f45d8
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x588F45B6: movzx eax, word ptr [ebx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x43
        __asm _emit 0x5E
        // 0x588F45BA: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x588F45BD: cmp dword ptr [ecx + eax*4 + 0x9a4], ebx
        __asm _emit 0x39
        __asm _emit 0x9C
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F45C4: lea eax, [ecx + eax*4 + 0x9a4]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F45CB: jne 0x588f45d8
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588F45CD: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F45D3: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F45D8: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588F45DB: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588F45DE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F45E0: je 0x588f45e7
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588F45E2: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588F45E5: jmp 0x588f45ea
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588F45E7: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588F45EA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F45EC: je 0x588f45f3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588F45EE: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588F45F1: jmp 0x588f45f6
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588F45F3: mov dword ptr [edi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x588F45F6: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588F45F8: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588F45FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F45FC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F45FE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F4600: dec dword ptr [edi + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588F4603: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x588F4605: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588F4607: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F4609: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588F460B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F460D: pop ebx
        __asm _emit 0x5B
        // 0x588F460E: pop edi
        __asm _emit 0x5F
        // 0x588F460F: pop esi
        __asm _emit 0x5E
        // 0x588F4610: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C4450 .. +0x16C bytes.
// Source symbol alias: FUN_587c4450.
extern "C" __declspec(naked) void FUN_587c4450() {
    __asm {
        // 0x587C4450: push ecx
        __asm _emit 0x51
        // 0x587C4451: mov eax, dword ptr [ecx + 0x1db8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4457: push ebx
        __asm _emit 0x53
        // 0x587C4458: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587C445B: mov dword ptr [esp + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C445F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587C4461: je 0x587c45b7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4467: push ebp
        __asm _emit 0x55
        // 0x587C4468: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C446C: push edi
        __asm _emit 0x57
        // 0x587C446D: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C4471: push esi
        __asm _emit 0x56
        // 0x587C4472: jmp 0x587c4480
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587C4474: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C447B: jmp 0x587c4480
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587C447D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587C4480: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x587C4483: cmp dword ptr [esi + 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C448A: je 0x587c45a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4490: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C4494: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C4498: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587C449A: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x587C449D: push eax
        __asm _emit 0x50
        // 0x587C449E: push ecx
        __asm _emit 0x51
        // 0x587C449F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C44A1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C44A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C44A5: je 0x587c451a
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x587C44A7: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587C44AA: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x587C44AD: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x587C44B0: push eax
        __asm _emit 0x50
        // 0x587C44B1: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x587C44B4: push ecx
        __asm _emit 0x51
        // 0x587C44B5: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x587C44B8: push edx
        __asm _emit 0x52
        // 0x587C44B9: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587C44BC: push eax
        __asm _emit 0x50
        // 0x587C44BD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587C44BF: push ecx
        __asm _emit 0x51
        // 0x587C44C0: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587C44C4: push edx
        __asm _emit 0x52
        // 0x587C44C5: push eax
        __asm _emit 0x50
        // 0x587C44C6: push ecx
        __asm _emit 0x51
        // 0x587C44C7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C44C9: call 0x5874a010
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x5B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587C44CE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C44D0: je 0x587c4513
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587C44D2: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587C44D4: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587C44D7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C44D9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C44DB: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C44DF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C44E1: je 0x587c44ef
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587C44E3: cmp dword ptr [edi], 0xb
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0x0B
        // 0x587C44E6: jne 0x587c44ef
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587C44E8: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x587C44EA: call 0x588d6c90
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x27
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587C44EF: cmp dword ptr [esi + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C44F6: je 0x587c4513
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x587C44F8: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C44FC: mov ecx, dword ptr [ecx + 0x1db8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4502: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587C4505: push ebx
        __asm _emit 0x53
        // 0x587C4506: call 0x587c4250
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C450B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587C450D: je 0x587c45b4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4513: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587C4515: jmp 0x587c45a7
        __asm _emit 0xE9
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C451A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587C451D: sub ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C4521: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587C4524: sub eax, dword ptr [esp + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C4528: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587C452A: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587C452D: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x587C4530: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587C4532: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x587C4535: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587C4537: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587C4539: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587C453D: jge 0x587c45a9
        __asm _emit 0x7D
        __asm _emit 0x6A
        // 0x587C453F: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587C4543: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x87
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C4548: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x87
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C454D: push eax
        __asm _emit 0x50
        // 0x587C454E: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587C4551: cdq
        __asm _emit 0x99
        // 0x587C4552: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587C4554: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587C4556: push ebp
        __asm _emit 0x55
        // 0x587C4557: push eax
        __asm _emit 0x50
        // 0x587C4558: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x7A
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587C455D: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x587C4560: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C4564: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587C4567: push edx
        __asm _emit 0x52
        // 0x587C4568: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C456A: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587C456C: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587C456E: push eax
        __asm _emit 0x50
        // 0x587C456F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587C4571: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C4573: push eax
        __asm _emit 0x50
        // 0x587C4574: push ecx
        __asm _emit 0x51
        // 0x587C4575: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C4577: call 0x5874a010
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x5A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587C457C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C457E: je 0x587c45a9
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587C4580: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587C4582: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587C4585: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C4587: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587C4589: cmp dword ptr [esi + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4590: je 0x587c45a9
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587C4592: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C4596: mov ecx, dword ptr [ecx + 0x1db8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C459C: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587C459F: push ebx
        __asm _emit 0x53
        // 0x587C45A0: call 0x587c4250
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C45A5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587C45A7: je 0x587c45b4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587C45A9: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x587C45AC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587C45AE: jne 0x587c4480
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C45B4: pop esi
        __asm _emit 0x5E
        // 0x587C45B5: pop edi
        __asm _emit 0x5F
        // 0x587C45B6: pop ebp
        __asm _emit 0x5D
        // 0x587C45B7: pop ebx
        __asm _emit 0x5B
        // 0x587C45B8: pop ecx
        __asm _emit 0x59
        // 0x587C45B9: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

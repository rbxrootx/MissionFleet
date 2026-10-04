// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908340 .. +0x1D1 bytes.
// Source symbol alias: FUN_58908340.
extern "C" __declspec(naked) void FUN_58908340() {
    __asm {
        // 0x58908340: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58908343: push esi
        __asm _emit 0x56
        // 0x58908344: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58908346: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5890834A: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5890834C: je 0x5890850a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908352: push ebx
        __asm _emit 0x53
        // 0x58908353: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58908357: push ebp
        __asm _emit 0x55
        // 0x58908358: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890835C: push edi
        __asm _emit 0x57
        // 0x5890835D: mov edi, dword ptr [esi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58908360: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58908362: je 0x58908382
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58908364: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x58908369: jge 0x58908382
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x5890836B: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890836F: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58908371: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x58908374: push ebx
        __asm _emit 0x53
        // 0x58908375: push eax
        __asm _emit 0x50
        // 0x58908376: push ebp
        __asm _emit 0x55
        // 0x58908377: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58908379: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890837B: mov edi, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x48
        // 0x5890837E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58908380: jne 0x58908364
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x58908382: cmp dword ptr [esi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58908386: je 0x589084ea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890838C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5890838F: add ecx, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58908392: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58908395: add ecx, dword ptr [ebx]
        __asm _emit 0x03
        __asm _emit 0x0B
        // 0x58908397: mov ebp, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x1C
        // 0x5890839A: add eax, dword ptr [esi + 0x10]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5890839D: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x589083A0: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x589083A3: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x589083A6: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x589083A8: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x589083AA: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589083AE: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589083B2: mov ebp, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x589083B5: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x589083B9: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x589083BC: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x589083BE: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x589083C0: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x589083C2: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589083C6: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589083CA: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589083CE: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x589083D2: jge 0x589083da
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x589083D4: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x589083D6: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589083DA: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589083DE: mov ebp, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x04
        // 0x589083E1: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x589083E3: jge 0x589083e9
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x589083E5: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589083E9: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589083ED: mov ebx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x589083F0: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589083F4: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x589083F6: jle 0x589083fe
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x589083F8: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x589083FA: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x589083FE: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58908402: mov ebx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x0C
        // 0x58908405: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58908407: jle 0x5890840f
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58908409: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5890840B: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890840F: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58908411: jge 0x589084e2
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908417: cmp dword ptr [esp + 0x1c], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890841B: jge 0x589084e2
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908421: mov ebx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908427: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890842B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5890842D: je 0x589084e6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908433: jmp 0x58908444
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58908435: jmp 0x58908440
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58908437: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890843E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58908440: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58908444: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58908446: jge 0x589084e6
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890844C: cmp ebx, dword ptr [esi + 0x84]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908452: jne 0x5890846a
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58908454: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58908457: push edx
        __asm _emit 0x52
        // 0x58908458: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890845C: push edx
        __asm _emit 0x52
        // 0x5890845D: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x58908460: push edx
        __asm _emit 0x52
        // 0x58908461: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x58908464: push edx
        __asm _emit 0x52
        // 0x58908465: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x58908468: jmp 0x589084b2
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x5890846A: cmp dword ptr [esi + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5890846E: je 0x5890849e
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x58908470: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58908473: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58908476: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58908478: push eax
        __asm _emit 0x50
        // 0x58908479: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x5890847C: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58908480: push eax
        __asm _emit 0x50
        // 0x58908481: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58908484: push eax
        __asm _emit 0x50
        // 0x58908485: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58908488: push eax
        __asm _emit 0x50
        // 0x58908489: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5890848C: push eax
        __asm _emit 0x50
        // 0x5890848D: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58908490: push eax
        __asm _emit 0x50
        // 0x58908491: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58908495: push eax
        __asm _emit 0x50
        // 0x58908496: mov eax, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x50
        // 0x58908499: push eax
        __asm _emit 0x50
        // 0x5890849A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890849C: jmp 0x589084ca
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5890849E: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x589084A1: push edx
        __asm _emit 0x52
        // 0x589084A2: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589084A6: push edx
        __asm _emit 0x52
        // 0x589084A7: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x589084AA: push edx
        __asm _emit 0x52
        // 0x589084AB: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x589084AE: push edx
        __asm _emit 0x52
        // 0x589084AF: mov edx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x589084B2: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x589084B5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x589084B7: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x589084BA: push edx
        __asm _emit 0x52
        // 0x589084BB: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x589084BE: push edx
        __asm _emit 0x52
        // 0x589084BF: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x589084C3: push edx
        __asm _emit 0x52
        // 0x589084C4: mov edx, dword ptr [ebp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x589084C7: push edx
        __asm _emit 0x52
        // 0x589084C8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x589084CA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589084CE: add eax, dword ptr [esi + 0x5c]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x589084D1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589084D5: mov ebx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x14
        // 0x589084D8: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x589084DA: jne 0x58908440
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589084E0: jmp 0x589084e6
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x589084E2: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x589084E6: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x589084EA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x589084EC: je 0x58908507
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x589084EE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x589084F0: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589084F4: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x589084F6: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x589084F9: push ebx
        __asm _emit 0x53
        // 0x589084FA: push eax
        __asm _emit 0x50
        // 0x589084FB: push ebp
        __asm _emit 0x55
        // 0x589084FC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589084FE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58908500: mov edi, dword ptr [edi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x48
        // 0x58908503: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58908505: jne 0x589084f0
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x58908507: pop edi
        __asm _emit 0x5F
        // 0x58908508: pop ebp
        __asm _emit 0x5D
        // 0x58908509: pop ebx
        __asm _emit 0x5B
        // 0x5890850A: pop esi
        __asm _emit 0x5E
        // 0x5890850B: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5890850E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}

// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786850 .. +0x1FF bytes.
// Source symbol alias: FUN_58786850.
extern "C" __declspec(naked) void FUN_58786850() {
    __asm {
        // 0x58786850: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58786852: push 0x5897e078
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58786857: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878685D: push eax
        __asm _emit 0x50
        // 0x5878685E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x58786861: push ebx
        __asm _emit 0x53
        // 0x58786862: push ebp
        __asm _emit 0x55
        // 0x58786863: push esi
        __asm _emit 0x56
        // 0x58786864: push edi
        __asm _emit 0x57
        // 0x58786865: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5878686A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878686C: push eax
        __asm _emit 0x50
        // 0x5878686D: lea eax, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58786871: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786877: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58786879: cmp dword ptr [edi + 0x1c], 0x1ffffffe
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x1C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x1F
        // 0x58786880: jb 0x587868ce
        __asm _emit 0x72
        __asm _emit 0x4C
        // 0x58786882: push 0x13
        __asm _emit 0x6A
        __asm _emit 0x13
        // 0x58786884: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58786886: push 0x5898cecc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878688B: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878688F: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786897: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878689B: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587868A0: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xE7
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587868A5: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587868A9: push eax
        __asm _emit 0x50
        // 0x587868AA: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587868AE: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587868B2: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xEA
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587868B7: push 0x589abea8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x587868BC: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587868C0: push ecx
        __asm _emit 0x51
        // 0x587868C1: mov dword ptr [esp + 0x38], 0x5898caa8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xA8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587868C9: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x63
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587868CE: mov edx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587868D2: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587868D5: mov esi, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587868D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587868DB: push edx
        __asm _emit 0x52
        // 0x587868DC: push eax
        __asm _emit 0x50
        // 0x587868DD: push esi
        __asm _emit 0x56
        // 0x587868DE: push eax
        __asm _emit 0x50
        // 0x587868DF: call 0x587a0a50
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587868E4: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587868E6: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587868E9: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587868EE: add dword ptr [edi + 0x1c], ebx
        __asm _emit 0x01
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x587868F1: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587868F3: jne 0x58786905
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587868F5: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587868F8: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587868FB: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x587868FD: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58786900: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x58786903: jmp 0x58786927
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58786905: cmp byte ptr [esp + 0x6c], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x5878690A: je 0x58786919
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5878690C: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x5878690E: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58786911: cmp esi, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x58786913: jne 0x58786927
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58786915: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58786917: jmp 0x58786927
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58786919: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x5878691C: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x5878691F: cmp esi, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58786922: jne 0x58786927
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58786924: mov dword ptr [eax + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58786927: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x5878692A: cmp byte ptr [edx + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5878692E: lea eax, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58786931: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58786933: jne 0x58786a25
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786939: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786940: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58786942: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58786945: cmp ecx, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x0A
        // 0x58786947: jne 0x5878699a
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58786949: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x5878694C: cmp byte ptr [edx + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58786950: jne 0x5878696b
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58786952: mov byte ptr [ecx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x58786955: mov byte ptr [edx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x58786958: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878695A: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5878695D: mov byte ptr [ecx + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58786961: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58786963: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58786966: jmp 0x58786a15
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878696B: cmp esi, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x5878696E: jne 0x5878697a
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58786970: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58786972: push esi
        __asm _emit 0x56
        // 0x58786973: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58786975: call 0x58747980
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5878697A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5878697D: mov byte ptr [eax + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58786980: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58786983: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58786986: mov byte ptr [edx + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5878698A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5878698D: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58786990: push ecx
        __asm _emit 0x51
        // 0x58786991: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58786993: call 0x58743720
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xCD
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58786998: jmp 0x58786a15
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x5878699A: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x5878699C: cmp byte ptr [edx + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587869A0: jne 0x587869b8
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587869A2: mov byte ptr [ecx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x14
        // 0x587869A5: mov byte ptr [edx + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x14
        // 0x587869A8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587869AA: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587869AD: mov byte ptr [ecx + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587869B1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587869B3: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587869B6: jmp 0x58786a15
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x587869B8: cmp esi, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x31
        // 0x587869BA: jne 0x587869c6
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587869BC: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587869BE: push esi
        __asm _emit 0x56
        // 0x587869BF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587869C1: call 0x58743720
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xCD
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587869C6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587869C9: mov byte ptr [eax + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x587869CC: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587869CF: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587869D2: mov byte ptr [edx + 0x14], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587869D6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587869D9: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587869DC: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587869DF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587869E1: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587869E4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587869E6: cmp byte ptr [edx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587869EA: jne 0x587869ef
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587869EC: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587869EF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587869F2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587869F5: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x587869F8: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587869FB: jne 0x58786a02
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587869FD: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58786A00: jmp 0x58786a10
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58786A02: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58786A05: cmp eax, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x02
        // 0x58786A07: jne 0x58786a0d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58786A09: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x58786A0B: jmp 0x58786a10
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58786A0D: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x58786A10: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58786A12: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58786A15: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58786A18: cmp byte ptr [ecx + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58786A1C: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58786A1F: je 0x58786940
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58786A25: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58786A28: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58786A2B: mov byte ptr [eax + 0x14], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x58786A2E: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58786A32: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58786A34: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58786A37: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58786A39: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58786A3D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786A44: pop ecx
        __asm _emit 0x59
        // 0x58786A45: pop edi
        __asm _emit 0x5F
        // 0x58786A46: pop esi
        __asm _emit 0x5E
        // 0x58786A47: pop ebp
        __asm _emit 0x5D
        // 0x58786A48: pop ebx
        __asm _emit 0x5B
        // 0x58786A49: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x58786A4C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

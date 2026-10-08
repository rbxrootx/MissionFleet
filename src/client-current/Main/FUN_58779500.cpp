// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 626 bytes in 1 exact ranges.
// Source symbol alias: FUN_58779500.

// Ghidra body range 0x58779500..0x58779772; 626 mapped bytes.
extern "C" __declspec(naked) void FUN_58779500_segment_00() {
    __asm {
        // 0x58779500: push esi
        __asm _emit 0x56
        // 0x58779501: push edi
        __asm _emit 0x57
        // 0x58779502: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58779504: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779509: lea eax, [esi + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5877950C: push eax
        __asm _emit 0x50
        // 0x5877950D: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58779510: push ecx
        __asm _emit 0x51
        // 0x58779511: lea edx, [esi + 0x828]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779517: push edx
        __asm _emit 0x52
        // 0x58779518: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877951A: push 0x589965f4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877951F: push 0x5898d82c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58779524: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779526: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877952B: push 0x318
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779530: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58779532: lea eax, [esi + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779538: push eax
        __asm _emit 0x50
        // 0x58779539: lea ecx, [esi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877953F: push ecx
        __asm _emit 0x51
        // 0x58779540: lea edx, [esi + 0x9a8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779546: push edx
        __asm _emit 0x52
        // 0x58779547: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x58779549: push 0x58996590
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877954E: push 0x58996584
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779553: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779555: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877955A: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877955F: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58779561: lea eax, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779567: push eax
        __asm _emit 0x50
        // 0x58779568: lea ecx, [esi + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877956E: push ecx
        __asm _emit 0x51
        // 0x5877956F: lea edx, [esi + 0x768]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779575: push edx
        __asm _emit 0x52
        // 0x58779576: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58779578: push 0x58996620
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877957D: push 0x5898d838
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58779582: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779584: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779589: push 0xce
        __asm _emit 0x68
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877958E: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58779590: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58779593: push eax
        __asm _emit 0x50
        // 0x58779594: lea ecx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58779597: push ecx
        __asm _emit 0x51
        // 0x58779598: lea edx, [esi + 0x168]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877959E: push edx
        __asm _emit 0x52
        // 0x5877959F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587795A1: push 0x58996780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587795A6: push 0x5898d89c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587795AB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587795AD: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587795B2: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587795B7: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587795B9: lea eax, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x587795BC: push eax
        __asm _emit 0x50
        // 0x587795BD: lea ecx, [esi + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x587795C0: push ecx
        __asm _emit 0x51
        // 0x587795C1: lea edx, [esi + 0x3a8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587795C7: push edx
        __asm _emit 0x52
        // 0x587795C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587795CA: push 0x589966fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587795CF: push 0x5898d884
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587795D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587795D6: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587795DB: push 0x574
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587795E0: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587795E2: lea eax, [esi + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587795E8: push eax
        __asm _emit 0x50
        // 0x587795E9: lea ecx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587795EF: push ecx
        __asm _emit 0x51
        // 0x587795F0: lea edx, [esi + 0x8e8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587795F6: push edx
        __asm _emit 0x52
        // 0x587795F7: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587795F9: push 0x589965d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587795FE: push 0x589965bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779603: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779605: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877960A: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5877960C: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779611: lea eax, [esi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779617: push eax
        __asm _emit 0x50
        // 0x58779618: lea ecx, [esi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877961E: push ecx
        __asm _emit 0x51
        // 0x5877961F: lea edx, [esi + 0x6a8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779625: push edx
        __asm _emit 0x52
        // 0x58779626: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58779628: push 0x5899664c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877962D: push 0x5898d848
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58779632: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779634: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779639: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877963E: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58779640: lea eax, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779646: push eax
        __asm _emit 0x50
        // 0x58779647: lea ecx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877964D: push ecx
        __asm _emit 0x51
        // 0x5877964E: lea edx, [esi + 0x528]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779654: push edx
        __asm _emit 0x52
        // 0x58779655: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58779657: push 0x589966a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877965C: push 0x5898d868
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58779661: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779663: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779668: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877966D: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5877966F: lea eax, [esi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x58779672: push eax
        __asm _emit 0x50
        // 0x58779673: lea ecx, [esi + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58779676: push ecx
        __asm _emit 0x51
        // 0x58779677: lea edx, [esi + 0x2e8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877967D: push edx
        __asm _emit 0x52
        // 0x5877967E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58779680: push 0x58996728
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779685: push 0x5898d890
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877968A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877968C: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779691: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779696: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58779698: lea eax, [esi + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877969E: push eax
        __asm _emit 0x50
        // 0x5877969F: lea ecx, [esi + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587796A5: push ecx
        __asm _emit 0x51
        // 0x587796A6: lea edx, [esi + 0x5e8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587796AC: push edx
        __asm _emit 0x52
        // 0x587796AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587796AF: push 0x58996678
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587796B4: push 0x5898d858
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587796B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587796BB: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587796C0: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587796C5: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587796C7: lea eax, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587796CA: push eax
        __asm _emit 0x50
        // 0x587796CB: lea ecx, [esi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587796CE: push ecx
        __asm _emit 0x51
        // 0x587796CF: lea edx, [esi + 0x468]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587796D5: push edx
        __asm _emit 0x52
        // 0x587796D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587796D8: push 0x589966d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x66
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587796DD: push 0x5898d878
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587796E2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587796E4: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587796E9: push 0x390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587796EE: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587796F0: lea eax, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587796F3: push eax
        __asm _emit 0x50
        // 0x587796F4: lea ecx, [esi + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587796F7: push ecx
        __asm _emit 0x51
        // 0x587796F8: lea edx, [esi + 0x228]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587796FE: push edx
        __asm _emit 0x52
        // 0x587796FF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58779701: push 0x58996754
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x67
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779706: push 0x5898d8ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877970B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877970D: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779712: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58779714: push 0x13c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779719: lea eax, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877971F: push eax
        __asm _emit 0x50
        // 0x58779720: lea ecx, [esi + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779726: push ecx
        __asm _emit 0x51
        // 0x58779727: lea edx, [esi + 0xb28]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877972D: push edx
        __asm _emit 0x52
        // 0x5877972E: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x58779730: push 0x58996548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779735: push 0x58996530
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877973A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877973C: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58779741: push 0xe0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779746: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58779748: lea eax, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877974E: push eax
        __asm _emit 0x50
        // 0x5877974F: lea ecx, [esi + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779755: push ecx
        __asm _emit 0x51
        // 0x58779756: lea edx, [esi + 0xa68]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877975C: push edx
        __asm _emit 0x52
        // 0x5877975D: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x5877975F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58779761: push 0x58996574
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x65
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779766: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58779768: call 0x587793c0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877976D: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5877976F: pop edi
        __asm _emit 0x5F
        // 0x58779770: pop esi
        __asm _emit 0x5E
        // 0x58779771: ret
        __asm _emit 0xC3
    }
}

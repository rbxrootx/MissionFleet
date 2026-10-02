// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B8F0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5885b8f0() {
    __asm {
        // 0x5885B8F0: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B8F2: push ebp
        __asm _emit 0x55
        // 0x5885B8F3: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B8F5: sub esp, 0x310
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B8FB: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885B900: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5885B902: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x5885B905: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885B908: push esi
        __asm _emit 0x56
        // 0x5885B909: mov esi, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885B90C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885B90E: je 0x5885b914
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885B910: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885B912: jne 0x5885b93a
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5885B914: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x6B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B919: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B91F: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B924: mov ecx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x5885B927: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885B929: je 0x5885b935
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885B92B: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x5885B92E: or eax, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5885B931: jne 0x5885b935
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885B933: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        // 0x5885B935: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885B937: inc eax
        __asm _emit 0x40
        // 0x5885B938: jmp 0x5885b96d
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5885B93A: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B940: push ecx
        __asm _emit 0x51
        // 0x5885B941: lea ecx, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885B944: push ecx
        __asm _emit 0x51
        // 0x5885B945: push eax
        __asm _emit 0x50
        // 0x5885B946: call 0x5885bb18
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B94B: push esi
        __asm _emit 0x56
        // 0x5885B94C: lea ecx, [ebp - 0x310]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885B952: push ecx
        __asm _emit 0x51
        // 0x5885B953: push eax
        __asm _emit 0x50
        // 0x5885B954: call 0x5885c860
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885B959: mov edx, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x5885B95C: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885B95F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885B961: je 0x5885b96d
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885B963: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885B966: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885B969: jne 0x5885b96d
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885B96B: mov byte ptr [edx], cl
        __asm _emit 0x88
        __asm _emit 0x0A
        // 0x5885B96D: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xFC
        // 0x5885B970: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5885B972: pop esi
        __asm _emit 0x5E
        // 0x5885B973: call 0x58831050
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885B978: leave
        __asm _emit 0xC9
        // 0x5885B979: ret
        __asm _emit 0xC3
    }
}

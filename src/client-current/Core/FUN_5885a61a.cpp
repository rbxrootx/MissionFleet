// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A61A .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_5885a61a() {
    __asm {
        // 0x5885A61A: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A61C: push ebp
        __asm _emit 0x55
        // 0x5885A61D: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A61F: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A622: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A625: nop
        __asm _emit 0x90
        // 0x5885A626: shr eax, 0xd
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0D
        // 0x5885A629: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A62B: jne 0x5885a640
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5885A62D: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885A630: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885A634: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A63B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A63E: pop ebp
        __asm _emit 0x5D
        // 0x5885A63F: ret
        __asm _emit 0xC3
        // 0x5885A640: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A643: push ebx
        __asm _emit 0x53
        // 0x5885A644: push esi
        __asm _emit 0x56
        // 0x5885A645: push edi
        __asm _emit 0x57
        // 0x5885A646: push -9
        __asm _emit 0x6A
        __asm _emit 0xF7
        // 0x5885A648: pop ecx
        __asm _emit 0x59
        // 0x5885A649: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x5885A64C: lock and dword ptr [eax], ecx
        __asm _emit 0xF0
        __asm _emit 0x21
        __asm _emit 0x08
        // 0x5885A64F: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885A652: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5885A655: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x5885A658: push esi
        __asm _emit 0x56
        // 0x5885A659: push edi
        __asm _emit 0x57
        // 0x5885A65A: push ebx
        __asm _emit 0x53
        // 0x5885A65B: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A65E: call 0x5885a541
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A663: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885A666: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5885A668: jne 0x5885a6ff
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A66E: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x5885A671: jne 0x5885a686
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5885A673: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A676: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A679: call 0x58867da9
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A67E: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x5885A680: pop ecx
        __asm _emit 0x59
        // 0x5885A681: adc edi, edx
        __asm _emit 0x13
        __asm _emit 0xFA
        // 0x5885A683: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885A685: pop ecx
        __asm _emit 0x59
        // 0x5885A686: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A689: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A68C: call 0x58859f62
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A691: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A694: pop ecx
        __asm _emit 0x59
        // 0x5885A695: pop ecx
        __asm _emit 0x59
        // 0x5885A696: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885A699: and dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885A69D: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885A69F: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A6A2: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A6A5: nop
        __asm _emit 0x90
        // 0x5885A6A6: shr eax, 2
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x5885A6A9: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A6AB: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A6AE: je 0x5885a6bb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885A6B0: push -4
        __asm _emit 0x6A
        __asm _emit 0xFC
        // 0x5885A6B2: pop ecx
        __asm _emit 0x59
        // 0x5885A6B3: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x5885A6B6: lock and dword ptr [eax], ecx
        __asm _emit 0xF0
        __asm _emit 0x21
        __asm _emit 0x08
        // 0x5885A6B9: jmp 0x5885a6de
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5885A6BB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A6BE: nop
        __asm _emit 0x90
        // 0x5885A6BF: and eax, 0x41
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x41
        // 0x5885A6C2: cmp al, 0x41
        __asm _emit 0x3C
        __asm _emit 0x41
        // 0x5885A6C4: jne 0x5885a6de
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A6C6: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A6C9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A6CC: nop
        __asm _emit 0x90
        // 0x5885A6CD: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5885A6D0: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A6D2: jne 0x5885a6de
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5885A6D4: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A6D7: mov dword ptr [eax + 0x18], 0x200
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6DE: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A6E1: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x5885A6E4: nop
        __asm _emit 0x90
        // 0x5885A6E5: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A6E8: push esi
        __asm _emit 0x56
        // 0x5885A6E9: push edi
        __asm _emit 0x57
        // 0x5885A6EA: push ebx
        __asm _emit 0x53
        // 0x5885A6EB: push eax
        __asm _emit 0x50
        // 0x5885A6EC: call 0x5887134e
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A6F1: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5885A6F3: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885A6F6: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A6F9: jne 0x5885a6ff
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5885A6FB: or eax, eax
        __asm _emit 0x0B
        __asm _emit 0xC0
        // 0x5885A6FD: jmp 0x5885a701
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A6FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A701: pop edi
        __asm _emit 0x5F
        // 0x5885A702: pop esi
        __asm _emit 0x5E
        // 0x5885A703: pop ebx
        __asm _emit 0x5B
        // 0x5885A704: pop ebp
        __asm _emit 0x5D
        // 0x5885A705: ret
        __asm _emit 0xC3
    }
}

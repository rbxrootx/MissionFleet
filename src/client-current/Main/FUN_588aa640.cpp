// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AA640 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_588aa640() {
    __asm {
        // 0x588AA640: push esi
        __asm _emit 0x56
        // 0x588AA641: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AA643: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AA647: push edi
        __asm _emit 0x57
        // 0x588AA648: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588AA64A: je 0x588aa6c8
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x588AA64C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588AA64F: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588AA653: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AA655: je 0x588aa67d
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588AA657: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588AA65A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AA65C: je 0x588aa676
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588AA65E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588AA660: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588AA662: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588AA664: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588AA667: push edi
        __asm _emit 0x57
        // 0x588AA668: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588AA66A: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588AA66D: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588AA670: je 0x588aa67d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588AA672: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AA674: jne 0x588aa660
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588AA676: pop edi
        __asm _emit 0x5F
        // 0x588AA677: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA679: pop esi
        __asm _emit 0x5E
        // 0x588AA67A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588AA67D: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588AA681: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA686: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588AA689: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA68E: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588AA691: jne 0x588aa6c8
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x588AA693: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588AA696: cmp eax, 0x202
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA69B: ja 0x588aa6d0
        __asm _emit 0x77
        __asm _emit 0x33
        // 0x588AA69D: je 0x588aa676
        __asm _emit 0x74
        __asm _emit 0xD7
        // 0x588AA69F: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA6A4: je 0x588aa6b4
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588AA6A6: cmp eax, 0x201
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA6AB: jne 0x588aa6c8
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x588AA6AD: pop edi
        __asm _emit 0x5F
        // 0x588AA6AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA6B0: pop esi
        __asm _emit 0x5E
        // 0x588AA6B1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588AA6B4: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588AA6B7: sub eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x26
        // 0x588AA6BA: je 0x588aa6de
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x588AA6BC: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x588AA6BF: jne 0x588aa6c8
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588AA6C1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AA6C3: call 0x588aa120
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AA6C8: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588AA6CB: pop edi
        __asm _emit 0x5F
        // 0x588AA6CC: pop esi
        __asm _emit 0x5E
        // 0x588AA6CD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588AA6D0: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA6D5: jne 0x588aa6c8
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588AA6D7: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588AA6DC: jle 0x588aa6c1
        __asm _emit 0x7E
        __asm _emit 0xE3
        // 0x588AA6DE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588AA6E0: call 0x588aa0d0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AA6E5: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588AA6E8: pop edi
        __asm _emit 0x5F
        // 0x588AA6E9: pop esi
        __asm _emit 0x5E
        // 0x588AA6EA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

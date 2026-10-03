// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E65D0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_588e65d0() {
    __asm {
        // 0x588E65D0: mov eax, dword ptr [ecx + 0xbbc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E65D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E65D8: je 0x588e663f
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x588E65DA: movzx ecx, word ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x02
        // 0x588E65DE: cmp cx, 0x2e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x2E
        // 0x588E65E2: jne 0x588e65eb
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E65E4: cmp word ptr [eax + 6], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x01
        // 0x588E65E9: je 0x588e6639
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x588E65EB: cmp cx, 0x2f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x2F
        // 0x588E65EF: jne 0x588e65f8
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E65F1: cmp word ptr [eax + 6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x02
        // 0x588E65F6: je 0x588e6639
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x588E65F8: cmp cx, 0x30
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x30
        // 0x588E65FC: jne 0x588e6605
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E65FE: cmp word ptr [eax + 6], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x03
        // 0x588E6603: je 0x588e6639
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588E6605: cmp cx, 0x31
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x31
        // 0x588E6609: jne 0x588e6612
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E660B: cmp word ptr [eax + 6], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x04
        // 0x588E6610: je 0x588e6639
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588E6612: cmp cx, 0x42
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x42
        // 0x588E6616: jne 0x588e661f
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E6618: cmp word ptr [eax + 6], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x05
        // 0x588E661D: je 0x588e6639
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588E661F: cmp cx, 0x59
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x59
        // 0x588E6623: jne 0x588e662c
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E6625: cmp word ptr [eax + 6], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x06
        // 0x588E662A: je 0x588e6639
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588E662C: cmp cx, 0x6b
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x6B
        // 0x588E6630: jne 0x588e663f
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588E6632: cmp word ptr [eax + 6], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x07
        // 0x588E6637: jne 0x588e663f
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588E6639: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E663E: ret
        __asm _emit 0xC3
        // 0x588E663F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6641: ret
        __asm _emit 0xC3
    }
}

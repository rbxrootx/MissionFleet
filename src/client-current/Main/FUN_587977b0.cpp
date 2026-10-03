// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587977B0 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_587977b0() {
    __asm {
        // 0x587977B0: push esi
        __asm _emit 0x56
        // 0x587977B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587977B3: movzx ecx, word ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587977BA: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x05
        // 0x587977BE: jne 0x587977d3
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587977C0: mov eax, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587977C6: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587977C9: je 0x587977d3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587977CB: mov dword ptr [esi + 0x2a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587977D1: jmp 0x58797838
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x587977D3: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x587977D7: jne 0x587977ec
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587977D9: mov eax, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587977DF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587977E2: je 0x587977ec
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587977E4: mov dword ptr [esi + 0x2a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587977EA: jmp 0x58797838
        __asm _emit 0xEB
        __asm _emit 0x4C
        // 0x587977EC: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x587977F0: jne 0x58797813
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587977F2: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587977F8: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587977FB: je 0x58797813
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587977FD: mov dword ptr [esi + 0x2a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797803: mov ax, word ptr [esi + 0x2c4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879780A: mov word ptr [esi + 0x2b0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797811: jmp 0x58797838
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x58797813: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x58797817: jne 0x58797838
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58797819: mov eax, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879781F: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58797822: je 0x58797838
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58797824: mov cx, word ptr [esi + 0x2c6]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879782B: mov dword ptr [esi + 0x2ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797831: mov word ptr [esi + 0x2b2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797838: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5879783C: mov eax, 0xe4ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797841: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58797844: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797849: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5879784C: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58797850: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797855: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58797859: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5879785E: mov eax, dword ptr [esi + 0x1b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797864: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797869: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5879786D: mov eax, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797873: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58797875: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58797879: mov eax, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879787F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58797883: mov ecx, dword ptr [esi + 0x1cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797889: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5879788B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5879788E: push ebp
        __asm _emit 0x55
        // 0x5879788F: push edi
        __asm _emit 0x57
        // 0x58797890: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58797892: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58797895: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58797898: mov dword ptr [esi + 0x54], 0xfffffe70
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x70
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879789F: lea edi, [esi + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978A5: mov ebp, 0x28
        __asm _emit 0xBD
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978B0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587978B2: call 0x5875f320
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x7A
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587978B7: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587978BA: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587978BD: jne 0x587978b0
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x587978BF: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587978C4: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x587978C7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587978C9: push ebp
        __asm _emit 0x55
        // 0x587978CA: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x587978CC: push eax
        __asm _emit 0x50
        // 0x587978CD: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x587978D0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587978D2: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587978D7: mov edi, 0x32
        __asm _emit 0xBF
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978DC: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978E2: jle 0x587978fa
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587978E4: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978EA: je 0x587978fa
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587978EC: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978F2: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587978F8: jmp 0x587978fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587978FA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587978FC: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58797902: push edx
        __asm _emit 0x52
        // 0x58797903: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58797908: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879790D: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797913: pop edi
        __asm _emit 0x5F
        // 0x58797914: pop ebp
        __asm _emit 0x5D
        // 0x58797915: jle 0x5879792e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58797917: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879791E: je 0x5879792e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58797920: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797926: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879792C: jmp 0x58797930
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5879792E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58797930: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58797932: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58797935: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797937: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58797939: mov eax, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879793F: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797944: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58797948: mov dword ptr [0x58a248d8], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58797952: mov byte ptr [esi + 0x2d8], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58797959: pop esi
        __asm _emit 0x5E
        // 0x5879795A: ret
        __asm _emit 0xC3
    }
}

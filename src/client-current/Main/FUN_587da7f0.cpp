// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 417 bytes across one range.

// Ghidra range: 0x587DA7F0 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_587DA7F0_segment_00() {
    __asm {
        // 0x587DA7F0: push esi
        __asm _emit 0x56
        // 0x587DA7F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DA7F3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587DA7F7: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA7FC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587DA7FF: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA804: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587DA807: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587DA80B: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA810: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587DA814: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x587DA819: mov ecx, dword ptr [esi + 0x1044]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA81F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA821: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA824: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA826: mov ecx, dword ptr [esi + 0x1048]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA82C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA82E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA831: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA833: mov ecx, dword ptr [esi + 0x104c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA839: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA83B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA83E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA840: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA846: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA848: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA84B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA84D: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA853: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA855: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA858: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA85A: mov ecx, dword ptr [esi + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA860: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA862: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA865: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA867: mov ecx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA86D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA86F: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA872: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA874: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA87A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587DA87C: je 0x587da885
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587DA87E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA880: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA883: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA885: mov ecx, dword ptr [esi + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA88B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA88D: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA890: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA892: mov ecx, dword ptr [esi + 0x5d0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA898: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA89A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA89D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA89F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DA8A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DA8A3: call 0x587d7820
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xCF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA8A8: mov ecx, dword ptr [esi + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8AE: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8B5: mov eax, dword ptr [ecx + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8BB: mov ecx, dword ptr [eax + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8C1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA8C3: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA8C6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA8C8: mov eax, dword ptr [esi + 0xdc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8CE: mov dword ptr [eax + 0x50], 0x320
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8D5: mov dword ptr [eax + 0x54], 0x28
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8DC: mov ecx, dword ptr [esi + 0xdc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8E2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA8E4: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA8E7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA8E9: mov ecx, dword ptr [esi + 0x59c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8EF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA8F1: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA8F4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA8F6: mov ecx, dword ptr [esi + 0x5a0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA8FC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA8FE: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA901: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA903: mov ecx, dword ptr [esi + 0x5a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA909: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA90B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA90E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA910: mov ecx, dword ptr [esi + 0x5a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA916: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA918: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA91B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA91D: mov eax, dword ptr [esi + 0x5ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA923: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA928: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DA92C: mov eax, dword ptr [esi + 0x5b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA932: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587DA934: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587DA938: mov eax, dword ptr [esi + 0x5b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA93E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DA942: mov eax, dword ptr [esi + 0x5b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA948: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587DA94C: mov eax, dword ptr [esi + 0x5bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA952: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DA956: mov eax, dword ptr [esi + 0x5c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA95C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587DA960: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DA962: call 0x587d7ad0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xD1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA967: mov eax, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA96D: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587DA971: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587DA974: je 0x587da983
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587DA976: mov ecx, dword ptr [esi + 0xda8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DA97C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA97E: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA981: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DA983: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DA989: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DA98B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587DA98E: pop esi
        __asm _emit 0x5E
        // 0x587DA98F: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D9A5 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_5883d9a5_5883D9A5() {
    __asm {
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push esi
        mov esi, ecx
        ; Exact mapped bytes 74 0B: je 0x5883d9bc
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi + 4], 0
        ; Exact mapped bytes 74 09: je 0x5883d9cb
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 36 BC 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x5883d9da
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 27 BC 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 74 09: je 0x5883d9e9
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 14h]
        ; Exact mapped bytes FF 15 0C 40 89 58: call dword ptr [0x5889400c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 74 09: je 0x5883d9f8
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 18h]
        ; Exact mapped bytes FF 15 54 40 89 58: call dword ptr [0x58894054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi + 44h], 0
        ; Exact mapped bytes 74 09: je 0x5883da07
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 44h]
        ; Exact mapped bytes FF 15 54 40 89 58: call dword ptr [0x58894054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi + 48h], 0
        ; Exact mapped bytes 74 09: je 0x5883da16
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 48h]
        ; Exact mapped bytes FF 15 0C 40 89 58: call dword ptr [0x5889400c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0A: je 0x5883da25
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 58 40 89 58: call dword ptr [0x58894058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 74 09: je 0x5883da34
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 50h]
        ; Exact mapped bytes FF 15 B0 42 89 58: call dword ptr [0x588942b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes 74 0B: je 0x5883da49
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ret
    }
}

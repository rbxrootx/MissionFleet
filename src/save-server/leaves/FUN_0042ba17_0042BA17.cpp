// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042BA17 .. +0x260 bytes.
extern "C" __declspec(naked) void FUN_0042ba17_0042BA17() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2741h
        ; Exact mapped bytes 0F 8F A4 00 00 00: jg 0x42baec
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2741h
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x42bbeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2734h
        ; Exact mapped bytes 7F 6E: jg 0x42bacc
        __asm _emit 0x7f
        __asm _emit 0x6e
        cmp dword ptr [ebp - 0ch], 2734h
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x42bb43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 271eh
        ; Exact mapped bytes 7F 39: jg 0x42baad
        __asm _emit 0x7f
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 271eh
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x42bb4f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 3e3h
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x42bbd0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2714h
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x42bb37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 271dh
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x42bb2b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x42bc21
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2726h
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x42bbb5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2733h
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x42bba3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x42bc21
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 2735h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0bh
        ; Exact mapped bytes 0F 87 3F 01 00 00: ja 0x42bc21
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 77 BC 42 00: jmp dword ptr [edx*4 + 0x42bc77]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0xbc
        __asm _emit 0x42
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 2742h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2bh
        ; Exact mapped bytes 0F 87 20 01 00 00: ja 0x42bc21
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [edx + 42bcdbh]
        ; Exact mapped bytes FF 24 8D A7 BC 42 00: jmp dword ptr [ecx*4 + 0x42bca7]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0x42
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 6706c4h
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 6706d8h
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 6706e8h
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 6706f4h
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670700h
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670710h
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 67071ch
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 67072ch
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670738h
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670748h
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670758h
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670768h
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x42bc28
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 670778h
        ; Exact mapped bytes EB 7C: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 4], 670788h
        ; Exact mapped bytes EB 73: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x73
        mov dword ptr [ebp - 4], 670798h
        ; Exact mapped bytes EB 6A: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov dword ptr [ebp - 4], 6707a4h
        ; Exact mapped bytes EB 61: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x61
        mov dword ptr [ebp - 4], 6707b8h
        ; Exact mapped bytes EB 58: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 6707c8h
        ; Exact mapped bytes EB 4F: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 4], 6707e0h
        ; Exact mapped bytes EB 46: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 6707f0h
        ; Exact mapped bytes EB 3D: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 4], 670800h
        ; Exact mapped bytes EB 34: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 670814h
        ; Exact mapped bytes EB 2B: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 670828h
        ; Exact mapped bytes EB 22: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 67083ch
        ; Exact mapped bytes EB 19: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 670848h
        ; Exact mapped bytes EB 10: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 670858h
        ; Exact mapped bytes EB 07: jmp 0x42bc28
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 670868h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E4 49 07 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 0B: je 0x42bc48
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 18 08 00 00: call 0x42c460
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4cbh
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0b0h
        ; Exact mapped bytes E8 0A 56 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 E3 FF FF: call 0x429f8d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7F 91 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

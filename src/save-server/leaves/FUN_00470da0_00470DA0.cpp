// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470DA0 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_00470da0_00470DA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes 83 3D B8 8D 68 00 00: cmp dword ptr [0x688db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x470db4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 FC AA FF FF: call 0x46b8b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes A1 0C 72 68 00: mov eax, dword ptr [0x68720c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 2C: je 0x470df9
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3dh
        ; Exact mapped bytes 74 09: je 0x470de1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 56 49 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB CA: jmp 0x470dc3
        __asm _emit 0xeb
        __asm _emit 0xca
        push 6dh
        push 63ee68h
        push 2
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax*4 + 4]
        push ecx
        ; Exact mapped bytes E8 AE 59 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 54 72 68 00: mov dword ptr [0x687254], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 72 68 00 00: cmp dword ptr [0x687254], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0A: jne 0x470e34
        __asm _emit 0x75
        __asm _emit 0x0a
        push 9
        ; Exact mapped bytes E8 5F 55 FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A1 0C 72 68 00: mov eax, dword ptr [0x68720c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x470e47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 66: je 0x470eb7
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E6 48 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 3dh
        ; Exact mapped bytes 74 47: je 0x470eb5
        __asm _emit 0x74
        __asm _emit 0x47
        push 79h
        push 63ee68h
        push 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 40 59 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0A: jne 0x470e9a
        __asm _emit 0x75
        __asm _emit 0x0a
        push 9
        ; Exact mapped bytes E8 F9 54 FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 C7 4A FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 87: jmp 0x470e3e
        __asm _emit 0xeb
        __asm _emit 0x87
        push 2
        ; Exact mapped bytes 8B 15 0C 72 68 00: mov edx, dword ptr [0x68720c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 9B 64 FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 0C 72 68 00 00 00 00 00: mov dword ptr [0x68720c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 0
        ; Exact mapped bytes C7 05 A8 8D 68 00 01 00 00 00: mov dword ptr [0x688da8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

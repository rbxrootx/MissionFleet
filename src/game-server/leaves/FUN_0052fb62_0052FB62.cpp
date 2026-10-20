// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052FB62 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_0052fb62_0052FB62() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x52fb96
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x52fb96
        __asm _emit 0x74
        __asm _emit 0x14
        push 2efh
        push 5ccab0h
        ; Exact mapped bytes E8 6F 4E 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52fb96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x52fb6e
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 8]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x52fbc4
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x52fbc4
        __asm _emit 0x74
        __asm _emit 0x14
        push 2f0h
        push 5ccab0h
        ; Exact mapped bytes E8 41 4E 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52fbc4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x52fb9c
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x52fbf2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x52fbf2
        __asm _emit 0x74
        __asm _emit 0x14
        push 2f1h
        push 5ccab0h
        ; Exact mapped bytes E8 13 4E 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52fbf2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x52fbca
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 F1 FB FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52fc21
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x52fc21
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 8]
        and ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x52fc5d
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 8]
        and edx, 1
        neg edx
        sbb edx, edx
        and edx, 0ffffffc0h
        add edx, 80h
        or edx, 4
        or edx, 10h
        or edx, 2
        or edx, 1
        push edx
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 F6 FB FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 30h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x52fc7c
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        and ecx, 10h
        neg ecx
        sbb ecx, ecx
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D F7 FB FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        and edx, 0ch
        test edx, edx
        ; Exact mapped bytes 74 4F: je 0x52fcd5
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 70 F1 FB FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x52fcd5
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        push 0
        push 100h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 24 F2 FB FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        neg eax
        sbb eax, eax
        neg eax
        push eax
        push 86h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 BF 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 F1 FB FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

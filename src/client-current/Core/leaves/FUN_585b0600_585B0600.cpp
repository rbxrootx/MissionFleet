// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0600 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_585b0600_585B0600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x585b06f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 CF 51 EE FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x585b06c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 9C 51 EE FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x51
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x585b06c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 69 4A EF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4a
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x585b0688
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 0A 44 ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5d4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5d4h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5fch]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B 59 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3B: jmp 0x585b06c3
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 CD 43 ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x43
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5d4h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 5d4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5fch]
        mov dword ptr [ebp - 0ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE 58 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x585b06f5
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5d4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 5d4h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5fch]
        mov dword ptr [ebp - 10h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 58 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x585b0727
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5d4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 5d4h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5fch]
        mov dword ptr [ebp - 14h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6A 58 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x58
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5d4h]
        ; Exact mapped bytes E8 1B 54 F0 FF: call 0x584b5b50
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5a0h]
        ; Exact mapped bytes E8 0D 54 F0 FF: call 0x584b5b50
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5a4h]
        ; Exact mapped bytes E8 FF 53 F0 FF: call 0x584b5b50
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5a8h]
        ; Exact mapped bytes E8 F1 53 F0 FF: call 0x584b5b50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5ach]
        ; Exact mapped bytes E8 E3 53 F0 FF: call 0x584b5b50
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

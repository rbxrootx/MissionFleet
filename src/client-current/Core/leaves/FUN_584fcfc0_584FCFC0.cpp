// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FCFC0 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_584fcfc0_584FCFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24ch], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x584fd066
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 50h
        ; Exact mapped bytes 74 77: je 0x584fd066
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 51h
        ; Exact mapped bytes 74 61: je 0x584fd066
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 52h
        ; Exact mapped bytes 74 4C: je 0x584fd066
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 53h
        ; Exact mapped bytes 74 36: je 0x584fd066
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 54h
        ; Exact mapped bytes 74 20: je 0x584fd066
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 56h
        ; Exact mapped bytes 74 0B: je 0x584fd066
        __asm _emit 0x74
        __asm _emit 0x0b
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 8C F8 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 50h
        ; Exact mapped bytes 75 02: jne 0x584fd08a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x584fd0cb
        __asm _emit 0xeb
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B A0 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 F6 FF FF: call 0x584fc740
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8D C5 FE FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 23: jne 0x584fd0cb
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D A0 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 F6 FF FF: call 0x584fc740
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 208h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FF 8D F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 99 8E F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

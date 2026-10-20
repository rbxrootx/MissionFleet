// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560C60 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_58560c60_58560C60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a94ach
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F9 73 F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560c99
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 24h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E8 6D F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E2 74 F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 19 6D F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x58560d04
        __asm _emit 0x74
        __asm _emit 0x46
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7A 6D F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 31: je 0x58560d02
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58560cf4
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58560cfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 86: jmp 0x58560c8a
        __asm _emit 0xeb
        __asm _emit 0x86
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 E1 73 F2 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 C5 6A F2 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 BA 6A F2 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

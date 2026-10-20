// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58668E80 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58668e80_58668E80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 80h
        ; Exact mapped bytes E8 A9 F3 E1 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58668f11
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [ebp - 8]
        add eax, 80h
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE F1 E1 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf1
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58668ec4
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BD EB E1 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        add eax, 80h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 F2 E1 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 EC EA E1 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xea
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 24: je 0x58668f0f
        __asm _emit 0x74
        __asm _emit 0x24
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4D EB E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 96 C9 E2 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc9
        __asm _emit 0xe2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58668f0d
        __asm _emit 0x74
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 37 EB E1 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xeb
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 0A: jmp 0x58668f17
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB A6: jmp 0x58668eb5
        __asm _emit 0xeb
        __asm _emit 0xa6
        ; Exact mapped bytes EB 04: jmp 0x58668f15
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x58668f17
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

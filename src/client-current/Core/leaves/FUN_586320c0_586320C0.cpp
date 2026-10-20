// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586320C0 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_586320c0_586320C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 810h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 808h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 77 0A: ja 0x586320e9
        __asm _emit 0x77
        __asm _emit 0x0a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 86 AB 00 00 00: jbe 0x58632194
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 30 05 96 58: cmp eax, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x58632194
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 0D 34 05 96 58: cmp ecx, dword ptr [0x58960534]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x58632194
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 800h
        ; Exact mapped bytes 72 19: jb 0x58632129
        __asm _emit 0x72
        __asm _emit 0x19
        push 800h
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 19: jmp 0x58632142
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 27: je 0x5863216f
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 80ch], edx
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 80ch]
        ; Exact mapped bytes E8 14 A6 EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xa6
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x58632194
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 810h], edx
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes E8 ED A5 EB FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa5
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B2 EE 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

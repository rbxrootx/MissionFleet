// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00589350 .. +0xCD bytes.
extern "C" __declspec(naked) void __1CDocManager__UAE_XZ_00589350() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e672h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax], 63a0f8h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 CE D6 F9 FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5F: je 0x5893f1
        __asm _emit 0x74
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 D2 D6 F9 FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 3A: je 0x5893ef
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 BD 88 F3 FF: call 0x4c1c81
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x5893e8
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5893ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 9B: jmp 0x58938c
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 E4 80 F3 FF: call 0x4c14e4
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 98 B3 F9 FF: call 0x5247a7
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

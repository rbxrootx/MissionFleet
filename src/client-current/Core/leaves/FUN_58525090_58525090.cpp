// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525090 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_58525090_58525090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x585250c1
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 D2 09 00 00: call 0x58525a90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x58525117
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 A7 09 00 00: call 0x58525a90
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58525117
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 7C 09 00 00: call 0x58525a90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58638670 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_58638670_58638670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x58638757
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 99 4D ED FF: call 0x5850d430
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 78 56 ED FF: call 0x5850dd20
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x56
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 0ch], ecx
        push 588aee0ch
        ; Exact mapped bytes E8 2F 99 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD D9 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd9
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 14h], ecx
        push 588aee30h
        ; Exact mapped bytes E8 07 99 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A5 D9 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd9
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7D 2A 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 15ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 65 2A 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 8E 01 00 00: mov word ptr [ecx + 0x18e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 164h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 18eh]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 3A 2A 18 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2a
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

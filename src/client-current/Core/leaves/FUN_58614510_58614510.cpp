// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58614510 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_58614510_58614510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 C1 51 F1 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x586145b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 8]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 63 C6 1A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc6
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 FD C6 1A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc6
        __asm _emit 0x1a
        __asm _emit 0x00
        sub edi, eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 27 05 F2 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0xf2
        __asm _emit 0xff
        imul edi, eax
        lea eax, [esi + edi + 1ah]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 91 11 1A 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2B 19 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x19
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586145cf
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 19 E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 0D 51 F1 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x5861461f
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 C5 C5 1A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc5
        __asm _emit 0x1a
        __asm _emit 0x00
        add eax, 1
        imul esi, eax, 5ch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 DB 50 F1 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x50
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 18h], eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

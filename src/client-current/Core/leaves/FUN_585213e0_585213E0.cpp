// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585213E0 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_585213e0_585213E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 5F 63 FE FF: call 0x58507750
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 26: je 0x58521426
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 EC FF FF: call 0x58520010
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58521426
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        ; Exact mapped bytes E8 BB 8F 33 00: call 0x5885a3da
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x8f
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x58521437
        __asm _emit 0x74
        __asm _emit 0x11
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 51 FE FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 40: jmp 0x58521477
        __asm _emit 0xeb
        __asm _emit 0x40
        lea edx, [ebp - 14h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AD 01 00 00: call 0x585215f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 40h], ecx
        mov dword ptr [eax + 44h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 F4 FF FF: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        mov edx, dword ptr [eax + 40h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C E4 FF FF: call 0x5851f880
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

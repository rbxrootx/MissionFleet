// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FE40 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_5849fe40_5849FE40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588950dch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 19 82 FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5849fe79
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 08 7C FE FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 02 83 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 39 7B FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5849fed1
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9A 7B FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5849fec8
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5849fecf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 99: jmp 0x5849fe6a
        __asm _emit 0xeb
        __asm _emit 0x99
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 14 82 FE FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 F8 78 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

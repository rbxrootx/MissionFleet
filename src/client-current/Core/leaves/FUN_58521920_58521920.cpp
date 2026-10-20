// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521920 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58521920_58521920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 9A FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x58521966
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 9A FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 95 FE FF: call 0x5850af40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 73 1A: jae 0x58521966
        __asm _emit 0x73
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 9A FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov al, byte ptr [eax]
        movzx ecx, al
        push ecx
        ; Exact mapped bytes E8 21 3B FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 56: jmp 0x585219ba
        __asm _emit 0xeb
        __asm _emit 0x56
        ; Exact mapped bytes EB 54: jmp 0x585219ba
        __asm _emit 0xeb
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 6F 8E F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 1F 96 FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x585219a2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 1A: jmp 0x585219ba
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes EB 18: jmp 0x585219ba
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 8]
        pop esi
    }
}

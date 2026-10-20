// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C3A40 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_586c3a40_586C3A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 97 5C E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8ch], eax
        ; Exact mapped bytes 0F 8D FD 00 00 00: jge 0x586c3b68
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 F2 D8 0F 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 75 19: jne 0x586c3ab4
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a4h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F BD DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3acb
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a4h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 BD DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 8ch]
        add esi, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 0B 5C E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x586c3b02
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a8h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 BD DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xbd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3b19
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a8h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 28 BD DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xbd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ach]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 37 D1 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd1
        __asm _emit 0x0f
        __asm _emit 0x00
        imul edi, eax, 52h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a0h]
        ; Exact mapped bytes E8 A6 5B E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5b
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 4
        mov eax, edi
        cdq
        idiv ecx
        lea edx, [esi + eax + 58h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C9 1B 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1b
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

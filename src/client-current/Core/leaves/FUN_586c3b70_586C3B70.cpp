// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C3B70 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_586c3b70_586C3B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 0F 8E FD 00 00 00: jle 0x586c3c88
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1a0h]
        ; Exact mapped bytes E8 52 D8 0F 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8ch], 0
        ; Exact mapped bytes 75 19: jne 0x586c3bd4
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a4h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F BC DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbc
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3beb
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a4h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 56 BC DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbc
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8ch]
        add esi, 4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 EB 5A E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5a
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x586c3c22
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1a8h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 BC DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbc
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3c39
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1a8h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 08 BC DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbc
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ach]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1a0h]
        ; Exact mapped bytes E8 17 D0 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x00
        imul edi, eax, 52h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        ; Exact mapped bytes E8 86 5A E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5a
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
        ; Exact mapped bytes E8 A9 1A 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1a
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

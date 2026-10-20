// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58657B70 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_58657b70_58657B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 0F 8E 03 01 00 00: jle 0x58657c8e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e0h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e0h], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 52 98 16 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 75 19: jne 0x58657bd4
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F 7C E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58657beb
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 56 7C E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0e0h]
        add esi, 8
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 EB 1A ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1a
        __asm _emit 0xed
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x58657c22
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 7C E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58657c39
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 08 7C E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 17 90 16 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x90
        __asm _emit 0x16
        __asm _emit 0x00
        imul edi, eax, 8ch
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 83 1A ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x1a
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 8
        mov eax, edi
        cdq
        idiv ecx
        lea edx, [esi + eax + 0a2h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A3 DA 15 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xda
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

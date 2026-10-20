// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58657A30 .. +0x134 bytes.
extern "C" __declspec(naked) void FUN_58657a30_58657A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes E8 A7 1C ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 8
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e0h], eax
        ; Exact mapped bytes 0F 8D 03 01 00 00: jge 0x58657b5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e0h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 02 99 16 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 75 19: jne 0x58657aa4
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 7D E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58657abb
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 86 7D E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 0e0h]
        add esi, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes E8 1B 1C ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x58657af2
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 7D E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58657b09
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 38 7D E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 47 91 16 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x91
        __asm _emit 0x16
        __asm _emit 0x00
        imul edi, eax, 8ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes E8 B3 1B ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1b
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
        ; Exact mapped bytes E8 D3 DB 15 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xdb
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

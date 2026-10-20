// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C3DC0 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_586c3dc0_586C3DC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 0F 8E F4 00 00 00: jle 0x586c3ecc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 18ch]
        ; Exact mapped bytes E8 0B D6 0F 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd6
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 75 19: jne 0x586c3e18
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2B BA DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xba
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3e2f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 12 BA DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xba
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 7ch]
        add esi, 12h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 18ch]
        ; Exact mapped bytes E8 AA 58 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x58
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x586c3e63
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 B9 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3e7a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 194h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 B9 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 198h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 18ch]
        ; Exact mapped bytes E8 D6 CD 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xcd
        __asm _emit 0x0f
        __asm _emit 0x00
        imul edi, eax, 15eh
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 18ch]
        ; Exact mapped bytes E8 42 58 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x58
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 12h
        mov eax, edi
        cdq
        idiv ecx
        lea edx, [esi + eax + 5ah]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 65 18 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x18
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

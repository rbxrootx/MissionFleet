// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C3660 .. +0x165 bytes.
extern "C" __declspec(naked) void FUN_586c3660_586C3660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 0F 8E 44 01 00 00: jle 0x586c37bf
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c36a2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 15: jge 0x586c36bd
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 22ch]
        ; Exact mapped bytes E8 46 DD 0F 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x586c3699
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 75 19: jne 0x586c36e2
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 61 C1 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c36f9
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 48 C1 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 80h]
        add esi, 0ah
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 22ch]
        ; Exact mapped bytes E8 D4 5F E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5f
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x586c3739
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0A C1 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc1
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3750
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 244h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 C0 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xc0
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 22ch]
        ; Exact mapped bytes E8 F7 D4 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd4
        __asm _emit 0x0f
        __asm _emit 0x00
        imul edi, eax, 0bch
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 22ch]
        ; Exact mapped bytes E8 5A 5F E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5f
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 0ah
        mov eax, edi
        cdq
        idiv ecx
        lea edx, [esi + eax + 0f0h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7A 1F 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 F4 FF FF: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

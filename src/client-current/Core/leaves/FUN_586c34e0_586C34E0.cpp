// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C34E0 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_586c34e0_586C34E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 22ch]
        ; Exact mapped bytes E8 EE 61 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], eax
        ; Exact mapped bytes 0F 8D 44 01 00 00: jge 0x586c3658
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586c353b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 15: jge 0x586c3556
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 22ch]
        ; Exact mapped bytes E8 2D DE 0F 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x586c3532
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 75 19: jne 0x586c357b
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C8 C2 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3592
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF C2 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 80h]
        add esi, 0ah
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 22ch]
        ; Exact mapped bytes E8 3B 61 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x586c35d2
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 71 C2 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c35e9
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 58 C2 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 8]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 22ch]
        ; Exact mapped bytes E8 5E D6 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd6
        __asm _emit 0x0f
        __asm _emit 0x00
        imul edi, eax, 0bch
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 22ch]
        ; Exact mapped bytes E8 C1 60 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x60
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
        ; Exact mapped bytes E8 E1 20 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 F6 FF FF: call 0x586c2c80
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf6
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C3C90 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_586c3c90_586C3C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18ch]
        ; Exact mapped bytes E8 47 5A E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5a
        __asm _emit 0xe6
        __asm _emit 0xff
        sub eax, 12h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], eax
        ; Exact mapped bytes 0F 8D F4 00 00 00: jge 0x586c3dac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 18ch]
        ; Exact mapped bytes E8 AB D6 0F 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 75 19: jne 0x586c3cf8
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B BB DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3d0f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 BB DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xbb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 7ch]
        add esi, 12h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18ch]
        ; Exact mapped bytes E8 CA 59 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x59
        __asm _emit 0xe6
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7D 19: jge 0x586c3d43
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 BB DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xbb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586c3d5a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E7 BA DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xba
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 18ch]
        ; Exact mapped bytes E8 F6 CE 0F 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0x00
        imul edi, eax, 15eh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18ch]
        ; Exact mapped bytes E8 62 59 E6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x59
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
        ; Exact mapped bytes E8 85 19 0F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x19
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

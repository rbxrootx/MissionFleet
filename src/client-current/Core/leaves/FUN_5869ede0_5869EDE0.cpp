// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869EDE0 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_5869ede0_5869EDE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 164h], 0
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 164h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 16ch], 0ffffffffh
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 12 01 00 00: mov cx, word ptr [eax + 0x112]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 158h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + ecx + 5890c014h]
        mov dword ptr [edx + 168h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5869ee5a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 2E: jge 0x5869ee8e
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + edx*4 + 170h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 8C 90 72 01 00 00: mov word ptr [eax + edx*4 + 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + ecx*4 + 171h], 0
        ; Exact mapped bytes EB C3: jmp 0x5869ee51
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 1bch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1c0h], 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 100h]
        ; Exact mapped bytes E8 9A 27 E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x27
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 8]
        add eax, 190h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5869eed9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 12: jge 0x5869eef1
        __asm _emit 0x7d
        __asm _emit 0x12
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 94 41 C4 01 00 00: mov word ptr [ecx + eax*2 + 0x1c4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB DF: jmp 0x5869eed0
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5869ef03
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 7D 24: jge 0x5869ef2d
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 22ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 204h], 0
        ; Exact mapped bytes EB CD: jmp 0x5869eefa
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 254h], 0
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 278h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5869ef53
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0bh
        ; Exact mapped bytes 7D 0F: jge 0x5869ef68
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 27ah], 0
        ; Exact mapped bytes EB E2: jmp 0x5869ef4a
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov edx, dword ptr [ebp - 8]
        add edx, 104h
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 1E 0E 00: call 0x58780e20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 81 E3 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE CA 00 00: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

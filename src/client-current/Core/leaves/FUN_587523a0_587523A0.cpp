// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587523A0 .. +0x36C bytes.
extern "C" __declspec(naked) void FUN_587523a0_587523A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 14h]
        shr eax, 14h
        and eax, 3ffh
        xor eax, 55h
        add ecx, eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 3ffh
        xor eax, 55h
        add ecx, eax
        ; Exact mapped bytes 75 07: jne 0x587523e7
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 1F 03 00 00: jmp 0x58752706
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 95 02 00 00: je 0x5875268d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, byte ptr [edx + 35ch]
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 3]
        cmp eax, edx
        ; Exact mapped bytes 74 14: je 0x58752424
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 FE FF FF: call 0x58752290
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x587524cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        xor edx, 55h
        ; Exact mapped bytes 74 0E: je 0x5875243d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        xor ecx, 55h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x58752444
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        mov ecx, 4
        shl ecx, 0
        imul eax, dword ptr [ecx + 589475a0h]
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, 4
        shl edx, 1
        imul ecx, dword ptr [edx + 589475a0h]
        add eax, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 3ffh
        xor edx, 55h
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        imul eax, edx
        xor edx, edx
        div dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 BE 01 00 00: jmp 0x5875268b
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 3]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 23 FB FF FF: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 2F 01 00 00: jne 0x58752615
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 2]
        cmp edx, 3
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x5875259c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        xor ecx, 55h
        ; Exact mapped bytes 74 0E: je 0x5875250f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        xor eax, 55h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x58752516
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        mov edx, 4
        shl edx, 0
        imul eax, dword ptr [edx + 589475a0h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        shr edx, 14h
        and edx, 3ffh
        xor edx, 55h
        mov ecx, 4
        shl ecx, 1
        imul edx, dword ptr [ecx + 589475a0h]
        add eax, edx
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 14h]
        and ecx, 3ffh
        xor ecx, 55h
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 14h]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        add ecx, edx
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + 14h]
        shr edx, 14h
        and edx, 3ffh
        xor edx, 55h
        add ecx, edx
        imul eax, ecx
        xor edx, edx
        div dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 77: jmp 0x58752613
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        xor ecx, 55h
        ; Exact mapped bytes 74 0E: je 0x587525b5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        xor eax, 55h
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x587525bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        shr edx, 0ah
        and edx, 3ffh
        xor edx, 55h
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 3ffh
        xor edx, 55h
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        imul eax, edx
        xor edx, edx
        div dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 76: jmp 0x5875268b
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        xor eax, 55h
        ; Exact mapped bytes 74 0E: je 0x5875262e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        xor edx, 55h
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 07: jmp 0x58752635
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        shl eax, 2
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 3ffh
        xor edx, 55h
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        imul eax, edx
        xor edx, edx
        div dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 76: jmp 0x58752703
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        xor eax, 55h
        ; Exact mapped bytes 74 0E: je 0x587526a6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        xor edx, 55h
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 07: jmp 0x587526ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 14h]
        shr eax, 0ah
        and eax, 3ffh
        xor eax, 55h
        shl eax, 2
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        and edx, 3ffh
        xor edx, 55h
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 0ah
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + 14h]
        shr ecx, 14h
        and ecx, 3ffh
        xor ecx, 55h
        add edx, ecx
        imul eax, edx
        xor edx, edx
        div dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

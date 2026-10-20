// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E3500 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_586e3500_586E3500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0a8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 90h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0a4h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 0ffffffffh
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 5
        idiv ecx
        imul edx, eax, 3
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b8h], edx
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 5
        idiv ecx
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 5
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 7B 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D8 7B 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 0A E2 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x586e35e8
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586e35ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2710h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 11 0A E2 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x0a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F4 09 E2 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586e362f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 22: jge 0x586e3657
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + edx*4 + 94h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + edx*4 + 9ch], ecx
        ; Exact mapped bytes EB CF: jmp 0x586e3626
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 06 00 00: call 0x586e3c70
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

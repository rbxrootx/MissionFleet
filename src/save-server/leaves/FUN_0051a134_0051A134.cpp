// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051A134 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_0051a134_0051A134() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 7C 14: jl 0x51a15a
        __asm _emit 0x7c
        __asm _emit 0x14
        push 1d8h
        push 67598ch
        ; Exact mapped bytes E8 EB EB 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a15a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51a140
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 8
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 CB 31 00 00: call 0x51d350
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 4]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x51a19e
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        push 1
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 50 83 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 24 FA FF FF: call 0x519bce
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 8], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 4]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x51a1e0
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 0E 83 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 C8 80 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D3 80 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C9 7F 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        shl ecx, 5
        add ecx, 638740h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + eax - 30h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + eax - 30h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        imul eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        sub edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 8]
        imul eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + 0ch]
        imul eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

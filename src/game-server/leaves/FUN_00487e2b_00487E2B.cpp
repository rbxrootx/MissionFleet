// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487E2B .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_00487e2b_00487E2B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 1fh
        ; Exact mapped bytes 0F 87 BE 00 00 00: ja 0x487f1d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 487f44h]
        ; Exact mapped bytes FF 24 95 30 7F 48 00: jmp dword ptr [edx*4 + 0x487f30]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0x7f
        __asm _emit 0x48
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 5B 09 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x487f1f
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 23h
        push 464h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 34 29 5E 00: call dword ptr [0x5e2934]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 09 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 0A: jne 0x487ec6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 F1 FF FF: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 21: jmp 0x487ee7
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0ach], 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 F9 08 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 34: jmp 0x487f1d
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EE FE FF FF: call 0x487ddf
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 26: jmp 0x487f1f
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 D3 08 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 78 15 00 00: call 0x489490
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x487f1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 B6 08 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

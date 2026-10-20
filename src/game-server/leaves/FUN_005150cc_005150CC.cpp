// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005150CC .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_005150cc_005150CC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 8b6h
        push 5c84b0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 75 60 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x515117
        __asm _emit 0x75
        __asm _emit 0x16
        push 5c898ch
        push 5c89c8h
        ; Exact mapped bytes E8 05 AB FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x515182
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 75 14: jne 0x515134
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bdh
        push 5c84b0h
        ; Exact mapped bytes E8 D1 F8 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515134
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x515117
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 14: jne 0x515157
        __asm _emit 0x75
        __asm _emit 0x14
        push 8beh
        push 5c84b0h
        ; Exact mapped bytes E8 AE F8 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515157
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x51513a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7F 12: jg 0x515178
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 1
        ; Exact mapped bytes 7F 09: jg 0x515178
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x51517f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

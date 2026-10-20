// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416A77 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00416a77_00416A77() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        ; Exact mapped bytes E8 5A FE FF FF: call 0x4168de
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x416a96
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 08 F6 44 00: call dword ptr [0x44f608]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 6E: jmp 0x416b04
        __asm _emit 0xeb
        __asm _emit 0x6e
        cmp dword ptr [ebp + 8], 12340042h
        ; Exact mapped bytes 75 63: jne 0x416b02
        __asm _emit 0x75
        __asm _emit 0x63
        mov ebx, dword ptr [ebp + 0ch]
        xor esi, esi
        cmp ebx, esi
        ; Exact mapped bytes 74 5A: je 0x416b02
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp dword ptr [ebx], 28h
        ; Exact mapped bytes 72 55: jb 0x416b02
        __asm _emit 0x72
        __asm _emit 0x55
        lea eax, [ebp - 10h]
        push esi
        push eax
        push esi
        push 30h
        ; Exact mapped bytes FF 15 88 C4 43 00: call dword ptr [0x43c488]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x416b02
        __asm _emit 0x74
        __asm _emit 0x43
        push edi
        mov dword ptr [ebx + 4], esi
        mov dword ptr [ebx + 8], esi
        push esi
        ; Exact mapped bytes 8B 35 44 C5 43 00: mov esi, dword ptr [0x43c544]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 1
        mov dword ptr [ebx + 0ch], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea edi, [ebx + 14h]
        lea esi, [ebp - 10h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        cmp dword ptr [ebx], 48h
        push 1
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        pop esi
        mov dword ptr [ebx + 10h], eax
        mov dword ptr [ebx + 24h], esi
        pop edi
        ; Exact mapped bytes 72 0F: jb 0x416afe
        __asm _emit 0x72
        __asm _emit 0x0f
        add ebx, 28h
        push 43dcech
        push ebx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x416b04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

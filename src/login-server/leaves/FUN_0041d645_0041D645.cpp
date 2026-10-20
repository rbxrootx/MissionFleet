// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D645 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_0041d645_0041D645() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        lea edi, [eax - 0d8h]
        mov eax, dword ptr [ebp + 20h]
        xor ebx, ebx
        sub eax, ebx
        ; Exact mapped bytes 74 2A: je 0x41d68a
        __asm _emit 0x74
        __asm _emit 0x2a
        dec eax
        ; Exact mapped bytes 74 22: je 0x41d685
        __asm _emit 0x74
        __asm _emit 0x22
        dec eax
        ; Exact mapped bytes 74 1B: je 0x41d681
        __asm _emit 0x74
        __asm _emit 0x1b
        dec eax
        ; Exact mapped bytes 74 14: je 0x41d67d
        __asm _emit 0x74
        __asm _emit 0x14
        dec eax
        ; Exact mapped bytes 75 41: jne 0x41d6ad
        __asm _emit 0x75
        __asm _emit 0x41
        mov esi, dword ptr [edi + 88h]
        push 7
        test esi, esi
        pop ebx
        ; Exact mapped bytes 75 15: jne 0x41d68e
        __asm _emit 0x75
        __asm _emit 0x15
        xor eax, eax
        ; Exact mapped bytes EB 52: jmp 0x41d6cf
        __asm _emit 0xeb
        __asm _emit 0x52
        push 5
        ; Exact mapped bytes EB 06: jmp 0x41d687
        __asm _emit 0xeb
        __asm _emit 0x06
        push 6
        ; Exact mapped bytes EB 02: jmp 0x41d687
        __asm _emit 0xeb
        __asm _emit 0x02
        push 4
        pop ebx
        ; Exact mapped bytes EB 23: jmp 0x41d6ad
        __asm _emit 0xeb
        __asm _emit 0x23
        push 1
        ; Exact mapped bytes EB F9: jmp 0x41d687
        __asm _emit 0xeb
        __asm _emit 0xf9
        cmp dword ptr [esi + 44h], 0
        ; Exact mapped bytes 75 19: jne 0x41d6ad
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, esi
        mov dword ptr [esi + 44h], 1
        ; Exact mapped bytes E8 1E E6 FF FF: call 0x41bcc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        and dword ptr [esi + 44h], 0
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        push 3
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 E9 01 00 00: call 0x41d8a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 24h]
        mov ecx, edi
        push eax
        mov dword ptr [ebp - 8], ebx
        mov dword ptr [ebp - 4], 6
        ; Exact mapped bytes E8 A5 C4 FF FF: call 0x419b71
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

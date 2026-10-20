// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455910 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_00455910_00455910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 17 00 00: call 0x457090
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x455950
        __asm _emit 0x75
        __asm _emit 0x21
        push 677658h
        push 0
        push 445h
        push 677614h
        push 2
        ; Exact mapped bytes E8 19 75 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455950
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x455923
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 21: jne 0x455980
        __asm _emit 0x75
        __asm _emit 0x21
        push 677668h
        push 0
        push 446h
        push 677614h
        push 2
        ; Exact mapped bytes E8 E9 74 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455980
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x455956
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 FD FF FF: call 0x4556c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 0ch
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffh
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, -1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 16 00 00: call 0x4570a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 05: je 0x4559dd
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 34: jmp 0x455a11
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EB 00 00 00: call 0x455ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 20: jge 0x455a0e
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        push edx
        push 67767ch
        push 0
        push 2000h
        ; Exact mapped bytes E8 1D 00 00 00: call 0x455a20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 FC FF FF: call 0x4556c0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
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

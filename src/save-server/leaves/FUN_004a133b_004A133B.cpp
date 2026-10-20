// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A133B .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004a133b_004A133B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 20 00 00: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a136a
        __asm _emit 0x75
        __asm _emit 0x14
        push 191h
        push 671534h
        ; Exact mapped bytes E8 DB 79 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a136a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4a1347
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 39 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 05: jle 0x4a138b
        __asm _emit 0x7e
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 35: jmp 0x4a13c0
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 93 83 FA FF: call 0x449730
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4a13b2
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x4a13bd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
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

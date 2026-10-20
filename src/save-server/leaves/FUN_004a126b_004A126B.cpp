// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A126B .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_004a126b_004A126B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 B9 21 00 00: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a12a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 179h
        push 671534h
        ; Exact mapped bytes E8 A4 7A 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a12a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4a127e
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BA 84 FA FF: call 0x449770
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 FE FF FF: call 0x4a114a
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
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

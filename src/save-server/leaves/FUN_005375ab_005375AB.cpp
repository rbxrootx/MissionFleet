// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005375AB .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_005375ab_005375AB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5375da
        __asm _emit 0x75
        __asm _emit 0x14
        push 401h
        push 636640h
        ; Exact mapped bytes E8 6B 17 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5375da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5375b5
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 9A B5 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        or ecx, 4
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 B8 BC 68 00: call dword ptr [0x68bcb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

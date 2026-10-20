// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E2A0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_5890e2a0() {
    __asm {
        sub esp, 64h
        push ebp
        mov ebp, dword ptr [esp + 74h]
        push esi
        mov esi, ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 8E 9C 00 00 00: jle 0x5890e34f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 1ch]
        push edi
        mov edi, dword ptr [esp + 74h]
        cmp edi, edx
        ; Exact mapped bytes 0F 8F 8B 00 00 00: jg 0x5890e34e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 84h]
        test ebx, ebx
        ; Exact mapped bytes 7E 7E: jle 0x5890e34d
        __asm _emit 0x7e
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [esp + 7ch]
        cmp ecx, eax
        ; Exact mapped bytes 7F 73: jg 0x5890e34d
        __asm _emit 0x7f
        __asm _emit 0x73
        test edi, edi
        ; Exact mapped bytes 7D 08: jge 0x5890e2e6
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esp + 78h], 0
        test ecx, ecx
        ; Exact mapped bytes 7D 08: jge 0x5890e2f2
        __asm _emit 0x7d
        __asm _emit 0x08
        mov dword ptr [esp + 7ch], 0
        cmp ebp, edx
        ; Exact mapped bytes 7E 07: jle 0x5890e2fd
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [esp + 80h], edx
        cmp ebx, eax
        ; Exact mapped bytes 7E 07: jle 0x5890e308
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [esp + 84h], eax
        push 64h
        lea eax, [esp + 14h]
        push 0
        push eax
        ; Exact mapped bytes E8 32 E9 06 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 94h]
        mov eax, dword ptr [esi + 4]
        add esp, 0ch
        mov dword ptr [esp + 60h], ecx
        lea ecx, [esp + 10h]
        push ecx
        push 1000400h
        push 0
        push 0
        lea ecx, [esp + 88h]
        mov dword ptr [esp + 20h], 64h
        mov edx, dword ptr [eax]
        mov edx, dword ptr [edx + 14h]
        push ecx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop ebx
        pop edi
        pop esi
        pop ebp
        add esp, 64h
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

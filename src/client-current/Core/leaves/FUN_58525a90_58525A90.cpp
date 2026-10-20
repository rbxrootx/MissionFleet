// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58525A90 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_58525a90_58525A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 120h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 02 18 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        lea edi, [ebp - 120h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 E7 17 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 CC 17 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 51 B5 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb5
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

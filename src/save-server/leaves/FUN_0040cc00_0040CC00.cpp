// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CC00 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0040cc00_0040CC00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x40cc36
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 4B FF FF: call 0x4017f3
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 AD 81 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786120 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58786120_58786120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4E B0 0C 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        cmp eax, 1
        ; Exact mapped bytes 73 02: jae 0x5878613c
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 3A: jmp 0x58786176
        __asm _emit 0xeb
        __asm _emit 0x3a
        ; Exact mapped bytes E8 AF 10 D5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x10
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 2A B0 0C 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 2711h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB 2B D5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

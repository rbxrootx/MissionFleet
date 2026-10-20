// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D770 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_5857d770_5857D770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 14h]
        shl eax, 10h
        and eax, 0ffff0000h
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp + 0ch]
        xor ecx, 55h
        shl ecx, 10h
        movzx edx, word ptr [ebp + 10h]
        xor edx, 55h
        or ecx, edx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 1E: jne 0x5857d7c1
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 80020400h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 F1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 22: jmp 0x5857d7e3
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [ebp + 18h], 1
        ; Exact mapped bytes 75 1C: jne 0x5857d7e3
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 80020700h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE F1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf1
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

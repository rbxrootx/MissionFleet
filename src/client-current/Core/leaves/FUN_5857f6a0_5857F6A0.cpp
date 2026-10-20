// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F6A0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5857f6a0_5857F6A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 18h]
        shl eax, 10h
        or eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        movzx ecx, word ptr [ebp + 10h]
        xor ecx, 55h
        shl ecx, 10h
        movzx edx, word ptr [ebp + 14h]
        xor edx, 55h
        or ecx, edx
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 09: jne 0x5857f6e0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 06: jmp 0x5857f6e6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 80020200h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B D2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd2
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

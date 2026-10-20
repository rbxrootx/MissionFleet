// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D720 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5857d720_5857D720() {
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
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 80020300h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 28 F2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf2
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

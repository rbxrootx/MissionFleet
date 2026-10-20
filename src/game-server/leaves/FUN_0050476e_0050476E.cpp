// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050476E .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_0050476e_0050476E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 D5 02 00: call 0x531cc1
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        cmp ecx, 0ffh
        ; Exact mapped bytes 7D 0A: jge 0x50479b
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffh
        ; Exact mapped bytes EB 4A: jmp 0x5047e5
        __asm _emit 0xeb
        __asm _emit 0x4a
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 D5 02 00: call 0x531d1a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffffh
        cmp eax, 0fffeh
        ; Exact mapped bytes 75 05: jne 0x5047bb
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x5047e5
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        cmp ecx, 0ffffh
        ; Exact mapped bytes 75 11: jne 0x5047dd
        __asm _emit 0x75
        __asm _emit 0x11
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D D5 02 00: call 0x531d75
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 08: jmp 0x5047e5
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

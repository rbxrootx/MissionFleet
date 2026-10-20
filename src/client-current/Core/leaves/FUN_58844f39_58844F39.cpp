// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844F39 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_58844f39_58844F39() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        shl eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 AE 1B 00 00: call 0x58846b01
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 72 18 00 00: call 0x588467d4
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 1A 00 00: call 0x58846a27
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A0 18 00 00: call 0x5884681f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 0ch]
        push eax
        mov eax, dword ptr [ebp + 8]
        shl eax, 1
        push eax
        push dword ptr [ebp - 10h]
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 01 00 00: call 0x58845119
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        dec eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 20h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

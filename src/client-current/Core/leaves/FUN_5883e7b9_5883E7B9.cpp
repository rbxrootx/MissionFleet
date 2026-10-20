// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E7B9 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_5883e7b9_5883E7B9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 8]
        lea eax, [ebp - 44h]
        push esi
        mov esi, dword ptr [ebp + 14h]
        push edi
        push dword ptr [ebp + 10h]
        mov edi, dword ptr [ebp + 0ch]
        push 588c1dech
        push eax
        ; Exact mapped bytes E8 77 E3 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe3
        __asm _emit 0xcc
        __asm _emit 0xff
        push esi
        push 40h
        lea eax, [ebp - 84h]
        push eax
        lea eax, [ebp - 44h]
        push eax
        push edi
        push ebx
        ; Exact mapped bytes E8 39 00 00 00: call 0x5883e837
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 88h], 0
        lea eax, [ebp - 88h]
        push eax
        lea eax, [ebp - 84h]
        push 588c1dech
        push eax
        ; Exact mapped bytes E8 8A E3 FF FF: call 0x5883cba7
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add esp, 30h
        mov eax, dword ptr [ebp - 88h]
        xor ecx, ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes E8 1D 28 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

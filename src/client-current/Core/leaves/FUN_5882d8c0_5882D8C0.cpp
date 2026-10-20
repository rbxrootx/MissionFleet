// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D8C0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_5882d8c0_5882D8C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9D 3A CE FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3a
        __asm _emit 0xce
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 C1 D5 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc1
        __asm _emit 0xd5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8D 3A CE FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3a
        __asm _emit 0xce
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 7F C6 FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7f
        __asm _emit 0xc6
        __asm _emit 0xff
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 3A CE FF: call 0x58511370
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3a
        __asm _emit 0xce
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C E6 F8 FF: call 0x587bbf80
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588be7f4h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521250 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_58521250_58521250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4E 95 F8 FF: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 92 F8 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 EB DD FF FF: call 0x5851f080
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

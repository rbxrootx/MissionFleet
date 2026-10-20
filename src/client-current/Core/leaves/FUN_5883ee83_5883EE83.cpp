// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883EE83 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_5883ee83_5883EE83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        push ecx
        mov dword ptr [ebp - 24h], esp
        push dword ptr [ebp - 28h]
        push dword ptr [ebp - 14h]
        push dword ptr [ebp - 18h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA 00 00 00: call 0x5883efb2
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5400 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_587c5400_587C5400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 24h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 18h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 AE FF FF: call 0x587c02d0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588be530h
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 5dch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

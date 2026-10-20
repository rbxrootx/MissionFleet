// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043E860 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_0043e860_0043E860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 4
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 AE 78 00 00: call 0x446170
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

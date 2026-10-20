// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C2E00 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_587c2e00_587C2E00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B EA FF FF: call 0x587c1880
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be338h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

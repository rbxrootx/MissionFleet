// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6C00 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_587c6c00_587C6C00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
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
        ; Exact mapped bytes E8 48 FF FF FF: call 0x587c6b70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be574h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 108h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 104h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

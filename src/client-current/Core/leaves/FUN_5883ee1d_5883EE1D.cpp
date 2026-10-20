// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883EE1D .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_5883ee1d_5883EE1D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        and dword ptr [eax], 0
        mov eax, dword ptr [ebp - 8]
        and dword ptr [eax + 4], 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 5E 00 00: call 0x58844caa
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

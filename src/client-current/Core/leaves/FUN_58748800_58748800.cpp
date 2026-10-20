// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748800 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_58748800_58748800() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 28h]
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
        ; Exact mapped bytes E8 EC 91 D4 FF: call 0x58491a20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x91
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4e0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 55ch], 6
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4f4h], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

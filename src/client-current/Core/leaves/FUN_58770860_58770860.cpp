// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58770860 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58770860_58770860() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 40h
        push 0
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 41 04 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588b5494h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 2
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827410 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_58827410_58827410() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 6B F9 FF: call 0x587bdfa0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588be75ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 5
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 2
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

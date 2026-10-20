// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501DEB .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00501deb_00501DEB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        cmp dword ptr [ebp + 0ch], 0
        setne al
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        neg ecx
        sbb ecx, ecx
        and ecx, 2
        mov edx, dword ptr [ebp - 4]
        or edx, ecx
        mov dword ptr [ebp - 4], edx
        push -1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC F7 FF FF: call 0x501610
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

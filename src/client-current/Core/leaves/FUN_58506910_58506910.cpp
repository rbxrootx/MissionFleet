// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506910 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58506910_58506910() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 02 00 00: call 0x58506bf0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588a3b74h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [edx + 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov dword ptr [edx + 10h], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

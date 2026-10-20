// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CE130 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_586ce130_586CE130() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0dch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0dch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0e0h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0e4h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0e8h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 07 00 00: call 0x586ce950
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

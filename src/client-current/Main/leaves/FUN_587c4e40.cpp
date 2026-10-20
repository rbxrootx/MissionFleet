// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4E40 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_587c4e40() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 10h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp eax, -1
        ; Exact mapped bytes 75 04: jne 0x587c4e53
        __asm _emit 0x75
        __asm _emit 0x04
        or eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 30h]
        dec dword ptr [eax]
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        lea edx, [ecx + 1]
        mov dword ptr [eax], edx
        movzx eax, byte ptr [ecx]
        pop esi
        ret
    }
}

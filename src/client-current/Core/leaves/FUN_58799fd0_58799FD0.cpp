// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799FD0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58799fd0_58799FD0() {
    __asm {
        cmp byte ptr [esp + 4], 0
        ; Exact mapped bytes 75 21: jne 0x58799ff8
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [esp + 8]
        mov eax, edx
        push esi
        lea esi, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58799fe1
        __asm _emit 0x75
        __asm _emit 0xf9
        mov ecx, dword ptr [esp + 10h]
        sub eax, esi
        pop esi
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        ret
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esp + 0ch]
        lea edx, [ecx + 4]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [eax], edx
        ret
    }
}

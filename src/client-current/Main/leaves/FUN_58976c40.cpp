// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976C40 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58976c40() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 10h]
        push ebx
        mov ebx, dword ptr [esp + 18h]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [esp + 10h]
        test ebx, ebx
        lea edx, [ecx + edx*4]
        ; Exact mapped bytes 7E 25: jle 0x58976c84
        __asm _emit 0x7e
        __asm _emit 0x25
        push ebp
        push esi
        push edi
        mov ecx, dword ptr [esp + 28h]
        mov esi, dword ptr [eax]
        mov edi, dword ptr [edx]
        mov ebp, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebp
        add eax, 4
        add edx, 4
        and ecx, 3
        dec ebx
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes 75 E1: jne 0x58976c62
        __asm _emit 0x75
        __asm _emit 0xe1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}

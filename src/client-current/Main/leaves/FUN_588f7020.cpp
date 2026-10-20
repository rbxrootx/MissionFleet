// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7020 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_588f7020() {
    __asm {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 24h]
        push esi
        push edi
        mov byte ptr [ebx + 60h], 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 20h]
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esp + 10h]
        mov eax, dword ptr [ebx]
        mov edx, dword ptr [eax + 1ch]
        mov byte ptr [ebx + 60h], 1
        lea edi, [ebx + 68h]
        mov ecx, 16h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

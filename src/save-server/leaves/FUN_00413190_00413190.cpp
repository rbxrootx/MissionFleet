// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413190 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00413190_00413190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 633fb8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 E2 FE FF: call 0x4013ed
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 04 1C 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

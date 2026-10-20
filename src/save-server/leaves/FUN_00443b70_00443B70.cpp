// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443B70 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00443b70_00443B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push edi
        mov eax, dword ptr [ebp + 8]
        add eax, 18h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D7 88 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, 0a3a3a3a3h
        mov edi, dword ptr [ebp - 8]
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        and ecx, 0ffff0000h
        or ecx, 0debah
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        and ecx, 0ffffh
        or ecx, 10000h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}

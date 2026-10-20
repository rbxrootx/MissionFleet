// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438890 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00438890_00438890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 08: jne 0x4388b2
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4388ce
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp + 8]
        mov edi, dword ptr [ebp + 10h]
        mov edx, ecx
        mov eax, edi
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov dword ptr [ebp - 0ch], eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

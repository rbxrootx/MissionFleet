// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416B13 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00416b13_00416B13() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        shl edx, 10h
        mov eax, dword ptr [ebp - 4]
        or edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp + 14h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        shl eax, 10h
        mov ecx, dword ptr [ebp - 4]
        or eax, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], eax
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 8002f002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 06 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 40 1C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

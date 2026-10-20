// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416C4C .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00416c4c_00416C4C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        shl ecx, 10h
        mov edx, dword ptr [ebp - 4]
        or ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 8002f003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C 05 07 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 30 1B 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

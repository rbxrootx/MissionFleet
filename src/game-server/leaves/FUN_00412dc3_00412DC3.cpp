// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412DC3 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_00412dc3_00412DC3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov esi, esp
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 30h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 E5 59 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        xor eax, 390a4f16h
        xor edx, edx
        mov ecx, 33h
        div ecx
        push eax
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 98 00 00 00: call 0x412eb0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        xor eax, 390a4f16h
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 AC 59 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

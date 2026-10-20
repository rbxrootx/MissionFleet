// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044ECFF .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_0044ecff_0044ECFF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fd0h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 20: jne 0x44ed3c
        __asm _emit 0x75
        __asm _emit 0x20
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fd0h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 A6 9A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x44ed54
        __asm _emit 0xeb
        __asm _emit 0x18
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 8C 9A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10dch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fd0h], 0
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 67 9A 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

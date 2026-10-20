// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D2260 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_584d2260_584D2260() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        push edx
        ; Exact mapped bytes E8 4A AB 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xab
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}

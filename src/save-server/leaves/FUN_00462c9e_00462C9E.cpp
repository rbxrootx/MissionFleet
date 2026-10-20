// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462C9E .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_00462c9e_00462C9E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 2d4h
        push 67ca48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A2 75 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        add edx, 0d8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx + 0d8h]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004926C1 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_004926c1_004926C1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2ch
        ; Exact mapped bytes E8 97 38 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b8h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462D35 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_00462d35_00462D35() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 2e5h
        push 67ca48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0B 75 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        add eax, 0d8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx + 0d8h]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

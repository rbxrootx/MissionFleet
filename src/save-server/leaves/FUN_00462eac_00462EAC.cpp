// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462EAC .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00462eac_00462EAC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 310h
        push 67ca48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 94 73 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        add eax, 0d8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx + 0d8h]
        push eax
        ; Exact mapped bytes FF 51 38: call dword ptr [ecx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x38
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

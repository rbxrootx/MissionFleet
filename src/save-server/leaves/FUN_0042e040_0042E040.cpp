// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E040 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_0042e040_0042E040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 634518h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 37 E4 09 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 71 6D 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

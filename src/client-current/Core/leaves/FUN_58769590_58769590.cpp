// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769590 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_58769590_58769590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d6ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d6ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d70h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d70h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d74h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d74h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

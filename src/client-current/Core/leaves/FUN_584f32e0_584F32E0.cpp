// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F32E0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_584f32e0_584F32E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E DE 06 00: call 0x58561140
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0x00
        push 0f4240h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 00 00 00: call 0x584f3360
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [eax + 90h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [eax + 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [eax + 8ch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A7C3C .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_004a7c3c_004A7C3C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 4], eax
        push 164h
        push 5d052ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 04 35 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push -2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        add eax, 0d8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx + 0d8h]
        push eax
        ; Exact mapped bytes FF 51 2C: call dword ptr [ecx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x2c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

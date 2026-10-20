// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A689C .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_004a689c_004A689C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 310h
        push 5d0270h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A4 48 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x48
        __asm _emit 0x05
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A65FE .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_004a65fe_004A65FE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 2c4h
        push 5d0270h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 42 4B 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4b
        __asm _emit 0x05
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
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

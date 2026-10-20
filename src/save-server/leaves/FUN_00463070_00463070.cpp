// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463070 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00463070_00463070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        push 344h
        push 67ca48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D0 71 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        add ecx, 0d8h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax + 0d8h]
        push ecx
        ; Exact mapped bytes FF 52 50: call dword ptr [edx + 0x50]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x50
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

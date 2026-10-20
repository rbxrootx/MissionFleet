// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004389C0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004389c0_004389C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 08: jne 0x4389e3
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 1A: jmp 0x4389fd
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 69 D2 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

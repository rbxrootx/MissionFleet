// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041ED80 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_0041ed80_0041ED80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 39 07 00 00: call 0x41f4e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 24 9A 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

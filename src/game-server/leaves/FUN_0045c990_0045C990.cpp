// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C990 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0045c990_0045C990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 18h
        ; Exact mapped bytes E8 EA 0C 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 28h], 0
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 13 BE 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

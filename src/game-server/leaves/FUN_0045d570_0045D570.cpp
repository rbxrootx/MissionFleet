// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D570 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0045d570_0045D570() {
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
        ; Exact mapped bytes E8 0A 01 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 28h], 0
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 33 B2 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

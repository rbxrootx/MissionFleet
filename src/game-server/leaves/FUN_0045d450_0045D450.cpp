// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D450 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0045d450_0045D450() {
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
        ; Exact mapped bytes E8 2A 02 00 00: call 0x45d6a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 28h], 0
        mov eax, dword ptr [ebp - 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 53 B3 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

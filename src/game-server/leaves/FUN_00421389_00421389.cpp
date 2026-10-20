// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421389 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00421389_00421389() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 58114ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 4E C0 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 18 74 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

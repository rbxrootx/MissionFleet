// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C95F0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004c95f0_004C95F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 0A: jne 0x4c960c
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 E9 43 F9 FF: call 0x45d9f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x4c9615
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}

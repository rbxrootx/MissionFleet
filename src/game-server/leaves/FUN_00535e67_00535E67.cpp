// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535E67 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00535e67_00535E67() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 AF F7 FF FF: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004652BA .. +0x23 bytes.
extern "C" __declspec(naked) void __abnormal_termination_004652BA() {
    __asm {
        xor eax, eax
        ; Exact mapped bytes 64 8B 0D 00 00 00 00: mov ecx, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 4], 465230h
        ; Exact mapped bytes 75 10: jne 0x4652dc
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0ch]
        mov edx, dword ptr [edx + 0ch]
        cmp dword ptr [ecx + 8], edx
        ; Exact mapped bytes 75 05: jne 0x4652dc
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        ret
    }
}

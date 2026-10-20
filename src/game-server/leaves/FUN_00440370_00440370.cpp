// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440370 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00440370_00440370() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 1], cl
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [eax + 8], cl
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 0C 00 00: call 0x441030
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 2F 84 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

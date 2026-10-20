// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B347 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5883b347_5883B347() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [edx]
        mov eax, dword ptr [esi + 8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 8]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 03: jne 0x5883b361
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [edx + 4]
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [ecx]
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 05: jne 0x5883b373
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [eax + 4], esi
        ; Exact mapped bytes EB 0F: jmp 0x5883b382
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [edx + 4]
        cmp edx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 05: jne 0x5883b380
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [eax + 8], esi
        ; Exact mapped bytes EB 02: jmp 0x5883b382
        __asm _emit 0xeb
        __asm _emit 0x02
        mov dword ptr [eax], esi
        mov dword ptr [esi + 8], edx
        mov dword ptr [edx + 4], esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C180 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_1002c180_1002C180() {
    __asm {
        mov eax, dword ptr [ecx + 10h]
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x1002c19d
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 10h], eax
        mov dword ptr [ecx + 14h], eax
        mov dword ptr [ecx + 0ch], eax
        mov dword ptr [ecx + 18h], eax
        inc dword ptr [ecx + 8]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esp + 4]
        mov dword ptr [eax + 78h], edx
        mov eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [eax + 78h]
        mov dword ptr [edx + 74h], eax
        mov eax, dword ptr [ecx + 10h]
        mov edx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx + 8]
        inc eax
        mov dword ptr [ecx + 10h], edx
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

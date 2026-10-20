// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044A40 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_10044a40_10044A40() {
    __asm {
        mov al, byte ptr [ecx + 2f8h]
        mov dl, byte ptr [ecx + 3ach]
        and eax, 0ffh
        and edx, 0ffh
        imul eax, dword ptr [esp + 4]
        imul edx, dword ptr [esp + 8]
        test eax, eax
        mov dword ptr [ecx + 30ch], eax
        mov dword ptr [ecx + 3c0h], edx
        ; Exact mapped bytes 75 0C: jne 0x10044a7d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ecx + 104h], eax
        mov dword ptr [ecx + 0f8h], eax
        xor eax, 0aaaaaaaah
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx + 30ch], eax
        mov dword ptr [ecx + 3c0h], edx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

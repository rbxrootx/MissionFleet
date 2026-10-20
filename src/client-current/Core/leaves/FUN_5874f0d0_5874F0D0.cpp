// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874F0D0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5874f0d0_5874F0D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 0bd4h]
        add edx, eax
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 0bd4h], dl
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + 0bd4h]
        ; Exact mapped bytes 3B 15 34 D2 8F 58: cmp edx, dword ptr [0x588fd234]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        ; Exact mapped bytes 7E 12: jle 0x5874f11d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8A 0D 34 D2 8F 58: mov cl, byte ptr [0x588fd234]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        mov byte ptr [eax + 0bd4h], cl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

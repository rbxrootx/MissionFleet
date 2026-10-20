// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863BAA0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_5863baa0_5863BAA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 16 ED FF: call 0x5850d1b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4A 25 ED FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx]
        sar edx, 8
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 21ch], dl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005671A0 .. +0x4C bytes.
extern "C" __declspec(naked) void _OnSkip_CEnumArray__MAEHXZ_005671A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4ah
        push 678f7ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A9 30 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x30
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 72 04: jb 0x5671c9
        __asm _emit 0x72
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x5671e8
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, dword ptr [edx + 2ch]
        sbb eax, eax
        neg eax
        mov esp, ebp
        pop ebp
        ret
    }
}

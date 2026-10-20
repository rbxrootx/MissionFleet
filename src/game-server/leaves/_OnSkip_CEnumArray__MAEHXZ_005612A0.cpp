// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005612A0 .. +0x4C bytes.
extern "C" __declspec(naked) void _OnSkip_CEnumArray__MAEHXZ_005612A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 4ah
        push 5cc7a4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A9 9E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 72 04: jb 0x5612c9
        __asm _emit 0x72
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x5612e8
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

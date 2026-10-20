// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597000 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_58597000_58597000() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0b8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0bch], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        cdq
        idiv dword ptr [ebp + 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 10h]
        lea eax, [edx + eax + 1eh]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        cdq
        idiv dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp + 14h]
        lea edx, [ecx + eax - 0ah]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0b0h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 17 00 00: call 0x58598810
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], eax
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0c0h], 0b4h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], eax
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 0a4h], 3e8h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0a0h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], eax
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 0ach], 3e8h
        neg eax
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0a8h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 84h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

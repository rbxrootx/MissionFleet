// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F8480 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_586f8480_586F8480() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 7ch
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 150h
        push eax
        ; Exact mapped bytes E8 77 49 15 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x49
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 150h], 51h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 45h
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 41h
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 44h
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 150h], 57h
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 150h], 53h
        mov ecx, 4
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 150h], 10h
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 150h], 11h
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 20h
        mov eax, 4
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 5ah
        mov eax, 4
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 43h
        mov eax, 4
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 58h
        mov eax, 4
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 52h
        mov eax, 4
        imul ecx, eax, 0dh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 54h
        mov eax, 4
        imul ecx, eax, 0eh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 59h
        mov eax, 4
        imul ecx, eax, 0fh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 150h], 48h
        mov eax, 4
        shl eax, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 4eh
        mov edx, 4
        imul eax, edx, 11h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 46h
        mov edx, 4
        imul eax, edx, 12h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 56h
        mov edx, 4
        imul eax, edx, 13h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 42h
        mov edx, 4
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 4ch
        mov edx, 4
        imul eax, edx, 15h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 0bch
        mov edx, 4
        imul eax, edx, 16h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 0deh
        mov edx, 4
        imul eax, edx, 17h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 0bah
        mov edx, 4
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 0beh
        mov edx, 4
        imul eax, edx, 19h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 47h
        mov edx, 4
        imul eax, edx, 1ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 0dch
        mov edx, 4
        imul eax, edx, 1bh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 50h
        mov edx, 4
        imul eax, edx, 1dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 55h
        mov edx, 4
        imul eax, edx, 1eh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 49h
        mov edx, 4
        imul eax, edx, 1ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 150h], 4dh
        mov esp, ebp
        pop ebp
        ret
    }
}

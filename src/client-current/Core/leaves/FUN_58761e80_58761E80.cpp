// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761E80 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_58761e80_58761E80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0a0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 384h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0e10h
        ; Exact mapped bytes 7E 13: jle 0x58761ee2
        __asm _emit 0x7e
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        sub eax, 0e10h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0C: jmp 0x58761eee
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], 40000000h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
